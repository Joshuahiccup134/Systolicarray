module Systolic_Array #(
    parameter N=2,
    parameter A_Input_Width =16,
    parameter C_Output_Width =32)(
    input logic clk,
    input logic reset,
    input logic start,
    input logic enable,
    input logic preload, // Signal to indicate the preloading phase of weights (B inputs) fow weight-stationary dataflow
    input logic signed [A_Input_Width-1:0] A_in [N][N],
    input logic signed [A_Input_Width-1:0] B_in [N][N],
    output logic signed [C_Output_Width-1:0] C_out[N][N],
    output logic done
    );

    localparam N_Elements = N*N;
    logic signed [A_Input_Width-1:0] A_bus[0:N-1][0:N]; // Extra column for input coming in from left
    logic signed [A_Input_Width-1:0] B_bus[0:N-1][0:N-1]; // Bus to store B weights, stationary in this dataflow. No extra row/column needed.
    logic signed [C_Output_Width-1:0] C_bus[0:N][0:N-1]; // Accumulation matrix for each MAC unit
    logic signed [C_Output_Width-1:0] C_acc[0:N][0:N-1]; // new register to hold the accumulated value for each MAC unit
    // logic signed [N_Elements-1:0][A_Input_Width-1:0] B_in_staggered = B_in;
    // logic signed [A_Input_Width-1:0] B_in_staggered[N][N];
    // assign B_in_staggered = B_in; // Direct assignment for now

    logic enable_bus[0:N-1][0:N-1]; // Enable signals for clock-gating each MAC unit
    integer i, j;
    int row_i, col_j;
    int clkcount; // Counter to track the number of clock cycles and the progress of computation
    logic running; // Signal to indicate the start of computation

    logic signed [C_Output_Width-1:0] C_bottom[0:N-1];
    int collection_phase; // Track the phase of output collection within the collection window
    always_comb begin 
        for (j = 0; j < N; j = j + 1) begin
            C_bottom[j] = C_acc[2][j]; // Output the accumulated results from the first row of C_acc to C_out, can be done in the same cycle as the accumulation since it's just a register transfer
        end
        
    end

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            clkcount <= '0; // Reset clock counter, running and done signals
            running <= 1'b0;
            done <= 1'b0;
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

                if (clkcount >= N*2+1) begin // Computation is complete after N*2 cycles
                    running <= 1'b0;
                    done <= 1'b1;
                end

                // for (col_j = 0; col_j < N; col_j = col_j + 1) begin
                    
                    for (row_i = 0; row_i < N+1; row_i = row_i + 1) begin
                        for (col_j = 0; col_j < N; col_j = col_j + 1) begin
                            
                            if (clkcount >= col_j && clkcount < row_i + col_j + N) begin
                                enable_bus[row_i][col_j] <= 1'b1; // Enable the first column of MAC units in a staggered manner based on clock count
                            end

                            else begin
                                enable_bus[row_i][col_j] <= 1'b0;
                            end
                        end
                            
                        
                        
                        if (clkcount>= 0 && clkcount <  N) begin
                            // for (row_i = 0; row_i < N; row_i = row_i + 1) begin
                            //     A_bus[row_i][0] <= A_in[clkcount-row_i][row_i]; // Load input A values into first column during start and subsequent cycles
                            // end
                            A_bus[row_i][0] <= A_in[clkcount][row_i]; // Load input A values into first column during start and subsequent cycles
                        end
                        else begin
                            A_bus[row_i][0] <= '0; // Zero input if already running and MAC is enabled
                        end
                    end

                    
                    if (clkcount <= 3*N) begin

                            for (row_i = 0; row_i < N + 1; row_i = row_i + 1) begin
                                for (col_j = 0; col_j < N; col_j = col_j + 1) begin
                                    // C_acc[row_i][col_j] <= C_bus[row_i][col_j] + C_acc[row_i-1][col_j];
                                    C_acc[row_i][col_j] <= C_bus[row_i][col_j] + C_bus[row_i - 1][col_j]; // Accumulate the results from the MAC units in a separate register, can be done in the same cycle as the MAC computation since it's just an addition, and will be used for the next cycle's accumulation. This is to ensure we capture the intermediate results correctly without overwriting them in C_bus which is directly connected to the MAC outputs.
                                end
                            end

                            // if (clkcount >= N && clkcount < 3*N) begin
                                for (col_j = 0; col_j < N; col_j = col_j + 1) begin
                                    if (collection_phase>=col_j && collection_phase < col_j + N) begin
                                        C_out[collection_phase-col_j][col_j] <= C_acc[2][col_j]; // Output the accumulated results from the accumulation row of C_acc to C_out, can be done in the same cycle as the accumulation since it's just a register transfer
                                        // collection_phase <= clkcount - (col_j + N); // Set the collection phase based on the clock count and column index to track which row of results is being output
                                    end
                                    // C_out[clkcount - col_j][col_j] <= C_acc[2][col_j]; // Output the accumulated results from the accumulation row of C_acc to C_out, can be done in the same cycle as the accumulation since it's just a register transfer
                                end
                                if (clkcount > N && clkcount < 3*N) begin
                                collection_phase <= collection_phase + 1; // Increment the collection phase count to for the next row of results in the next cycle
                                end
                            // end
                    end
                    else begin
                            // C_acc[2][1] <= 'd0;
                    end
                        
                    
                // end

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
                        // localparam logic [$clog2(N*2+4)-1:0] row = r;
                        // localparam logic [$clog2(N*2+4)-1:0] col = c;

                        assign enable_bus[r][c] = enable;   // Clock-gate each MAC unit based on the global enable signal

                        MAC_unit #(
                            .A_Input_Width(A_Input_Width),
                            .C_Output_Width(C_Output_Width)
                        )

                        mac_inst(
                            .clk(clk),
                            .reset(reset),
                            .enable(enable_bus[r][c]),
                            .A_in(A_bus[r][c]), // Load from corresponding input and weight buses
                            .B_in(B_bus[r][c]),
                            .C_in(C_bus[r+1][c]),
                            .A_out(A_bus[r][c+1]), // Forward A output to the right
                            // .B_out(B_bus[r+1][c]), // Forward B output downward
                            .C_out(C_bus[r+1][c])
                        );       
                    end
                end
            endgenerate


endmodule
