`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:40:51 01/18/2018 
// Design Name: 
// Module Name:    Rounding 
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
module Rounding(E, Sig, F, Efin, Sigfin);
	input [2:0] E;
	input [3:0] Sig;
	input F;
	output reg [2:0] Efin;
	output reg [3:0] Sigfin;

	always @ (*) 
	begin
		if (F == 1)
		begin
			if (Sig == 4'b1111)
			begin
				if ( E != 3'b111)
				begin
					Sigfin = 4'b1000;
					Efin = E+1;
				end
				
				else
				begin
					Sigfin= Sig;
					Efin = E;
				end
			end
			else
			begin
				Sigfin = Sig + 1;
				Efin= E;
			end
		end
		else
		begin
			Efin = E;
			Sigfin = Sig;
		end
		
	end 
endmodule
