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
	
	input signed [10:0] x_ps,
	input signed [10:0] y_ps,
	
	output reg signed [31:0] interp,
	
	output reg signed [31:0] interp0,  interp1,  interp2,  interp3,  interp4,  interp5,  interp6,  interp7,
	output reg signed [31:0] interp8,  interp9,  interp10, interp11, interp12, interp13, interp14, interp15,
	output reg signed [31:0] interp16, interp17, interp18, interp19, interp20, interp21, interp22, interp23,
	output reg signed [31:0] interp24, interp25, interp26, interp27, interp28, interp29, interp30, interp31
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
		float C  = (FX2 - FX1) * (FY3 - FY1) - (FX3 - FX1) * (FY2 - FY1);	// 2D Cross Product?

		ddx = -Aa / C;
		ddy = -Ba / C;
		c = (FZ1 - ddx * FX1 - ddy * FY1);
	}

	__forceinline float Ip(float x, float y) const { return x * ddx + y * ddy + c; }
}
*/

// Setup...
//  Aa = (FZ3 - FZ1) * (FY2 - FY1) - (FZ2 - FZ1) * (FY3 - FY1);
reg signed [31:0] FZ3_sub_FZ1;
reg signed [31:0] FY2_sub_FY1;
reg signed [63:0] Aa_mult_1;
reg signed [31:0] FZ2_sub_FZ1;
reg signed [31:0] FY3_sub_FY1;
reg signed [63:0] Aa_mult_2;
reg signed [63:0] Aa;

// Ba = (FX3 - FX1) * (FZ2 - FZ1) - (FX2 - FX1) * (FZ3 - FZ1);
reg signed [31:0] FX3_sub_FX1;
reg signed [63:0] Ba_mult_1;
reg signed [31:0] FX2_sub_FX1;
reg signed [63:0] Ba_mult_2;
reg signed [63:0] Ba;

// C = (FX2 - FX1) * (FY3 - FY1) - (FX3 - FX1) * (FY2 - FY1);
reg signed [63:0] C_mult_1;
reg signed [63:0] C_mult_2;
reg signed [31:0] C;

// ddx = -Aa / C;
// ddy = -Ba / C;
reg signed [63:0] FDDX;
reg signed [63:0] FDDY;

// c = (FZ1 - ddx * FX1 - ddy * FY1);
reg signed [63:0] FDDX_mult_FX1;
reg signed [63:0] FDDY_mult_FY1;
reg signed [31:0] c;

//always @(posedge setup) begin
always @(posedge clock) begin
	if (setup) begin
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
end

// Interp ("IP" in C PlaneStepper3)...
// (x * ddx) + (y * ddy) + c;
always @(*) begin
	interp = (x_ps * FDDX) + (y_ps * FDDY) + c;	// No need to shift the mult result right, as x_ps and y_ps are not fixed-point.
	
	/*
	interp0  = ($signed({x_ps[10:5],5'd0} ) * FDDX) + y_mult_FDDY + c;
	interp1  = ($signed({x_ps[10:5],5'd1} ) * FDDX) + y_mult_FDDY + c;
	interp2  = ($signed({x_ps[10:5],5'd2} ) * FDDX) + y_mult_FDDY + c;
	interp3  = ($signed({x_ps[10:5],5'd3} ) * FDDX) + y_mult_FDDY + c;
	interp4  = ($signed({x_ps[10:5],5'd4} ) * FDDX) + y_mult_FDDY + c;
	interp5  = ($signed({x_ps[10:5],5'd5} ) * FDDX) + y_mult_FDDY + c;
	interp6  = ($signed({x_ps[10:5],5'd6} ) * FDDX) + y_mult_FDDY + c;
	interp7  = ($signed({x_ps[10:5],5'd7} ) * FDDX) + y_mult_FDDY + c;
	interp8  = ($signed({x_ps[10:5],5'd8} ) * FDDX) + y_mult_FDDY + c;
	interp9  = ($signed({x_ps[10:5],5'd9} ) * FDDX) + y_mult_FDDY + c;
	interp10 = ($signed({x_ps[10:5],5'd10}) * FDDX) + y_mult_FDDY + c;
	interp11 = ($signed({x_ps[10:5],5'd11}) * FDDX) + y_mult_FDDY + c;
	interp12 = ($signed({x_ps[10:5],5'd12}) * FDDX) + y_mult_FDDY + c;
	interp13 = ($signed({x_ps[10:5],5'd13}) * FDDX) + y_mult_FDDY + c;
	interp14 = ($signed({x_ps[10:5],5'd14}) * FDDX) + y_mult_FDDY + c;
	interp15 = ($signed({x_ps[10:5],5'd15}) * FDDX) + y_mult_FDDY + c;
	interp16 = ($signed({x_ps[10:5],5'd16}) * FDDX) + y_mult_FDDY + c;
	interp17 = ($signed({x_ps[10:5],5'd17}) * FDDX) + y_mult_FDDY + c;
	interp18 = ($signed({x_ps[10:5],5'd18}) * FDDX) + y_mult_FDDY + c;
	interp19 = ($signed({x_ps[10:5],5'd19}) * FDDX) + y_mult_FDDY + c;
	interp20 = ($signed({x_ps[10:5],5'd20}) * FDDX) + y_mult_FDDY + c;
	interp21 = ($signed({x_ps[10:5],5'd21}) * FDDX) + y_mult_FDDY + c;
	interp22 = ($signed({x_ps[10:5],5'd22}) * FDDX) + y_mult_FDDY + c;
	interp23 = ($signed({x_ps[10:5],5'd23}) * FDDX) + y_mult_FDDY + c;
	interp24 = ($signed({x_ps[10:5],5'd24}) * FDDX) + y_mult_FDDY + c;
	interp25 = ($signed({x_ps[10:5],5'd25}) * FDDX) + y_mult_FDDY + c;
	interp26 = ($signed({x_ps[10:5],5'd26}) * FDDX) + y_mult_FDDY + c;
	interp27 = ($signed({x_ps[10:5],5'd27}) * FDDX) + y_mult_FDDY + c;
	interp28 = ($signed({x_ps[10:5],5'd28}) * FDDX) + y_mult_FDDY + c;
	interp29 = ($signed({x_ps[10:5],5'd29}) * FDDX) + y_mult_FDDY + c;
	interp30 = ($signed({x_ps[10:5],5'd30}) * FDDX) + y_mult_FDDY + c;
	interp31 = ($signed({x_ps[10:5],5'd31}) * FDDX) + y_mult_FDDY + c;
	*/
end


endmodule
