// verilator lint_off UNUSEDSIGNAL

module GFE_barret(
    input wire [2:0] din_a,
    output wire [1:0] dout_r
);
      
    wire [2:0] mu_constant = 5;
    wire [2:0] q_val  = din_a >> 2;
    wire [2:0] q_hat  = q_val * mu_constant;
    wire [2:0] t_val  = q_hat >> 2;
    wire [2:0] mult   = t_val * 3;
    wire [2:0] result = din_a - mult;

    wire[2:0] pre_sub = result - 3;
    assign dout_r = result >= 3 ? pre_sub[1:0] : result[1:0];

endmodule

// verilator lint_off UNUSEDSIGNAL
