`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:51:45 01/18/2018
// Design Name:   Rounding
// Module Name:   E:/lab1Updated/Rounding_tb.v
// Project Name:  lab1Updated
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Rounding
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Rounding_tb;

	// Inputs
	reg [2:0] E;
	reg [3:0] Sig;
	reg F;

	// Outputs
	wire [2:0] Efin;
	wire [3:0] Sigfin;

	// Instantiate the Unit Under Test (UUT)
	Rounding uut (
		.E(E), 
		.Sig(Sig), 
		.F(F), 
		.Efin(Efin), 
		.Sigfin(Sigfin)
	);
//hello
	initial begin
		// Initialize Inputs
		E = 3'b111;
		Sig = 4'b1111;
		F = 1'b1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

