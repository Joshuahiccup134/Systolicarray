// `default_nettype none
//`default_nettype wire
//`include "Systolic_Array.sv"

module tb_systolicarray;

localparam N = 4;
localparam A_Input_Width = 16;
localparam C_Output_Width = 32;

reg clk;
reg reset;
reg enable;
reg start;
wire done;
reg [A_Input_Width-1:0] A_in[N];
reg [A_Input_Width-1:0] B_in[N];
reg [C_Output_Width-1:0] C_out[N][N];

Systolic_Array dut  // 4x4 Systolic Array with 16-bit inputs and 32-bit outputs
(
    .reset (reset),
    .clk (clk),
    .enable (enable),
    .start (start),
    .done (done),
    .A_in (A_in),
    .B_in (B_in),
    .C_out (C_out)
);

localparam CLK_PERIOD = 10;
always #(CLK_PERIOD/2) clk=~clk;

initial begin
    $dumpfile("tb_systolicarray.vcd");
    $dumpvars(0, tb_systolicarray);
end

initial begin
    #1 reset=1'b1;clk=1'b1;
    #(CLK_PERIOD*3) reset=1;
    #(CLK_PERIOD*3) reset=0;clk=0;
    repeat(5) @(posedge clk);
    reset=1;
    @(posedge clk);
    repeat(2) @(posedge clk);
    $finish(2);
end

endmodule
