module Systolic_Array #(
    parameter N=2,
    parameter A_Input_Width =16,
    parameter C_Output_Width =32)(
    input logic clk,
    input logic reset,
    input logic start,
    input logic preload, // Signal to indicate the preloading phase of weights (B inputs) fow weight-stationary dataflow
    input logic signed [A_Input_Width-1:0] A_in [N][N],
    input logic signed [A_Input_Width-1:0] B_in [N][N],
    output logic signed [C_Output_Width-1:0] C_out[N][N],
    output logic done
    );

    localparam idx_N = $clog2(N);
    logic signed [A_Input_Width-1:0] A_bus[0:N-1][0:N]; // Extra column for input coming in from left
    logic signed [A_Input_Width-1:0] B_bus[0:N-1][0:N-1]; // Bus to store B weights, stationary in this dataflow. No extra row/column needed.
    logic signed [C_Output_Width-1:0] C_bus[0:N][0:N-1]; // Accumulation matrix for each MAC unit

    logic enable_bus[0:N-1][0:N-1]; // Enable signals for clock-gating each MAC unit
    int i, j;
    int row_i, col_j;
    logic [$clog2(2*N +1):0] clkcount; // Counter to track the number of clock cycles and the progress of computation
    logic running; // Signal to indicate the start of computation
    logic reset_reg;
    logic reset_bus[0:N][0:N-1];
    localparam idx_width = $bits(clkcount); //the number of bits clkcount has(same as $clog in its declaration below)

    logic [$clog2(2*N +1):0] collection_phase; // Track the phase of output collection within the collection window

    always_ff @( posedge clk ) begin
        reset_reg <= reset;
        for ( int col_rst = 0; col_rst < N ; col_rst = col_rst + 1 ) begin   //First row
            reset_bus[0][col_rst] <= reset_reg;
        end
        
    end

    always_ff @(posedge clk) begin
        if (reset_reg) begin
            clkcount <= '0; // Reset clock counter, running and done signals
            running <= 1'b0;
            collection_phase <= '0;
            done <= 1'b0;

            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1) begin
                    enable_bus[i][j] <= '0;
                end
            end
        end

        else begin 
            done <= 1'b0;

            if (preload && !running) begin
                for (row_i = 0; row_i < N; row_i = row_i + 1) begin
                    for (col_j = 0; col_j < N; col_j = col_j + 1) begin
                        B_bus[row_i][col_j] <= B_in[row_i][col_j]; //Preload the weights (B inputs) into the array before starting the computation
                    end
                end
            end

            if (start&&!running) begin // Start signal received
                running <= 1'b1;
                clkcount <= '0;
            end
        
            else if (running) begin
                clkcount <= clkcount + 1;

                if (clkcount >= N*2 + 1 +4) begin // Computation is complete after N*2 cycles. +3 for MAC input, decomposition and product  pipelines
                    running <= 1'b0;
                    done <= 1'b1;
                end
                

                for (row_i = 0; row_i < N; row_i = row_i + 1) begin
                    for (col_j = 0; col_j < N; col_j = col_j + 1) begin
                        // enable_bus[row_i][col_j] <= 1'b1;  // To test always-enabled          // +1 for MAC input, +3 for partial prod decomposition and product pipelines
                        enable_bus[row_i][col_j] <= (clkcount >= idx_width'(row_i + col_j)) && (clkcount < idx_width'(row_i + col_j + N +4)); 
                    end
                end
                        
                for (row_i = 0; row_i < N; row_i = row_i + 1) begin
                    if (clkcount>= idx_width'(row_i) && clkcount < idx_width'(row_i + N)) begin
                        A_bus[row_i][0] <= A_in[idx_N'(clkcount - idx_width'(row_i))][row_i]; // Load input A values into first column during start and subsequent cycles
                    end
                    else begin
                        A_bus[row_i][0] <= '0;
                    end
                end
                
                if (clkcount <= 3*N + 1 +2) begin       // Start collecting output results

                    for (col_j = 0; col_j < N; col_j = col_j + 1) begin
                        if (collection_phase >= idx_width'(col_j)  && collection_phase < idx_width'(col_j + N )) begin
                            C_out[idx_N'(collection_phase - idx_width'(col_j ))][col_j] <= C_bus[2][col_j]; // Output the accumulated results from the accumulation row(2) of C_bus to C_out, 
                        end                                                                 // with the correct phase. +1 is for input pipeline reg in the MAC unit, +3 for
                    end                                                                     // product decomposition pipelines
                    if (clkcount > N +1 +3 && clkcount <= 2*N +1 +3) begin
                    collection_phase <= collection_phase + 1; // Increment the collection phase count for the next row of results in the next cycle
                    end
                end      
            end   
        end    
    end

    genvar v;               // For driving top row with zero(No acummulated sum at this point)
    generate
        for (v = 0; v < N; v = v + 1) begin
            assign C_bus[0][v] = 'b0; 
        end
    endgenerate

    genvar r, c;
    generate

        for (r = 0; r < N; r = r + 1) begin : row_loop
            for (c = 0; c < N; c = c + 1) begin : col_loop
                MAC_unit #(
                    .A_Input_Width(A_Input_Width),  // MAC parameters
                    .C_Output_Width(C_Output_Width)
                )

                mac_inst(               // MAC unit instance
                    .clk(clk),
                    .reset_in(reset_bus[r][c]),
                    .enable(enable_bus[r][c]),
                    .A_in(A_bus[r][c]), // Load from corresponding input and weight buses
                    .B_in(B_bus[r][c]),
                    .C_in(C_bus[r][c]),
                    .A_out(A_bus[r][c+1]), // Forward A output to the right
                    .C_out(C_bus[r+1][c]),
                    .reset_out(reset_bus[r+1][c])
                );       
            end
        end
    endgenerate
endmodule
