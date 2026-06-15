// `timescale 1ns / 1ns

module MAC_unit#(
    parameter A_Input_Width = 16,   // Width of input A and B
    parameter C_Output_Width = 32   // Width of output C (Accumulated result)
)(
    input logic clk,
    input logic reset,
    input logic enable,
    input logic signed [A_Input_Width-1:0] A_in,
    input logic signed [A_Input_Width-1:0] B_in,
    // input logic signed [C_Output_Width-1:0] C_in,
    output logic signed [A_Input_Width-1:0] A_out,
    output logic signed [A_Input_Width-1:0] B_out,
    output logic signed [C_Output_Width-1:0] C_out
);

logic signed [C_Output_Width-1:0] Acc_reg; //Internal reg
logic signed [A_Input_Width-1:0] A_in_reg, B_in_reg; //Internal regs

localparam Prod_Width = A_Input_Width * 2; // Width after multiplication
localparam A_Half_Width = A_Input_Width / 2;    // Width for splitting the operand A_in_reg
localparam Hi_Width = A_Half_Width + A_Input_Width; // Width of upper bits in operand
localparam Low_Width = Hi_Width + 1; // Width of lower bits
logic signed [Hi_Width-1:0] Hi_reg; //Upper bits reg
logic signed [Low_Width-1:0] Low_reg; //Lower bits reg
logic signed [Prod_Width-1:0] Product;


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
            A_in_reg <= A_in;   // Register the incoming 16-bit inputs
            B_in_reg <= B_in;
            Hi_reg <= $signed(A_in_reg[A_Input_Width-1 : A_Half_Width]) * B_in_reg; //Partial product decomposition(Most significant bits of input A) 
            Low_reg <= $signed({1'b0, A_in_reg[A_Half_Width-1:0]}) * B_in_reg;      //Partial product decomposition(Least significant bits of input A) 

            Product <= ($signed({{(Prod_Width-Hi_Width){Hi_reg[Hi_Width-1]}}, Hi_reg}) <<< A_Half_Width) +  // Widen Hi_reg from 24 bits to full 32-bit product width (sign extend),
                        $signed({{(Prod_Width-Low_Width){Low_reg[Low_Width-1]}}, Low_reg});         // shift to the left by A_Half_Width (8) bits and add Low_reg

            // Product <= A_in_reg * B_in_reg;      Full 16 x 16 multiplication
            Acc_reg <= Acc_reg + $signed(Product);
            A_out <= A_in;
            B_out <= B_in;
        end
    
    end

end

assign C_out = Acc_reg;

endmodule
