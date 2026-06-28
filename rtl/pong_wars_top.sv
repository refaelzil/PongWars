`default_nettype none
`timescale 1ns/1ps

module pong_wars_top(
  input  wire logic       clk,
  input  wire logic       rst,
  output      logic       hsync,
  output      logic       vsync,
  output      logic [7:0] vga_r,
  output      logic [7:0] vga_g,
  output      logic [7:0] vga_b
);
  `include "dfhdl_defs.svh"
  typedef enum logic [0:0] {
    State_S_0 = 0
  } t_enum_State;
  logic        SOF;
  logic        prev_vsync;
  t_enum_State state;
  logic        DR;
  logic [7:0]  sqR;
  logic [7:0]  sqG;
  logic [7:0]  sqB;
  logic        prev_vsync_din;
  t_enum_State state_din;
  logic        syncgen_clk;
  logic        syncgen_activevideo;
  logic [9:0]  syncgen_y_px;
  logic        syncgen_rst;
  logic        syncgen_hsync;
  logic [9:0]  syncgen_x_px;
  logic        syncgen_vsync;
  logic [9:0]  square_Py;
  logic        square_rst;
  logic        square_SOF;
  logic [9:0]  square_Px;
  logic        square_clk;
  VGASyncGen syncgen(
    .clk         /*<--*/ (syncgen_clk),
    .activevideo /*-->*/ (syncgen_activevideo),
    .y_px        /*-->*/ (syncgen_y_px),
    .rst         /*<--*/ (syncgen_rst),
    .hsync       /*-->*/ (syncgen_hsync),
    .x_px        /*-->*/ (syncgen_x_px),
    .vsync       /*-->*/ (syncgen_vsync)
  );
  SquareObject square(
    .Py          /*<--*/ (square_Py),
    .rst         /*<--*/ (square_rst),
    .SOF         /*<--*/ (square_SOF),
    .Px          /*<--*/ (square_Px),
    .clk         /*<--*/ (square_clk),
    .vga_b       /*-->*/ (sqB),
    .vga_r       /*-->*/ (sqR),
    .vga_g       /*-->*/ (sqG),
    .DrawingRequest /*-->*/ (DR)
  );
  assign hsync       = syncgen_hsync;
  assign vsync       = syncgen_vsync;
  assign square_Px   = syncgen_x_px;
  assign square_Py   = syncgen_y_px;
  assign square_SOF  = SOF;
  always_comb
  begin
    prev_vsync_din = prev_vsync;
    state_din    = state;
    unique case (state)
      State_S_0: begin
        prev_vsync_din = syncgen_vsync;
        SOF      = prev_vsync & (~vsync);
        state_din = State_S_0;
      end
    endcase
    if (syncgen_activevideo) begin
      if (DR) begin
        vga_r    = sqR;
        vga_g    = sqG;
        vga_b    = sqB;
      end
      else if ((syncgen_x_px < 10'd320) && (syncgen_y_px < 10'd240)) begin
        vga_r    = 8'hff;
        vga_g    = 8'h00;
        vga_b    = 8'h00;
      end
      else if ((syncgen_x_px >= 10'd320) && (syncgen_y_px < 10'd240)) begin
        vga_r    = 8'h00;
        vga_g    = 8'hff;
        vga_b    = 8'h00;
      end
      else if ((syncgen_x_px < 10'd320) && (syncgen_y_px >= 10'd240)) begin
        vga_r    = 8'h00;
        vga_g    = 8'h00;
        vga_b    = 8'hff;
      end
      else begin
        vga_r    = 8'hff;
        vga_g    = 8'hff;
        vga_b    = 8'hff;
      end
    end
    else begin
      vga_r      = 8'h00;
      vga_g      = 8'h00;
      vga_b      = 8'h00;
    end
  end
  always_ff @(posedge clk)
  begin
    if (rst == 1'b1) state <= State_S_0;
    else begin
      prev_vsync <= prev_vsync_din;
      state      <= state_din;
    end
  end
  assign syncgen_clk = clk;
  assign square_clk  = clk;
  assign syncgen_rst = rst;
  assign square_rst  = rst;
endmodule
