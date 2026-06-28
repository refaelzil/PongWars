`default_nettype none
`timescale 1ns/1ps

module SquareObject(
  input  wire logic       clk,
  input  wire logic       rst,
  input  wire logic [9:0] Px,
  input  wire logic [9:0] Py,
  input  wire logic       SOF,
  output      logic       DrawingRequest,
  output      logic [7:0] vga_r,
  output      logic [7:0] vga_g,
  output      logic [7:0] vga_b
);
  `include "dfhdl_defs.svh"
  localparam int size = 32;
  localparam logic [7:0] square_0 = 8'h00;
  localparam logic [7:0] square_1 = 8'hff;
  localparam logic [7:0] square_2 = 8'h00;
  localparam logic [7:0] square_3 = 8'h00;
  localparam logic [7:0] square_4 = 8'h00;
  localparam logic [7:0] square_5 = 8'h00;
  logic [9:0] topLeftX;
  logic [9:0] topLeftY;
  logic [9:0] topLeftX_din;
  logic [9:0] topLeftY_din;
  always_comb
  begin
    topLeftX_din   = topLeftX;
    topLeftY_din   = topLeftY;
    if (DrawingRequest) begin
      vga_r        = square_0;
      vga_g        = square_1;
      vga_b        = square_2;
    end
    else begin
      vga_r        = square_3;
      vga_g        = square_4;
      vga_b        = square_5;
    end
    if (SOF) begin
      topLeftX_din = (topLeftX + 10'd30) % 10'd640;
      topLeftY_din = (topLeftY + 10'd30) % 10'd480;
    end
  end
  always_ff @(posedge clk)
  begin
    if (rst == 1'b1) begin
      topLeftX     <= 10'd200;
      topLeftY     <= 10'd160;
    end
    else begin
      topLeftX     <= topLeftX_din;
      topLeftY     <= topLeftY_din;
    end
  end
  assign DrawingRequest = (Px >= topLeftX) & (Px < (topLeftX + 10'(size))) & ((Py >= topLeftY) && (Py < (topLeftY + 10'(size))));
endmodule
