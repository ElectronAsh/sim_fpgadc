`timescale 1ns / 1ps
`default_nettype none


parameter FRAC_BITS = 8'd12;


module isp_parser (
	input clock,
	input reset_n,
	
	input [31:0] opb_word,
	
	input [2:0] type_cnt,
	
	input [23:0] poly_addr,
	input render_poly,
	
	output reg isp_vram_rd,
	output reg isp_vram_wr,
	output reg [23:0] isp_vram_addr_out,
	input [63:0] isp_vram_din,
	output reg [63:0] isp_vram_dout,
	
	output reg isp_entry_valid,
	
	output reg poly_drawn,
	
	input reg [5:0] tilex,
	input reg [5:0] tiley,
	
	input [31:0] TEXT_CONTROL,	// From TEXT_CONTROL reg.
	input  [1:0] PAL_RAM_CTRL,	// From PAL_RAM_CTRL reg, bits [1:0].
	
	input [15:0] pal_addr,
	input [31:0] pal_din,
	input pal_rd,
	input pal_wr,
	output [31:0] pal_dout
);

reg [23:0] isp_vram_addr;

assign isp_vram_addr_out = (tex_wait || isp_state==8'd49 || isp_state==8'd50) ? (vram_word_addr<<2) :	// Output texture WORD address as a BYTE address.
																				isp_vram_addr;			// Output ISP Parser BYTE address.

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
//
// XY verts are declared as signed here, but it doesn't seem to help with rendering, when neg_xy culling is disabled.
//
reg signed [31:0] vert_a_x;
reg signed [31:0] vert_a_y;
reg [31:0] vert_a_z;
reg [31:0] vert_a_u0;
reg [31:0] vert_a_v0;
reg [31:0] vert_a_u1;
reg [31:0] vert_a_v1;
reg [31:0] vert_a_base_col_0;
reg [31:0] vert_a_base_col_1;
reg [31:0] vert_a_off_col;

reg signed [31:0] vert_b_x;
reg signed [31:0] vert_b_y;
reg [31:0] vert_b_z;
reg [31:0] vert_b_u0;
reg [31:0] vert_b_v0;
reg [31:0] vert_b_u1;
reg [31:0] vert_b_v1;
reg [31:0] vert_b_base_col_0;
reg [31:0] vert_b_base_col_1;
reg [31:0] vert_b_off_col;

reg signed [31:0] vert_c_x;
reg signed [31:0] vert_c_y;
reg [31:0] vert_c_z;
reg [31:0] vert_c_u0;
reg [31:0] vert_c_v0;
reg [31:0] vert_c_u1;
reg [31:0] vert_c_v1;
reg [31:0] vert_c_base_col_0;
reg [31:0] vert_c_base_col_1;
reg [31:0] vert_c_off_col;

reg signed [31:0] vert_d_x;
reg signed [31:0] vert_d_y;
reg [31:0] vert_d_z;
reg [31:0] vert_d_u0;
reg [31:0] vert_d_v0;
reg [31:0] vert_d_u1;
reg [31:0] vert_d_v1;
reg [31:0] vert_d_base_col_0;
reg [31:0] vert_d_base_col_1;
reg [31:0] vert_d_off_col;

wire two_volume = 1'b0;	// TODO.

reg signed [31:0] vert_temp_x;
reg signed [31:0] vert_temp_y;
reg [31:0] vert_temp_z;
reg [31:0] vert_temp_u0;
reg [31:0] vert_temp_v0;
reg [31:0] vert_temp_base_col_0;
reg [31:0] vert_temp_base_col_1;
reg [31:0] vert_temp_off_col;


// Object List read state machine...
reg [7:0] isp_state;
reg [2:0] strip_cnt;
reg [3:0] array_cnt;

wire is_tri_strip  = !opb_word[31];
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
	read_codebook <= 1'b0;
