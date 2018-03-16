`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:38:03 01/18/2018
// Design Name:   priorityencoder
// Module Name:   E:/lab1Updated/PE_tb.v
// Project Name:  lab1Updated
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: priorityencoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PE_tb;

	// Inputs
	reg [10:0] M;

	// Outputs
	wire [3:0] Sig;
	wire [2:0] E;
	wire F;

	// Instantiate the Unit Under Test (UUT)
	priorityencoder uut (
		.M(M), 
		.Sig(Sig), 
		.E(E), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		M = 11'b00001010011;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

