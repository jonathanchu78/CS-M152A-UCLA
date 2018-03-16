`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:40:21 02/15/2018
// Design Name:   stopwatch
// Module Name:   C:/Users/152/Documents/Lab3/stopwatch_tb.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: stopwatch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module stopwatch_tb;

	// Inputs
	reg clk;

	// Outputs
	wire [7:0] seg;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	stopwatch uut (
		.clk(clk), 
		.seg(seg), 
		.an(an)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus her

	end
         always #0.05 clk = ~clk;
endmodule

