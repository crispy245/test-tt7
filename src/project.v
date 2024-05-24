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

  systemizer #(.N(2), .L(8), .K(10), .M(2), .BLOCK(4)) DUT(
    .clk(clk),
    .gen_left_op(),
    .gen_right_op(),
    .rst(1'b0),
    .start(),
    .done(),
    .fail(),
    .success(),
    .start_right(),
    .rd_en(),
    .rd_addr(),
    .data_out(),
    .wr_en(),
    .wr_addr(),
    .data_in()
  );

endmodule
