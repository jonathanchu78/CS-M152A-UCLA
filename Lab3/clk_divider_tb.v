`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:33:11 02/13/2018
// Design Name:   clk_divider
// Module Name:   C:/Users/152/Documents/Lab3/clk_divider_tb.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clk_divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clk_divider_tb;

	// Inputs
	reg clk;

	// Outputs
	wire clk_1;
	wire clk_2;
	wire clk_5;
	wire clk_100;

	// Instantiate the Unit Under Test (UUT)
	clk_divider uut (
		.clk(clk), 
		.clk_1(clk_1), 
		.clk_2(clk_2), 
		.clk_5(clk_5), 
		.clk_100(clk_100)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always #5 clk = ~clk;
endmodule

