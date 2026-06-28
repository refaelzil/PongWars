`default_nettype none
`timescale 1ns/1ps

module VGASyncGen(
  input  wire logic       clk,
  input  wire logic       rst,
  output      logic       hsync,
  output      logic       vsync,
  output      logic [9:0] x_px,
  output      logic [9:0] y_px,
  output      logic       activevideo
);
  `include "dfhdl_defs.svh"
  localparam int activeHvideo = 640;
  localparam int activeVvideo = 480;
  localparam int hfp = 16;
  localparam int hpulse = 96;
  localparam int hbp = 48;
  localparam int vfp = 10;
  localparam int vpulse = 2;
  localparam int vbp = 33;
  localparam int blackH = hfp + hpulse + hbp;
  localparam int blackV = vfp + vpulse + vbp;
  localparam int hpixels = blackH + activeHvideo;
  localparam int vlines = blackV + activeVvideo;
  logic [9:0] hc;
  logic [9:0] vc;
  assign hsync       = !((hc >= 10'(hfp)) && (hc < 10'(hfp + hpulse)));
  assign vsync       = !((vc >= 10'(vfp)) && (vc < 10'(vfp + vpulse)));
  assign activevideo = (hc >= 10'(blackH)) && (vc >= 10'(blackV));
  always_ff @(posedge clk)
  begin
    if (rst == 1'b1) begin
      x_px <= 10'd0;
      y_px <= 10'd0;
      hc   <= 10'd0;
      vc   <= 10'd0;
    end
    else begin
      if (hc < 10'(hpixels - 1)) hc <= hc + 10'd1;
      else begin
        hc <= 10'd0;
        if (vc < 10'(vlines - 1)) vc <= vc + 10'd1;
        else vc <= 10'd0;
      end
      x_px <= hc - 10'(blackH);
      y_px <= vc - 10'(blackV);
    end
  end
endmodule
