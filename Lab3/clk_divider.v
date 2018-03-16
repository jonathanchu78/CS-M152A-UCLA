`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:07:26 02/13/2018 
// Design Name: 
// Module Name:    clk_divider 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module clk_divider(clk, clk_1, clk_2, clk_5, clk_500);
	input clk;
	output clk_1;
	output clk_2;
	output clk_5;
	output clk_500;

	reg [25:0] counter1=0;
	reg [25:0] counter2=0;
	reg [25:0] counter5=0;
	reg [25:0] counter500=0;
	
	reg clk_1Hz=0;
	reg clk_2Hz=0;
	reg clk_5Hz=0;
	reg clk_500Hz=0;

	always @(posedge clk)
	begin
		if (counter1 == 50_000_000)
		begin
			clk_1Hz = ~clk_1Hz;
			counter1 = 0;
		end
		else
			counter1 = counter1 + 1;
		
		if (counter2 == 25_000_000)
		begin
			clk_2Hz = ~clk_2Hz;
			counter2 = 0;
		end
		else
			counter2 = counter2 + 1;
		
		if (counter5 == 10_000_000)
		begin
			clk_5Hz = ~clk_5Hz;
			counter5 = 0;
		end
		else
			counter5 = counter5 + 1;
		
		if (counter500 == 100_000) 
		begin
			clk_500Hz = ~clk_500Hz;
			counter500 = 0;
		end
		else
			counter500 = counter500 + 1;
	end
	
	assign clk_1 = clk_1Hz;
	assign clk_2 = clk_2Hz;
	assign clk_5 = clk_5Hz;
	assign clk_500 = clk_500Hz;

endmodule
