`timescale 1ns/1ps

module tb_top (
    input  logic clk_25MHz,
    input  logic rst,
    output logic hsync,
    output logic vsync,
    output logic [7:0] vga_r,
    output logic [7:0] vga_g,
    output logic [7:0] vga_b
);
    wire [7:0] r, g, b;

    pong_wars_top dut (
        .clk(clk_25MHz),
        .rst,
        .hsync,
        .vsync,
        .vga_r(r),
        .vga_g(g),
        .vga_b(b)
    );
    
    vga_monitor mon (.r, .g, .b, .hsync, .vsync);

    always @(posedge clk_25MHz) begin
    if (dut.SOF)
        $display("t=%0t   center_x_evil=%d center_y_evil=%d center_x_good=%d center_y_good=%d", $time, dut.circle_evil.move_circle.center_x, dut.circle_evil.move_circle.center_y ,dut.circle_good.move_circle.center_x, dut.circle_good.move_circle.center_y);
    end

    assign vga_r = r;
    assign vga_g = g;
    assign vga_b = b;

endmodule