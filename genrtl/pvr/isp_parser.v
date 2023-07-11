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
			//isp_vram_addr <= 24'h027520;	// Taxi
			//isp_vram_addr <= 24'h000000;	// Sanic
			isp_vram_rd <= 1'b1;
			strip_cnt <= 4'd1;
			isp_state <= 8'd1;
		end
		1:  isp_inst <= isp_vram_din;
		2:  tsp_inst <= isp_vram_din;
		3:  begin tex_cont <= isp_vram_din; 	/* if (!shadow)*/ isp_state <= 8'd6; end
		
		// if (shadow)...
		4:  tsp2_inst <= isp_vram_din;
		5:  tex2_cont <= isp_vram_din;
		
		6:  vert_a_x <= isp_vram_din;			// if (strip), check each Mask bit, offset the addr to the next vertex, then jump back here.
		7:  vert_a_y <= isp_vram_din;
		8:  begin vert_a_z <= isp_vram_din;  if (!texture) isp_state <= 8'd11; end
		
		9:  begin vert_a_u0 <= isp_vram_din; if (uv_16_bit) isp_state <= 8'd11; end
		10: vert_a_v0 <= isp_vram_din;				// Skip if 16-bit UV.
		11: begin vert_a_base_col_0 <= isp_vram_din; /*if (!two_volume)*/ if (!offset) isp_state <= 8'd16; end	// TODO. Next these conditionals.
		
		12: vert_a_u1 <= isp_vram_din;				// if Two-volume
		13: vert_a_v1 <= isp_vram_din;				// if Two-volume
		14: vert_a_base_col_1 <= isp_vram_din;		// if Two-volume.
		15: vert_a_off_col <= isp_vram_din;			// if Offset colour.
		
		16: vert_b_x <= isp_vram_din;
		17: vert_b_y <= isp_vram_din;
		18: begin vert_b_z <= isp_vram_din;  if (!texture) isp_state <= 8'd21; end
		19: begin vert_b_u0 <= isp_vram_din; 		 if (uv_16_bit) isp_state <= 8'd21; end
		20: vert_b_v0 <= isp_vram_din;				// Skip if 16-bit UV.
		21: begin vert_b_base_col_0 <= isp_vram_din; /*if (!two_volume)*/ if (!offset) isp_state <= 8'd26; end	// TODO. Next these conditionals.
		
		22: vert_b_u1 <= isp_vram_din;				// if Two-volume
		23: vert_b_v1 <= isp_vram_din;				// if Two-volume
		24: vert_b_base_col_1 <= isp_vram_din;		// if Two-volume.
		25: vert_b_off_col <= isp_vram_din;			// if Offset colour.
		
		26: vert_c_x <= isp_vram_din;
		27: vert_c_y <= isp_vram_din;
		28: begin vert_c_z <= isp_vram_din;  if (!texture) isp_state <= 8'd31; end
		29: begin vert_c_u0 <= isp_vram_din; if (uv_16_bit) isp_state <= 8'd31; end
		30: vert_c_v0 <= isp_vram_din;				// Skip if 16-bit UV.
		31: begin vert_c_base_col_0 <= isp_vram_din; /*if (!two_volume)*/ /*if (!offset) isp_state <= 8'd36;*/ isp_state <= 46; end	// TODO. Next these conditionals.
																												// TESTING !! Skipping Vert D.
		32: vert_c_u1 <= isp_vram_din;				// if Two-volume
		33: vert_c_v1 <= isp_vram_din;				// if Two-volume
		34: vert_c_base_col_1 <= isp_vram_din;		// if Two-volume.
		35: vert_c_off_col <= isp_vram_din;			// if Offset colour.	 
		
		36: vert_d_x <= isp_vram_din;
		37: vert_d_y <= isp_vram_din;
		38: begin vert_d_z <= isp_vram_din;  if (!texture) isp_state <= 8'd41; end
		39: begin vert_d_u0 <= isp_vram_din; if (uv_16_bit) isp_state <= 8'd41; end
		40: vert_d_v0 <= isp_vram_din;				// Skip if 16-bit UV.
		41: begin vert_d_base_col_0 <= isp_vram_din; /*if (!two_volume)*/ if (!offset) isp_state <= 8'd46; end	// TODO. Next these conditionals.
		
		42: vert_d_u1 <= isp_vram_din;				// if Two-volume
		43: vert_d_v1 <= isp_vram_din;				// if Two-volume
		44: vert_d_base_col_1 <= isp_vram_din;		// if Two-volume.
		45: vert_d_off_col <= isp_vram_din;			// if Offset colour.
		
		46: begin
			if (strip_cnt==4'd0) begin
				if (isp_vram_din[31:24]==8'hC8 /*|| isp_vram_din[31:24]==8'hCA*/) begin
					isp_entry_valid <= 1'b1;
					isp_inst <= isp_vram_din;
					strip_cnt <= 4'd1;
					isp_state <= 8'd2;
				end
			end
			else begin
				isp_entry_valid <= 1'b1;
			
				strip_cnt <= strip_cnt - 4'd1;
				
				vert_a_x <= vert_b_x;
				vert_a_y <= vert_b_y;
				vert_a_z <= vert_b_z;

				vert_b_x <= vert_c_x;
				vert_b_y <= vert_c_y;
				vert_b_z <= vert_c_z;
				
				vert_c_x <= isp_vram_din;
				isp_state <= 8'd27;	// Grab (rest of) new vert C.
			end
		end
		default: ;
	endcase
end

endmodule
