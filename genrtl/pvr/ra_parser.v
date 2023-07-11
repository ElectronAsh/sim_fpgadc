`timescale 1ns / 1ps
`default_nettype none

module ra_parser (
	input clock,
	input reset_n,
	
	input ra_trig,
	
	input [31:0] FPU_PARAM_CFG,
	
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
	
	output reg ra_entry_valid
);


// Region Array read state machine...
reg [7:0] ra_state;

assign ra_cont_last   = ra_control[31];
assign ra_cont_zclear = ra_control[30];
assign ra_cont_flush  = ra_control[28];
assign ra_cont_tiley  = ra_control[13:8];
assign ra_cont_tilex  = ra_control[7:2];

always @(posedge clock or negedge reset_n)
if (!reset_n) begin
	ra_state <= 8'd0;
end
else begin
	ra_vram_rd <= 1'b0;
	ra_vram_wr <= 1'b0;
	
	ra_entry_valid <= 1'b0;

	case (ra_state)
		0: begin
			if (ra_trig) begin
				ra_state <= ra_state + 8'd1;
			end
		end
		
		1: begin
			ra_vram_rd <= 1'b1;
			//ra_vram_addr <= REGION_BASE[22:0];
			//ra_vram_addr <= 23'h1667C0;
			ra_vram_addr <= 23'h0D33C8;	// Taxi.
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
			ra_entry_valid <= 1'b1;
			//ra_state <= 8'd0;				// Done!
			//ra_state <= 8'd2;				// TESTING !!
		end
		
		default: ;
	endcase
end

endmodule
