`timescale 1ns / 1ps
`default_nettype none

module isp_parser (
	input clock,
	input reset_n,
	
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

always @(posedge clock or negedge reset_n)
if (!reset_n) begin
	isp_state <= 8'd0;
end
else begin
	isp_vram_rd <= 1'b0;
	isp_vram_wr <= 1'b0;
	
	isp_entry_valid <= 1'b0;

	case (isp_state)
		0: begin
			/*if (isp_trig)*/ begin
				isp_state <= isp_state + 8'd1;
			end
		end
		
		1: begin
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= 24'h0129f8;
			//isp_vram_addr <= 24'h0116D0;
			isp_state <= isp_state + 1;
		end
		
		2: begin
			isp_inst <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end

		3: begin
			tsp_inst <= isp_vram_din;
		
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		4: begin
			tex_cont <= isp_vram_din;
		
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		5: begin
			vert_a_x <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		6: begin
			vert_a_y <= isp_vram_din;

			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		7: begin
			vert_a_z <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		8: begin
			vert_a_base_col_0 <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		9: begin
			vert_b_x <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		10: begin
			vert_b_y <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		11: begin
			vert_b_z <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		12: begin
			vert_b_base_col_0 <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		13: begin
			vert_c_x <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		14: begin
			vert_c_y <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		15: begin
			vert_c_z <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		16: begin
			vert_c_base_col_0 <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		13: begin
			vert_d_x <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		14: begin
			vert_d_y <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		15: begin
			vert_d_z <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		16: begin
			vert_d_base_col_0 <= isp_vram_din;
			
			isp_vram_rd <= 1'b1;
			isp_vram_addr <= isp_vram_addr + 4;
			isp_state <= isp_state + 1;
		end
		
		17: begin
			isp_entry_valid <= 1'b1;
			//isp_state <= 8'd2;				// Done!
			isp_state <= 8'd5;				// Grab X/Y/Z again, for Triangle STRIPS.
		end
		
		default: ;
	endcase
end

endmodule
