`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:45:50 02/15/2018 
// Design Name: 
// Module Name:    start 
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
module start(clk_1, clk_2, rst, pause, sel, adj, out1, out2, out3, out4);
	input clk_1;
	input clk_2;
	input rst;
	input pause;
	input [1:0] sel;
	input adj;
	
	output reg [3:0] out1;
	output reg [3:0] out2;
	output reg [3:0] out3;
	output reg [3:0] out4;
	
	reg [3:0] counter1=0; //highest
	reg [3:0] counter2=0;
	reg [3:0] counter3=0;
	reg [3:0] counter4=0; //lowest
	
	reg pauseState;
	reg [3:0] clkcounter = 0;
	
	always @(*)
	begin
		if (pause)
		begin
			pauseState <= ~pauseState;
		end
		else
		begin
			pauseState <= pauseState;
		end
	end
	
	always @(posedge clk_2)
	begin
		if (rst)
		begin
			counter1 = 4'b0000;
			counter2 = 4'b0000;
			counter3 = 4'b0000;
			counter4 = 4'b0000;
		end
		else
			counter1 = counter1;

		clkcounter = clkcounter + 1;
		if (clkcounter == 2 &&(~pauseState) && (~adj))
		begin
			clkcounter = 0;
			if (counter4 == 9)
			begin
				counter4 = 0;
				if (counter3 == 5)
				begin
					counter3 = 0;
					if (counter2 == 9)
					begin
						counter2 = 0;
						if (counter1 == 5)
						begin
							counter1 = 0;
							counter2 = 0;
							counter3 = 0;
							counter4 = 0;
						end
						else
							counter1 = counter1 + 1;
					end
					else
						counter2 = counter2 + 1;
				end
				else
					counter3 = counter3 + 1;
			end
			else
				counter4 = counter4 + 1;
		end
		else if ((~pauseState && adj) || (pauseState && adj))
		begin
			case(sel)
				2'b00: 
				begin
					if(counter1 == 5) 
						counter1 = 0;
					else
						counter1 = counter1 + 1;
				end
				2'b01:
				begin
					if(counter2 == 5) 
						counter2 = 0;
					else
						counter2 = counter2 + 1;
				end
				2'b10:
				begin
					if(counter3 == 5) 
						counter3 = 0;
					else
						counter3 = counter3 + 1;
				end
				2'b11:
				begin
					if(counter4 == 5) 
						counter4 = 0;
					else
						counter4 = counter4 + 1;
				end
			endcase
		end
		else ;
		out1 = counter1;
		out2 = counter2;
		out3 = counter3;
		out4 = counter4;
	end

endmodule
