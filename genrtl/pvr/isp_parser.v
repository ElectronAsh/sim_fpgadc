`timescale 1ns / 1ps
`default_nettype none

module isp_parser (
	input clock,
	input reset_n,
	
	input [31:0] opb_word,
	
	input [23:0] poly_addr,
	input render_poly,
	
	output reg isp_vram_rd,
	output reg isp_vram_wr,
	output reg [23:0] isp_vram_addr,
	input [31:0] isp_vram_din,
	
	output reg isp_entry_valid,
	
	output reg poly_drawn
);

// OL Word bit decodes...
wire [5:0] strip_mask = {opb_word[25], opb_word[26], opb_word[27], opb_word[28], opb_word[29], opb_word[30]};	// For Triangle Strips only.
wire [3:0] num_prims = opb_word[28:25];	// For Triangle Array or Quad Array only.
wire shadow = opb_word[24];				// For all three poly types.
wire [2:0] skip = opb_word[23:21];		// For all three poly types.
wire eol = opb_word[28];


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
reg [2:0] strip_cnt;

always @(posedge clock or negedge reset_n)
if (!reset_n) begin
	isp_state <= 8'd0;
	isp_vram_rd <= 1'b0;
	isp_vram_wr <= 1'b0;
	isp_entry_valid <= 1'b0;
	poly_drawn <= 1'b0;
end
else begin
	//isp_vram_rd <= 1'b0;
	//isp_vram_wr <= 1'b0;
	
	isp_entry_valid <= 1'b0;
	poly_drawn <= 1'b0;

	if (isp_state > 0) begin
		if (isp_state != 8'd45 || isp_state != 8'd46 || isp_state != 8'd47) isp_state <= isp_state + 8'd1;
		isp_vram_addr <= isp_vram_addr + 4;
	end

	case (isp_state)
		0: begin
			if (render_poly) begin
				isp_vram_addr <= poly_addr;
				
				if (!opb_word[31]) strip_cnt <= (strip_mask[0] + strip_mask[1] + strip_mask[2] + strip_mask[3] + strip_mask[4] + strip_mask[5]) + 1;	// TriangleStrips.
				else strip_cnt <= 3'd0;	// Triangle Arrays or Quads.
				
				isp_vram_rd <= 1'b1;
				isp_state <= 8'd1;
			end
		end
		1:  isp_inst <= isp_vram_din;
		2:  begin if (shadow) tsp2_inst <= isp_vram_din; else tsp_inst <= isp_vram_din; end
		3:  begin if (shadow) tex2_cont <= isp_vram_din; else tex_cont <= isp_vram_din; isp_state <= 8'd6; end
		
		// if (shadow)...
		//4:  tsp2_inst <= isp_vram_din;
		//5:  tex2_cont <= isp_vram_din;
		
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
		
		47: begin
			isp_entry_valid <= 1'b1;
			if (strip_cnt==3'd0) begin		// (if TriangleStrip is done), or other type finished...
				poly_drawn <= 1'b1;
				isp_state <= 8'd0;
			end
			else begin	// TriangleStrip...
				strip_cnt <= strip_cnt - 3'd1;
				isp_vram_addr <= isp_vram_addr - (((vert_words*2)+1) << 2);	// Jump back TWO verts, to grab B,C,New. (plus one extra word, due to the isp_vram_addr++ thing).
				isp_state <= 8'd6;
			end
		end

		default: ;
	endcase
end

wire [7:0] vert_words = (two_volume&&shadow) ? ((skip*2)+3) : (skip+3);

endmodule
