module Systolic_Array #(
    parameter N=2,
    parameter A_Input_Width =16,
    parameter C_Output_Width =32)(
    input logic clk,
    input logic reset,
    input logic start,

    input logic signed [A_Input_Width-1:0] A_in [N][N],
    input logic signed [A_Input_Width-1:0] B_in [N][N],
    output logic signed [C_Output_Width-1:0] C_out[N][N],
    output logic done
    );


localparam idx_N = $clog2(N);
logic signed [A_Input_Width-1:0] A_bus[0:N-1][0:N]; // Extra column for input coming in from left
// logic signed [A_Input_Width-1:0] A_bus_reg[0:N-1][0:N]; // pipeline register
logic signed [A_Input_Width-1:0] B_bus[0:N][0:N-1]; // Extra row for input coming in from top
// logic signed [A_Input_Width-1:0] B_bus_reg[0:N][0:N-1]; // pipeline register
// logic signed [C_Output_Width-1:0] C_bus[0:N-1][0:N-1]; // Accumulation matrix for each MAC unit
// logic signed [A_Input_Width-1:0] B_in_staggered[N][N];
// assign B_in_staggered = B_in; // Direct assignment for now

logic enable_bus[0:N-1][0:N-1]; // Enable signals for clock-gating each MAC unit
integer i, j;
// logic [$clog2(N):0] row_i, col_j;   // Loop variable to track the current input element being processed
logic [$clog2(2*N +1):0] clkcount; // Counter to track the number of clock cycles and the progress of computation
logic running; // Signal to indicate the start of computation
logic reset_reg;
localparam idx_width = $bits(clkcount); //the number of bits clkcount has(same as $clog in its declaration below)


always_ff @( posedge clk ) begin 
    reset_reg <=reset;
end
always_ff @(posedge clk) begin
    // reset_reg <= reset;
    if (reset_reg) begin
        clkcount <= '0; // Reset clock counter, running and done signals
        running <= 1'b0;
        done <= 1'b0;
        for (i = 0; i < N; i = i + 1) begin
            for (j = 0; j < N; j = j + 1) begin
                enable_bus[i][j] <= '0;
                A_bus[i][0] <= '0; // Initialize A and B buses to zero
                B_bus[0][j] <= '0;
            end
        end
    end

    else begin 
        done <= 1'b0;

        

        if (start&&!running) begin // Start signal received
            running <= 1'b1;
            clkcount <= '0; // Reset clock counter at the start of computation
        end
    

        else if (running) begin
            clkcount <= clkcount + 1;

            for (int row_i =0; row_i<N; row_i = row_i +1) begin
                for (int col_j =0; col_j<N; col_j = col_j +1) begin
                    // enable_bus[row_i][col_j] <= 1'b1;  // To test always-enabled
                    enable_bus[row_i][col_j] <= (clkcount >= ($bits(clkcount))'(row_i + col_j)) && (clkcount < ($bits(clkcount))'(row_i + col_j + N +3)); // +2 for MAC input and product pipelines +1 for partial prod
                end
            end

            // Shift A and B values through the array
            for (int row_i = 0; row_i < N; row_i = row_i + 1) begin // Shift A input values to the right
                if (clkcount >= idx_width'(row_i) && clkcount < idx_width'(row_i + N)) begin
                    A_bus[row_i][0] <= A_in[row_i][idx_N'(clkcount - idx_width'(row_i))]; 
                    // A_bus[row_i][0] <= A_bus_reg[row_i][0];
                end
                else begin
                    A_bus[row_i][0] <= '0; // Zero input after the cycle ends
                    // A_bus[row_i][0] <= A_bus_reg[row_i][0];
                end
            end
            

            for (int col_j = 0; col_j < N; col_j = col_j + 1) begin // Shift B input values down
                if (clkcount >= idx_width'(col_j) && clkcount < idx_width'(col_j + N)) begin
                    B_bus[0][col_j] <= B_in[idx_N'(clkcount - idx_width'(col_j))][col_j]; 
                    // B_bus[0][col_j] <= B_bus_reg[0][col_j];
                    
                end
                else begin
                    B_bus[0][col_j] <= '0; // Zero input after the cycle ends
                    // B_bus[0][col_j] <= B_bus_reg[0][col_j];
                end
            end

            // for (int row_i =0; row_i<N; row_i = row_i +1) begin
            //     for (int col_j =1; col_j<N; col_j = col_j +1) begin
            //         A_bus[row_i][col_j] <= A_bus_reg[row_i][col_j -1];
            //     end
            // end

            // for (int row_i =1; row_i<N; row_i = row_i +1) begin
            //     for (int col_j =0; col_j<N; col_j = col_j +1) begin
            //         B_bus[row_i][col_j] <= B_bus_reg[row_i -1][col_j];
            //     end
            // end
            

            if (clkcount >= N*2 +3) begin // Computation is complete after N*2 cycles. + 2 because of MAC input and product pipelines
                running <= 1'b0;
                done <= 1'b1;
            end
        end
    end
end

        genvar r, c;
        generate

            for (r = 0; r < N; r = r + 1) begin : row_loop
                for (c = 0; c < N; c = c + 1) begin : col_loop
                    // logic signed [A_Input_Width-1:0] A_in_wire, B_in_wire;
                    // logic signed [A_Input_Width-1:0] A_out_wire, B_out_wire;
                    // logic signed [C_Output_Width-1:0] C_out_wire;

                    // assign A_in_wire = A_bus[r][c]; // Connect A and B inputs from the bus
                    // assign B_in_wire = B_bus[r][c];

                    // assign enable_bus[r][c] = enable;   // Clock-gate each MAC unit based on the global enable signal

                    MAC_unit #(
                        .A_Input_Width(A_Input_Width),
                        .C_Output_Width(C_Output_Width)
                    )

                    mac_inst(
                        .clk(clk),
                        .reset(reset_reg),
                        .enable(enable_bus[r][c]),
                        .A_in(A_bus[r][c]), // Connect A and B inputs from the bus
                        .B_in(B_bus[r][c]),
                        // .C_in(C_bus[r][c]),
                        .A_out(A_bus[r][c+1]), // Forward A output to the right
                        .B_out(B_bus[r+1][c]), // Forward B output downwards
                        .C_out(C_out[r][c])
                    );

                end
            end
        endgenerate


endmodule
