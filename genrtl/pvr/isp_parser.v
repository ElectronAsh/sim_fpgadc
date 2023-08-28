`timescale 1ns / 1ps
`default_nettype none

module isp_parser (
	input clock,
	input reset_n,
	
	input [31:0] opb_word,
	
	input [2:0] type_cnt,
	
	input [23:0] poly_addr,
	input render_poly,
	
	output reg isp_vram_rd,
	output reg isp_vram_wr,
	output reg [23:0] isp_vram_word_addr,
	input [63:0] isp_vram_din,
	output reg [63:0] isp_vram_dout,
	
	output reg isp_entry_valid,
	
	output reg poly_drawn,
	
	input reg [5:0] tilex,
	input reg [5:0] tiley,
	
	//int C1 = FDY12 * FX1 - FDX12 * FY1;
	input signed [31:0] FDY12,
	input signed [31:0] FX1,
	input signed [31:0] FDX12,
	input signed [31:0] FY1,
	
	//int C2 = FDY23 * FX2 - FDX23 * FY2;
	input signed [31:0] FDY23,
	input signed [31:0] FX2,
	input signed [31:0] FDX23,
	input signed [31:0] FY2,
	
	//int C3 = FDY31 * FX3 - FDX31 * FY3;
	input signed [31:0] FDY31,
	input signed [31:0] FX3,
	input signed [31:0] FDX31,
	input signed [31:0] FY3,
	
	//input signed [31:0] x_ps,
	//input signed [31:0] y_ps,
	
	input signed [31:0] minx,
	input signed [31:0] miny,
	
	input signed [31:0] spanx,
	input signed [31:0] spany,
	
	input [31:0] TEXT_CONTROL,	// From TEXT_CONTROL reg.
	input  [1:0] PAL_RAM_CTRL	// From PAL_RAM_CTRL reg, bits [1:0].
);

reg [23:0] isp_vram_addr;

