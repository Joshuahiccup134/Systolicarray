module MAC_unit#(
    parameter A_Input_Width = 16,   // Width of input A and weight B
    parameter C_Output_Width = 32   // Width of output C (Accumulated result)
)(
    input logic clk,
    input logic reset_in,
    input logic enable,
    input logic signed [A_Input_Width-1:0] A_in,
    input logic signed [A_Input_Width-1:0] B_in,
    input logic signed [C_Output_Width-1:0] C_in,
    output logic signed [A_Input_Width-1:0] A_out,
    // output logic signed [A_Input_Width-1:0] B_out,
    output logic signed [C_Output_Width-1:0] C_out,
    output logic reset_out
);



localparam Prod_Width = A_Input_Width*2; // Width after multiplication
logic signed [Prod_Width-1:0] Product;
// logic signed [C_Output_Width-1:0] Acc_reg; //Internal reg
logic signed [A_Input_Width-1:0] A_in_reg, B_in_reg; //Internal reg
localparam A_Half_Width = A_Input_Width / 2;    // Width for splitting the operand A_in_reg
localparam Hi_Width = A_Half_Width + A_Input_Width; // Width of upper bits in operand
localparam Low_Width = Hi_Width + 1; // Width of lower bits
logic signed [Hi_Width-1:0] Hi_reg; //Upper bits reg
logic signed [Low_Width-1:0] Low_reg; //Lower bits reg
logic signed [Hi_Width-1:0] prod_hi_hi, prod_hi_lo;     // A_Hi * B_Hi, ...,A_Low * B_Low. Expanded decomposed products, before shift (A_Hi+A_Low) * (B_Hi+B_Low)
logic signed [Low_Width-1:0] prod_lo_hi, prod_lo_lo;


always_ff @( posedge clk ) begin        //Pipeline stage 1,2 - Input buffer and partial product decomposition
    
    if (reset_in) begin
        A_in_reg <= 0;
        B_in_reg <= 0;
    end

    if (enable) begin
        A_in_reg <= A_in;               //Partial product decomposition(Most significant bits of input A)
        B_in_reg <= B_in;               //Partial product decomposition(Most significant bits of input A) 

        prod_hi_hi <= $signed(A_in_reg[A_Input_Width-1 : A_Half_Width]) * ($signed(B_in_reg[A_Input_Width-1 : A_Half_Width]));  //A_Hi * B_Hi
        prod_hi_lo <= $signed(A_in_reg[A_Input_Width-1 : A_Half_Width]) * ($signed({1'b0, B_in_reg[A_Half_Width-1:0]}));        //A_Hi * B_Low
        prod_lo_hi <= $signed({1'b0, A_in_reg[A_Half_Width-1:0]}) * ($signed(B_in_reg[A_Input_Width-1 : A_Half_Width]));      // B_Low * A_Hi
        prod_lo_lo <= $signed({1'b0, A_in_reg[A_Half_Width-1:0]}) * ($signed({1'b0, B_in_reg[A_Half_Width-1:0]}));           // B_Low * A_Low
        // Hi_reg_B <= $signed(B_in_reg[A_Input_Width-1 : A_Half_Width]); //Partial product decomposition(Most significant bits of input A) 
        // Low_reg_B <= $signed({1'b0, B_in_reg[A_Half_Width-1:0]});      //Partial product decomposition(Least significant bits of input A) 

    end
end

always_ff @(posedge clk) begin      //Pipeline stage 3,4
    if (reset_in) begin
        A_out <= 0;
        // C_out <= 0;
        // Product <= 0;
    end

    else begin

        if (enable) begin
            Hi_reg <= (prod_hi_hi <<< A_Half_Width) + prod_hi_lo;
            Low_reg <= (prod_lo_hi <<< A_Half_Width) + prod_lo_lo;

            Product <= ($signed({{(Prod_Width-Hi_Width){Hi_reg[Hi_Width-1]}}, Hi_reg}) <<< A_Half_Width) +  // Widen Hi_reg from 24 bits to full 32-bit product width (sign extend),
                        $signed({{(Prod_Width-Low_Width){Low_reg[Low_Width-1]}}, Low_reg});         // shift to the left by A_Half_Width (8) bits and add Low_reg

            C_out <= $signed(Product) + C_in; // Output the accumulated result
            A_out <= A_in;
        end

        else begin
            C_out <= C_in; 
            A_out <= A_in;
            reset_out <= reset_in;
            // B_out <= B_out;
        end

    end
end
// assign C_out = Acc_reg;
endmodule