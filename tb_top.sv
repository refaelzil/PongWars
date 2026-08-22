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

    always @(posedge clk_25MHz) begin
    if (dut.SOF)
        $display("t=%0t  Px=%0d Py=%0d center_y=%0d center_x=%0d corners=%b ", $time, dut.circle_Px, dut.circle_Py,dut.circle.move_circle.center_y, dut.circle.move_circle.center_y,dut.circle.move_circle.corners);
    end
    vga_monitor mon (.r, .g, .b, .hsync, .vsync);

    assign vga_r = r;
    assign vga_g = g;
    assign vga_b = b;

endmodule