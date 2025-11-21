module Systolic_Array #(
    parameter N=4,
    parameter A_Input_Width =16,
    parameter C_Output_Width =32)(
    input logic clk,
    input logic reset,
    input logic start,
    input logic enable,
    input logic signed [A_Input_Width-1:0] A_in[N],
    input logic signed [A_Input_Width-1:0] B_in[N],
    output logic signed [C_Output_Width-1:0] C_out[N][N],
    output logic done
    );

logic signed [A_Input_Width-1:0] A_bus[0:N-1][0:N]; // Extra column for input coming in from left
logic signed [A_Input_Width-1:0] B_bus[0:N][0:N-1]; // Extra row for input coming in from top
logic signed [C_Output_Width-1:0] C_bus[0:N-1][0:N-1]; // Accumulation matrix for each MAC unit

logic enable_bus[0:N-1][0:N-1]; // Enable signals for clock-gating each MAC unit
integer i, j;
logic [$clog2(N*2+4)-1:0] clkcount; // Counter to track the number of clock cycles and the progress of computation
logic running; // Signal to indicate the start of computation

always_ff @(posedge clk or posedge reset) begin
    if (reset) begin
        clkcount <= '0; // Reset clock counter, running and done signals
        running <= 1'b0;
        done <= 1'b0;
        for (i = 0; i < N; i = i + 1) begin
            for (j = 0; j < N; j = j + 1) begin
                enable_bus[i][j] <= 1'b0;
                C_bus[i][j] <= '0; // Initialize accumulation registers to zero
                A_bus[i][j] <= '0; // Initialize A and B buses to zero
                B_bus[i][j] <= '0;
            end
        end
    end

    else begin 
        done <= 1'b0;
        if (start&&!running) begin // Start signal received
            running <= 1'b1;
            clkcount <= '0;

            for (i=0; i < N; i = i + 1) begin // Load input elements into the first column
                A_bus[i][0]<= A_in[i];
            end

            for (j=0; j < N; j = j + 1) begin // Load input elements into the first row
                B_bus[0][j]<= B_in[j];
            end

            for (i=0; i<N; i=i+1) begin
                for (j=0; j<N; j=j+1) begin
                    C_bus[i][j] <= '0; // Clear accumulation registers on start
                end
            end
        end
    

        else if (running) begin
            clkcount <= clkcount + 1;

            // Shift A and B values through the array
            for (i = 0; i < N; i = i + 1) begin // Shift A input values to the right
                for (j = 0; j < N; j = j + 1) begin
                    A_bus[i][j+1] <= A_bus[i][j];
                end
                A_bus[i][0] <= '0; // Clear the input column after shifting
            end

            for (i = 0; i < N; i = i + 1) begin // Shift B input values down
                for (j = 0; j < N; j = j + 1) begin
                    B_bus[i+1][j] <= B_bus[i][j];
                end
                B_bus[0][i] <= '0; // Clear the first row after shifting
            end

            if (clkcount >= N*2) begin // Computation is complete after N*2 cycles
                running <= 1'b0;
                done <= 1'b1;
            
                for (i= 0; i < N; i = i + 1) begin
                    for (j= 0; j < N; j = j + 1) begin
                        C_out[i][j] <= C_bus[i][j]; // Output the accumulated results
                    end
                end
            end
        end
    end
end

        genvar r, c;
        generate
            for (r = 0; r < N; r = r + 1) begin : row_loop
                for (c = 0; c < N; c = c + 1) begin : col_loop
                    logic signed [A_Input_Width-1:0] A_in_wire, B_in_wire;
                    logic signed [A_Input_Width-1:0] A_out_wire, B_out_wire;
                    logic signed [C_Output_Width-1:0] C_out_wire;

                    assign A_in_wire = A_bus[r][c]; // Connect A and B inputs from the bus
                    assign B_in_wire = B_bus[r][c];

                    assign enable_bus[r][c] = enable;   // Clock-gate each MAC unit based on the global enable signal

                    MAC_unit #(
                        .A_Input_Width(A_Input_Width),
                        .C_Output_Width(C_Output_Width)
                    )

                    mac_inst(
                        .clk(clk),
                        .reset(reset),
                        .enable(enable_bus[r][c]),
                        .A_in(A_in_wire),
                        .B_in(B_in_wire),
                        .C_in(C_bus[r][c]),
                        .A_out(A_out_wire),
                        .B_out(B_out_wire),
                        .C_out(C_out_wire)
                    );
                
                        // Update the accumulation registers(one cycle delay)
                        
                        
                        assign C_bus[r][c] = enable_bus[r][c] ? C_out_wire: '0; // Update accumulation register with MAC unit result if enabled
                    

                    // forward A and B outputs to the next MAC unit in the array
                        
                        assign A_bus[r][c+1] = A_out_wire;
                        assign B_bus[r+1][c] = B_out_wire;
                       
                end
            end
        endgenerate


endmodule
