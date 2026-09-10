import dfhdl.*
import dfhdl.platforms.resources.*
import dfhdl.hw.constraints.*
import dfhdl.platforms.ips.xilinxamd.clk_wiz
import dfhdl.platforms.devboards.digilent.NexysA7

// Same 100MHz -> 25MHz pixel-clock generator used by the Blinker demo.
// pong_wars_top's VGA timing (640x480 @ ~60Hz) needs a ~25MHz clock,
// but the Nexys A7's only onboard oscillator is 100MHz, so we derive it
// with the FPGA's clocking IP (MMCM), exactly like BlinkerNexys does.
class VGAClkGen
    extends clk_wiz(
      PRIM_IN_FREQ = 100.0, CLKOUT1_REQUESTED_OUT_FREQ = 25.0, CLK_OUT1_PORT = "vga_clk",
      PRIMARY_PORT = "clk", USE_RESET                  = false
    )

// The FPGA target for the Nexys A7, structured exactly like DFHDL's own
// official example for this board+VGA combination (dfhdl-platforms'
// `nexys_vga_clock.scala`): a single flat class, with BOTH the outer
// 100MHz clock and the inner 25MHz domain clock explicitly tagged with
// distinct `grpName`s. Without distinct group names, the compiler's
// clock-magnet resolution can't tell the outer clock port and the
// inner domain's clock apart, even though they're different signals.
//
// `pong_wars_top` (completely unmodified) declares no explicit clk/rst
// ports, so it's placed inside the `vga` clock domain; any plain
// (implicit-clock) design instantiated inside that domain automatically
// inherits the domain's clock/reset.
//
// The Nexys A7's VGA port is only 4 bits per color channel (12-bit
// color total), while the game logic works in 8-bit color, so this
// design's own vga_r/g/b ports are declared as exactly 4 bits each -
// carrying only the top (most-significant) 4 bits of pong_wars_top's
// 8-bit outputs.
@timing.clock(rate = 100.MHz, grpName = "main")
class PongWarsNexys extends RTDesign:
  val clk   = Clk <> IN
  val hsync = Bit <> OUT
  val vsync = Bit <> OUT
  val vga_r = Bits(4) <> OUT
  val vga_g = Bits(4) <> OUT
  val vga_b = Bits(4) <> OUT

  @timing.clock(rate = 25.MHz, grpName = "vga")
  val dmn = new RTDomain:
    val clk  = Clk <> VAR
    val core = new pong_wars_top

  hsync <> dmn.core.hsync
  vsync <> dmn.core.vsync
  vga_r <> dmn.core.vga_r(7, 4)
  vga_g <> dmn.core.vga_g(7, 4)
  vga_b <> dmn.core.vga_b(7, 4)

  val vgaClkGen = new VGAClkGen
  vgaClkGen.clk <> clk.actual
  dmn.clk <> vgaClkGen.vga_clk.as(dmn.Clk)

  val board = new NexysA7
  board.vgaJ3.HS <> hsync
  board.vgaJ3.VS <> vsync
  board.vgaJ3.R  <> vga_r
  board.vgaJ3.G  <> vga_g
  board.vgaJ3.B  <> vga_b
  this <> board.clocks.CLK_100MHz
end PongWarsNexys