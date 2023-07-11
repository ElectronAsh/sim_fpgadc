`timescale 1ns / 1ps
`default_nettype none

module isp_parser (
	input clock,
	input reset_n,
	
	input isp_trig,
	output reg isp_vram_rd,
	output reg isp_vram_wr,
	output reg [23:0] isp_vram_addr,
	input [31:0] isp_vram_din,
	
	output reg isp_entry_valid
);


reg [31:0] isp_inst;

// isp_inst, for Opaque or Translucent prims...
wire [2:0] depth_comp = isp_inst[31:29];	// 0=Never, 1=Less, 2=Equal, 3=Less Or Equal, 4=Greater, 5=Not Equal, 6=Greater Or Equal, 7=Always.
wire [1:0] culling_mode = isp_inst[28:27];	// 0=No culling, 1=Cull if Small, 2= Cull if Neg, 3=Cull if Pos.
wire z_write_disable = isp_inst[26];
wire texture = isp_inst[25];
wire offset  = isp_inst[24];
wire gouraud = isp_inst[23];
wire uv_16_bit = isp_inst[22];
wire cache_bypass = isp_inst[21];
wire dcalc_ctrl = isp_inst[20];

// isp_inst, for Opaque Modifier Volume or Translucent Modified Volume...
wire [2:0] volume_inst = isp_inst[31:29];
//wire [1:0] culling_mode = isp_inst[28:27];	// Same bits as above.


reg [31:0] tsp_inst;
reg [31:0] tex_cont;

reg [31:0] tsp2_inst;
reg [31:0] tex2_cont;

// NOTE: Bump Map params are stored in the Offset Color regs, when Bumps are enabled.
reg [31:0] vert_a_x;
reg [31:0] vert_a_y;
reg [31:0] vert_a_z;
reg [31:0] vert_a_u0;
reg [31:0] vert_a_v0;
reg [31:0] vert_a_u1;
reg [31:0] vert_a_v1;
reg [31:0] vert_a_base_col_0;
reg [31:0] vert_a_base_col_1;
reg [31:0] vert_a_off_col;

reg [31:0] vert_b_x;
reg [31:0] vert_b_y;
reg [31:0] vert_b_z;
reg [31:0] vert_b_u0;
reg [31:0] vert_b_v0;
reg [31:0] vert_b_u1;
reg [31:0] vert_b_v1;
reg [31:0] vert_b_base_col_0;
reg [31:0] vert_b_base_col_1;
reg [31:0] vert_b_off_col;

reg [31:0] vert_c_x;
reg [31:0] vert_c_y;
reg [31:0] vert_c_z;
reg [31:0] vert_c_u0;
reg [31:0] vert_c_v0;
reg [31:0] vert_c_u1;
reg [31:0] vert_c_v1;
reg [31:0] vert_c_base_col_0;
reg [31:0] vert_c_base_col_1;
reg [31:0] vert_c_off_col;

reg [31:0] vert_d_x;
reg [31:0] vert_d_y;
reg [31:0] vert_d_z;
reg [31:0] vert_d_u0;
reg [31:0] vert_d_v0;
reg [31:0] vert_d_u1;
reg [31:0] vert_d_v1;
reg [31:0] vert_d_base_col_0;
reg [31:0] vert_d_base_col_1;
reg [31:0] vert_d_off_col;

wire two_volume = 1'b0;	// TODO.


// Object List read state machine...
reg [7:0] isp_state;
reg [3:0] strip_cnt;

always @(posedge clock or negedge reset_n)
if (!reset_n) begin
	isp_state <= 8'd0;
	isp_vram_rd <= 1'b0;
	isp_vram_wr <= 1'b0;
	isp_entry_valid <= 1'b0;
