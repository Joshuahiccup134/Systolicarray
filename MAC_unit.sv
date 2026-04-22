`timescale 1ns / 1ns

module MAC_unit#(
    parameter A_Input_Width = 16,   // Width of input A and weight B
    parameter C_Output_Width = 32   // Width of output C (Accumulated result)
)(
    input logic clk,
    input logic reset,
    input logic enable,
    input logic signed [A_Input_Width-1:0] A_in,
    input logic signed [A_Input_Width-1:0] B_in,
    input logic signed [C_Output_Width-1:0] C_in,
    output logic signed [A_Input_Width-1:0] A_out,
    // output logic signed [A_Input_Width-1:0] B_out,
    output logic signed [C_Output_Width-1:0] C_out
);



localparam Prod_Width = A_Input_Width*2; // Width after multiplication
logic signed [Prod_Width-1:0] Product;
logic signed [C_Output_Width-1:0] Acc_reg; //Internal reg

// assign Product = A_in * B_in; // Signed multiplication
// assign Acc_reg = C_in + $signed(Product); // Output the accumulated result

always_ff @(posedge clk) begin
    if (reset)
    begin
    A_out <= 0;
    C_out <= 0;
    end

    else begin
    if (enable) begin
        C_out <= A_in * B_in; // Output the accumulated result
        A_out <= A_in;
    end
    else begin
        C_out <= C_out; 
        A_out <= A_out;
        // B_out <= B_out;
    end

    
    end
end
// assign C_out = Acc_reg;
endmodule