end
else begin
	//isp_vram_rd <= 1'b0;
	isp_vram_wr <= 1'b0;
	
	isp_entry_valid <= 1'b0;
	poly_drawn <= 1'b0;
	
	read_codebook <= 1'b0;

	if (isp_state > 1) begin
		//if (isp_state != 8'd45 || isp_state != 8'd46 || isp_state != 8'd47 || isp_state != 8'd48 || isp_state != 8'd49 || isp_state != 8'd50) isp_state <= isp_state + 8'd1;
		if (!tex_wait && isp_state < 8'd47 && isp_state!=8'd4 && isp_state!=8'd5) isp_state <= isp_state + 8'd1;
		if (!tex_wait && isp_state > 8'd1  && isp_state!=8'd4 && isp_state!=8'd5 && isp_state < 8'd48) isp_vram_addr <= isp_vram_addr + 4;
	end

	case (isp_state)
		0: begin
			if (render_poly) begin
				isp_vram_addr <= poly_addr;
				strip_cnt <= 3'd0;
				array_cnt <= 4'd0;
				vert_d_x <= 32'd0;
				vert_d_y <= 32'd0;
				vert_d_z <= 32'd0;
				vert_d_u0 <= 32'd0;
				vert_d_v0 <= 32'd0;
				isp_state <= 8'd1;
			end
		end
		
		1: begin
			if (is_tri_strip) begin		// TriangleStrip.
				if (strip_mask==6'b000000) begin	// Nothing to draw for this strip.
					poly_drawn <= 1'b1;				// Tell the RA we're done.
					isp_state <= 8'd0;				// Go back to idle state.
				end
				else if (strip_cnt < 6) begin	// Check strip_mask bits 0 through 5...
					if (strip_mask[strip_cnt]) begin
						isp_vram_rd <= 1'b1;
						isp_vram_addr <= poly_addr;	// Always use the absolute start address of the poly. Will fetch ISP/TSP/TCW again, but then skip verts.
						isp_state <= 8'd2;	// Go to the next state if the current strip_mask bit is set.
					end
					else begin							// Current strip_mask bit was NOT set...
						strip_cnt <= strip_cnt + 6'd1;	// Increment to the next bit.
						//isp_state <= 8'd1;			// (Stay in the current state, to check the next bit.)
					end
				end
				else begin					// All strip_mask bits checked.
					poly_drawn <= 1'b1;		// Tell the RA we're done.
					isp_state <= 8'd0;		// Go back to idle state.
				end
			end
			else if (is_tri_array || is_quad_array) begin	// Triangle Array or Quad Array.
				quad_done <= 1'b0;							// Ready for drawing the first half of a Quad.			
				array_cnt <= num_prims;	// Shouldn't need a +1 here, because it will render the first triangle with array_cnt==0 anyway. ElectronAsh.
				isp_vram_rd <= 1'b1;
				isp_state <= 8'd2;
			end
			else begin
				poly_drawn <= 1'b1;	// No idea which prim type, so skip!
				isp_state <= 8'd0;
			end
		end
		
		2: isp_inst <= isp_vram_din;
		3: tsp_inst <= isp_vram_din;
		4: begin
			tcw_word <= isp_vram_din;
			if (isp_vram_din[30]) begin
				read_codebook <= 1'b1;	// Read VQ Code Book if TCW bit 30 is set.
				isp_state <= 8'd5;
			end
			else begin
				if (is_tri_strip) isp_vram_addr <= poly_addr + (3<<2) + ((vert_words*strip_cnt) << 2);	// Skip a vert, based on strip_cnt.
				else isp_vram_addr <= isp_vram_addr + 4;
				isp_state <= 8'd7;
			end
		end
		
		5: begin
			if (!read_codebook && !tex_wait) begin
				if (is_tri_strip) isp_vram_addr <= poly_addr + (3<<2) + ((vert_words*strip_cnt) << 2);	// Skip a vert, based on strip_cnt.
				else isp_vram_addr <= isp_vram_addr + 4;
				isp_state <= 8'd7;
			end
		end
		
		// if (shadow)...
		// Probably wrong? I think the shadow bit denotes when a poly can be affected by a Modifier Volume?) ElectronAsh.
		//5:  tsp2_inst <= isp_vram_din;
		//6:  tex2_cont <= isp_vram_din;
		
		7:  vert_a_x <= isp_vram_din;
		8:  vert_a_y <= isp_vram_din;
		9:  begin
			vert_a_z <= isp_vram_din;
			if (skip==0) isp_state <= 8'd17;
			else if (!texture) isp_state <= 8'd12;	// Triangle Strip (probably).
		end
		10:  begin
			if (uv_16_bit) begin	// Read U and V from the same VRAM word.
				vert_a_u0 <= {isp_vram_din[31:16],16'h0000};
				vert_a_v0 <= {isp_vram_din[15:00],16'h0000};
				isp_state <= 8'd12;	// Skip reading v0 from VRAM.
			end
			else vert_a_u0 <= isp_vram_din;
		end
		11: vert_a_v0 <= isp_vram_din;
		12: begin
			vert_a_base_col_0 <= isp_vram_din;
			if (two_volume) isp_state <= 8'd13;
			else if (offset) isp_state <= 8'd16;
			else isp_state <= 8'd17;
		end
		
		// if Two-volume...
		13: vert_a_u1 <= isp_vram_din;
		14: vert_a_v1 <= isp_vram_din;
		15: begin vert_a_base_col_1 <= isp_vram_din; if (!offset) isp_state <= 8'd17; end
		
		// if Offset colour.
		16: vert_a_off_col <= isp_vram_din;
		
		17: vert_b_x <= isp_vram_din;
		18: vert_b_y <= isp_vram_din;
		19: begin
			vert_b_z <= isp_vram_din;
			if (skip==0) isp_state <= 8'd27;
			else if (!texture) isp_state <= 8'd22;	// Triangle Strip (probably).
		end
		20: begin
			if (uv_16_bit) begin	// Read U and V from the same VRAM word.
				vert_b_u0 <= {isp_vram_din[31:16],16'h0000};
				vert_b_v0 <= {isp_vram_din[15:00],16'h0000};
				isp_state <= 8'd22;	// Skip reading v0 from VRAM.
			end
			else vert_b_u0 <= isp_vram_din;
		end
		21: vert_b_v0 <= isp_vram_din;
		22: begin
			vert_b_base_col_0 <= isp_vram_din;
			if (two_volume) isp_state <= 8'd23;
			else if (offset) isp_state <= 8'd26;
			else isp_state <= 8'd27;
		end
		
		// if Two-volume...
		23: vert_b_u1 <= isp_vram_din;
		24: vert_b_v1 <= isp_vram_din;
		25: begin vert_b_base_col_1 <= isp_vram_din; if (!offset) isp_state <= 8'd27; end
		
		// if Offset colour...
		26: vert_b_off_col <= isp_vram_din;			// if Offset colour.
		
		27: vert_c_x <= isp_vram_din;
		28: vert_c_y <= isp_vram_din;
		29: begin
			vert_c_z <= isp_vram_din;
			if (skip==0) begin
				if (is_quad_array) isp_state <= 8'd37;
				else isp_state <= 8'd47;
			end
			else if (!texture) isp_state <= 8'd32;	// Triangle Strip (probably).
		end
		30: begin
			if (uv_16_bit) begin	// Read U and V from the same VRAM word.
				vert_c_u0 <= {isp_vram_din[31:16],16'h0000};
				vert_c_v0 <= {isp_vram_din[15:00],16'h0000};
				isp_state <= 8'd32;	// Skip reading v0 from VRAM.
			end
			else vert_c_u0 <= isp_vram_din;
		end
		31: vert_c_v0 <= isp_vram_din;
		32: begin
			vert_c_base_col_0 <= isp_vram_din;
			if (two_volume) isp_state <= 8'd33;
			else if (offset) isp_state <= 8'd36;
			else if (is_quad_array) isp_state <= 8'd37;	// If a Quad.
				else isp_state <= 8'd47;
		end
		
		// if Two-volume...
		33: vert_c_u1 <= isp_vram_din;
		34: vert_c_v1 <= isp_vram_din;
		35: begin vert_c_base_col_1 <= isp_vram_din;
			if (offset) isp_state <= 8'd36;
			else isp_state <= 8'd47;
		end
		
		// if Offset colour...
		36: begin vert_c_off_col <= isp_vram_din;	// if Offset colour.
			if (is_quad_array) isp_state <= 8'd37;		// If a Quad
			else begin
				isp_state <= 8'd47;
			end
		end
		
		37: vert_d_x <= isp_vram_din;
		38: vert_d_y <= isp_vram_din;
		39: begin vert_d_z <= isp_vram_din;  if (!texture) isp_state <= 8'd42; end
		40: begin
			if (uv_16_bit) begin	// Read U and V from the same VRAM word.
				vert_d_u0 <= {isp_vram_din[31:16],16'h0000};
				vert_d_v0 <= {isp_vram_din[15:00],16'h0000};
				isp_state <= 8'd42;	// Skip reading v0 from VRAM.
			end
			else vert_d_u0 <= isp_vram_din;
		end
		41: vert_d_v0 <= isp_vram_din;
		42: begin
			vert_d_base_col_0 <= isp_vram_din;
			if (two_volume) isp_state <= 8'd43;
			else if (offset) isp_state <= 8'd46;
			else isp_state <= 8'd47;
		end
		
		// if Two-volume...
		43: vert_d_u1 <= isp_vram_din;
		44: vert_d_v1 <= isp_vram_din;
		45: begin vert_d_base_col_1 <= isp_vram_din; if (!offset) isp_state <= 8'd47; end
		
		// if Offset colour...
		46: vert_d_off_col <= isp_vram_din;				// if Offset colour.
		
		47: begin
			if (is_tri_strip && strip_cnt[0]) begin		// Swap verts A and B, for all ODD strip segments.
				vert_a_x  <= vert_b_x;
				vert_a_y  <= vert_b_y;
				vert_a_z  <= vert_b_z;
				vert_a_u0 <= vert_b_u0;
				vert_a_v0 <= vert_b_v0;
				vert_a_base_col_0 <= vert_b_base_col_0;
				vert_a_off_col <= vert_b_off_col;
			
				vert_b_x  <= vert_a_x;
				vert_b_y  <= vert_a_y;
				vert_b_z  <= vert_a_z;
				vert_b_u0 <= vert_a_u0;
				vert_b_v0 <= vert_a_v0;
				vert_b_base_col_0 <= vert_a_base_col_0;
				vert_b_off_col <= vert_a_off_col;
			end
			isp_entry_valid <= 1'b1;
			
			// Per-tile rendering.
			x_ps <= tilex<<5;
			y_ps <= tiley<<5;
			
			isp_state <= 8'd49;			// Draw the triangle!
		end
		
		48: begin
			if (is_tri_strip) begin			// Triangle Strip.
				strip_cnt <= strip_cnt + 6'd1;	// Increment to the next strip_mask bit.
				isp_state <= 8'd1;
			end
			else if (is_tri_array || is_quad_array) begin		// Triangle Array or Quad Array.
				if (array_cnt==4'd0) begin		// If Array is done...
					if (is_quad_array) begin	// Quad Array (maybe) done.
						if (!quad_done) begin	// Second half of Quad not done yet...
							// Swap some verts and UV stuff, for the second half of a Quad. (kludge!)
							vert_b_x <= vert_d_x;
							vert_b_y <= vert_d_y;
							//vert_b_z <= vert_d_z;
							vert_b_u0 <= vert_a_u0;
							vert_b_v0 <= vert_c_v0;
							isp_state <= 8'd47;			// Draw the second half of the Quad.
														// isp_entry_valid will tell the C code to latch the
														// params again, and convert to fixed-point.
							quad_done <= 1'b1;			// <- The next time we get to this state, we know the full Quad is drawn.
						end
						else begin
							poly_drawn <= 1'b1;	// Quad is done.
							isp_state <= 8'd0;
						end
					end
					else begin	// Triangle Array is done.
						poly_drawn <= 1'b1;
						isp_state <= 8'd0;
					end
				end
				else begin	// Triangle Array or Quad Array not done yet...
					array_cnt <= array_cnt - 3'd1;
					isp_vram_addr <= isp_vram_addr - 4;
					isp_state <= 8'd2;	// Jump back, to grab the next PRIM (including ISP/TSP/TCW).
				end
			end
			else begin	// Should never get to here??
				poly_drawn <= 1'b1;
				isp_state <= 8'd0;
			end
		end

		49: begin
			isp_vram_addr_last <= isp_vram_addr;
			
			// Half-edge constants (setup).
			//int C1 = FDY12 * FX1 - FDX12 * FY1;
			mult1 <= (FDY12_FIXED*FX1_FIXED)>>FRAC_BITS;
			mult2 <= (FDX12_FIXED*FY1_FIXED)>>FRAC_BITS;

			//int C2 = FDY23 * FX2 - FDX23 * FY2;
			mult3 <= (FDY23_FIXED*FX2_FIXED)>>FRAC_BITS;
			mult4 <= (FDX23_FIXED*FY2_FIXED)>>FRAC_BITS;

			//int C3 = FDY31 * FX3 - FDX31 * FY3;
			mult5 <= (FDY31_FIXED*FX3_FIXED)>>FRAC_BITS;
			mult6 <= (FDX31_FIXED*FY3_FIXED)>>FRAC_BITS;
			
			//int C4 = FDY41 * FX4 - FDX41 * FY4;
			mult7 <= (is_quad_array) ? (FDY41_FIXED*FX4_FIXED)>>FRAC_BITS : 1<<FRAC_BITS;
			mult8 <= (is_quad_array) ? (FDX41_FIXED*FY4_FIXED)>>FRAC_BITS : 1<<FRAC_BITS;
			
			isp_vram_addr <= (tilex<<5) + ((tiley<<5) * 640);	// Framebuffer write address.
			isp_vram_dout <= final_argb;						// ABGR, for sim display.
			if (inTriangle) isp_vram_wr <= 1'b1;
		
			isp_state <= isp_state + 8'd1;
		end

		50: begin
			isp_vram_addr <= x_ps + (y_ps * 640);	// Framebuffer write address.
			isp_vram_dout <= final_argb;			// ABGR, for sim display.
			if (y_ps < (tiley<<5)+32) begin
				if (x_ps == (tilex<<5)+32) begin
					x_ps <= (tilex<<5);
					y_ps <= y_ps + 12'd1;
					isp_state <= 8'd51;		// Had to add an extra clock tick, to allow the VRAM address and texture stuff to update.
											// (fixed the thin vertical lines on the renders. ElectronAsh).
				end
				else begin
					if (inTriangle) isp_vram_wr <= 1'b1;
					x_ps <= x_ps + 12'd1;
				end
			end
			else begin
				isp_vram_addr <= isp_vram_addr_last;
				isp_state <= 8'd48;
			end
		end
		
		51: begin
			isp_state <= 8'd50;
		end

		default: ;
	endcase
end

wire [7:0] vert_words = (two_volume&shadow) ? ((skip*2)+3) : (skip+3);


wire signed [63:0] f_area = ((FX1_FIXED-FX3_FIXED) * (FY2_FIXED-FY3_FIXED)) - ((FY1_FIXED-FY3_FIXED) * (FX2_FIXED-FX3_FIXED));
wire sgn = (f_area<=0);

// Vertex deltas...
wire signed [47:0] FDX12_FIXED = (sgn) ? (FX1_FIXED - FX2_FIXED) : (FX2_FIXED - FX1_FIXED);
wire signed [47:0] FDX23_FIXED = (sgn) ? (FX2_FIXED - FX3_FIXED) : (FX3_FIXED - FX2_FIXED);
wire signed [47:0] FDX31_FIXED = (is_quad_array) ? sgn ? (FX3_FIXED - FX4_FIXED) : (FX4_FIXED - FX3_FIXED) : sgn ? (FX3_FIXED - FX1_FIXED) : (FX1_FIXED - FX3_FIXED);
wire signed [47:0] FDX41_FIXED = (is_quad_array) ? sgn ? (FX4_FIXED - FX1_FIXED) : (FX1_FIXED - FX4_FIXED) : 0;

wire signed [47:0] FDY12_FIXED = sgn ? (FY1_FIXED - FY2_FIXED) : (FY2_FIXED - FY1_FIXED);
wire signed [47:0] FDY23_FIXED = sgn ? (FY2_FIXED - FY3_FIXED) : (FY3_FIXED - FY2_FIXED);
wire signed [47:0] FDY31_FIXED = (is_quad_array) ? sgn ? (FY3_FIXED - FY4_FIXED) : (FY4_FIXED - FY3_FIXED) : sgn ? (FY3_FIXED - FY1_FIXED) : (FY1_FIXED - FY3_FIXED);
wire signed [47:0] FDY41_FIXED = (is_quad_array) ? sgn ? (FY4_FIXED - FY1_FIXED) : (FY1_FIXED - FY4_FIXED) : 0;


// Vertex float-to-fixed conversion...
wire signed [47:0] FX1_FIXED;
float_to_fixed  float_x1 (
	.float_in( vert_a_x ),	// input [31:0]  float_in
	.fixed( FX1_FIXED )		// output [31:0]  fixed
);
wire signed [47:0] FY1_FIXED;
float_to_fixed  float_y1 (
	.float_in( vert_a_y ),	// input [31:0]  float_in
	.fixed( FY1_FIXED )		// output [31:0]  fixed
);
wire signed [47:0] FZ1_FIXED;
float_to_fixed  float_z1 (
	.float_in( vert_a_z ),	// input [31:0]  float_in
	.fixed( FZ1_FIXED )		// output [31:0]  fixed
);
wire signed [47:0] FU1_FIXED;
float_to_fixed  float_u1 (
	.float_in( vert_a_u0 ),	// input [31:0]  float_in
	.fixed( FU1_FIXED )		// output [31:0]  fixed
);
wire signed [47:0] FV1_FIXED;
float_to_fixed  float_v1 (
	.float_in( vert_a_v0 ),	// input [31:0]  float_in
	.fixed( FV1_FIXED )		// output [31:0]  fixed
);

wire signed [47:0] FX2_FIXED;
float_to_fixed  float_x2 (
	.float_in( vert_b_x ),	// input [31:0]  float_in
	.fixed( FX2_FIXED )		// output [31:0]  fixed
);
wire signed [47:0] FY2_FIXED;
float_to_fixed  float_y2 (
	.float_in( vert_b_y ),	// input [31:0]  float_in
	.fixed( FY2_FIXED )		// output [31:0]  fixed
);
wire signed [47:0] FZ2_FIXED;
float_to_fixed  float_z2 (
	.float_in( vert_b_z ),	// input [31:0]  float_in
	.fixed( FZ2_FIXED )		// output [31:0]  fixed
);
wire signed [47:0] FU2_FIXED;
float_to_fixed  float_u2 (
	.float_in( vert_b_u0 ),	// input [31:0]  float_in
	.fixed( FU2_FIXED )		// output [31:0]  fixed
);
wire signed [47:0] FV2_FIXED;
float_to_fixed  float_v2 (
	.float_in( vert_b_v0 ),	// input [31:0]  float_in
	.fixed( FV2_FIXED )		// output [31:0]  fixed
);

wire signed [47:0] FX3_FIXED;
float_to_fixed  float_x3 (
	.float_in( vert_c_x ),	// input [31:0]  float_in
	.fixed( FX3_FIXED )		// output [31:0]  fixed
);
wire signed [47:0] FY3_FIXED;
float_to_fixed  float_y3 (
	.float_in( vert_c_y ),	// input [31:0]  float_in
	.fixed( FY3_FIXED )		// output [31:0]  fixed
);
wire signed [47:0] FZ3_FIXED;
float_to_fixed  float_z3 (
	.float_in( vert_c_z ),	// input [31:0]  float_in
	.fixed( FZ3_FIXED )		// output [31:0]  fixed
);
wire signed [47:0] FU3_FIXED;
float_to_fixed  float_u3 (
	.float_in( vert_c_u0 ),	// input [31:0]  float_in
	.fixed( FU3_FIXED )		// output [31:0]  fixed
);
wire signed [47:0] FV3_FIXED;
float_to_fixed  float_v3 (
	.float_in( vert_c_v0 ),	// input [31:0]  float_in
	.fixed( FV3_FIXED )		// output [31:0]  fixed
);

wire signed [47:0] FX4_FIXED;
float_to_fixed  float_x4 (
	.float_in( vert_d_x ),	// input [31:0]  float_in
	.fixed( FX4_FIXED )		// output [31:0]  fixed
);
wire signed [47:0] FY4_FIXED;
float_to_fixed  float_y4 (
	.float_in( vert_d_y ),	// input [31:0]  float_in
	.fixed( FY4_FIXED )		// output [31:0]  fixed
);


//reg signed [31:0] x_ps;
//reg signed [31:0] y_ps;
reg [11:0] x_ps;
reg [11:0] y_ps;

// Half-edge constants
//int C1 = FDY12 * FX1 - FDX12 * FY1;
reg signed [63:0] mult1;
reg signed [63:0] mult2;
wire signed [63:0] C1 = (mult1 - mult2);

//int C2 = FDY23 * FX2 - FDX23 * FY2;
reg signed [63:0] mult3;
reg signed [63:0] mult4;
wire signed [63:0] C2 = (mult3 - mult4);

//int C3 = FDY31 * FX3 - FDX31 * FY3;
reg signed [63:0] mult5;
reg signed [63:0] mult6;
wire signed [63:0] C3 = (mult5 - mult6);

//int C4 = FDY41 * FX4 - FDX41 * FY4;
reg signed [63:0] mult7;
reg signed [63:0] mult8;
wire signed [63:0] C4 = (is_quad_array) ? (mult7 - mult8) : 1;


//int Xhs12 = C1 + MUL_PREC(FDX12, y_ps<<FRAC_BITS, FRAC_BITS) - MUL_PREC(FDY12, x_ps<<FRAC_BITS, FRAC_BITS);
//int Xhs23 = C2 + MUL_PREC(FDX23, y_ps<<FRAC_BITS, FRAC_BITS) - MUL_PREC(FDY23, x_ps<<FRAC_BITS, FRAC_BITS);
//int Xhs31 = C3 + MUL_PREC(FDX31, y_ps<<FRAC_BITS, FRAC_BITS) - MUL_PREC(FDY31, x_ps<<FRAC_BITS, FRAC_BITS);

// Original code. Don't need the shifts, because reasons. lol
// ie. no point shifting y_ps up to the decimal point, only to shift the result back down again after.
//
//wire signed [127:0] mult9  = (FDX12 * (y_ps<<FRAC_BITS) ) >>FRAC_BITS;
//wire signed [127:0] mult10 = (FDY12 * (x_ps<<FRAC_BITS) ) >>FRAC_BITS;
//wire signed [127:0] Xhs12  = C1 + (mult9 - mult10);

wire signed [63:0] mult9  = FDX12_FIXED * y_ps;
wire signed [63:0] mult10 = FDY12_FIXED * x_ps;
wire signed [47:0] Xhs12  = C1 + (mult9 - mult10);

wire signed [63:0] mult11 = FDX23_FIXED * y_ps;
wire signed [63:0] mult12 = FDY23_FIXED * x_ps;
wire signed [47:0] Xhs23  = C2 + (mult11 - mult12);

wire signed [63:0] mult13 = FDX31_FIXED * y_ps;
wire signed [63:0] mult14 = FDY31_FIXED * x_ps;
wire signed [47:0] Xhs31  = C3 + (mult13 - mult14);

wire signed [63:0] mult15 = FDX41_FIXED * y_ps;
wire signed [63:0] mult16 = FDY41_FIXED * x_ps;
wire signed [47:0] Xhs41  = C4 + (mult15 - mult16);

wire inTriangle = !Xhs12[47] && !Xhs23[47] && !Xhs31[47] && !Xhs41[47];


// Z.Setup(x1,x2,x3, y1,y2,y3, z1,z2,z3);
//
interp  interp_inst_z (
	.clock( clock ),			// input  clock
	.setup( isp_entry_valid ),	// input  setup
	
	.FRAC_BITS( FRAC_BITS ),	// input [7:0] FRAC_BITS

	.FX1( FX1_FIXED ),		// input signed [31:0] x1
	.FX2( FX2_FIXED ),		// input signed [31:0] x2
	.FX3( FX3_FIXED ),		// input signed [31:0] x3
	
	.FY1( FY1_FIXED ),		// input signed [31:0] y1
	.FY2( FY2_FIXED ),		// input signed [31:0] y2
	.FY3( FY3_FIXED ),		// input signed [31:0] y3
	
	.FZ1( FZ1_FIXED ),		// input signed [31:0] z1
	.FZ2( FZ2_FIXED ),		// input signed [31:0] z2
	.FZ3( FZ3_FIXED ),		// input signed [31:0] z3
	
	.x_ps( x_ps ),		// input signed [11:0] x_ps
	.y_ps( y_ps ),		// input signed [11:0] y_ps
	
	.interp( IP_Z )	// output signed [31:0]  interp
);
wire signed [31:0] IP_Z;


// int w = tex_u_size_full-1;
// U.Setup(x1,x2,x3, y1,y2,y3, u1*w*z1, u2*w*z2, u3*w*z3);
//

wire signed [31:0] tex_width = (8<<tex_u_size)+1;
wire signed [63:0] u1_mult_width = (FU1_FIXED * tex_width) /(1<<FRAC_BITS);
wire signed [63:0] u2_mult_width = (FU2_FIXED * tex_width) /(1<<FRAC_BITS);
wire signed [63:0] u3_mult_width = (FU3_FIXED * tex_width) /(1<<FRAC_BITS);

interp  interp_inst_u (
	.clock( clock ),			// input  clock
	.setup( isp_entry_valid ),	// input  setup
	
	.FRAC_BITS( FRAC_BITS ),	// input [7:0] FRAC_BITS

	.FX1( FX1_FIXED ),		// input signed [31:0] x1
	.FX2( FX2_FIXED ),		// input signed [31:0] x2
	.FX3( FX3_FIXED ),		// input signed [31:0] x3
	
	.FY1( FY1_FIXED ),		// input signed [31:0] y1
	.FY2( FY2_FIXED ),		// input signed [31:0] y2
	.FY3( FY3_FIXED ),		// input signed [31:0] y3
	
	.FZ1( (u1_mult_width * FZ1_FIXED) ),	// input signed [31:0] z1
	.FZ2( (u2_mult_width * FZ2_FIXED) ),	// input signed [31:0] z2
	.FZ3( (u3_mult_width * FZ3_FIXED) ),	// input signed [31:0] z3
	
	.x_ps( x_ps ),		// input signed [11:0] x_ps
	.y_ps( y_ps ),		// input signed [11:0] y_ps
	
	.interp( IP_U )	// output signed [31:0]  interp
);
wire signed [31:0] IP_U;


// int h = tex_v_size_full-1;
// V.Setup(x1,x2,x3, y1,y2,y3, v1*h*z1, v2*h*z2, v3*h*z3);
//
wire signed [31:0] tex_height = (8<<tex_v_size)+1;
wire signed [63:0] v1_mult_height = (FV1_FIXED * tex_height) /(1<<FRAC_BITS);
wire signed [63:0] v2_mult_height = (FV2_FIXED * tex_height) /(1<<FRAC_BITS);
wire signed [63:0] v3_mult_height = (FV3_FIXED * tex_height) /(1<<FRAC_BITS);

interp  interp_inst_v (
	.clock( clock ),			// input  clock
	.setup( isp_entry_valid ),	// input  setup
	
	.FRAC_BITS( FRAC_BITS ),	// input [7:0] FRAC_BITS

	.FX1( FX1_FIXED ),		// input signed [31:0] x1
	.FX2( FX2_FIXED ),		// input signed [31:0] x2
	.FX3( FX3_FIXED ),		// input signed [31:0] x3
	
	.FY1( FY1_FIXED ),		// input signed [31:0] y1
	.FY2( FY2_FIXED ),		// input signed [31:0] y2
	.FY3( FY3_FIXED ),		// input signed [31:0] y3
	
	.FZ1( (v1_mult_height * FZ1_FIXED) ),	// input signed [31:0] z1
	.FZ2( (v2_mult_height * FZ2_FIXED) ),	// input signed [31:0] z2
	.FZ3( (v3_mult_height * FZ3_FIXED) ),	// input signed [31:0] z3
	
	.x_ps( x_ps ),		// input signed [11:0] x_ps
	.y_ps( y_ps ),		// input signed [11:0] y_ps
	
	.interp( IP_V )	// output signed [31:0]  interp
);
wire signed [31:0] IP_V;


wire signed [31:0] u_div_z = IP_U / IP_Z;
wire signed [31:0] v_div_z = IP_V / IP_Z;

texture_address  texture_address_inst (
	.clock( clock ),
	.reset_n( reset_n ),
	
	.isp_inst( isp_inst ),	// input [31:0]  isp_inst.
	.tsp_inst( tsp_inst ),	// input [31:0]  tsp_inst.
	.tcw_word( tcw_word ),	// input [31:0]  tcw_word.
	
	.TEXT_CONTROL( TEXT_CONTROL ),	// input [31:0]  TEXT_CONTROL.

	.PAL_RAM_CTRL( PAL_RAM_CTRL ),	// input from PAL_RAM_CTRL, bits [1:0].		
	.pal_addr( pal_addr ),		// input [15:0]  pal_addr
	.pal_din( pal_din ),		// input [31:0]  pal_din
	.pal_rd( pal_rd ),			// input  pal_rd
	.pal_wr( pal_wr ),			// input  pal_wr
	.pal_dout( pal_dout ),		// output [31:0]  pal_dout
	
	.read_codebook( read_codebook ),	// input  read_codebook
	.tex_wait( tex_wait ),				// output  tex_wait
		
	//.ui( sim_ui ),						// input [9:0]  ui. From rasterizer/interp...
	//.vi( sim_vi ),						// input [9:0]  ui.
	
	.ui( u_div_z ),
	.vi( v_div_z ),
	
	.vram_word_addr( vram_word_addr ),	// output [20:0]  vram_word_addr. 64-bit WORD address!
	.vram_din( isp_vram_din ),			// input [63:0]  vram_din. Full 64-bit data for texture reads.
	
	.base_argb( vert_c_base_col_0 ),	// input [31:0]  base_argb.  Flat-shading colour input. (will also do Gouraud eventually).
	.offs_argb( vert_c_off_col ),		// input [31:0]  offs_argb.  Offset colour input.
	
	.texel_argb( texel_argb ),			// output [31:0]  texel_argb. Texel ARGB 8888 output.
	.final_argb( final_argb )			// output [31:0]  final_argb. Final blended ARGB 8888 output.
);

reg read_codebook;
wire tex_wait;

reg [9:0] sim_ui;
reg [9:0] sim_vi;

wire [20:0] vram_word_addr;

wire [31:0] texel_argb;
wire [31:0] final_argb;

/*
//wire signed [31:0] test_float = 32'h4212C0E0;    // 36.6883544921875
//wire signed [31:0] test_float = 32'hC212C0E0;    // -36.6883544921875
//wire [31:0] test_float = 32'h458dc582;	// 4536.6884765625
//wire [31:0] test_float = 32'h486ece2c;	// 244536.6875
//wire [31:0] test_float = 32'hc86ece2c;	// -244536.6875
//wire [31:0] test_float = 32'h3f5d9c58;	// 0.8656668663
//wire [31:0] test_float = 32'h00000000;	// 00000000
//wire [31:0] test_float = 32'h80000000;	// -0
//wire signed [31:0] test_float = fp_x1;
wire signed [31:0] test_float = vert_a_x;
wire [7:0]  exp = test_float[30:23];
wire [22:0] man = test_float[22:00];

wire [63:0] float_shift = (exp>127) ? {1'b1, man}<<( (exp-127)) :	// Exponent is positive.
									  {1'b1, man}>>( (127-exp));	// Exponent is negative.

wire [30:0] fixed_new = float_shift>>((23-FRAC_BITS));

wire signed [31:0] test_fixed = {test_float[31], fixed_new[30:0]};
*/

endmodule


module float_to_fixed (
	input wire signed [31:0] float_in,
	output wire signed [47:0] fixed
);
wire float_sign = float_in[31];
wire [7:0]  exp = float_in[30:23];	// Sign bit not included here.
//wire [22:0] man = float_in[22:00];
wire [47:0] man = {1'b1, float_in[22:00], 8'h00};	// Prepend the implied 1.
													// Shift the Mantissa left, to leave more fractional bits for the shift below. (maybe not needed?)

wire [47:0] float_shifted = (exp>127) ? man<<(exp-127) :	// Exponent is positive.
										man>>(127-exp);		// Exponent is negative.
										 
wire [46:0] new_fixed = float_shifted>>((23-FRAC_BITS) + 8);	// Sign bit not included here.

assign fixed = float_in[31] ? {1'b1,-new_fixed[46:0]} : {1'b0,new_fixed[46:0]};	// Invert the lower bits when the Sign bit is set.
																				// (tip from SKMP, because float values are essentially sign-magnitude.)
endmodule


module texture_address (
	input clock,
	input reset_n,
	
	input [31:0] isp_inst,
	input [31:0] tsp_inst,
	input [31:0] tcw_word,
	
	input [1:0] PAL_RAM_CTRL,	// From PAL_RAM_CTRL[1:0].
	input [31:0] TEXT_CONTROL,	// From TEXT_CONTROL reg.
	
	input [15:0] pal_addr,
	input [31:0] pal_din,
	input pal_rd,
	input pal_wr,
	output [31:0] pal_dout,
	
	input read_codebook,
	output reg tex_wait,
		
	input wire [9:0] ui,				// From rasterizer/interp...
	input wire [9:0] vi,
		
	output reg [20:0] vram_word_addr,	// 64-bit WORD address!
	input [63:0] vram_din,				// Full 64-bit data for texture reads.
	
	input [31:0] base_argb,				// Flat-shading colour input. (will also do Gouraud eventually).
	input [31:0] offs_argb,				// Offset colour input.
	
	output reg [31:0] texel_argb,		// Texel ARGB 8888 output.
	output reg [31:0] final_argb		// Final blended ARGB 8888 output.
);

//reg [9:0] ui;
//reg [9:0] vi;

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
wire [1:0] shade_inst = tsp_inst[7:6];
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
wire index_endian     = TEXT_CONTROL[16];
wire [5:0] bank_bit   = TEXT_CONTROL[12:8];
wire [4:0] stride     = TEXT_CONTROL[4:0];


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

reg [19:0] twop_full = {ui[9],vi[9],ui[8],vi[8],ui[7],vi[7],ui[6],vi[6],ui[5],vi[5],ui[4],vi[4],ui[3],vi[3],ui[2],vi[2],ui[1],vi[1],ui[0],vi[0]};
reg [19:0] twop;

wire [19:0] non_twid_addr = (ui_masked + (vi_masked * (8<<tex_u_size)));

reg [3:0] pal4_nib;
reg [7:0] pal8_byte;
reg [7:0] vq_index;
reg [15:0] pix16;

wire is_pal4 = (pix_fmt==3'd5);
wire is_pal8 = (pix_fmt==3'd6);
wire is_twid = (scan_order==1'b0);
wire is_mipmap = mip_map && scan_order==0;

reg [19:0] twop_or_not;
reg [19:0] texel_word_offs;

always @(*) begin
	twop_full = {ui[9],vi[9],ui[8],vi[8],ui[7],vi[7],ui[6],vi[6],ui[5],vi[5],ui[4],vi[4],ui[3],vi[3],ui[2],vi[2],ui[1],vi[1],ui[0],vi[0]};

	if ((tex_u_size==tex_v_size) || (is_twid && mip_map) ) begin	// Square texture. (VQ textures are always square, then tex_v_size is ignored).
		case (tex_u_size)	// Using tex_u_size here. Doesn't really matter which one we use?
			0: twop = {14'b0, twop_full[5:0]};	// 8x8
			1: twop = {12'b0, twop_full[7:0]};	// 16x16
			2: twop = {10'b0, twop_full[9:0]};	// 32x32
			3: twop = {8'b0, twop_full[11:0]};	// 64x64
			4: twop = {6'b0, twop_full[13:0]};	// 128x128
			5: twop = {4'b0, twop_full[15:0]};	// 256x256
			6: twop = {2'b0, twop_full[17:0]};	// 512x512
			7: twop = twop_full[19:0];			// 1024x1024
		endcase
	end
	else if (tex_u_size > tex_v_size) begin		// Rectangular texture. U size greater than V size.
		case (tex_v_size)
			0: twop = {7'b0, ui_masked[9:3] ,twop_full[5:0]};	// V size 8 
			1: twop = {6'b0, ui_masked[9:4] ,twop_full[7:0]};	// V size 16
			2: twop = {5'b0, ui_masked[9:5] ,twop_full[9:0]};	// V size 32
			3: twop = {4'b0, ui_masked[9:6] ,twop_full[11:0]};	// V size 64
			4: twop = {3'b0, ui_masked[9:7] ,twop_full[13:0]};	// V size 128
			5: twop = {2'b0, ui_masked[9:8] ,twop_full[15:0]};	// V size 256
			6: twop = {1'b0, ui_masked[9]   ,twop_full[17:0]};	// V size 512
			7: twop = twop_full[19:0];							// V size 1024
		endcase
	end
	else if (tex_v_size > tex_u_size) begin // Rectangular. V size greater than U size.
		case (tex_u_size)
			0: twop = {7'b0, vi_masked[9:3] ,twop_full[5:0]};	// U size 8
			1: twop = {6'b0, vi_masked[9:4] ,twop_full[7:0]};	// U size 16
			2: twop = {5'b0, vi_masked[9:5] ,twop_full[9:0]};	// U size 32
			3: twop = {4'b0, vi_masked[9:6] ,twop_full[11:0]};	// U size 64
			4: twop = {3'b0, vi_masked[9:7] ,twop_full[13:0]};	// U size 128
			5: twop = {2'b0, vi_masked[9:8] ,twop_full[15:0]};	// U size 256
			6: twop = {1'b0, vi_masked[9]   ,twop_full[17:0]};	// U size 512
			7: twop = twop_full[19:0];							// U size 1024
		endcase
	end

	//$display("ui: %d  vi: %d  tex_u_size (raw): %d  tex_v_size (raw): %d  twop 0x%08X  twop_full: 0x%08X", ui, vi, tex_u_size, tex_v_size, twop, twop_full);
end


reg [19:0] mipmap_byte_offs_vq;
reg [19:0] mipmap_byte_offs_norm;
//reg [19:0] mipmap_byte_offs_pal;	// The palette mipmap offset table is just norm[]>>1, so I ditched the table.

reg [19:0] mipmap_byte_offs;

// Really wide wire here, but the max stride_full value is 34,359,738,368. lol
//
// I'm sure the real PVR doesn't pre-calc stride-full this way, but just uses the "stride" value directly. ElectronAsh.
//
//wire [35:0] stride_full = 16<<stride;	// stride 0==invalid (default?). stride 1=32. stride 2=64. stride 3=96. stride 4=128, and so-on.

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

	// mipmap table mux (or zero offset, for non-mipmap)...
	mipmap_byte_offs = (!is_mipmap) ? 0 :
						  (vq_comp) ? mipmap_byte_offs_vq :
				(is_pal4 | is_pal8) ? (mipmap_byte_offs_norm>>1) : // Note: The mipmap byte offset table for Palettes is just mipmap_byte_offs_norm[]>>1.
									  mipmap_byte_offs_norm;
	
	// Twiddled or Non-Twiddled).
	twop_or_not = (vq_comp) ? ((12'd2048 + mipmap_byte_offs)<<2) + twop :
		(is_pal4 || is_pal8 || is_twid) ? (mipmap_byte_offs>>1) + twop :		// I haven't figured out why this needs the >>1 yet. Oh well.
										   mipmap_byte_offs + non_twid_addr;
													 
	// Shift twop_or_not, based on the number of nibbles, bytes, or words to read from each 64-bit vram_din word.
	texel_word_offs = (vq_comp) ? (twop_or_not)>>5 : // VQ = 32 TEXELS per 64-bit VRAM word. (1 BYTE per FOUR Texels).
					  (is_pal4) ? (twop_or_not)>>4 : // PAL4   = 16 TEXELS per 64-bit word. (4BPP).
					  (is_pal8) ? (twop_or_not)>>3 : // PAL8   = 8  TEXELS per 64-bit word. (8BPP).
								  (twop_or_not)>>2;	 // Uncomp = 4  TEXELS per 64-bit word (16BPP).
	
	// Generate the 64-bit VRAM WORD address using either the Code Book READ index, or texel_word_offs;
	vram_word_addr = tex_word_addr + ((tex_wait) ? cb_word_index : texel_word_offs);
	
	// Select the current texel from each part of the 64-bit word...
	//pal4_nib  = vram_din[ (twop_or_not[3:0]<<2) +:  4];
	//pal8_byte = vram_din[ (twop_or_not[2:0]<<3) +:  8];
	//pix16     = vram_din[ (twop_or_not[1:0]<<4) +: 16];
	
	case (twop_or_not[3:0])
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

	case (twop_or_not[2:0])
		0:  pal8_byte = vram_din[07:00];
		1:  pal8_byte = vram_din[15:08];
		2:  pal8_byte = vram_din[23:16];
		3:  pal8_byte = vram_din[31:24];
		4:  pal8_byte = vram_din[39:32];
		5:  pal8_byte = vram_din[47:40];
		6:  pal8_byte = vram_din[55:48];
		7:  pal8_byte = vram_din[63:56];
	endcase
	
	// VQ has FOUR TEXELS per Index Byte.
	// 32 TEXELS per 64-bit VRAM word.
	case (twop_or_not[4:2])
		0:  vq_index = vram_din[07:00];
		1:  vq_index = vram_din[15:08];
		2:  vq_index = vram_din[23:16];
		3:  vq_index = vram_din[31:24];
		4:  vq_index = vram_din[39:32];
		5:  vq_index = vram_din[47:40];
		6:  vq_index = vram_din[55:48];
		7:  vq_index = vram_din[63:56];
	endcase

	// Read 16BPP from either the Code Book for VQ, or direct from VRAM.
	case (twop_or_not[1:0])
		0: pix16 = (vq_comp) ? code_book[vq_index][15:00] : vram_din[15:00];
		1: pix16 = (vq_comp) ? code_book[vq_index][31:16] : vram_din[31:16];
		2: pix16 = (vq_comp) ? code_book[vq_index][47:32] : vram_din[47:32];
		3: pix16 = (vq_comp) ? code_book[vq_index][63:48] : vram_din[63:48];
	endcase
	
	if (pix_fmt==5) pal_raw = pal_ram[ {pal_selector[5:0], pal4_nib}  ];
	if (pix_fmt==6) pal_raw = pal_ram[ {pal_selector[5:4], pal8_byte} ];	
	
	case (PAL_RAM_CTRL)
		0: pal_final = { {8{pal_raw[15]}},    pal_raw[14:10],pal_raw[14:12], pal_raw[09:05],pal_raw[09:07], pal_raw[04:00],pal_raw[04:02] };// ARGB 1555
		1: pal_final = {            8'hff,    pal_raw[15:11],pal_raw[15:13], pal_raw[10:05],pal_raw[10:09], pal_raw[04:00],pal_raw[04:02] };//  RGB 565
		2: pal_final = { {2{pal_raw[15:12]}}, {2{pal_raw[11:08]}},           {2{pal_raw[07:04]}},           {2{pal_raw[03:00]}} };			// ARGB 4444
		3: pal_final = pal_raw;		// ARGB 8888. (the full 32-bit wide Palette entry is used directly).
	endcase
	
	// Convert all texture pixel formats to ARGB8888.
	// (fill missing lower colour bits using some of the upper colour bits.)
	case (pix_fmt)
		0: texel_argb = { {8{pix16[15]}},    pix16[14:10],pix16[14:12], pix16[09:05],pix16[09:07], pix16[04:00],pix16[04:02] };	// ARGB 1555
		1: texel_argb = {          8'hff,    pix16[15:11],pix16[15:13], pix16[10:05],pix16[10:09], pix16[04:00],pix16[04:02] };	//  RGB 565
		2: texel_argb = { {2{pix16[15:12]}}, {2{pix16[11:08]}},         {2{pix16[07:04]}},         {2{pix16[03:00]}} };			// ARGB 4444
		3: texel_argb = pix16;		// TODO. YUV422 (32-bit Y8 U8 Y8 V8).
		4: texel_argb = pix16;		// TODO. Bump Map (16-bit S8 R8).
		5: texel_argb = pal_final;	// PAL4 or PAL8 can be ARGB1555, RGB565, ARGB4444, or even ARGB8888.
		6: texel_argb = pal_final;	// Palette format read from PAL_RAM_CTRL[1:0].
		7: texel_argb = { {8{pix16[15]}},    pix16[14:10],pix16[14:12], pix16[09:05],pix16[09:07], pix16[04:00],pix16[04:02] };	// Reserved (considered ARGB 1555).
	endcase
	
	case (shade_inst)
		0: begin				// Decal.
			blend_argb[31:24] = texel_argb[31:24];	// Blend Alpha <- Texel Alpha.  Texel_RGB + Offset_RGB.
			blend_argb[23:16] = texel_argb[23:16];	// Red.
			blend_argb[15:08] = texel_argb[15:08];	// Green.
			blend_argb[07:00] = texel_argb[07:00];	// Blue.
		end
		
		1: begin				// Modulate.
			blend_argb[31:24] = texel_argb[31:24];	// Blend Alpha <- Texel Alpha.  (Texel_RGB * Base_RGB) + Offset_RGB.
			blend_argb[23:16] = (texel_argb[23:16] * base_argb[23:16]) /256;	// Red.
			blend_argb[15:08] = (texel_argb[15:08] * base_argb[15:08]) /256;	// Green.
			blend_argb[07:00] = (texel_argb[07:00] * base_argb[07:00]) /256;	// Blue.
		end
		
		2: begin				// Decal Alpha.
			blend_argb[31:24] = base_argb[31:24];	// Blend Alpha <- Base Alpha.  (Texel_RGB * Texel_Alpha) + (Base_RGB * (255-Texel_Alpha)) + Offset_RGB.
			blend_argb[23:16] = ((texel_argb[23:16] * texel_argb[31:24]) /256) + ((base_argb[23:16] * (255-texel_argb[31:24])) /256);	// Red.
			blend_argb[15:08] = ((texel_argb[15:08] * texel_argb[31:24]) /256) + ((base_argb[15:08] * (255-texel_argb[31:24])) /256);	// Green.
			blend_argb[07:00] = ((texel_argb[07:00] * texel_argb[31:24]) /256) + ((base_argb[07:00] * (255-texel_argb[31:24])) /256);	// Blue.
		end
		
		3: begin				// Modulate Alpha.
			blend_argb[31:24] = (texel_argb[31:24] * base_argb[31:24]) /256;	// (Texel_ARGB * Base_ARGB) + Offset_RGB.
			blend_argb[23:16] = (texel_argb[23:16] * base_argb[23:16]) /256;	// Red.
			blend_argb[15:08] = (texel_argb[15:08] * base_argb[15:08]) /256;	// Green.
			blend_argb[07:00] = (texel_argb[07:00] * base_argb[07:00]) /256;	// Blue.
		end
	endcase

	final_argb = (texture) ? blend_offs_argb : base_argb;
end

reg [31:0] blend_argb;

wire [15:0] blend_plus_offs_r = blend_argb[23:16] + offs_argb[23:16];
wire [15:0] blend_plus_offs_g = blend_argb[15:08] + offs_argb[15:08];
wire [15:0] blend_plus_offs_b = blend_argb[07:00] + offs_argb[07:00];

wire [7:0] offs_r_clamped = (blend_plus_offs_r>255) ? 8'd255 : blend_plus_offs_r;
wire [7:0] offs_g_clamped = (blend_plus_offs_g>255) ? 8'd255 : blend_plus_offs_g;
wire [7:0] offs_b_clamped = (blend_plus_offs_b>255) ? 8'd255 : blend_plus_offs_b;

wire [31:0] blend_offs_argb = {blend_argb[31:24], offs_r_clamped, offs_g_clamped, offs_b_clamped};


reg [31:0] pal_raw;
reg [31:0] pal_final;

// Palette RAM. 1024 32-bit Words.
// PVR Addr 0x1000-0x1FFC.
reg [31:0] pal_ram [0:1023];

// VQ Code Book. 256 64-bit Words.
reg [63:0] code_book [0:255];
reg [7:0] cb_word_index;

always @(posedge clock or negedge reset_n)
if (!reset_n) begin
	tex_wait <= 1'b0;
end
else begin
	// Handle Palette RAM writes.
	if (pal_addr[15:12]==4'b0001 && pal_wr) pal_ram[ pal_addr[11:2] ] <= pal_din;

	// Handle VQ Code Book reading.
	if (read_codebook) begin
		tex_wait <= 1'b1;
		cb_word_index <= 8'd0;
	end
	else if (tex_wait) begin
		code_book[ cb_word_index ] <= vram_din;
		if (cb_word_index==8'd255) tex_wait <= 1'b0;
		else cb_word_index <= cb_word_index + 8'd1;
	end
end

//assign pal_dout = pal_ram[ pal_addr[11:2] ];


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
