`default_nettype none
`timescale 1ns/1ps

module DrawCircle(
  input  wire logic [9:0] Px,
  input  wire logic [9:0] Py,
  output      logic       DrawingRequest,
  output      logic [7:0] vga_r,
  output      logic [7:0] vga_g,
  output      logic [7:0] vga_b
);
  `include "dfhdl_defs.svh"
  localparam int center_x = 320;
  localparam int center_y = 240;
  localparam int radius = 8;
  localparam logic [7:0] circle_0 = 8'h00;
  localparam logic [7:0] circle_1 = 8'hff;
  localparam logic [7:0] circle_2 = 8'h00;
  localparam logic [7:0] circle_3 = 8'h00;
  localparam logic [7:0] circle_4 = 8'h00;
  localparam logic [7:0] circle_5 = 8'h00;
  logic [31:0] delta_x;
  logic [31:0] delta_y;
  always_comb
  begin
    if (DrawingRequest) begin
      vga_r = circle_0;
      vga_g = circle_1;
      vga_b = circle_2;
    end
    else begin
      vga_r = circle_3;
      vga_g = circle_4;
      vga_b = circle_5;
    end
  end
  assign delta_x        = 32'((Px - 10'(center_x)) * (Px - 10'(center_x)));
  assign delta_y        = 32'((Py - 10'(center_y)) * (Py - 10'(center_y)));
  assign DrawingRequest = (delta_x + delta_y) <= (32'(radius) * 32'(radius));
endmodule
