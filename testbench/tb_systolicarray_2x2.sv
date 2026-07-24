module tb_systolicarray_2x2;

localparam N = 2;
localparam A_Input_Width = 16;
localparam C_Output_Width = 32;
logic clk;
logic reset;
logic enable;
logic start;
logic preload;
wire done;
logic [A_Input_Width-1:0] A_in [N][N];  
logic [A_Input_Width-1:0] B_in [N][N];
wire [C_Output_Width-1:0] C_out[N][N];

    // Instantiate DUT
    Systolic_Array dut (
        .clk(clk),
        .reset(reset),
        // .enable(enable),
        .A_in(A_in),
        .B_in(B_in),
        .C_out(C_out),
        .start(start),
        .preload(preload),
        .done(done)

    );

    // Clock generation
    always #5 clk = ~clk; // 10ns period, 100MHz

    integer i, j;

    initial begin
        $display("---- Systolic Array 2x2 Testbench Start ----");
        
        $dumpfile("tb_systolicarray_2x2.vcd");
        $dumpvars(0, tb_systolicarray_2x2);
        clk = 0;
        reset = 0;
        preload = 1;
        #10;
        start = 1;
        // enable = 1'b1;

        // Example matrices:
        // A = [1 2; 3 4]
        // B = [5 6; 7 8]

        A_in[0][0] = 'd1; A_in[0][1] = 'd2;
        A_in[1][0] = 'd3; A_in[1][1] = 'd4;
        
        B_in[0][0] = 'd5; B_in[0][1] = 'd6;      
        B_in[1][0] = 'd7; B_in[1][1] = 'd8;      
        
        // Reset pulse
        // #5;
        // reset = 0;

        //  enable = 1;
        // @(posedge clk);
        // start = 1;
        #10;
        @(posedge clk);
        start = 0;
        preload = 0; // Clear preload after starting the computation

        // Wait enough cycles for systolic pipeline
        //  #150;
        wait (done == 1);

        $display("Computed Matrix C = A X B:");
        for (i = 0; i < N; i = i + 1) begin
            for (j = 0; j < N; j = j + 1) begin
                $display("C[%0d][%0d] = %0d", i, j, C_out[i][j]);
            end
        end

        // Expected result:
        // [1*5 + 2*7, 1*6 + 2*8] = [19, 22]
        // [3*5 + 4*7, 3*6 + 4*8] = [43, 50]

        $display("Expected:");
        $display("C = [19 22; 43 50]");
        #10;

        $display("---- Test Completed ----");
        $finish;
    end

endmodule
