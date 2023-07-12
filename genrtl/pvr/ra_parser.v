`timescale 1ns / 1ps
`default_nettype none

module ra_parser (
	input clock,
	input reset_n,
	
	input ra_trig,
	
	input [31:0] FPU_PARAM_CFG,
	input [31:0] REGION_BASE,
	input [31:0] TA_ALLOC_CTRL,
	
	output reg ra_vram_rd,
	output reg ra_vram_wr,
	output reg [23:0] ra_vram_addr,
	input [31:0] ra_vram_din,
	
	output reg [31:0] ra_control,
	output wire ra_cont_last,
	output wire ra_cont_zclear,
	output wire ra_cont_flush,
	output wire [5:0] ra_cont_tiley,
	output wire [5:0] ra_cont_tilex,

	output reg [31:0] ra_opaque,
	output reg [31:0] ra_opaque_mod,
	output reg [31:0] ra_trans,
	output reg [31:0] ra_trans_mod,
	output reg [31:0] ra_puncht,
	
	output reg ra_entry_valid,
	
	output reg [23:0] poly_addr,
	output reg render_poly,
	
	input poly_drawn
);


wire opb_mode = TA_ALLOC_CTRL[20];
wire [1:0] pt_opb = TA_ALLOC_CTRL[17:16];
wire [1:0] tm_opb = TA_ALLOC_CTRL[13:12];
wire [1:0]  t_opb = TA_ALLOC_CTRL[9:8];
wire [1:0] om_opb = TA_ALLOC_CTRL[5:4];
wire [1:0]  o_opb = TA_ALLOC_CTRL[1:0];

// Region Array read state machine...
reg [7:0] ra_state;
reg [24:0] next_region;

assign ra_cont_last   = ra_control[31];
assign ra_cont_zclear = ra_control[30];
assign ra_cont_flush  = ra_control[28];
assign ra_cont_tiley  = ra_control[13:8];
assign ra_cont_tilex  = ra_control[7:2];


// OL Word parsing...
reg [2:0] type_cnt;

reg [31:0] opb_word;
wire [5:0] strip_mask = {opb_word[25], opb_word[26], opb_word[27], opb_word[28], opb_word[29], opb_word[30]};	// For Triangle Strips only.
wire [3:0] num_prims = opb_word[28:25];	// For Triangle Array or Quad Array only.
wire shadow = opb_word[24];				// For all three poly types.
wire [2:0] skip = opb_word[23:21];		// For all three poly types.
wire eol = opb_word[28];

always @(posedge clock or negedge reset_n)
if (!reset_n) begin
	ra_state <= 8'd0;
	next_region <= 24'h00000000;
	opb_word <= 32'h00000000;
	type_cnt <= 3'd0;
	poly_addr <= 24'h000000;
	render_poly <= 1'b0;
