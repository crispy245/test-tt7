/*
 * Copyright (c) 2024 Your Name
 * SPDX-License-Identifier: Apache-2.0
 */

`default_nettype none
`include "clog2.v"
module tt_um_example (
    input  wire [7:0] ui_in,    // Dedicated inputs
    output wire [7:0] uo_out,   // Dedicated outputs
    input  wire [7:0] uio_in,   // IOs: Input path
    output wire [7:0] uio_out,  // IOs: Output path
    output wire [7:0] uio_oe,   // IOs: Enable path (active high: 0=input, 1=output)
    input  wire       ena,      // always 1 when the design is powered, so you can ignore it
    input  wire       clk,      // clock
    input  wire       rst_n     // reset_n - low to reset
);

  // All output pins must be assigned. If not used, assign to 0.
  assign uo_out  = ui_in + uio_in;  // Example: ou_out is the sum of ui_in and uio_in
  assign uio_out = 0;
  assign uio_oe  = 0;


  wire rst;
  wire [1:0] gen_left_op;
  wire [1:0] gen_right_op;
  wire start;
  wire fail;
  wire success;
  wire start_right;
  wire done;
  wire rd_en;
  wire [`CLOG2(8*10/2) - 1 : 0] rd_addr;
  wire [2*(`CLOG2(3)) - 1: 0] data_out;
  wire wr_en;
  wire [`CLOG2(8*10/2) - 1 : 0] wr_addr;
  wire [(2*`CLOG2(3))-1 : 0] data_in;


  systemizer #(.N(4), .L(8), .K(10), .M(3), .BLOCK(4)) DUT(
    .clk(clk),
    .gen_left_op(gen_left_op),
    .gen_right_op(gen_right_op),
    .rst(1'b0),
    .start(start),
    .done(done),
    .fail(fail),
    .success(success),
    .start_right(start_right),
    .rd_en(rd_en),
    .rd_addr(rd_addr),
    .data_out(data_out),
    .wr_en(wr_en),
    .wr_addr(wr_addr),
    .data_in(data_in)
  );

endmodule
