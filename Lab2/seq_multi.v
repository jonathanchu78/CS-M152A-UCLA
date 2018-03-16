`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:03:57 01/30/2018 
// Design Name: 
// Module Name:    seq_multi 
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
module seq_multi(
   // Outputs
   o_data, o_valid,
   // Inputs
   i_data_a, i_data_b, i_valid, clk, rst
    );

`include "seq_definitions.v"

   output [alu_width-1:0] o_data;
   output                 o_valid;
   
   input  [alu_width-1:0] i_data_a;
   input  [alu_width-1:0] i_data_b;
   input                  i_valid;

   input                  clk;
   input                  rst;
   
   assign o_valid = i_valid;
   assign o_data  = i_data_a * i_data_b;

endmodule