end
else begin
	ra_vram_rd <= 1'b0;
	ra_vram_wr <= 1'b0;
	
	ra_entry_valid <= 1'b0;
	render_poly <= 1'b0;

	case (ra_state)
		0: begin
			if (ra_trig) begin
				ra_state <= ra_state + 8'd1;
			end
		end
		
		1: begin
			ra_vram_rd <= 1'b1;
			ra_vram_addr <= REGION_BASE[22:0];		// Might need to mask this? This is the absolute addr, so VRAM starts at 0x04000000 etc.
			ra_state <= ra_state + 1;
		end
		
		2: begin
			ra_vram_rd <= 1'b1;
			ra_control <= ra_vram_din;
			ra_vram_addr <= ra_vram_addr + 4;
			ra_state <= ra_state + 1;
		end
		
		3: begin
			ra_vram_rd <= 1'b1;
			ra_opaque <= ra_vram_din;
			ra_vram_addr <= ra_vram_addr + 4;
			ra_state <= ra_state + 1;
		end
		
		4: begin
			ra_vram_rd <= 1'b1;
			ra_opaque_mod <= ra_vram_din;
			ra_vram_addr <= ra_vram_addr + 4;
			ra_state <= ra_state + 1;
		end
		
		5: begin
			ra_vram_rd <= 1'b1;
			ra_trans <= ra_vram_din;
			ra_vram_addr <= ra_vram_addr + 4;
			ra_state <= ra_state + 1;
		end
		
		6: begin
			ra_trans_mod <= ra_vram_din;
			
			if (FPU_PARAM_CFG[21]) begin	// fmt v2 (grab puncht value in next ra_state).
				ra_vram_rd <= 1'b1;
				ra_vram_addr <= ra_vram_addr + 4;
				ra_state <= ra_state + 1;
			end
			else begin						// fmt v1.
				ra_puncht <= 32'h80000000;
				ra_state <= 8'd8;			// Done!
			end
		end
		
		7: begin
			//ra_vram_rd <= 1'b1;
			ra_puncht <= ra_vram_din;	// fmt v2 (grab puncht).
			ra_vram_addr <= ra_vram_addr + 4;
			ra_state <= ra_state + 1;
		end
		
		8: begin
			next_region <= ra_vram_addr;
			ra_entry_valid <= 1'b1;
			type_cnt <= 3'd0;
			ra_state <= ra_state + 1;
		end
		
		9: begin
			case (type_cnt)
				0: if (!ra_opaque[31])     begin ra_vram_addr <= ra_opaque[23:0];     ra_vram_rd <= 1'b1; ra_state <= ra_state + 1; end else type_cnt <= type_cnt + 1;
				1: if (!ra_opaque_mod[31]) begin ra_vram_addr <= ra_opaque_mod[23:0]; ra_vram_rd <= 1'b1; ra_state <= ra_state + 1; end else type_cnt <= type_cnt + 1;
				2: if (!ra_trans[31])      begin ra_vram_addr <= ra_trans_mod[23:0];  ra_vram_rd <= 1'b1; ra_state <= ra_state + 1; end else type_cnt <= type_cnt + 1;
				3: if (!ra_trans_mod[31])  begin ra_vram_addr <= ra_trans_mod[23:0];  ra_vram_rd <= 1'b1; ra_state <= ra_state + 1; end else type_cnt <= type_cnt + 1;
				4: if (!ra_puncht[31])     begin ra_vram_addr <= ra_puncht[23:0];     ra_vram_rd <= 1'b1; ra_state <= ra_state + 1; end else type_cnt <= type_cnt + 1;
				5: ra_state <= 8'd14;	// All prim TYPES in this Object are done!
				default: ;
			endcase
		end
		
		10: begin
			case (type_cnt)
				// o_opb,om_opb,t_opb,tm_opb,pt_opb gives the OPB size for each prim type...
				// 0=No List, 1=8 Words, 2=16 Words, 3=32 Words...
				//
				// But I don't know if TA_ALLOC_CTRL is only for the TA to use during processing, not for CORE reading the OL?? ElectronAsh.
				//
				0: ra_vram_addr <= (opb_mode) ? ra_vram_addr-( (4<<o_opb)*4 )  : ra_vram_addr+( (4<<o_opb)*4 );		// TODO: Shift won't work for o_opb==0.
				1: ra_vram_addr <= (opb_mode) ? ra_vram_addr-( (4<<om_opb)*4 ) : ra_vram_addr+( (4<<om_opb)*4 );
				2: ra_vram_addr <= (opb_mode) ? ra_vram_addr-( (4<<t_opb)*4 )  : ra_vram_addr+( (4<<t_opb)*4 );
				3: ra_vram_addr <= (opb_mode) ? ra_vram_addr-( (4<<tm_opb)*4 ) : ra_vram_addr+( (4<<tm_opb)*4 );
				4: ra_vram_addr <= (opb_mode) ? ra_vram_addr-( (4<<pt_opb)*4 ) : ra_vram_addr+( (4<<pt_opb)*4 );
				default: ;
			endcase
			
			ra_vram_rd <= 1'b1;
			ra_state <= ra_state + 1;
		end
		
		11: begin
			type_cnt <= type_cnt + 3'd1;
			opb_word <= ra_vram_din;
			ra_state <= ra_state + 1;
		end
		
		// Check for Pointer Block Link, or Primitive Type...
		12: begin
			if (opb_word[31:29]==3'b111) begin		// Pointer Block Link.
				if (eol) begin
					ra_state <= 8'd13;	// todo
				end
				else begin
					ra_vram_addr <= {opb_word[23:2], 2'b00};
					ra_vram_rd <= 1'b1;
					ra_state <= 8'd11;
				end
			end
			else if (opb_word[31:29]==3'b101) begin	// Quad Array.
				poly_addr <= {opb_word[20:0], 2'b00};
				render_poly <= 1'b1;
				ra_state <= ra_state + 8'd1;
			end
			else if (opb_word[31:29]==3'b100) begin	// Triangle Array.
				poly_addr <= {opb_word[20:0], 2'b00};
				render_poly <= 1'b1;
				ra_state <= ra_state + 8'd1;
			end
			else if (!opb_word[31]) begin			// Triangle Strip.
				poly_addr <= {opb_word[20:0], 2'b00};
				render_poly <= 1'b1;
				ra_state <= ra_state + 8'd1;
			end
			//else // Undefined prim type!
		end
		
		13: begin
			if (poly_drawn) begin
				ra_state <= 8'd9;	// Check next prim TYPE.
			end
		end
		
		14: begin	// All prim TYPES in this Object have been processed!
			if (poly_drawn) begin
				ra_vram_addr <= next_region;	// Check next region entry.
				ra_vram_rd <= 1'b1;
				ra_state <= 8'd2;
			end
		end
		
		default: ;
	endcase
end

endmodule
