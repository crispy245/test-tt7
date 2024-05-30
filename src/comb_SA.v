
module comb_SA (
  input wire functionA,
  input wire first_pass,
  input wire [3:0] pass,//roll it back
  input wire clk,
  input wire rst,
  input start,
  input finish,
  input wire [15:0] op_in,
  input wire [7:0] data,
  output wire [7:0] data_out,
  output wire [15:0] op_out,
  output wire r_A_and
);



 reg first_pass_del = 1'b0;
  reg start_del = 1'b0;
  reg finish_del = 1'b0;

  reg [7:0] data_del;
  reg [15:0] op_in_del = 0;

  always @(posedge clk)
  begin
    first_pass_del <= first_pass;
    start_del <= start;
    finish_del <= finish;
    data_del <= data;
    op_in_del <= op_in;
  end

  reg [3 : 0] functionA_dup = 0;

  reg [3 : 1] start_tmp = 0;
  reg [3 : 1] start_row = 0;

  reg [3 : 1] finish_tmp = 0;
  reg [3 : 1] finish_in = 0;
  wire [2 : 0] finish_out;

  reg [3 : 0] first_pass_tmp = 0;

  reg [3 : 0] first_pass_row = 0;
  assign first_pass_row[0] = 0;


  always @(posedge clk) begin
    functionA_dup[0] <= functionA;
    functionA_dup[1] <= functionA;
    functionA_dup[2] <= functionA;
    functionA_dup[3] <= functionA;

    start_tmp[1] <= start_del;
    start_row[1] <= start_tmp[1];
    start_tmp[2] <= start_row[1];
    start_row[2] <= start_tmp[2];
    start_tmp[3] <= start_row[2];
    start_row[3] <= start_tmp[3];

    first_pass_row[1] <= first_pass_del;
    first_pass_row[2] <= first_pass_row[1];
    first_pass_row[3] <= first_pass_row[2];

    finish_tmp[1] <= finish_out[0];
    finish_in[1]  <= finish_tmp[1];
    finish_tmp[2] <= finish_out[1];
    finish_in[2]  <= finish_tmp[2];
    finish_tmp[3] <= finish_out[2];
    finish_in[3]  <= finish_tmp[3];
  end

  wire first_pass_row_0;
  assign first_pass_row_0 = first_pass_del;
  wire first_pass_row_1;
  assign first_pass_row_1 = first_pass_row[1];
  wire first_pass_row_2;
  assign first_pass_row_2 = first_pass_row[2];
  wire first_pass_row_3;
  assign first_pass_row_3 = first_pass_row[3];

  wire [7:0] data_delay;
  delay #(.WIDTH(8), .DELAY(0)) del_inst_in_0 (
    .clk(clk),
    .din(data_del[7:0]),
    .dout(data_delay[7:0])
  );

  /////////////////////////////////////
  // row 0
  // row 0, col 0

  wire start_in_0_0;
  wire [1:0] op_in_0_0;


  wire [1:0] fac_in_0_0;


  wire start_out_0_0;
  wire [1:0] op_out_0_0;


  wire [1:0] fac_out_0_0;

  wire r_0_0;

  wire [1:0] data_in_0_0;
  wire [1:0] data_out_0_0;

  assign data_in_0_0 = data_delay[1:0];

  assign start_in_0_0 = start_del;
  assign op_in_0_0 = op_in_del[1:0];
  assign fac_in_0_0 = op_in_del[3:2];


  wire [1:0] inv_out_0_0;
  wire inv_en_0_0;

  processor_AB #(.WIDTH(2)) P_0_0 (
    .functionA  (functionA_dup[0]),
    .first_pass (first_pass_row_0),
    .pass       (pass[0]),
    .clk        (clk),
    .rst        (rst),
    .data_in    (data_in_0_0),
    .inv_in     (inv_out_0_0),
    .inv_en     (inv_en_0_0),
    .start_in   (start_in_0_0),
    .finish_in  (finish_del),
    .finish_out (finish_out[0]),
    .op_in      (op_in_0_0),
    .op_out     (op_out_0_0),
    .fac_in      (fac_in_0_0),
    .fac_out     (fac_out_0_0),
    .start_out  (start_out_0_0),
    .data_out   (data_out_0_0),
    .r          (r_0_0)
  );

  // row 0, col 1

  wire start_in_0_1;
  wire [1:0] op_in_0_1;


  wire [1:0] fac_in_0_1;


  wire start_out_0_1;
  wire [1:0] op_out_0_1;


  wire [1:0] fac_out_0_1;

  wire [1:0] data_in_0_1;
  wire [1:0] data_out_0_1;

  assign data_in_0_1 = data_delay[3:2];

  assign start_in_0_1 = start_out_0_0;
  assign op_in_0_1 = op_out_0_0;
  assign fac_in_0_1 = fac_out_0_0;

  processor_B #(.WIDTH(2)) P_0_1 (
    .clk       (clk),
    .rst       (rst),
    .data_in   (data_in_0_1),
    .start_in  (start_in_0_1),
    .op_in     (op_in_0_1),
    .op_out    (op_out_0_1),
    .fac_in    (fac_in_0_1),
    .fac_out   (fac_out_0_1),
    .start_out (start_out_0_1),
    .data_out  (data_out_0_1)
  );

  // row 0, col 2

  wire start_in_0_2;
  wire [1:0] op_in_0_2;


  wire [1:0] fac_in_0_2;


  wire start_out_0_2;
  wire [1:0] op_out_0_2;


  wire [1:0] fac_out_0_2;

  wire [1:0] data_in_0_2;
  wire [1:0] data_out_0_2;

  assign data_in_0_2 = data_delay[5:4];

  assign start_in_0_2 = start_out_0_1;
  assign op_in_0_2 = op_out_0_1;
  assign fac_in_0_2 = fac_out_0_1;

  processor_B #(.WIDTH(2)) P_0_2 (
    .clk       (clk),
    .rst       (rst),
    .data_in   (data_in_0_2),
    .start_in  (start_in_0_2),
    .op_in     (op_in_0_2),
    .op_out    (op_out_0_2),
    .fac_in    (fac_in_0_2),
    .fac_out   (fac_out_0_2),
    .start_out (start_out_0_2),
    .data_out  (data_out_0_2)
  );

  // row 0, col 3

  wire start_in_0_3;
  wire [1:0] op_in_0_3;


  wire [1:0] fac_in_0_3;

  //verilator lint_off UNUSEDSIGNAL 
  wire start_out_0_3;
  //verilator lint_off UNUSEDSIGNAL

  wire [1:0] op_out_0_3;


  wire [1:0] fac_out_0_3;

  wire [1:0] data_in_0_3;
  wire [1:0] data_out_0_3;

  assign data_in_0_3 = data_delay[7:6];

  assign start_in_0_3 = start_out_0_2;
  assign op_in_0_3 = op_out_0_2;
  assign fac_in_0_3 = fac_out_0_2;

  processor_B #(.WIDTH(2)) P_0_3 (
    .clk       (clk),
    .rst       (rst),
    .data_in   (data_in_0_3),
    .start_in  (start_in_0_3),
    .op_in     (op_in_0_3),
    .op_out    (op_out_0_3),
    .fac_in    (fac_in_0_3),
    .fac_out   (fac_out_0_3),
    .start_out (start_out_0_3),
    .data_out  (data_out_0_3)
  );

  /////////////////////////////////////
  // row 1
  // row 1, col 0

  wire start_in_1_0;
  wire [1:0] op_in_1_0;


  wire [1:0] fac_in_1_0;


  wire start_out_1_0;
  wire [1:0] op_out_1_0;


  wire [1:0] fac_out_1_0;

  reg  [1:0] data_in_1_0 = 2'b0;
  wire [1:0] data_out_1_0;

  always @(posedge clk) begin
    data_in_1_0 <= data_out_0_0;
  end

  assign start_in_1_0 = start_row[1];
  assign op_in_1_0 = op_in_del[5:4];
  assign fac_in_1_0 = op_in_del[7:6];

  processor_B #(.WIDTH(2)) P_1_0 (
    .clk       (clk),
    .rst       (rst),
    .data_in   (data_in_1_0),
    .start_in  (start_in_1_0),
    .op_in     (op_in_1_0),
    .op_out    (op_out_1_0),
    .fac_in    (fac_in_1_0),
    .fac_out   (fac_out_1_0),
    .start_out (start_out_1_0),
    .data_out  (data_out_1_0)
  );

  // row 1, col 1

  wire start_in_1_1;
  wire [1:0] op_in_1_1;


  wire [1:0] fac_in_1_1;


  wire start_out_1_1;
  wire [1:0] op_out_1_1;


  wire [1:0] fac_out_1_1;

  wire r_1_1;

  reg  [1:0] data_in_1_1 = 2'b0;
  wire [1:0] data_out_1_1;

  always @(posedge clk) begin
    data_in_1_1 <= data_out_0_1;
  end

  assign start_in_1_1 = start_out_1_0;
  assign op_in_1_1 = op_out_1_0;
  assign fac_in_1_1 = fac_out_1_0;


  wire [1:0] inv_out_1_1;
  wire inv_en_1_1;

  GFE_inv #(.DELAY(1)) gfe_inv_inst_1_1
  (
    .clk(clk),
    .din_A(data_out_0_1),
    .dout_A(inv_out_1_1),
    .dout_en_A(inv_en_1_1),
    .din_B(data[1:0]),
    .dout_B(inv_out_0_0),
    .dout_en_B(inv_en_0_0)
  );

  processor_AB #(.WIDTH(2)) P_1_1 (
    .functionA  (functionA_dup[1]),
    .first_pass (first_pass_row_1),
    .pass       (pass[1]),
    .clk        (clk),
    .rst        (rst),
    .data_in    (data_in_1_1),
    .inv_in     (inv_out_1_1),
    .inv_en     (inv_en_1_1),
    .start_in   (start_in_1_1),
    .finish_in  (finish_in[1]),
    .finish_out (finish_out[1]),
    .op_in      (op_in_1_1),
    .op_out     (op_out_1_1),
    .fac_in      (fac_in_1_1),
    .fac_out     (fac_out_1_1),
    .start_out  (start_out_1_1),
    .data_out   (data_out_1_1),
    .r          (r_1_1)
  );

  // row 1, col 2

  wire start_in_1_2;
  wire [1:0] op_in_1_2;


  wire [1:0] fac_in_1_2;


  wire start_out_1_2;
  wire [1:0] op_out_1_2;


  wire [1:0] fac_out_1_2;

  reg  [1:0] data_in_1_2 = 2'b0;
  wire [1:0] data_out_1_2;

  always @(posedge clk) begin
    data_in_1_2 <= data_out_0_2;
  end

  assign start_in_1_2 = start_out_1_1;
  assign op_in_1_2 = op_out_1_1;
  assign fac_in_1_2 = fac_out_1_1;

  processor_B #(.WIDTH(2)) P_1_2 (
    .clk       (clk),
    .rst       (rst),
    .data_in   (data_in_1_2),
    .start_in  (start_in_1_2),
    .op_in     (op_in_1_2),
    .op_out    (op_out_1_2),
    .fac_in    (fac_in_1_2),
    .fac_out   (fac_out_1_2),
    .start_out (start_out_1_2),
    .data_out  (data_out_1_2)
  );

  // row 1, col 3

  wire start_in_1_3;
  wire [1:0] op_in_1_3;


  wire [1:0] fac_in_1_3;

  //verilator lint_off UNUSEDSIGNAL
  wire start_out_1_3;
  //verilator lint_off UNUSEDSIGNAL
  wire [1:0] op_out_1_3;


  wire [1:0] fac_out_1_3;

  reg  [1:0] data_in_1_3 = 2'b0;
  wire [1:0] data_out_1_3;

  always @(posedge clk) begin
    data_in_1_3 <= data_out_0_3;
  end

  assign start_in_1_3 = start_out_1_2;
  assign op_in_1_3 = op_out_1_2;
  assign fac_in_1_3 = fac_out_1_2;

  processor_B #(.WIDTH(2)) P_1_3 (
    .clk       (clk),
    .rst       (rst),
    .data_in   (data_in_1_3),
    .start_in  (start_in_1_3),
    .op_in     (op_in_1_3),
    .op_out    (op_out_1_3),
    .fac_in    (fac_in_1_3),
    .fac_out   (fac_out_1_3),
    .start_out (start_out_1_3),
    .data_out  (data_out_1_3)
  );

  /////////////////////////////////////
  // row 2
  // row 2, col 0

  wire start_in_2_0;
  wire [1:0] op_in_2_0;


  wire [1:0] fac_in_2_0;


  wire start_out_2_0;
  wire [1:0] op_out_2_0;


  wire [1:0] fac_out_2_0;

  reg  [1:0] data_in_2_0 = 2'b0;
  wire [1:0] data_out_2_0;

  always @(posedge clk) begin
    data_in_2_0 <= data_out_1_0;
  end

  assign start_in_2_0 = start_row[2];
  assign op_in_2_0 = op_in_del[9:8];
  assign fac_in_2_0 = op_in_del[11:10];

  processor_B #(.WIDTH(2)) P_2_0 (
    .clk       (clk),
    .rst       (rst),
    .data_in   (data_in_2_0),
    .start_in  (start_in_2_0),
    .op_in     (op_in_2_0),
    .op_out    (op_out_2_0),
    .fac_in    (fac_in_2_0),
    .fac_out   (fac_out_2_0),
    .start_out (start_out_2_0),
    .data_out  (data_out_2_0)
  );

  // row 2, col 1

  wire start_in_2_1;
  wire [1:0] op_in_2_1;


  wire [1:0] fac_in_2_1;


  wire start_out_2_1;
  wire [1:0] op_out_2_1;


  wire [1:0] fac_out_2_1;

  reg  [1:0] data_in_2_1 = 2'b0;
  wire [1:0] data_out_2_1;

  always @(posedge clk) begin
    data_in_2_1 <= data_out_1_1;
  end

  assign start_in_2_1 = start_out_2_0;
  assign op_in_2_1 = op_out_2_0;
  assign fac_in_2_1 = fac_out_2_0;

  processor_B #(.WIDTH(2)) P_2_1 (
    .clk       (clk),
    .rst       (rst),
    .data_in   (data_in_2_1),
    .start_in  (start_in_2_1),
    .op_in     (op_in_2_1),
    .op_out    (op_out_2_1),
    .fac_in    (fac_in_2_1),
    .fac_out   (fac_out_2_1),
    .start_out (start_out_2_1),
    .data_out  (data_out_2_1)
  );

  // row 2, col 2

  wire start_in_2_2;
  wire [1:0] op_in_2_2;


  wire [1:0] fac_in_2_2;


  wire start_out_2_2;
  wire [1:0] op_out_2_2;


  wire [1:0] fac_out_2_2;

  wire r_2_2;

  reg  [1:0] data_in_2_2 = 2'b0;
  wire [1:0] data_out_2_2;

  always @(posedge clk) begin
    data_in_2_2 <= data_out_1_2;
  end

  assign start_in_2_2 = start_out_2_1;
  assign op_in_2_2 = op_out_2_1;
  assign fac_in_2_2 = fac_out_2_1;


  wire [1:0] inv_out_2_2;
  wire inv_en_2_2;

  processor_AB #(.WIDTH(2)) P_2_2 (
    .functionA  (functionA_dup[2]),
    .first_pass (first_pass_row_2),
    .pass       (pass[2]),
    .clk        (clk),
    .rst        (rst),
    .data_in    (data_in_2_2),
    .inv_in     (inv_out_2_2),
    .inv_en     (inv_en_2_2),
    .start_in   (start_in_2_2),
    .finish_in  (finish_in[2]),
    .finish_out (finish_out[2]),
    .op_in      (op_in_2_2),
    .op_out     (op_out_2_2),
    .fac_in      (fac_in_2_2),
    .fac_out     (fac_out_2_2),
    .start_out  (start_out_2_2),
    .data_out   (data_out_2_2),
    .r          (r_2_2)
  );

  // row 2, col 3

  wire start_in_2_3;
  wire [1:0] op_in_2_3;


  wire [1:0] fac_in_2_3;

  //verilator lint_off UNUSEDSIGNAL
  wire start_out_2_3;
  //verilator lint_off UNUSEDSIGNAL
  wire [1:0] op_out_2_3;


  wire [1:0] fac_out_2_3;

  reg  [1:0] data_in_2_3 = 2'b0;
  wire [1:0] data_out_2_3;

  always @(posedge clk) begin
    data_in_2_3 <= data_out_1_3;
  end

  assign start_in_2_3 = start_out_2_2;
  assign op_in_2_3 = op_out_2_2;
  assign fac_in_2_3 = fac_out_2_2;

  processor_B #(.WIDTH(2)) P_2_3 (
    .clk       (clk),
    .rst       (rst),
    .data_in   (data_in_2_3),
    .start_in  (start_in_2_3),
    .op_in     (op_in_2_3),
    .op_out    (op_out_2_3),
    .fac_in    (fac_in_2_3),
    .fac_out   (fac_out_2_3),
    .start_out (start_out_2_3),
    .data_out  (data_out_2_3)
  );

  /////////////////////////////////////
  // row 3
  // row 3, col 0

  wire start_in_3_0;
  wire [1:0] op_in_3_0;


  wire [1:0] fac_in_3_0;


  wire start_out_3_0;
  wire [1:0] op_out_3_0;


  wire [1:0] fac_out_3_0;

  reg  [1:0] data_in_3_0 = 2'b0;
  wire [1:0] data_out_3_0;

  always @(posedge clk) begin
    data_in_3_0 <= data_out_2_0;
  end

  assign start_in_3_0 = start_row[3];
  assign op_in_3_0 = op_in_del[13:12];
  assign fac_in_3_0 = op_in_del[15:14];

  processor_B #(.WIDTH(2)) P_3_0 (
    .clk       (clk),
    .rst       (rst),
    .data_in   (data_in_3_0),
    .start_in  (start_in_3_0),
    .op_in     (op_in_3_0),
    .op_out    (op_out_3_0),
    .fac_in    (fac_in_3_0),
    .fac_out   (fac_out_3_0),
    .start_out (start_out_3_0),
    .data_out  (data_out_3_0)
  );

  // row 3, col 1

  wire start_in_3_1;
  wire [1:0] op_in_3_1;


  wire [1:0] fac_in_3_1;


  wire start_out_3_1;
  wire [1:0] op_out_3_1;


  wire [1:0] fac_out_3_1;

  reg  [1:0] data_in_3_1 = 2'b0;
  wire [1:0] data_out_3_1;

  always @(posedge clk) begin
    data_in_3_1 <= data_out_2_1;
  end

  assign start_in_3_1 = start_out_3_0;
  assign op_in_3_1 = op_out_3_0;
  assign fac_in_3_1 = fac_out_3_0;

  processor_B #(.WIDTH(2)) P_3_1 (
    .clk       (clk),
    .rst       (rst),
    .data_in   (data_in_3_1),
    .start_in  (start_in_3_1),
    .op_in     (op_in_3_1),
    .op_out    (op_out_3_1),
    .fac_in    (fac_in_3_1),
    .fac_out   (fac_out_3_1),
    .start_out (start_out_3_1),
    .data_out  (data_out_3_1)
  );

  // row 3, col 2

  wire start_in_3_2;
  wire [1:0] op_in_3_2;


  wire [1:0] fac_in_3_2;


  wire start_out_3_2;
  wire [1:0] op_out_3_2;


  wire [1:0] fac_out_3_2;

  reg  [1:0] data_in_3_2 = 2'b0;
  wire [1:0] data_out_3_2;

  always @(posedge clk) begin
    data_in_3_2 <= data_out_2_2;
  end

  assign start_in_3_2 = start_out_3_1;
  assign op_in_3_2 = op_out_3_1;
  assign fac_in_3_2 = fac_out_3_1;

  processor_B #(.WIDTH(2)) P_3_2 (
    .clk       (clk),
    .rst       (rst),
    .data_in   (data_in_3_2),
    .start_in  (start_in_3_2),
    .op_in     (op_in_3_2),
    .op_out    (op_out_3_2),
    .fac_in    (fac_in_3_2),
    .fac_out   (fac_out_3_2),
    .start_out (start_out_3_2),
    .data_out  (data_out_3_2)
  );

  // row 3, col 3

  wire start_in_3_3;
  wire [1:0] op_in_3_3;


  wire [1:0] fac_in_3_3;

  //verilator lint_off UNUSEDSIGNAL
  wire start_out_3_3;
  //verilator lint_off UNUSEDSIGNAL
  wire [1:0] op_out_3_3;


  wire [1:0] fac_out_3_3;

  wire r_3_3;

  reg  [1:0] data_in_3_3 = 2'b0;
  wire [1:0] data_out_3_3;

  always @(posedge clk) begin
    data_in_3_3 <= data_out_2_3;
  end

  assign start_in_3_3 = start_out_3_2;
  assign op_in_3_3 = op_out_3_2;
  assign fac_in_3_3 = fac_out_3_2;


  wire [1:0] inv_out_3_3;
  wire inv_en_3_3;

  GFE_inv #(.DELAY(1)) gfe_inv_inst_3_3
  (
    .clk(clk),
    .din_A(data_out_2_3),
    .dout_A(inv_out_3_3),
    .dout_en_A(inv_en_3_3),
    .din_B(data_out_1_2),
    .dout_B(inv_out_2_2),
    .dout_en_B(inv_en_2_2)
  );

  processor_AB #(.WIDTH(2)) P_3_3 (
    .functionA  (functionA_dup[3]),
    .first_pass (first_pass_row_3),
    .pass       (pass[3]),
    .clk        (clk),
    .rst        (rst),
    .data_in    (data_in_3_3),
    .inv_in     (inv_out_3_3),
    .inv_en     (inv_en_3_3),
    .start_in   (start_in_3_3),
    .finish_in  (finish_in[3]),
    .finish_out (finish_out[3]),
    .op_in      (op_in_3_3),
    .op_out     (op_out_3_3),
    .fac_in      (fac_in_3_3),
    .fac_out     (fac_out_3_3),
    .start_out  (start_out_3_3),
    .data_out   (data_out_3_3),
    .r          (r_3_3)
  );


  /////////////////////////
  // outputs 


  reg [7:0] data_out_reg = 0;

  always @(posedge clk) begin
    data_out_reg <= {data_out_3_3, data_out_3_2, data_out_3_1, data_out_3_0};
  end

  delay #(.WIDTH(8), .DELAY(0)) del_inst_out_0 (
    .clk(clk),
    .din(data_out_reg[7:0]),
    .dout(data_out[7:0])
  ); 


  assign op_out = {fac_out_3_3, op_out_3_3, fac_out_2_3, op_out_2_3, fac_out_1_3, op_out_1_3, fac_out_0_3, op_out_0_3};

  assign r_A_and = r_0_0 && r_1_1 && r_2_2 && r_3_3;

endmodule


