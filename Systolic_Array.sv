module Systolic_Array #(
    parameter N=2,
    parameter A_Input_Width =16,
    parameter C_Output_Width =32)(
    input logic clk,
    input logic reset,
    input logic start,
    input logic enable,
    // input logic signed [N_Elements-1:0][A_Input_Width-1:0] A_in,
    input logic signed [A_Input_Width-1:0] A_in [N][N],
    // input logic signed [N_Elements-1:0][A_Input_Width-1:0] B_in,
    input logic signed [A_Input_Width-1:0] B_in [N][N],
    output logic signed [C_Output_Width-1:0] C_out[N][N],
    output logic done
    );

localparam N_Elements = N*N;
logic signed [A_Input_Width-1:0] A_bus[0:N-1][0:N]; // Extra column for input coming in from left
logic signed [A_Input_Width-1:0] B_bus[0:N][0:N-1]; // Extra row for input coming in from top
logic signed [C_Output_Width-1:0] C_bus[0:N-1][0:N-1]; // Accumulation matrix for each MAC unit
// logic signed [N_Elements-1:0][A_Input_Width-1:0] B_in_staggered = B_in;
logic signed [A_Input_Width-1:0] B_in_staggered[N][N];
assign B_in_staggered = B_in; // Direct assignment for now

logic enable_bus[0:N-1][0:N-1]; // Enable signals for clock-gating each MAC unit
integer i, j ,k;
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
                // C_bus[i][j] <= '0; // Initialize accumulation registers to zero
                // A_bus[i][j] <= '0; // Initialize A and B buses to zero
                // B_bus[i][j] <= '0;
            end
        end
    end

    else begin 
        done <= 1'b0;

        

        if (start&&!running) begin // Start signal received
            running <= 1'b1;
            clkcount <= '0;
            k = 0;

            // for (i=0; i < N; i = i + 1) begin // Load input elements into the first column
            //     A_bus[i][0]<= A_in[i];
            // end

            // for (j=0; j < N; j = j + 1) begin // Load input elements into the first row
            //     B_bus[0][j]<= B_in[j];
            // end

            // for (i=0; i<N; i=i+1) begin
            //     for (j=0; j<N; j=j+1) begin
            //         // C_bus[i][j] <= '0; // Clear accumulation registers on start
            //     end
            // end
        end
    

        else if (running) begin
            clkcount <= clkcount + 1;
            k = k + 1;

            // Shift A and B values through the array
            // for (i = 0; i < N; i = i + 1) begin // Shift A input values to the right
            //     for (j = 0; j < N; j = j + 1) begin
            //         A_bus[i][j+1] <= A_bus[i][j];
            //     end
            //     A_bus[i][0] <= '0; // Clear the input column after shifting
            // end
            

            // for (i = 0; i < N; i = i + 1) begin // Shift B input values down
            //     for (j = 0; j < N; j = j + 1) begin
            //         B_bus[i+1][j] <= B_bus[i][j];
            //     end
            //     B_bus[0][i] <= '0; // Clear the first row after shifting
            // end
            

            if (clkcount >= N*2) begin // Computation is complete after N*2 cycles
                running <= 1'b0;
                done <= 1'b1;
            
                for (i= 0; i < N; i = i + 1) begin
                    for (j= 0; j < N; j = j + 1) begin
                        C_out[i][j] <= C_bus[i][j]; // Output the accumulated results
                        // C_bus[i][j] <= C_out[i][j];
                    end
                end
            end
        end
    end
end

        genvar r, c;
        generate
            // always_ff @(posedge clk) begin
            //     if (start && !running) begin
            //         for (j=0; j<N; j=j+1) begin
            //             B_in_staggered[0][j] <= B_in[0][j]; // Load B inputs directly for first row
            //         end
            //     end
            // end
            for (r = 0; r < N; r = r + 1) begin : row_loop
                for (c = 0; c < N; c = c + 1) begin : col_loop
                    logic signed [A_Input_Width-1:0] A_in_wire, B_in_wire;
                    logic signed [A_Input_Width-1:0] A_out_wire, B_out_wire;
                    logic signed [C_Output_Width-1:0] C_out_wire;
                    localparam logic [$clog2(N*2+4)-1:0] row = r;
                    localparam logic [$clog2(N*2+4)-1:0] col = c;


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
                        // .C_in(C_bus[r][c]),
                        .A_out(A_out_wire),
                        .B_out(B_out_wire),
                        .C_out(C_out[r][c])
                    );

                    always_ff @(posedge clk) begin

                        if (c==0) begin
                            // always_ff @(posedge clk) begin
                                if (start && row == 0 && !running) begin
                                    A_bus[r][c] <= A_in[r][c]; // Load input A values into first column during start
                                end
                                else if (running && enable_bus[r][c]) begin
                                    A_bus[r][0] <= '0; // Zero input if already running and MAC is enabled
                                end
                                if (running && row >0 && clkcount < r+N) begin
                                    A_bus[r][c] <= A_in[r][c];
                                end

                            // end
                        end
                        else if (c > 0) begin
                            // always_ff @(posedge clk) begin
                                if (clkcount == c && row == 0) begin
                                    A_bus[r][c] <= A_in[r][c];
                                end 
                                if (clkcount == c+1 && enable_bus[r][c]) begin
                                    A_bus[r][c] <= '0;   //Zero input after the cycle ends(cycle count > c)
                                end
                                if (clkcount == c+r && row >0) begin
                                    A_bus[r][c] <= A_in[r][c];
                                end
                            // end
                        end
                        // end

                        if (r==0) begin
                            // always_ff @(posedge clk) begin
                                if (start && col == 0 && !running) begin
                                    B_bus[0][c] <= B_in_staggered[0][c]; // Load input B values into first row during start
                                end
                                else if (running && enable_bus[r][c]) begin
                                    B_bus[0][c] <= '0; // Zero input if already running and MAC is enabled
                                end
                                if (running && col >0 && clkcount < col+N) begin
                                    B_bus[r][c] <= B_in_staggered[r][c];
                                end
                            // end
                        end
                        else if (r > 0) begin
                            // always_ff @(posedge clk) begin
                                if (clkcount == r && col == 0) begin
                                    B_bus[r][c] <= B_in_staggered[r][c];
                                end 
                                if (clkcount == r+1 && enable_bus[r][c]) begin
                                    B_bus[r][c] <='0;
                                end
                                if (clkcount == r+c && col >0) begin
                                    B_bus[r][c] <= B_in_staggered[r][c];
                                end
                            // end
                        end
                    end
                
                    // Update the accumulation registers(one cycle delay)
                        
                    always_ff @(posedge clk) begin
                        if (enable_bus[r][c]) begin
                            C_bus[r][c] <= C_out_wire; //Registering accumulated results in C_bus register?? later
                        end
                    end
                    

                    // forward A and B outputs to the next MAC unit in the array
                        
                        always_ff @(posedge clk) begin
                            // if (enable_bus[r][c]) begin
                                A_bus[r][c+1] <= A_out_wire;
                                B_bus[r+1][c] <= B_out_wire;
                            // end
                        end
                        // assign A_bus[r][c+1] = A_out_wire;
                        // assign B_bus[r+1][c] = B_out_wire;
                       
                end
            end
        endgenerate


endmodule
