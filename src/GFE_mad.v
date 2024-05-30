
  module GFE_mad (
  //verilator lint_off UNUSEDSIGNAL
  input          clk,
  //verilator lint_off UNUSEDSIGNAL
  input  [1: 0] dinA,
  input  [1: 0] dinB,
  input  [1: 0] dinC,
  output [2: 0] dout
);
  assign dout = dinA * dinB + dinC; 
  
endmodule 
