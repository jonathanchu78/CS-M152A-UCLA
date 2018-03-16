`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:58:09 01/18/2018 
// Design Name: 
// Module Name:    FPCVT 
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
module FPCVT( D, S, E, F);

	input [11:0] D;
	output [2:0] E;
	output [3:0] F;
	output S;
	
	wire [10:0] M1Out1;
	//wire SignFin;
	
	twoscmptosignedmag t2s(D, M1Out1, S);
	
	wire [3:0] M2SigOut;
	wire [2:0] M2EOut;
	wire M2FOut;
	
	priorityencoder pr1(M1Out1, M2SigOut, M2EOut, M2FOut);
	
	
	Rounding rounding1( M2EOut, M2SigOut, M2FOut, E, F);


endmodule
