`timescale 1ns / 1ps
`default_nettype none

module ol_parser (
	input clock,
	input reset_n,
	
	input wire ra_cont_last,
	input wire ra_cont_zclear,
	input wire ra_cont_flush,
	input wire [5:0] ra_cont_tiley,
	input wire [5:0] ra_cont_tilex,

	input [31:0] ra_opaque,
	input [31:0] ra_opaque_mod,
	input [31:0] ra_trans,
	input [31:0] ra_trans_mod,
	input [31:0] ra_puncht,
	
	input ra_entry_valid,
	
	output reg ol_vram_rd,
	output reg ol_vram_wr,
	output reg [23:0] ol_vram_addr,
	input [31:0] ol_vram_din,
		
	output reg ol_entry_valid,
	
	output reg [31:0] ol_control
);


wire ol_type = ol_control[31:29];

// Object List read state machine...
reg [7:0] ol_state;

always @(posedge clock or negedge reset_n)
if (!reset_n) begin
	ol_state <= 8'd0;
end
else begin
	ol_vram_rd <= 1'b0;
	ol_vram_wr <= 1'b0;
	
	ol_entry_valid <= 1'b0;

	case (ol_state)
		0: begin
			if (ra_entry_valid) begin
				ol_state <= ol_state + 8'd1;
			end
		end
		
		1: begin
			ol_vram_rd <= 1'b1;
			ol_vram_addr <= ra_opaque[23:0];	// TODO: Check MSB bit, which denotes that this type of prim is UNUSED in this tile.
			ol_state <= ol_state + 1;
		end
		
		2: begin
			ol_vram_rd <= 1'b1;
			ol_control <= ol_vram_din;
			//ol_vram_addr <= ol_vram_addr + 4;
			//ol_state <= ol_state + 1;
		end
		
		/*
		3: begin
			ol_vram_rd <= 1'b1;
			
			ol_vram_addr <= ol_vram_addr + 4;
			ol_state <= ol_state + 1;
		end
		
		4: begin
			ol_vram_rd <= 1'b1;
			ol_opaque_mod <= ol_vram_din;
			ol_vram_addr <= ol_vram_addr + 4;
			ol_state <= ol_state + 1;
		end
		
		5: begin
			ol_vram_rd <= 1'b1;
			ol_trans <= ol_vram_din;
			ol_vram_addr <= ol_vram_addr + 4;
			ol_state <= ol_state + 1;
		end
		
		6: begin
			ol_trans_mod <= ol_vram_din;
			
			if (FPU_PARAM_CFG[21]) begin	// fmt v2 (grab puncht value in next ol_state).
				ol_vram_rd <= 1'b1;
				ol_vram_addr <= ol_vram_addr + 4;
				ol_state <= ol_state + 1;
			end
			else begin						// fmt v1.
				ol_puncht <= 32'h80000000;
				ol_state <= 8'd8;			// Done!
			end
		end
		
		7: begin
			//ol_vram_rd <= 1'b1;
			ol_puncht <= ol_vram_din;	// fmt v2 (grab puncht).
			ol_vram_addr <= ol_vram_addr + 4;
			ol_state <= ol_state + 1;
		end
		
		8: begin
			ol_entry_valid <= 1'b1;
			//ol_state <= 8'd0;				// Done!
			ol_state <= 8'd2;				// TESTING !!
		end
		*/
		
		default: ;
	endcase
end

endmodule
