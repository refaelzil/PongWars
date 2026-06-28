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

    assign vga_r = r;
    assign vga_g = g;
    assign vga_b = b;

endmodule