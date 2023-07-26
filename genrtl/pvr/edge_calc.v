`timescale 1ns / 1ps
`default_nettype none

module edge_calc (
	input signed [31:0] v1_x,
	input signed [31:0] v1_y,
	
	input signed [31:0] v2_x,
	input signed [31:0] v2_y,
	
	input signed [31:0] v3_x,
	input signed [31:0] v3_y,
	
	input signed [31:0] v1_a,
	input signed [31:0] v2_a,
	input signed [31:0] v3_a,
	
	output signed [31:0] Aa,
	output signed [31:0] Ba,
	output signed [31:0] C,
	
	output signed [31:0] c,
	
	input signed [31:0] x,
	input signed [31:0] y,
	output signed [31:0] interp
);

parameter FRAC_BITS = 8;

//  Aa = ((v3_a - v1_a) * (v2_y - v1_y) - (v2_a - v1_a) * (v3_y - v1_y));
wire signed [31:0] v3a_sub_v1a = (v3_a - v1_a);
wire signed [31:0] v2y_sub_v1y = (v2_y - v1_y);
wire signed [31:0] Aa_mult_1 = (v3a_sub_v1a * v2y_sub_v1y) / (1<<FRAC_BITS);

wire signed [31:0] v2a_sub_v1a = (v2_a - v1_a);
wire signed [31:0] v3y_sub_v1y = (v3_y - v1_y);
wire signed [31:0] Aa_mult_2 = (v2a_sub_v1a * v3y_sub_v1y) / (1<<FRAC_BITS);
assign Aa = Aa_mult_1 - Aa_mult_2;


// Ba = ((v3_x - v1_x) * (v2_a - v1_a) - (v2_x - v1_x) * (v3_a - v1_a));
wire signed [31:0] v3x_sub_v1x = (v3_x - v1_x);
//wire signed [31:0] v2a_sub_v1a = (v2_a - v1_a);
wire signed [31:0] Ba_mult_1 = (v3x_sub_v1x * v2a_sub_v1a) / (1<<FRAC_BITS);

wire signed [31:0] v2x_sub_v1x = (v2_x - v1_x);
//wire signed [31:0] v3a_sub_v1a = (v3_a - v1_a);
wire signed [31:0] Ba_mult_2 = (v2x_sub_v1x * v3a_sub_v1a) / (1<<FRAC_BITS);
assign Ba = Ba_mult_1 - Ba_mult_2;


// C = ((v2_x - v1_x) * (v3_y - v1_y) - (v3_x - v1_x) * (v2_y - v1_y));
//wire signed [31:0] v2x_sub_v1x = (v2_x - v1_x);
//wire signed [31:0] v3y_sub_v1y = (v3_y - v1_y);
wire signed [31:0] C_mult_1 = (v2x_sub_v1x * v3y_sub_v1y) / (1<<FRAC_BITS);

//wire signed [31:0] v3x_sub_v1x = (v3_x - v1_x);
//wire signed [31:0] v2y_sub_v1y = (v2_y - v1_y);
wire signed [31:0] C_mult_2 = (v3x_sub_v1x * v2y_sub_v1y) / (1<<FRAC_BITS);
assign C = C_mult_1 - C_mult_2;


// Setup...

// ddx = -Aa / C;
// ddy = -Ba / C;
wire signed [31:0] ddx = (-Aa) / C;	// TODO: Don't know if the sign flip will work here?
wire signed [31:0] ddy = (-Ba) / C;	// TODO: Don't know if the sign flip will work here?

// c = v1_a - (ddx * v1_x) - (ddy * v1_y);
wire signed [31:0] ddx_v1x_mult = (ddx * v1_x) / (1<<FRAC_BITS);
wire signed [31:0] ddy_v1y_mult = (ddy * v1_y) / (1<<FRAC_BITS);
assign c = v1_a - ddx_v1x_mult - ddy_v1y_mult;



// Interp...
// (x * ddx) + (y * ddy) + c;
wire signed [31:0] x_mult_ddx = (x * ddx) / (1<<FRAC_BITS);
wire signed [31:0] y_mult_ddy = (y * ddy) / (1<<FRAC_BITS);
assign interp = x_mult_ddx + y_mult_ddy + c;


endmodule
