
/*
 * Single-ported memory module.
 *
 * Public domain.
 *
 */


`include "clog2.v"

module mem
#(
  parameter WIDTH = 8,
  parameter DEPTH = 64,
  parameter FILE = "",
  parameter INIT = 0
)
(
  input  wire                 clock,
  input  wire [WIDTH-1:0]     data,
  input  wire [`CLOG2(DEPTH)-1:0] rdaddress,
  input  wire                 rden,
  input  wire [`CLOG2(DEPTH)-1:0] wraddress,
  input  wire                 wren,
  output reg  [WIDTH-1:0]     q
);
  // //verilator lint_off UNUSEDSIGNAL

  wire clk = clock;
  wire data_i = data;
  wire ene = rden;
  wire wene = wren;
  assign q = data;
  wire [`CLOG2(DEPTH)-1:0] rd = rdaddress;
  wire [`CLOG2(DEPTH)-1:0] wr = wraddress;
  // //verilator lint_off UNUSEDSIGNAL


  // reg [WIDTH-1:0] mem [0:DEPTH-1] /* synthesis ramstyle = "M20K" */;

  // //verilator lint_off UNUSEDSIGNAL
  // integer file;
  // integer scan;
  // //verilator lint_off UNUSEDSIGNAL
  // integer i;

  // initial
  //   begin
  //     // read file contents if FILE is given
  //     if (FILE != "")
  //       // If you get error here, check path to FILE at bottom of generated butterfly.v
  //       $readmemb(FILE, mem);

  //     // set all data to 0 if INIT is true
  //     if (INIT)
  //       for (i = 0; i < DEPTH; i = i + 1)
  //         mem[i] = {WIDTH{1'b0}};
  //  end

  // always @ (posedge clock)
  // begin
  //   if (wren)
  //     mem[wraddress] <= data;
  // end

  // always @ (posedge clock)
  // begin
  //   if (rden)
  //     q <= mem[rdaddress];
  // end

endmodule

