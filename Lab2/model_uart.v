`timescale 1ns / 1ps

module model_uart(/*AUTOARG*/
   // Outputs
   TX,
   // Inputs
   RX
   );

   output TX;
   input  RX;

   parameter baud    = 115200;
   parameter bittime = 1000000000/baud;
   parameter name    = "UART0";
   
   reg [7:0] rxData;
	reg [47:0] tempData;
	reg [5:0] counter;
   event     evBit;
   event     evByte;
   event     evTxBit;
   event     evTxByte;
   reg       TX;

   initial
     begin
        TX = 1'b1;
     end
   	
   always @ (negedge RX)
     begin
        rxData[7:0] = 8'h0;
        #(0.5*bittime);
        repeat (8)
          begin
             #bittime ->evBit;
             //rxData[7:0] = {rxData[6:0],RX};
             rxData[7:0] = {RX,rxData[7:1]};
          end
			 tempData = tempData << 8;
			 tempData [7:0] = rxData;
		    //counter = counter << 1;
			 //counter[0] = 1;
        ->evByte;
		  //$display ("Counter %06x", counter);
		  /*if (counter [5:0] == 6'h001111)
		  begin
				$display ("%d %s Received byte %02x (%s)", $stime, name, tempData, tempData);
		  end*/
		  if (rxData == "\r")
		  begin
			$display ("%d %s Received byte %02x (%s)", $stime, name, tempData[47:16], tempData[47:16]);
		  end
     end

   task tskRxData;
      output [7:0] data;
      begin
         @(evByte);
         data = rxData;
      end
   endtask // for
      
   task tskTxData;
      input [7:0] data;
      reg [9:0]   tmp;
      integer     i;
      begin
         tmp = {1'b1, data[7:0], 1'b0};
         for (i=0;i<10;i=i+1)
           begin
              TX = tmp[i];
              #bittime;
              ->evTxBit;
           end
         ->evTxByte;
      end
   endtask // tskTxData
   
endmodule // model_uart