assign isp_vram_word_addr = (isp_state==8'd49) ? (vram_word_addr<<2) :	// Output texture address.
												  isp_vram_addr;		// Output ISP Parser address.

// OL Word bit decodes...
wire [5:0] strip_mask = {opb_word[25], opb_word[26], opb_word[27], opb_word[28], opb_word[29], opb_word[30]};	// For Triangle Strips only.
wire [3:0] num_prims = opb_word[28:25];	// For Triangle Array or Quad Array only.
wire shadow = opb_word[24];				// For all three poly types.
wire [2:0] skip = opb_word[23:21];		// For all three poly types.
wire eol = opb_word[28];


// ISP/TSP Instruction Word. Bit decode, for Opaque or Translucent prims...
reg [31:0] isp_inst;
wire [2:0] depth_comp   = isp_inst[31:29];	// 0=Never, 1=Less, 2=Equal, 3=Less Or Equal, 4=Greater, 5=Not Equal, 6=Greater Or Equal, 7=Always.
wire [1:0] culling_mode = isp_inst[28:27];	// 0=No culling, 1=Cull if Small, 2= Cull if Neg, 3=Cull if Pos.
wire z_write_disable    = isp_inst[26];
wire texture            = isp_inst[25];
wire offset             = isp_inst[24];
wire gouraud            = isp_inst[23];
wire uv_16_bit          = isp_inst[22];
wire cache_bypass       = isp_inst[21];
wire dcalc_ctrl         = isp_inst[20];
// Bits [19:0] are reserved.

// ISP/TSP Instruction Word. Bit decode, for Opaque Modifier Volume or Translucent Modified Volume...
wire [2:0] volume_inst = isp_inst[31:29];
//wire [1:0] culling_mode = isp_inst[28:27];	// Same bits as above.
// Bits [26:0] are reserved.


// TSP Instruction Word...
reg [31:0] tsp_inst;
wire tex_u_flip = tsp_inst[18];
wire tex_v_flip = tsp_inst[17];
wire tex_u_clamp = tsp_inst[16];
wire tex_v_clamp = tsp_inst[15];
wire [2:0] tex_u_size = tsp_inst[5:3];
wire [2:0] tex_v_size = tsp_inst[2:0];


// Texture Control Word...
reg [31:0] tcw_word;
wire mip_map = tcw_word[31];
wire vq_comp = tcw_word[30];
wire [2:0] pix_fmt = tcw_word[29:27];
wire scan_order = tcw_word[26];
wire stride_flag = tcw_word[25];

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
reg [3:0] array_cnt;

wire is_tri_array  = opb_word[31:29]==3'b100;
wire is_quad_array = opb_word[31:29]==3'b101;

reg quad_done;

reg [23:0] isp_vram_addr_last;

always @(posedge clock or negedge reset_n)
if (!reset_n) begin
	isp_state <= 8'd0;
	isp_vram_rd <= 1'b0;
	isp_vram_wr <= 1'b0;
	isp_entry_valid <= 1'b0;
	quad_done <= 1'b1;
	poly_drawn <= 1'b0;
end
else begin
	//isp_vram_rd <= 1'b0;
	isp_vram_wr <= 1'b0;
	
	isp_entry_valid <= 1'b0;
	poly_drawn <= 1'b0;

	if (isp_state > 0) begin
		//if (isp_state != 8'd45 || isp_state != 8'd46 || isp_state != 8'd47 || isp_state != 8'd48 || isp_state != 8'd49 || isp_state != 8'd50) isp_state <= isp_state + 8'd1;
		if (isp_state < 8'd46) isp_state <= isp_state + 8'd1;
		if (isp_state < 8'd47) isp_vram_addr <= isp_vram_addr + 4;
	end

	case (isp_state)
		0: begin
			if (render_poly) begin
				isp_vram_addr <= poly_addr;
				
				if (!opb_word[31]) begin	// TriangleStrips.
					if (strip_mask==0) begin	// Nothing to draw for this strip.
						strip_cnt <= 3'd0;	// Sanity check.
						array_cnt <= 4'd0;	// Sanity check.
						poly_drawn <= 1'b1;
					end
					else begin
						strip_cnt <= strip_mask[0] + strip_mask[1] + strip_mask[2] + strip_mask[3] + strip_mask[4] + strip_mask[5] + 1;
						array_cnt <= 4'd0;	// Sanity check.
						isp_vram_rd <= 1'b1;
						isp_state <= 8'd1;
					end
				end
				else if (is_tri_array || is_quad_array) begin	// Triangle Array or Quad Array.
					if (is_quad_array) quad_done <= 1'b0;	// if a Quad.			
					strip_cnt <= 3'd0;
					array_cnt <= num_prims /*+ 1*/;
					isp_vram_rd <= 1'b1;
					isp_state <= 8'd1;
				end
				else begin
					strip_cnt <= 3'd0;	// Sanity check.
					array_cnt <= 4'd0;	// Sanity check.
					poly_drawn <= 1'b1;	// No idea which prim type, so skip!
				end
			end
		end
		1: begin isp_inst <= isp_vram_din; end
		2:  tsp_inst <= isp_vram_din;
		3:  begin tcw_word <= isp_vram_din; /*if (shadow) isp_state <= 8'd4; else*/ isp_state <= 8'd6; end	// Shadow still breaks everything?
		
		// if (shadow)...
		4:  tsp2_inst <= isp_vram_din;
		5:  tex2_cont <= isp_vram_din;
		
		6:  vert_a_x <= isp_vram_din;
		7:  vert_a_y <= isp_vram_din;
		8:  begin vert_a_z <= isp_vram_din;
			if (is_tri_array || is_quad_array) begin		// Triangle Array or Quad Array...
				if (!texture) begin
					if (tsp_inst==32'h00000000) isp_state <= 8'd16;	// Skip Colour and UV??
					else isp_state <= 8'd11;	// Skip U+V if not Textured.
				end
			end
			else if (!texture) isp_state <= 8'd11;	// Triangle Strip (probably).
		end
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
		18: begin vert_b_z <= isp_vram_din;
			if (is_tri_array || is_quad_array) begin		// Triangle Array or Quad Array...
				if (!texture) begin
					if (tsp_inst==32'h00000000) isp_state <= 8'd26;	// Skip Colour and UV??
					else isp_state <= 8'd21;	// Skip U+V if not Textured.
				end
			end
			else if (!texture) isp_state <= 8'd21;	// Triangle Strip (probably).
		end
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
		28: begin vert_c_z <= isp_vram_din;
			if (is_tri_array || is_quad_array) begin		// Triangle Array or Quad Array...
				if (!texture) begin
					if (tsp_inst==32'h00000000) begin
						if (is_quad_array) isp_state <= 8'd36;	// Skip Colour and UV if a Quad.
						else isp_state <= 8'd46;				// Else (not a Quad), skip to render.
					end
					else isp_state <= 8'd31;	// Skip U+V if not Textured.
				end
			end
			else if (!texture) isp_state <= 8'd31;	// Triangle Strip (probably).
		end
		29: begin vert_c_u0 <= isp_vram_din; if (uv_16_bit) isp_state <= 8'd31; end	// Skip v0 if 16-bit UV. 
		30: vert_c_v0 <= isp_vram_din;
		31: begin
			vert_c_base_col_0 <= isp_vram_din;
			if (two_volume) isp_state <= 8'd32;
			else if (offset) isp_state <= 8'd35;
			else if (is_quad_array) isp_state <= 8'd36;	// If a Quad.
				else isp_state <= 8'd46;
		end
		
		// if Two-volume...
		32: vert_c_u1 <= isp_vram_din;
		33: vert_c_v1 <= isp_vram_din;
		34: begin vert_c_base_col_1 <= isp_vram_din;
			if (offset) isp_state <= 8'd35;
			else isp_state <= 8'd46;
		end
		
		// if Offset colour...
		35: begin vert_c_off_col <= isp_vram_din;				// if Offset colour.
			if (is_quad_array) isp_state <= 8'd36;	// If a Quad
			else isp_state <= 8'd46;
		end
		
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
		45: vert_d_off_col <= isp_vram_din;				// if Offset colour.
		
		46: begin
			isp_entry_valid <= 1'b1;
			isp_state <= 8'd48;
		end
		
		47: begin
			if (!opb_word[31]) begin		// Triangle Strip.
				if (strip_cnt==3'd0) begin		// If TriangleStrip is done...
					poly_drawn <= 1'b1;
					isp_state <= 8'd0;
				end
				else begin	// Do TriangleStrip...
					strip_cnt <= strip_cnt - 3'd1;
					isp_vram_addr <= isp_vram_addr - (((vert_words*2)+1) << 2);	// Jump back TWO verts, to grab B,C,New. (plus one extra word, due to the isp_vram_addr++ thing).
					isp_state <= 8'd6;
				end
			end
			else
			if (is_tri_array || is_quad_array) begin		// Triangle Array or Quad Array.
				if (array_cnt==4'd0) begin		// If Array is done...
					if (is_quad_array) begin	// Quad Array (maybe) done.
						if (!quad_done) begin	// Second half of Quad not done yet...
							
							vert_a_x <= vert_c_x;   vert_b_x <= vert_d_x;   vert_c_x <= vert_a_x;
							vert_a_y <= vert_c_y;   vert_b_y <= vert_d_y;   vert_c_y <= vert_a_y;
							vert_a_z <= vert_c_z;   /*vert_b_z <= vert_d_z;*/   vert_c_z <= vert_a_z;
							vert_a_u0 <= vert_c_u0; vert_b_u0 <= vert_d_u0; vert_c_u0 <= vert_a_u0;
							vert_a_v0 <= vert_c_v0; vert_b_v0 <= vert_d_v0; vert_c_v0 <= vert_a_v0;
							
							isp_state <= 8'd46;			// Draw the second half of the Quad.
														// isp_entry_valid will tell the C code to latch the
														// params again, and convert to fixed-point.
							quad_done <= 1'b1;
						end
						else begin
							poly_drawn <= 1'b1;	// Quad is done.
							isp_state <= 8'd0;
						end
					end
					else begin	// Triangle is done.
						poly_drawn <= 1'b1;
						isp_state <= 8'd0;
					end
				end
				else begin	// Triangle Array or Quad Array not done yet...
					array_cnt <= array_cnt - 3'd1;
					isp_vram_addr <= isp_vram_addr - 4;
					isp_state <= 8'd1;	// Jump back, to grab the next PRIM (including ISP/TSP/TCW).
				end
			end
			else begin	// Should never get to here??
				poly_drawn <= 1'b1;
				isp_state <= 8'd0;
			end
		end

		48: begin
			isp_vram_addr_last <= isp_vram_addr;
	
			// Half-edge constants (setup).
			//int C1 = FDY12 * FX1 - FDX12 * FY1;
			mult1 <= (FDY12 * FX1);
			mult2 <= (FDX12 * FY1);

			//int C2 = FDY23 * FX2 - FDX23 * FY2;
			mult3 <= (FDY23 * FX2);
			mult4 <= (FDX23 * FY2);

			//int C3 = FDY31 * FX3 - FDX31 * FY3;
			mult5 <= (FDY31 * FX3);
			mult6 <= (FDX31 * FY3);
			
			//y_ps <= miny;		// Per-poly rendering.
			y_ps <= tiley*32;	// Per-tile rendering.
			
			begin
				//x_ps <= minx;				// Per-poly rendering.
				x_ps <= tilex*32;			// Per-tile rendering.
				isp_state <= isp_state + 8'd1;
			end
		end
		
		49: begin
			//if (y_ps < miny+spany) begin	// Per-poly rendering.
			if (y_ps < (tiley*32)+32) begin	// Per-tile rendering.
				//if (x_ps < minx+spanx) begin	// Per-poly rendering.
				if (x_ps < (tilex*32)+32) begin	// Per-tile rendering.
					if (inTriangle && x_ps<639 && y_ps<479 && !FX1[31] && !FX2[31] && !FX3[31] && !FY1[31] && !FY2[31] && !FY3[31]) begin
						isp_vram_addr <= x_ps + (y_ps * 640);
						isp_vram_wr <= 1'b1;
						isp_vram_dout <= texel_argb;	// ABGR, for sim display.
						//isp_vram_dout <= {8'hff, vert_c_base_col_0[7:0], vert_c_base_col_0[15:8], vert_c_base_col_0[23:16]};	// ABGR, Alpha boosted.
					end
					x_ps <= x_ps + 12'd1;
				end
				else begin
					y_ps <= y_ps + 12'd1;
					//x_ps <= minx;				// Per-poly rendering.
					x_ps <= tilex*32;			// Per-tile rendering.
				end
			end
			else begin
				isp_vram_addr <= isp_vram_addr_last;
				isp_state <= 8'd47;
			end
		end

		default: ;
	endcase
end

wire [7:0] vert_words = (two_volume&shadow) ? ((skip*2)+3) : (skip+3);


wire [31:0] test_float = 32'h4212C0E0;	// 36.6883544921875

wire [7:0]  exp = test_float[30:23];
wire [22:0] man = test_float[22:00];

wire signed [31:0] fixed = (exp>127) ? {1'b1, man}<<(exp-127) :
									   {1'b1, man}>>(127-exp);

reg signed [11:0] x_ps;
reg signed [11:0] y_ps;


parameter FRAC_BITS = 8;

// Half-edge constants
//int C1 = FDY12 * FX1 - FDX12 * FY1;
reg signed [47:0] mult1;
reg signed [47:0] mult2;
wire signed [31:0] C1 = (mult1 - mult2) >>FRAC_BITS;

//int C2 = FDY23 * FX2 - FDX23 * FY2;
reg signed [47:0] mult3;
reg signed [47:0] mult4;
wire signed [31:0] C2 = (mult3 - mult4) >>FRAC_BITS;

//int C3 = FDY31 * FX3 - FDX31 * FY3;
reg signed [47:0] mult5;
reg signed [47:0] mult6;
wire signed [31:0] C3 = (mult5 - mult6) >>FRAC_BITS;


//int Xhs12 = C1 + MUL_PREC(FDX12, y_ps<<FRAC_BITS, FRAC_BITS) - MUL_PREC(FDY12, x_ps<<FRAC_BITS, FRAC_BITS);
//int Xhs23 = C2 + MUL_PREC(FDX23, y_ps<<FRAC_BITS, FRAC_BITS) - MUL_PREC(FDY23, x_ps<<FRAC_BITS, FRAC_BITS);
//int Xhs31 = C3 + MUL_PREC(FDX31, y_ps<<FRAC_BITS, FRAC_BITS) - MUL_PREC(FDY31, x_ps<<FRAC_BITS, FRAC_BITS);
wire signed [47:0] mult7  = (FDX12 * (y_ps/*<<FRAC_BITS*/) ) /*>>FRAC_BITS*/;
wire signed [47:0] mult8  = (FDY12 * (x_ps/*<<FRAC_BITS*/) ) /*>>FRAC_BITS*/;
wire signed [31:0] Xhs12 = C1 + (mult7  - mult8 );

wire signed [47:0] mult9  = (FDX23 * (y_ps/*<<FRAC_BITS*/) ) /*>>FRAC_BITS*/;
wire signed [47:0] mult10 = (FDY23 * (x_ps/*<<FRAC_BITS*/) ) /*>>FRAC_BITS*/;
wire signed [31:0] Xhs23 = C2 + (mult9  - mult10);

wire signed [47:0] mult11 = (FDX31 * (y_ps/*<<FRAC_BITS*/) ) /*>>FRAC_BITS*/;
wire signed [47:0] mult12 = (FDY31 * (x_ps/*<<FRAC_BITS*/) ) /*>>FRAC_BITS*/;
wire signed [31:0] Xhs31 = C3 + (mult11 - mult12);

wire inTriangle = Xhs12 >= 0 && Xhs23 >= 0 && Xhs31 >= 0;


texture_address  texture_address_inst (
	.clock( clock ),
	.reset_n( reset_n ),
	
	.isp_inst( isp_inst ),	// input [31:0]  isp_inst.
	.tsp_inst( tsp_inst ),	// input [31:0]  tsp_inst.
	.tcw_word( tcw_word ),	// input [31:0]  tcw_word.
	
	.PAL_RAM_CTRL( PAL_RAM_CTRL ),	// input from PAL_RAM_CTRL, bits [1:0].
		
	.TEXT_CONTROL( TEXT_CONTROL ),	// input [31:0]  TEXT_CONTROL.
		
	//.ui( ui ),						// input [9:0]  ui. From rasterizer/interp...
	//.vi( vi ),						// input [9:0]  ui.
	
	.vram_word_addr( vram_word_addr ),// output [20:0]  vram_word_addr. 64-bit WORD address!
	.vram_din( isp_vram_din ),		// input [63:0]  vram_din. Full 64-bit data for texture reads.
	
	.texel_argb( texel_argb )		// output [31:0]  texel_argb. Final texel ARGB 8888 output.
);

//reg [9:0] ui;
//reg [9:0] vi;

wire [20:0] vram_word_addr;
wire [31:0] texel_argb;


// Aa = ((v3_a - v1_a) * (v2_y - v1_y) - (v2_a - v1_a) * (v3_y - v1_y));
// Ba = ((v3_x - v1_x) * (v2_a - v1_a) - (v2_x - v1_x) * (v3_a - v1_a));
// C = ((v2_x - v1_x) * (v3_y - v1_y) - (v3_x - v1_x) * (v2_y - v1_y));
/*
edge_calc  edge_calc_c1 (
	.v1_x( FDY12 ),
	.v1_y( FX1 ),
	
	.v2_x( FDX12 ),
	.v2_y( FY1 ),
	
	.v3_x( v3_x ),
	.v3_y( v3_y ),
	
	.v1_a( v1_a ),
	.v2_a( v2_a ),
	.v3_a( v3_a ),
	
	.Aa( Aa ),
	.Ba( Ba ),
	
	.C( C1 ),
	
	.c( c ),
	
	.x( x ),
	.y( y ),
	.interp( interp )
);


edge_calc  edge_calc_c2 (
	.v1_x( v1_x ),
	.v1_y( v1_y ),
	
	.v2_x( v2_x ),
	.v2_y( v2_y ),
	
	.v3_x( v3_x ),
	.v3_y( v3_y ),
	
	.v1_a( v1_a ),
	.v2_a( v2_a ),
	.v3_a( v3_a ),
	
	.Aa( Aa ),
	.Ba( Ba ),
	
	.C( C ),
	
	.c( c ),
	
	.x( x ),
	.y( y ),
	.interp( interp )
);


edge_calc  edge_calc_c3 (
	.v1_x( v1_x ),
	.v1_y( v1_y ),
	
	.v2_x( v2_x ),
	.v2_y( v2_y ),
	
	.v3_x( v3_x ),
	.v3_y( v3_y ),
	
	.v1_a( v1_a ),
	.v2_a( v2_a ),
	.v3_a( v3_a ),
	
	.Aa( Aa ),
	.Ba( Ba ),
	
	.C( C ),
	
	.c( c ),
	
	.x( x ),
	.y( y ),
	.interp( interp )
);
*/

/*
reg [22:0] z_col_0  [0:31];
reg [22:0] z_col_1  [0:31];
reg [22:0] z_col_2  [0:31];
reg [22:0] z_col_3  [0:31];
reg [22:0] z_col_4  [0:31];
reg [22:0] z_col_5  [0:31];
reg [22:0] z_col_6  [0:31];
reg [22:0] z_col_7  [0:31];

reg [22:0] z_col_8  [0:31];
reg [22:0] z_col_9  [0:31];
reg [22:0] z_col_10 [0:31];
reg [22:0] z_col_11 [0:31];
reg [22:0] z_col_12 [0:31];
reg [22:0] z_col_13 [0:31];
reg [22:0] z_col_14 [0:31];
reg [22:0] z_col_15 [0:31];

reg [22:0] z_col_16 [0:31];
reg [22:0] z_col_17 [0:31];
reg [22:0] z_col_18 [0:31];
reg [22:0] z_col_19 [0:31];
reg [22:0] z_col_20 [0:31];
reg [22:0] z_col_21 [0:31];
reg [22:0] z_col_22 [0:31];
reg [22:0] z_col_23 [0:31];

reg [22:0] z_col_24 [0:31];
reg [22:0] z_col_25 [0:31];
reg [22:0] z_col_26 [0:31];
reg [22:0] z_col_27 [0:31];
reg [22:0] z_col_28 [0:31];
reg [22:0] z_col_29 [0:31];
reg [22:0] z_col_30 [0:31];
reg [22:0] z_col_31 [0:31];

wire [4:0] tile_row;
wire [4:0] tile_col;

wire [22:0] invW_0;
wire allow_0;
depth_compare depth_compare_inst0 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_0[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_0 ),				// input [22:0]  invW
	.depth_allow( allow_0 )			// output depth_allow
);
wire [22:0] invW_1;
wire allow_1;
depth_compare depth_compare_inst1 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_1[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_1 ),				// input [22:0]  invW
	.depth_allow( allow_1 )			// output depth_allow
);
wire [22:0] invW_2;
wire allow_2;
depth_compare depth_compare_inst2 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_2[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_2 ),				// input [22:0]  invW
	.depth_allow( allow_2 )			// output depth_allow
);
wire [22:0] invW_3;
wire allow_3;
depth_compare depth_compare_inst3 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_3[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_3 ),				// input [22:0]  invW
	.depth_allow( allow_3 )			// output depth_allow
);
wire [22:0] invW_4;
wire allow_4;
depth_compare depth_compare_inst4 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_4[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_4 ),				// input [22:0]  invW
	.depth_allow( allow_4 )			// output depth_allow
);
wire [22:0] invW_5;
wire allow_5;
depth_compare depth_compare_inst5 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_5[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_5 ),				// input [22:0]  invW
	.depth_allow( allow_5 )			// output depth_allow
);
wire [22:0] invW_6;
wire allow_6;
depth_compare depth_compare_inst6 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_6[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_6 ),				// input [22:0]  invW
	.depth_allow( allow_6 )			// output depth_allow
);
wire [22:0] invW_7;
wire allow_7;
depth_compare depth_compare_inst7 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_7[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_7 ),				// input [22:0]  invW
	.depth_allow( allow_7 )			// output depth_allow
);
wire [22:0] invW_8;
wire allow_8;
depth_compare depth_compare_inst8 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_8[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_8 ),				// input [22:0]  invW
	.depth_allow( allow_8 )			// output depth_allow
);
wire [22:0] invW_9;
wire allow_9;
depth_compare depth_compare_inst9 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_9[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_9 ),				// input [22:0]  invW
	.depth_allow( allow_9 )			// output depth_allow
);
wire [22:0] invW_10;
wire allow_10;
depth_compare depth_compare_inst10 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_10[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_10 ),				// input [22:0]  invW
	.depth_allow( allow_10 )		// output depth_allow
);
wire [22:0] invW_11;
wire allow_11;
depth_compare depth_compare_inst11 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_11[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_11 ),				// input [22:0]  invW
	.depth_allow( allow_11 )		// output depth_allow
);
wire [22:0] invW_12;
wire allow_12;
depth_compare depth_compare_inst12 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_12[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_12 ),				// input [22:0]  invW
	.depth_allow( allow_12 )		// output depth_allow
);
wire [22:0] invW_13;
wire allow_13;
depth_compare depth_compare_inst13 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_13[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_13 ),				// input [22:0]  invW
	.depth_allow( allow_13 )		// output depth_allow
);
wire [22:0] invW_14;
wire allow_14;
depth_compare depth_compare_inst14 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_14[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_14 ),				// input [22:0]  invW
	.depth_allow( allow_14 )		// output depth_allow
);
wire [22:0] invW_15;
wire allow_15;
depth_compare depth_compare_inst15 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_15[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_15 ),				// input [22:0]  invW
	.depth_allow( allow_15 )		// output depth_allow
);
wire [22:0] invW_16;
wire allow_16;
depth_compare depth_compare_inst16 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_16[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_16 ),				// input [22:0]  invW
	.depth_allow( allow_16 )		// output depth_allow
);
wire [22:0] invW_17;
wire allow_17;
depth_compare depth_compare_inst17 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_17[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_17 ),				// input [22:0]  invW
	.depth_allow( allow_0 )			// output depth_allow
);
wire [22:0] invW_18;
wire allow_18;
depth_compare depth_compare_inst18 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_18[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_18 ),				// input [22:0]  invW
	.depth_allow( allow_18 )		// output depth_allow
);
wire [22:0] invW_19;
wire allow_19;
depth_compare depth_compare_inst19 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_19[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_19 ),				// input [22:0]  invW
	.depth_allow( allow_19 )		// output depth_allow
);
wire [22:0] invW_20;
wire allow_20;
depth_compare depth_compare_inst20 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_20[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_20 ),				// input [22:0]  invW
	.depth_allow( allow_20 )		// output depth_allow
);
wire [22:0] invW_21;
wire allow_21;
depth_compare depth_compare_inst21 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_21[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_21 ),				// input [22:0]  invW
	.depth_allow( allow_21 )		// output depth_allow
);
wire [22:0] invW_22;
wire allow_22;
depth_compare depth_compare_inst22 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_22[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_22 ),				// input [22:0]  invW
	.depth_allow( allow_22 )		// output depth_allow
);
wire [22:0] invW_23;
wire allow_23;
depth_compare depth_compare_inst23 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_23[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_23 ),				// input [22:0]  invW
	.depth_allow( allow_23 )		// output depth_allow
);
wire [22:0] invW_24;
wire allow_24;
depth_compare depth_compare_inst24 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_24[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_24 ),				// input [22:0]  invW
	.depth_allow( allow_24 )		// output depth_allow
);
wire [22:0] invW_25;
wire allow_25;
depth_compare depth_compare_inst25 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_25[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_25 ),				// input [22:0]  invW
	.depth_allow( allow_25 )		// output depth_allow
);
wire [22:0] invW_26;
wire allow_26;
depth_compare depth_compare_inst26 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_26[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_26 ),				// input [22:0]  invW
	.depth_allow( allow_26 )		// output depth_allow
);
wire [22:0] invW_27;
wire allow_27;
depth_compare depth_compare_inst27 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_27[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_27 ),				// input [22:0]  invW
	.depth_allow( allow_27 )		// output depth_allow
);
wire [22:0] invW_28;
wire allow_28;
depth_compare depth_compare_inst28 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_28[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_28 ),				// input [22:0]  invW
	.depth_allow( allow_28 )		// output depth_allow
);
wire [22:0] invW_29;
wire allow_29;
depth_compare depth_compare_inst29 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_29[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_29 ),				// input [22:0]  invW
	.depth_allow( allow_29 )		// output depth_allow
);
wire [22:0] invW_30;
wire allow_30;
depth_compare depth_compare_inst30 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_30[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_30 ),				// input [22:0]  invW
	.depth_allow( allow_30 )		// output depth_allow
);
wire [22:0] invW_31;
wire allow_31;
depth_compare depth_compare_inst31 (
	.depth_comp( depth_comp ),		// input [2:0]  depth_comp
	.old_z( z_col_31[ tile_row ] ),	// input [22:0]  old_z
	.invW( invW_31 ),				// input [22:0]  invW
	.depth_allow( allow_31 )		// output depth_allow
);
*/


endmodule

/*
module depth_compare (
	input [2:0] depth_comp,
	
	input [22:0] old_z,
	input [22:0] invW,
	
	output reg depth_allow
);

always @* begin
	case (depth_comp)
		0: depth_allow = 0;					// Never.
		1: depth_allow = (invW <  old_z);	// Less.
		2: depth_allow = (invW == old_z);	// Equal.
		3: depth_allow = (invW <= old_z);	// Less or Equal
		4: depth_allow = (invW >  old_z);	// Greater.
		5: depth_allow = (invW != old_z);	// Not Equal.
		6: depth_allow = (invW >= old_z);	// Greater or Equal.
		7: depth_allow = 1;					// Always
	endcase
end

endmodule
*/

module texture_address (
	input clock,
	input reset_n,
	
	input [31:0] isp_inst,
	input [31:0] tsp_inst,
	input [31:0] tcw_word,
	
	input [1:0] PAL_RAM_CTRL,	// From PAL_RAM_CTRL[1:0].
	input [31:0] TEXT_CONTROL,	// From TEXT_CONTROL reg.
		
	//input wire [9:0] ui,				// From rasterizer/interp...
	//input wire [9:0] vi,
		
	output reg [20:0] vram_word_addr,	// 64-bit WORD address!
	input [63:0] vram_din,				// Full 64-bit data for texture reads.
	
	output reg [31:0] texel_argb	// Final texel ARGB 8888 output.
);

reg [9:0] ui;
reg [9:0] vi;

// ISP Instruction Word.
wire [2:0] depth_comp   = isp_inst[31:29];	// 0=Never, 1=Less, 2=Equal, 3=Less Or Equal, 4=Greater, 5=Not Equal, 6=Greater Or Equal, 7=Always.
wire [1:0] culling_mode = isp_inst[28:27];	// 0=No culling, 1=Cull if Small, 2= Cull if Neg, 3=Cull if Pos.
wire z_write_disable    = isp_inst[26];
wire texture            = isp_inst[25];
wire offset             = isp_inst[24];
wire gouraud            = isp_inst[23];
wire uv_16_bit          = isp_inst[22];
wire cache_bypass       = isp_inst[21];
wire dcalc_ctrl         = isp_inst[20];
// Bits [19:0] are reserved.

// ISP/TSP Instruction Word. Bit decode, for Opaque Modifier Volume or Translucent Modified Volume...
// (those prim types use the same culling_mode bits as above.)
wire [2:0] volume_inst = isp_inst[31:29];


// TSP Instruction Word...
wire tex_u_flip = tsp_inst[18];
wire tex_v_flip = tsp_inst[17];
wire tex_u_clamp = tsp_inst[16];
wire tex_v_clamp = tsp_inst[15];
wire [2:0] tex_u_size = tsp_inst[5:3];
wire [2:0] tex_v_size = tsp_inst[2:0];


// Texture Control Word...
wire mip_map = tcw_word[31];
wire vq_comp = tcw_word[30];
wire [2:0] pix_fmt = tcw_word[29:27];
wire scan_order = tcw_word[26];
wire stride_flag = tcw_word[25];
wire [5:0] pal_selector = tcw_word[26:21];		// Used for 4BPP or 8BPP palette textures.
wire [20:0] tex_word_addr = tcw_word[20:0];		// 64-bit WORD address!


// TEXT_CONTROL PVR reg. (not to be confused with TCW above!).
wire code_book_endian = TEXT_CONTROL[17];
wire index_endian   = TEXT_CONTROL[16];
wire [5:0] bank_bit = TEXT_CONTROL[12:8];
wire [4:0] stride   = TEXT_CONTROL[4:0];


// tex_u_size and tex_v_size (raw value vs actual)...
// 0 = 8
// 1 = 16
// 2 = 32
// 3 = 64
// 4 = 128
// 5 = 256
// 6 = 512
// 7 = 1024

wire [9:0] ui_masked = ui & ((8<<tex_u_size)-1);
wire [9:0] vi_masked = vi & ((8<<tex_v_size)-1);

reg [19:0] twop_full;
reg [19:0] twop;

wire [19:0] non_twid_addr = (ui_masked + (vi_masked * (8<<tex_u_size)));

reg [3:0] pal4_nib;
reg [7:0] pal8_byte;
reg [15:0] pix16;

wire [2:0] col_fmt = (is_pal4 || is_pal8) ? PAL_RAM_CTRL :	// PAL_RAM_CTRL[1:0] can only be 0: ARGB1555, 1: ARGB565, 2: ARGB4444, 3: ARGB8888.
											pix_fmt;		// pix_fmt[2:0] comes from tcw_word[29:27].

wire is_pal4 = (pix_fmt==3'd5);
wire is_pal8 = (pix_fmt==3'd6);
wire is_twid = (scan_order==1'b0);
wire is_mipmap = mip_map && scan_order==0;

reg [19:0] pix_addr_mux;
reg [19:0] pix_addr_shift;

always @(clock) begin
	twop_full <= {ui[9],vi[9],ui[8],vi[8],ui[7],vi[7],ui[6],vi[6],ui[5],vi[5],ui[4],vi[4],ui[3],vi[3],ui[2],vi[2],ui[1],vi[1],ui[0],vi[0]};

	if ((tex_u_size==tex_v_size) || (scan_order==0 && mip_map) ) begin	// Square texture. (VQ textures are always square, then tex_v_size is ignored).
		case (tex_u_size)	// Using tex_u_size here. Doesn't really matter which one we use?
			0: twop <= {14'b0, twop_full[5:0]};	// 8x8
			1: twop <= {12'b0, twop_full[7:0]};	// 16x16
			2: twop <= {10'b0, twop_full[9:0]};	// 32x32
			3: twop <= {8'b0, twop_full[11:0]};	// 64x64
			4: twop <= {6'b0, twop_full[13:0]};	// 128x128
			5: twop <= {4'b0, twop_full[15:0]};	// 256x256
			6: twop <= {2'b0, twop_full[17:0]};	// 512x512
			7: twop <= twop_full[19:0];			// 1024x1024
		endcase
	end
	else if (tex_u_size > tex_v_size) begin		// Rectangular texture. U size greater than V size.
		case (tex_v_size)
			0: twop <= {7'b0, ui_masked[9:3] ,twop_full[5:0]};	// V size 8 
			1: twop <= {6'b0, ui_masked[9:4] ,twop_full[7:0]};	// V size 16
			2: twop <= {5'b0, ui_masked[9:5] ,twop_full[9:0]};	// V size 32
			3: twop <= {4'b0, ui_masked[9:6] ,twop_full[11:0]};	// V size 64
			4: twop <= {3'b0, ui_masked[9:7] ,twop_full[13:0]};	// V size 128
			5: twop <= {2'b0, ui_masked[9:8] ,twop_full[15:0]};	// V size 256
			6: twop <= {1'b0, ui_masked[9]   ,twop_full[17:0]};	// V size 512
			7: twop <= twop_full[19:0];							// V size 1024
		endcase
	end
	else if (tex_v_size > tex_u_size) begin // Rectangular. V size greater than U size.
		case (tex_u_size)
			0: twop <= {7'b0, vi_masked[9:3] ,twop_full[5:0]};	// U size 8
			1: twop <= {6'b0, vi_masked[9:4] ,twop_full[7:0]};	// U size 16
			2: twop <= {5'b0, vi_masked[9:5] ,twop_full[9:0]};	// U size 32
			3: twop <= {4'b0, vi_masked[9:6] ,twop_full[11:0]};	// U size 64
			4: twop <= {3'b0, vi_masked[9:7] ,twop_full[13:0]};	// U size 128
			5: twop <= {2'b0, vi_masked[9:8] ,twop_full[15:0]};	// U size 256
			6: twop <= {1'b0, vi_masked[9]   ,twop_full[17:0]};	// U size 512
			7: twop <= twop_full[19:0];							// U size 1024
		endcase
	end

	//$display("ui: %d  vi: %d  tex_u_size (raw): %d  tex_v_size (raw): %d  twop 0x%08X  twop_full: 0x%08X", ui, vi, tex_u_size, tex_v_size, twop, twop_full);
end


reg [19:0] mipmap_byte_offs_vq;
reg [19:0] mipmap_byte_offs_norm;
//reg [19:0] mipmap_byte_offs_pal;	// This table is identical to norm[]>>1, so I ditched it. ElectronAsh.

reg [19:0] mipmap_byte_offs;


// Really wide wire here, but the max stride_full value is 34,359,738,368. lol
//
// I'm sure the real PVR doesn't pre-calc stride-full this way, but just uses the "stride" value directly. ElectronAsh.
//
wire [35:0] stride_full = 16<<stride;	// stride 0==invalid (default?). stride 1==32. stride 2=64. stride 3=96. stride 4=128, and so-on.

always @(*) begin
	// NOTE: Need to add 3 to tex_u_size in all of these LUTs, because the mipmap table starts at a 1x1 texture size, but tex_u_size==0 is the 8x8 texture size.
	case (tex_u_size+3)
		0:  mipmap_byte_offs_norm = 20'h6; 		// 1 texel
		1:  mipmap_byte_offs_norm = 20'h8; 		// 2 texels
		2:  mipmap_byte_offs_norm = 20'h10; 	// 4 texels
		3:  mipmap_byte_offs_norm = 20'h30; 	// 8 texels
		4:  mipmap_byte_offs_norm = 20'hb0; 	// 16 texels
		5:  mipmap_byte_offs_norm = 20'h2b0; 	// 32 texels
		6:  mipmap_byte_offs_norm = 20'hab0; 	// 64 texels
		7:  mipmap_byte_offs_norm = 20'h2ab0; 	// 128 texels
		8:  mipmap_byte_offs_norm = 20'haab0; 	// 256 texels
		9:  mipmap_byte_offs_norm = 20'h2aab0; 	// 512 texels
		10: mipmap_byte_offs_norm = 20'haaab0; 	// 1024 texels
	endcase

	case (tex_u_size+3)
		0:  mipmap_byte_offs_vq = 20'h0; 		// 1 texel
		1:  mipmap_byte_offs_vq = 20'h1; 		// 2 texels
		2:  mipmap_byte_offs_vq = 20'h2; 		// 4 texels
		3:  mipmap_byte_offs_vq = 20'h6; 		// 8 texels
		4:  mipmap_byte_offs_vq = 20'h16; 		// 16 texels
		5:  mipmap_byte_offs_vq = 20'h56; 		// 32 texels
		6:  mipmap_byte_offs_vq = 20'h156; 		// 64 texels
		7:  mipmap_byte_offs_vq = 20'h556; 		// 128 texels
		8:  mipmap_byte_offs_vq = 20'h1556; 	// 256 texels
		9:  mipmap_byte_offs_vq = 20'h5556; 	// 512 texels
		10: mipmap_byte_offs_vq = 20'h15556; 	// 1024 texels
	endcase

	mipmap_byte_offs = (!is_mipmap) ? 0 :
						  (vq_comp) ? (mipmap_byte_offs_vq) :
				(is_pal4 | is_pal8) ? (mipmap_byte_offs_norm>>1) :	// Note: The mipmap byte offset table for Palettes is just mipmap_byte_offs_norm[]>>1.
									   mipmap_byte_offs_norm;
	
	pix_addr_mux = (is_twid || is_pal4 || is_pal8 || vq_comp) ? (mipmap_byte_offs + twop) :
															    (mipmap_byte_offs + non_twid_addr);
																
	// Shift pix_addr_mux, based on the number of nibbles, bytes, or words to read from each 64-bit vram_din word.
	pix_addr_shift = (vq_comp) ? (pix_addr_mux>>5) :	// VQ     = 32 TEXELS per 64-bit word. (1 BYTE per four TEXELS).
					 (is_pal4) ? (pix_addr_mux>>4) :	// PAL4   = 16 TEXELS per 64-bit word. (4BPP).
					 (is_pal8) ? (pix_addr_mux>>3) :	// PAL8   = 8  TEXELS per 64-bit word. (8BPP).
								 (pix_addr_mux>>2);		// Uncomp = 4  TEXELS per 64-bit word (16BPP). (Twiddled or Non-Twiddled).
	
	vram_word_addr = tex_word_addr + pix_addr_shift;	// Generate 64-bit WORD address for VRAM texture reads.
	
	// Select the current texel from each part of the 64-bit word...
	//pal4_nib  = vram_din[ (pix_addr_mux[3:0]<<2) +:  4];
	//pal8_byte = vram_din[ (pix_addr_mux[2:0]<<3) +:  8];
	//pix16     = vram_din[ (pix_addr_mux[1:0]<<4) +: 16];
	
	case (pix_addr_mux[3:0])
		0:  pal4_nib = vram_din[03:00];
		1:  pal4_nib = vram_din[07:04];
		2:  pal4_nib = vram_din[11:08];
		3:  pal4_nib = vram_din[15:12];
		4:  pal4_nib = vram_din[19:16];
		5:  pal4_nib = vram_din[23:20];
		6:  pal4_nib = vram_din[27:24];
		7:  pal4_nib = vram_din[31:28];
		8:  pal4_nib = vram_din[35:32];
		9:  pal4_nib = vram_din[39:36];
		10: pal4_nib = vram_din[43:40];
		11: pal4_nib = vram_din[47:44];
		12: pal4_nib = vram_din[51:48];
		13: pal4_nib = vram_din[55:52];
		14: pal4_nib = vram_din[59:56];
		15: pal4_nib = vram_din[63:60];
	endcase

	case (pix_addr_mux[2:0])
		0:  pal4_nib = vram_din[07:00];
		1:  pal4_nib = vram_din[15:08];
		2:  pal4_nib = vram_din[23:16];
		3:  pal4_nib = vram_din[31:24];
		4:  pal4_nib = vram_din[39:32];
		5:  pal4_nib = vram_din[47:40];
		6:  pal4_nib = vram_din[55:48];
		7:  pal4_nib = vram_din[63:56];
	endcase

	case (pix_addr_mux[1:0])
		0: pix16 = vram_din[15:00];
		1: pix16 = vram_din[31:16];
		2: pix16 = vram_din[47:32];
		3: pix16 = vram_din[63:48];
	endcase

	// Convert all texture pixel formats to ARGB8888.
	// (fill missing lower colour bits using some of the upper colour bits.)
	case (pix_fmt)
		0: texel_argb = { {8{pix16[15]}}, pix16[14:10],pix16[14:12], pix16[9:5],pix16[9:7], pix16[4:0],pix16[4:2] };			// ARGB 1555 
		1: texel_argb = { pix16[15:11],pix16[15:13], pix16[10:5],pix16[10:9], pix16[4:0],pix16[4:2] };							//  RGB 565
		2: texel_argb = { pix16[15:12],pix16[15:12], pix16[11:8],pix16[11:8], pix16[7:4],pix16[7:4],  pix16[3:0],pix16[3:0] };	// ARGB 4444
		3: texel_argb = pix16;	// TODO. YUV422 (32-bit Y8 U8 Y8 V8).
		4: texel_argb = pix16;	// TODO. Bump Map (16-bit S8 R8).
		5: texel_argb = pal4_nib<<12;	// TODO. Palette look-up. PAL4 can be ARGB1555, RGB565, or even ARGB8888. Palette format read from PAL_RAM_CTRL[1:0].
		6: texel_argb = pal4_nib<<8;	// TODO. Palette look-up. PAL8 can be ARGB1555, RGB565, or even ARGB8888. Palette format read from PAL_RAM_CTRL[1:0].
		7: texel_argb = { {8{pix16[15]}}, pix16[14:10],pix16[14:12], pix16[9:5],pix16[9:7],	pix16[4:0],pix16[4:2] };			// Reserved (considered ARGB 1555).
	endcase
end


endmodule
