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
	output reg [31:0] isp_vram_dout,
	
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
	input signed [31:0] spany
);

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
wire stride = tcw_word[25];

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
					if (!strip_mask) begin	// Nothing to draw for this strip.
						strip_cnt <= 3'd0;	// Sanity check.
						array_cnt <= 4'd0;	// Sanity check.
						poly_drawn <= 1'b1;
					end
					else begin
						strip_cnt <= (strip_mask[0] + strip_mask[1] + strip_mask[2] + strip_mask[3] + strip_mask[4] + strip_mask[5]) + 1;
						array_cnt <= 4'd0;	// Sanity check.
						isp_vram_rd <= 1'b1;
						isp_state <= 8'd1;
					end
				end
				else if (opb_word[31:29]==3'b100 || opb_word[31:29]==3'b101) begin	// Triangle Arrays or Quads.
					if (opb_word[31:29]==3'b101) quad_done <= 1'b0;	// if a Quad.			
					strip_cnt <= 3'd0;
					array_cnt <= num_prims /*-1*/;
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
		1: begin isp_inst <= isp_vram_din; /*if (strip_cnt==7) strip_cnt <= 3'd0;*/ end
		2:  tsp_inst <= isp_vram_din;
		3:  begin tcw_word <= isp_vram_din; /*if (shadow) isp_state <= 8'd4; else*/ isp_state <= 8'd6; end	// Shadow still breaks everything?
		
		// if (shadow)...
		4:  tsp2_inst <= isp_vram_din;
		5:  tex2_cont <= isp_vram_din;
		
		6:  vert_a_x <= isp_vram_din;
		7:  vert_a_y <= isp_vram_din;
		8:  begin vert_a_z <= isp_vram_din; if (array_cnt) isp_state <= 8'd16; else if (!texture) isp_state <= 8'd11; end	// Skip U+V if not Textured.
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
		18: begin vert_b_z <= isp_vram_din; if (array_cnt) isp_state <= 8'd26; else if (!texture) isp_state <= 8'd21; end	// Skip UV if not Textured.
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
		28: begin vert_c_z <= isp_vram_din; if (array_cnt) isp_state <= 8'd46; else if (!texture) isp_state <= 8'd31; end	// Skip UV if not Textured.
		29: begin vert_c_u0 <= isp_vram_din; if (uv_16_bit) isp_state <= 8'd31; end	// Skip v0 if 16-bit UV. 
		30: vert_c_v0 <= isp_vram_din;
		31: begin
			vert_c_base_col_0 <= isp_vram_din;
			if (two_volume) isp_state <= 8'd32;
			else if (offset) isp_state <= 8'd35;
			else if (opb_word[31:29]==3'b101) isp_state <= 8'd36;	// If a Quad.
				else isp_state <= 8'd46;
		end
		
		// if Two-volume...
		32: vert_c_u1 <= isp_vram_din;
		33: vert_c_v1 <= isp_vram_din;
		34: begin vert_c_base_col_1 <= isp_vram_din; /*if (!offset) isp_state <= 8'd36; end*/
			if (opb_word[31:29]==3'b101) isp_state <= 8'd36;	// If a Quad.
			else isp_state <= 8'd46;
		end
		
		// if Offset colour...
		35: begin vert_c_off_col <= isp_vram_din;
			if (opb_word[31:29]==3'b101) isp_state <= 8'd36;	// If a Quad
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
		45: vert_d_off_col <= isp_vram_din;
		
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
			//if (opb_word[31:29]==3'b100 || opb_word[31:29]==3'b101) begin		// Triangle Array or Quad Array.
				if (array_cnt==4'd0) begin		// If Array is done...
					if (opb_word[31:29]==3'b101) begin	// Quad Array (maybe) done.
						if (!quad_done) begin	// Second half of Quad not done yet...
							/*
							vert_a_x <= vert_b_x;   vert_b_x <= vert_c_x;   vert_c_x <= vert_d_x;
							vert_a_y <= vert_b_y;   vert_b_y <= vert_c_y;   vert_c_y <= vert_d_y;
							vert_a_z <= vert_b_z;   vert_b_z <= vert_c_z;   vert_c_z <= vert_d_z;
							vert_a_u0 <= vert_b_u0; vert_b_u0 <= vert_c_u0; vert_c_u0 <= vert_d_u0;
							vert_a_v0 <= vert_b_v0; vert_b_v0 <= vert_c_v0; vert_c_v0 <= vert_d_v0;
							*/
							vert_a_x  <= vert_c_x;   vert_b_x <= vert_d_x;   vert_c_x <= vert_a_x;
							vert_a_y  <= vert_c_y;   vert_b_y <= vert_d_y;   vert_c_y <= vert_a_y;
							vert_a_z  <= vert_c_z;   vert_b_z <= vert_d_z;   vert_c_z <= vert_a_z;
							vert_a_u0 <= vert_c_u0; vert_b_u0 <= vert_d_u0; vert_c_u0 <= vert_a_u0;
							vert_a_v0 <= vert_c_v0; vert_b_v0 <= vert_d_v0; vert_c_v0 <= vert_a_v0;
							isp_entry_valid <= 1'b1;	// To tell the C code to latch the params again
							isp_state <= 8'd46;		// Draw the second half of the Quad.
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
			//end
		end

		48: begin				
			// Lazy clipping...
			//if (FX1[31]) FX1=0; if (FX2[31]) FX2=0; if (FX3[31]) FX3=0;
			//if (FY1[31]) FY1=0; if (FY2[31]) FY2=0; if (FY3[31]) FY3=0;
	
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
			
			// Lazy culling...
			if (FX1[31] || FY1[31] || FX2[31] || FY2[31] || FX3[31] || FY3[31]
				/*|| (FX1>>FRAC_BITS)>639 || (FX2>>FRAC_BITS)>639 || (FX3>>FRAC_BITS)>639
				|| (FY1>>FRAC_BITS)>479 || (FY2>>FRAC_BITS)>479 || (FY3>>FRAC_BITS)>479*/ ) begin
				poly_drawn <= 1'b1;
				isp_state <= 8'd0;
			end
			else begin
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
					if (inTriangle) begin
						isp_vram_addr <= ((y_ps * 640) + x_ps) << 2;
						isp_vram_dout <= {vert_c_base_col_0[31:24], vert_c_base_col_0[7:0], vert_c_base_col_0[15:8], vert_c_base_col_0[23:16]};	// ABGR, for sim display.
						//isp_vram_dout <= {8'hff, vert_c_base_col_0[7:0], vert_c_base_col_0[15:8], vert_c_base_col_0[23:16]};	// ABGR, Alpha boosted.
						isp_vram_wr <= 1'b1;
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

wire [7:0] vert_words = ((two_volume&shadow) ? ((skip*2)+3) : (skip+3)) /*+ offset*/;


wire [31:0] test_float = 32'h4212C0E0;	// 36.6883544921875

wire [7:0]  exp = test_float[30:23];
wire [22:0] man = test_float[22:00];

wire signed [31:0] fixed = (exp>127) ? {1'b1, man}<<(exp-127) :
									   {1'b1, man}>>(127-exp);

reg [11:0] x_ps;
reg [11:0] y_ps;

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
wire signed [47:0] mult7  = (FDX12 * (y_ps<<FRAC_BITS) ) >>FRAC_BITS;
wire signed [47:0] mult8  = (FDY12 * (x_ps<<FRAC_BITS) ) >>FRAC_BITS;

wire signed [47:0] mult9  = (FDX23 * (y_ps<<FRAC_BITS) ) >>FRAC_BITS;
wire signed [47:0] mult10 = (FDY23 * (x_ps<<FRAC_BITS) ) >>FRAC_BITS;

wire signed [47:0] mult11 = (FDX31 * (y_ps<<FRAC_BITS) ) >>FRAC_BITS;
wire signed [47:0] mult12 = (FDY31 * (x_ps<<FRAC_BITS) ) >>FRAC_BITS;

wire signed [31:0] Xhs12 = C1 + (mult7  - mult8 );
wire signed [31:0] Xhs23 = C2 + (mult9  - mult10);
wire signed [31:0] Xhs31 = C3 + (mult11 - mult12);

wire inTriangle = Xhs12 >= 0 && Xhs23 >= 0 && Xhs31 >= 0;


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


endmodule
