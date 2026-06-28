module vga_mover (
    input  logic        clk_25MHz, // Requires a 25MHz pixel clock
    input  logic        rst,       // Active-high reset
    output logic        hsync,     // Horizontal Sync
    output logic        vsync,     // Vertical Sync
    output logic [7:0]  vga_r,     // Red video channel
    output logic [7:0]  vga_g,     // Green video channel
    output logic [7:0]  vga_b      // Blue video channel
);

    // --- 1. VGA 640x480 @ 60Hz Timing Constants ---
    localparam H_ACTIVE   = 640;
    localparam H_FRONT    = 16;
    localparam H_SYNC     = 96;
    localparam H_BACK     = 48;
    localparam H_TOTAL    = 800; // Total pixels per line

    localparam V_ACTIVE   = 480;
    localparam V_FRONT    = 10;
    localparam V_SYNC     = 2;
    localparam V_BACK     = 33;
    localparam V_TOTAL    = 525; // Total lines per frame

    // --- 2. Timing Counters ---
    logic [9:0] h_cnt = 0;
    logic [9:0] v_cnt = 0;
    logic       video_active;

    always_ff @(posedge clk_25MHz or posedge rst) begin
        if (rst) begin
            h_cnt <= 0;
            v_cnt <= 0;
        end else begin
            if (h_cnt == H_TOTAL - 1) begin
                h_cnt <= 0;
                if (v_cnt == V_TOTAL - 1)
                    v_cnt <= 0;
                else
                    v_cnt <= v_cnt + 1'b1;
            end else begin
                h_cnt <= h_cnt + 1'b1;
            end
        end
    end

    // Sync Pulses (Active Low for 640x480)
    assign hsync = ~((h_cnt >= (H_ACTIVE + H_FRONT)) && (h_cnt < (H_ACTIVE + H_FRONT + H_SYNC)));
    assign vsync = ~((v_cnt >= (V_ACTIVE + V_FRONT)) && (v_cnt < (V_ACTIVE + V_FRONT + V_SYNC)));
    
    // High only within the visible boundaries
    assign video_active = (h_cnt < H_ACTIVE) && (v_cnt < V_ACTIVE);

    // --- 3. Bouncing Box Logic ("The Movement") ---
    localparam BOX_SIZE = 32;
    logic [9:0] box_x = 100;
    logic [9:0] box_y = 100;
    logic       dir_x = 1; // 1 = Right, 0 = Left
    logic       dir_y = 1; // 1 = Down, 0 = Up

    // Update box position exactly once per vertical frame (during VSYNC)
    wire frame_tick = (v_cnt == V_ACTIVE + V_FRONT) && (h_cnt == 0);

    always_ff @(posedge clk_25MHz or posedge rst) begin
        if (rst) begin
            box_x <= 100;
            box_y <= 100;
            dir_x <= 1;
            dir_y <= 1;
        end else if (frame_tick) begin
            // X-axis wall collision & movement
            if (box_x == 0) dir_x <= 1;
            else if (box_x >= (H_ACTIVE - BOX_SIZE)) dir_x <= 0;
            box_x <= dir_x ? (box_x + 1'b1) : (box_x - 1'b1);

            // Y-axis wall collision & movement
            if (box_y == 0) dir_y <= 1;
            else if (box_y >= (V_ACTIVE - BOX_SIZE)) dir_y <= 0;
            box_y <= dir_y ? (box_y + 1'b1) : (box_y - 1'b1);
        end
    end

    // --- 4. Pixel Color Mapping ---
    wire box_pixel_en = (h_cnt >= box_x) && (h_cnt < box_x + BOX_SIZE) &&
                        (v_cnt >= box_y) && (v_cnt < box_y + BOX_SIZE);

    always_comb begin
        if (!video_active) begin
            // VERY IMPORTANT: VGA specs mandatorily require RGB to be 0 during blanking/sync
            vga_r = 8'h00;
            vga_g = 8'h00;
            vga_b = 8'h00;
        end else if (box_pixel_en) begin
            vga_r = 8'hFF; // White Moving Box
            vga_g = 8'hFF;
            vga_b = 8'hFF;
        end else begin
            vga_r = 8'h10; // Dark Blue Background
            vga_g = 8'h10;
            vga_b = 8'h40;
        end
    end

endmodule