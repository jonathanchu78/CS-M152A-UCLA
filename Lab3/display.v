`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:05:09 02/13/2018 
// Design Name: 
// Module Name:    display 
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

module display(clk, clk_5, sel, adj, num1, num2, num3, num4, seg, an);
	input clk;
	input clk_5;
	input [3:0] num1;
	input [3:0] num2;
	input [3:0] num3;
	input [3:0] num4;
	input [1:0] sel;
	input adj;
	reg [3:0] num;
	
	output [7:0] seg;
	output [3:0] an;
	
	reg [7:0] segment;
	reg [3:0] ann;
	
	reg [3:0] counter = 1; //1-4
	reg onOff = 0;
	
	always @(posedge clk_5)
	begin
		onOff = ~onOff;
	end
	
	always @(posedge clk)
	begin
		if (onOff && adj)
		begin
			if (counter == sel + 1)
			begin
				if (counter == 4)
					counter = 0;
				else
					counter = counter + 1;
			end
			else ;
		end
		else ;
		case (counter)
			1: begin num = num1; ann = 4'b0111; end
			2: begin num = num2; ann = 4'b1011; end
			3: begin num = num3; ann = 4'b1101; end
			4: begin num = num4; ann = 4'b1110; counter = 0; end
		endcase
		counter = counter + 1;
		case (num)
				4'b0000: segment = 8'b11000000; //0
				4'b0001: segment = 8'b11111001; //1
				4'b0010: segment = 8'b10100100; //2 10100100
				4'b0011: segment = 8'b10110000; //3 10110000
				4'b0100: segment = 8'b10011001; //4 10011001
				4'b0101: segment = 8'b10010010; //5 10010010
				4'b0110: segment = 8'b10000010; //6 10000010
				4'b0111: segment = 8'b11111000; //7 11111000
				4'b1000: segment = 8'b10000000; //8 10000000
				4'b1001: segment = 8'b10010000; //9 10010000
				4'b1011: segment = 8'b11111111; //blank
		endcase
	end

	
	/*
	always @(posedge clk)	
	begin
		case (counter)
			4'b0000: segment = 8'b11111100; //0
			4'b0001: segment = 8'b01100000; //1
			4'b0010: segment = 8'b11011010; //2
			4'b0011: segment = 8'b11110010; //3
			4'b0100: segment = 8'b01100110; //4
			4'b0101: segment = 8'b10110110; //5
			4'b0110: segment = 8'b10111110; //6
			4'b0111: segment = 8'b11100000; //7
			4'b1000: segment = 8'b11111110; //8
			4'b1001: segment = 8'b11110110; //9
			4'b1010: counter = 0;
		endcase
		//segment = 8'b00111100; //0
		ann = 4'b0111;
	end*/
		
	assign seg = segment;	
	assign an = ann;

endmodule
