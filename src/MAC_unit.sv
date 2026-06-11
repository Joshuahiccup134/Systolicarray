// `timescale 1ns / 1ns

module MAC_unit#(
    parameter A_Input_Width = 16,   // Width of input A and B
    parameter C_Output_Width = 32   // Width of output C (Accumulated result)
)(
    input logic clk,
    input logic reset,
    input logic enable,
    input logic signed [A_Input_Width-1:0] A_in,
    // input logic signed [A_Input_Width-1:0] A_in[N][N],
    // input logic signed [A_Input_Width-1:0] B_in[N][N],
    input logic signed [A_Input_Width-1:0] B_in,
    // input logic signed [C_Output_Width-1:0] C_in,
    output logic signed [A_Input_Width-1:0] A_out,
    output logic signed [A_Input_Width-1:0] B_out,
    output logic signed [C_Output_Width-1:0] C_out
);

logic signed [C_Output_Width-1:0] Acc_reg; //Internal reg
logic signed [A_Input_Width-1:0] A_in_reg, B_in_reg; //Internal reg

localparam Prod_Width = A_Input_Width*2; // Width after multiplication
localparam A_Half_Width = A_Input_Width/2; 
localparam Hi_Width = A_Half_Width + A_Input_Width; // Width of upper bits in operand
localparam Low_Width = Hi_Width +1; // Width of lower bits
logic signed [Hi_Width-1:0] Hi_reg; //Upper bits reg
logic signed [Low_Width-1:0] Low_reg; //Lower bits reg
logic signed [Prod_Width-1:0] Product;

// assign Product = A_in * B_in; // Signed multiplication

always_ff @(posedge clk) begin
    if (reset)begin
        A_out <= 0;
        B_out <= 0;
        Acc_reg <= 0;
        A_in_reg <= 0;
        B_in_reg <= 0;
        Hi_reg <= 0;
        Low_reg <= 0;
        Product <= 0;
    end

    else begin
    if (enable) begin
        A_in_reg <= A_in;
        B_in_reg <= B_in;
        Hi_reg <= $signed(A_in_reg[A_Input_Width-1 : A_Half_Width]) * B_in_reg;
        Low_reg <= $signed({1'b0, A_in_reg[A_Half_Width-1:0]}) * B_in_reg;

        Product <= ($signed({{(Prod_Width-Hi_Width){Hi_reg[Hi_Width-1]}}, Hi_reg}) <<< A_Half_Width) + $signed({{(Prod_Width-Low_Width){Low_reg[Low_Width-1]}}, Low_reg});        
        // Product <= A_in_reg * B_in_reg;
        Acc_reg <= Acc_reg + $signed(Product);
        A_out <= A_in;
        B_out <= B_in;
    end
    // else begin
    //     Acc_reg <= Acc_reg; 
    //     A_out <= A_out;
    //     B_out <= B_out;
    // end

    
    end
end
assign C_out = Acc_reg;
endmodule