end
else begin
	//isp_vram_rd <= 1'b0;
	//isp_vram_wr <= 1'b0;
	
	isp_entry_valid <= 1'b0;

	if (isp_state > 0) begin
		if (isp_state != 8'd46) isp_state <= isp_state + 8'd1;
		isp_vram_addr <= isp_vram_addr + 4;
	end

	case (isp_state)
		0: begin
			//isp_vram_addr <= 24'h0129f8;
			//isp_vram_addr <= 24'h0116D0;
			isp_vram_addr <= 24'h00408c;	// Menu
			//isp_vram_addr <= 24'h000450;	// Taxi
			//isp_vram_addr <= 24'h000000;	// Sanic
			isp_vram_rd <= 1'b1;
			strip_cnt <= 4'd3;
			isp_state <= 8'd1;
		end
		1:  isp_inst <= isp_vram_din;
		2:  tsp_inst <= isp_vram_din;
		3:  begin tex_cont <= isp_vram_din; /* if (!shadow)*/ isp_state <= 8'd6; end
		
		// if (shadow)...
		4:  tsp2_inst <= isp_vram_din;
		5:  tex2_cont <= isp_vram_din;
		
		6:  vert_a_x <= isp_vram_din;
		7:  vert_a_y <= isp_vram_din;
		8:  begin vert_a_z <= isp_vram_din;  if (!texture) isp_state <= 8'd11; end	// Skip UV if not Textured.
		9:  begin vert_a_u0 <= isp_vram_din; if (uv_16_bit) isp_state <= 8'd11; end	// Skip v0 if 16-bit UV. 
		10: vert_a_v0 <= isp_vram_din;
		11: begin
			vert_a_base_col_0 <= isp_vram_din;
			if (two_volume) isp_state <= 8'd12;
			else if (offset) isp_state <= 8'd15;
			else isp_state <= 8'd16;
		end
		
		// if Two-volume...
		12: vert_a_u1 <= isp_vram_din;
		13: vert_a_v1 <= isp_vram_din;
		14: begin vert_a_base_col_1 <= isp_vram_din; if (!offset) isp_state <= 8'd16; end
		
		// if Offset colour.
		15: vert_a_off_col <= isp_vram_din;
		
		16: vert_b_x <= isp_vram_din;
		17: vert_b_y <= isp_vram_din;
		18: begin vert_b_z <= isp_vram_din;  if (!texture) isp_state <= 8'd21; end	// Skip UV if not Textured.
		19: begin vert_b_u0 <= isp_vram_din; if (uv_16_bit) isp_state <= 8'd21; end	// Skip v0 if 16-bit UV. 
		20: vert_b_v0 <= isp_vram_din;
		21: begin
			vert_b_base_col_0 <= isp_vram_din;
			if (two_volume) isp_state <= 8'd22;
			else if (offset) isp_state <= 8'd25;
			else isp_state <= 8'd26;
		end
		
		// if Two-volume...
		22: vert_b_u1 <= isp_vram_din;
		23: vert_b_v1 <= isp_vram_din;
		24: begin vert_b_base_col_1 <= isp_vram_din; if (!offset) isp_state <= 8'd26; end
		
		// if Offset colour...
		25: vert_b_off_col <= isp_vram_din;			// if Offset colour.
		
		26: vert_c_x <= isp_vram_din;
		27: vert_c_y <= isp_vram_din;
		28: begin vert_c_z <= isp_vram_din;  if (!texture) isp_state <= 8'd31; end	// Skip UV if not Textured.
		29: begin vert_c_u0 <= isp_vram_din; if (uv_16_bit) isp_state <= 8'd31; end	// Skip v0 if 16-bit UV. 
		30: vert_c_v0 <= isp_vram_din;
		31: begin
			vert_c_base_col_0 <= isp_vram_din;
			if (two_volume) isp_state <= 8'd32;
			else if (offset) isp_state <= 8'd35;
			else /*isp_state <= 8'd36;*/ isp_state <= 8'd46;	// TESTING. Skip Vert D.
		end
		
		// if Two-volume...
		32: vert_c_u1 <= isp_vram_din;
		33: vert_c_v1 <= isp_vram_din;
		34: begin vert_c_base_col_1 <= isp_vram_din; if (!offset) isp_state <= 8'd36; end
		
		// if Offset colour...
		35: begin vert_c_off_col <= isp_vram_din; isp_state <= 8'd46; end	// TESTING. Skip Vert D.
		
		36: vert_d_x <= isp_vram_din;
		37: vert_d_y <= isp_vram_din;
		38: begin vert_d_z <= isp_vram_din;  if (!texture) isp_state <= 8'd41; end
		39: begin vert_d_u0 <= isp_vram_din; if (uv_16_bit) isp_state <= 8'd41; end	// Skip v0 if 16-bit UV. 
		40: vert_d_v0 <= isp_vram_din;
		41: begin
			vert_d_base_col_0 <= isp_vram_din;
			if (two_volume) isp_state <= 8'd42;
			else if (offset) isp_state <= 8'd45;
			else isp_state <= 8'd46;
		end
		
		// if Two-volume...
		42: vert_d_u1 <= isp_vram_din;
		43: vert_d_v1 <= isp_vram_din;
		44: begin vert_d_base_col_1 <= isp_vram_din; if (!offset) isp_state <= 8'd46; end
		
		// if Offset colour...
		45: vert_d_off_col <= isp_vram_din;
		
		46: begin
			//if (strip_cnt==4'd0) begin
				if (isp_vram_din[31:24]==8'hC8) begin	// Menu.
				//if (isp_vram_din[31:16]==16'h9380) begin	// Taxi.
				//if (isp_vram_din[31:16]==16'hCB80) begin	// Sanic.
					isp_entry_valid <= 1'b1;
					isp_inst <= isp_vram_din;
					strip_cnt <= 4'd3;
					isp_state <= 8'd2;
				end
			/*end
			else begin
				isp_entry_valid <= 1'b1;
			
				strip_cnt <= strip_cnt - 4'd1;
				
				vert_a_x <= vert_b_x;
				vert_a_y <= vert_b_y;
				vert_a_z <= vert_b_z;
				vert_a_base_col_1 <= vert_b_base_col_1;

				vert_b_x <= vert_c_x;
				vert_b_y <= vert_c_y;
				vert_b_z <= vert_c_z;
				vert_b_base_col_1 <= vert_c_base_col_1;
				
				vert_c_x <= isp_vram_din;
				isp_state <= 8'd27;			// Grab (rest of) new vert C.
			end
			*/
		end
		default: ;
	endcase
end

endmodule
