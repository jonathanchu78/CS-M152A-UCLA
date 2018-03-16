`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:19:23 02/13/2018 
// Design Name: 
// Module Name:    stopwatch 
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
module stopwatch(clk, btnR, btnP, sel0, sel1, adj, seg, an);
	input clk;
	input btnR;
	input btnP;
	input sel0;
	input sel1;
	input adj;
	
	output [7:0] seg;
	output [3:0] an;
	
	wire clk_1;
	wire clk_2;
	wire clk_5;
	wire clk_500;
	wire resetState;
	wire pauseState;
	
	reg [3:0] num1 = 0;
	reg [3:0] num2 = 0;
	reg [3:0] num3 = 0;
	reg [3:0] num4 = 0;
	
	wire [3:0] out1;
	wire [3:0] out2;
	wire [3:0] out3;
	wire [3:0] out4;
	
	debouncer debouncerR(btnR, clk, resetState);
	debouncer debouncerP(btnP, clk, pauseState);
	
	clk_divider clk_divider(clk, clk_1, clk_2, clk_5, clk_500);
	start start(clk_1, clk_2, resetState, pauseState, {sel0,sel1} , adj, num1, num2, num3, num4, out1, out2, out3, out4);
	
	display display(clk_500, clk_5, {sel0,sel1}, adj, out1, out2, out3, out4, seg, an);
	//display display(clk_500, 10, 8, 3, 0, seg, an);

endmodule
