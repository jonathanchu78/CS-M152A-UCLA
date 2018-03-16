`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:37:50 01/23/2018
// Design Name:   FPCVT
// Module Name:   E:/lab1Updated/FPCVTTestBench_TB.v
// Project Name:  lab1Updated
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FPCVT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FPCVTTestBench_TB;

	// Inputs
	reg [11:0] D;

	// Outputs
	wire S;
	wire [2:0] E;
	wire [3:0] F;

	// Instantiate the Unit Under Test (UUT)
	FPCVT uut (
		.D(D), 
		.S(S), 
		.E(E), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		D = 12'b100000000000;
	//hi
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

