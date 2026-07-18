`default_nettype none
`timescale 1ns/1ps

module Border(
  input  wire logic [9:0] Px,
  input  wire logic [9:0] Py,
  output      logic       DrawingRequest,
  output      logic [7:0] vga_r,
  output      logic [7:0] vga_g,
  output      logic [7:0] vga_b
);
  `include "dfhdl_defs.svh"
  localparam int border_thickness = 10;
  localparam int border_upper_limit = 112;
  localparam int border_left_limit = 64;
  localparam int border_lower_limit = 368;
  localparam int border_right_limit = 576;
  localparam logic [7:0] border_0 = 8'h00;
  localparam logic [7:0] border_1 = 8'h00;
  localparam logic [7:0] border_2 = 8'hff;
  always_comb
  begin
    if ((Px < 10'(border_left_limit)) && (Px >= 10'(border_left_limit - border_thickness))) DrawingRequest = 1'b1;
    else if ((Px >= 10'(border_right_limit)) && (Px < 10'(border_right_limit + border_thickness))) DrawingRequest = 1'b1;
    else if ((Py < 10'(border_upper_limit)) && (Py >= 10'(border_upper_limit - border_thickness))) DrawingRequest = 1'b1;
    else if ((Py >= 10'(border_lower_limit)) && (Py < 10'(border_lower_limit + border_thickness))) DrawingRequest = 1'b1;
    else DrawingRequest = 1'b0;
  end
  assign vga_r = border_0;
  assign vga_g = border_1;
  assign vga_b = border_2;
endmodule
