`timescale 1ns / 1ps
`default_nettype none

module interp (
	input clock,
	input setup,

	input [7:0] FRAC_BITS,

	input signed [31:0] FX1,
	input signed [31:0] FX2,
	input signed [31:0] FX3,
	
	input signed [31:0] FY1,
	input signed [31:0] FY2,
	input signed [31:0] FY3,
	
	input signed [31:0] FZ1,
	input signed [31:0] FZ2,
	input signed [31:0] FZ3,
	
	input signed [11:0] x_ps,
	input signed [11:0] y_ps,
	
	output reg signed [31:0] interp
);

/*
struct PlaneStepper3
{
	float ddx, ddy;
	float c;
	
	void Setup(float FX1, float FX2, float FX3, float FY1, float FY2, float FY3, float FZ1, float FZ2, float FZ3)
	{
		float Aa = (FZ3 - FZ1) * (FY2 - FY1) - (FZ2 - FZ1) * (FY3 - FY1);
		float Ba = (FX3 - FX1) * (FZ2 - FZ1) - (FX2 - FX1) * (FZ3 - FZ1);
		float C  = (FX2 - FX1) * (FY3 - FY1) - (FX3 - FX1) * (FY2 - FY1);	// Cross Product?

		ddx = -Aa / C;
		ddy = -Ba / C;
		c = (FZ1 - ddx * FX1 - ddy * FY1);
	}

	__forceinline float Ip(float x, float y) const { return x * ddx + y * ddy + c; }
}
*/

// Setup...
//  Aa = (FZ3 - FZ1) * (FY2 - FY1) - (FZ2 - FZ1) * (FY3 - FY1);
reg signed [63:0] FZ3_sub_FZ1;
reg signed [63:0] FY2_sub_FY1;
reg signed [63:0] Aa_mult_1;
reg signed [63:0] FZ2_sub_FZ1;
reg signed [63:0] FY3_sub_FY1;
reg signed [63:0] Aa_mult_2;
reg signed [63:0] Aa;

// Ba = (FX3 - FX1) * (FZ2 - FZ1) - (FX2 - FX1) * (FZ3 - FZ1);
reg signed [63:0] FX3_sub_FX1 = (FX3 - FX1);
reg signed [63:0] Ba_mult_1;
reg signed [63:0] FX2_sub_FX1;
reg signed [63:0] Ba_mult_2;
reg signed [63:0] Ba;

// C = (FX2 - FX1) * (FY3 - FY1) - (FX3 - FX1) * (FY2 - FY1);
reg signed [63:0] C_mult_1;
reg signed [63:0] C_mult_2;
reg signed [63:0] C;

// ddx = -Aa / C;
// ddy = -Ba / C;
reg signed [63:0] Aa_shifted;
reg signed [63:0] Ba_shifted;
reg signed [63:0] FDDX;
reg signed [63:0] FDDY;

// c = (FZ1 - ddx * FX1 - ddy * FY1);
reg signed [63:0] FDDX_mult_FX1;
reg signed [63:0] FDDY_mult_FY1;
reg signed [63:0] c;

always @(posedge setup) begin
//always @(posedge clock) begin
	//  Aa = (FZ3 - FZ1) * (FY2 - FY1) - (FZ2 - FZ1) * (FY3 - FY1);
	FZ3_sub_FZ1 = (FZ3 - FZ1);
	FY2_sub_FY1 = (FY2 - FY1);
	Aa_mult_1   = (FZ3_sub_FZ1 * FY2_sub_FY1) >>FRAC_BITS;

	FZ2_sub_FZ1 = (FZ2 - FZ1);
	FY3_sub_FY1 = (FY3 - FY1);
	Aa_mult_2   = (FZ2_sub_FZ1 * FY3_sub_FY1) >>FRAC_BITS;
	Aa = Aa_mult_1 - Aa_mult_2;

	// Ba = (FX3 - FX1) * (FZ2 - FZ1) - (FX2 - FX1) * (FZ3 - FZ1);
	FX3_sub_FX1 = (FX3 - FX1);
	Ba_mult_1   = (FX3_sub_FX1 * FZ2_sub_FZ1) >>FRAC_BITS;

	FX2_sub_FX1 = (FX2 - FX1);
	Ba_mult_2   = (FX2_sub_FX1 * FZ3_sub_FZ1) >>FRAC_BITS;
	Ba = Ba_mult_1 - Ba_mult_2;

	// C = (FX2 - FX1) * (FY3 - FY1) - (FX3 - FX1) * (FY2 - FY1);
	C_mult_1 = (FX2_sub_FX1 * FY3_sub_FY1) >>FRAC_BITS;
	C_mult_2 = (FX3_sub_FX1 * FY2_sub_FY1) >>FRAC_BITS;
	C = C_mult_2 - C_mult_1;  // Swapped the order of subtraction, so we can ditch the neg sign on -C below...

	// ddx = Aa / C;
	// ddy = Ba / C;
	FDDX = (Aa<<FRAC_BITS) / C;
	FDDY = (Ba<<FRAC_BITS) / C;
	
	// c = (FZ1 - ddx * FX1 - ddy * FY1);
	FDDX_mult_FX1 = (FDDX * FX1) >>FRAC_BITS;
	FDDY_mult_FY1 = (FDDY * FY1) >>FRAC_BITS;
	c = FZ1 - FDDX_mult_FX1 - FDDY_mult_FY1;
end

reg signed [63:0] FZ1_sub_FDDX_mult_FX1;

always @(*) begin
	// Interp ("IP" in C PlaneStepper3)...
	// (x * ddx) + (y * ddy) + c;
	x_mult_FDDX = (x_ps * FDDX);	// No need to shift the result right, as x_ps and y_ps are not fixed-point?
	y_mult_FDDY = (y_ps * FDDY);
	interp = x_mult_FDDX + y_mult_FDDY + c;
end

reg signed [63:0] x_mult_FDDX;
reg signed [63:0] y_mult_FDDY;


endmodule
