`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:37:10 01/18/2018 
// Design Name: 
// Module Name:    PriorityEncoder 
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
module priorityencoder(M, Sig, E, F);
	input [10:0]M;
	output reg [3:0]Sig;
	output reg [2:0]E;
	output reg F;
	
	
	
	always @ (*)
	begin
		if (M[10:3] == 8'b0)	
		begin
			E = 0;
			Sig = {1'b0,M[2:0]};	// Concatenating zero here 
			F = 0;
		end
		else if (M[10:4] == 7'b0)
		begin
			E = 1;
			Sig = M[3:0];
			F = 0;
		end
		else if (M[10:5] == 6'b0)	
		begin
			E = 2;
			Sig = M[4:1];
			F = M[0];
		end
		else if (M[10:6] == 5'b0)
		begin
			E = 3;
			Sig = M[5:2];
			F = M[1];
		end
		else if (M[10:7] == 4'b0)	
		begin
			E = 4;
			Sig = M[6:3];
			F = M[2];
		end
		else if (M[10:8] == 3'b0)	
		begin
			E = 5;
			Sig = M[7:4];
			F = M[3];
		end
		else if (M[10:9] == 2'b0)	
		begin
			E = 6;
			Sig = M[8:5];
			F = M[4];
		end
		else
		begin
			E = 7;
			Sig = M[9:6];
			F = M[5];
		end
	end


endmodule
