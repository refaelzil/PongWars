
import dfhdl.*
 class VGASyncGen extends RTDesign:
  val hsync = Bit <> OUT
  val vsync = Bit <> OUT
  val x_px = UInt(10) <> OUT.REG init 0
  val y_px = UInt(10) <> OUT.REG init 0
  val activevideo = Bit <> OUT

  // Video structure constants.
  /*
    http://www.epanorama.net/faq/vga2rgb/calc.html
    [*User-Defined_mode,(640X480)]
    PIXEL_CLK   =   31500
    H_DISP      =   640
    V_DISP      =   480
    H_FPORCH    =   24
    H_SYNC      =   40
    H_BPORCH    =   128
    V_FPORCH    =   9
    V_SYNC      =   3
    V_BPORCH    =   28
   */
  val activeHvideo: Int <> CONST = 640 // Width of visible pixels.
  val activeVvideo: Int <> CONST = 480 // Height of visible lines.
  val hfp: Int <> CONST = 24 // Horizontal front porch length.
  val hpulse: Int <> CONST = 40 // Hsync pulse length.
  val hbp: Int <> CONST = 128 // Horizontal back porch length.
  val vfp: Int <> CONST = 9 // Vertical front porch length.
  val vpulse: Int <> CONST = 3 // Vsync pulse length.
  val vbp: Int <> CONST = 28 // Vertical back porch length.
  val blackH = hfp + hpulse + hbp // Hide pixels in one line.
  val blackV = vfp + vpulse + vbp // Hide lines in one frame.
  val hpixels = blackH + activeHvideo // Total horizontal pixels.
  val vlines = blackV + activeVvideo // Total lines.

  // Registers for storing the horizontal & vertical counters.
  val hc = UInt(10) <> VAR.REG init 0
  val vc = UInt(10) <> VAR.REG init 0

  // Keep counting until the end of the line.
  if (hc < hpixels - 1) hc.din := hc + 1;
  else
    // When we hit the end of the line, reset the horizontal
    // counter and increment the vertical counter.
    // If vertical counter is at the end of the frame, then
    // reset that one too.
    hc.din := 0;
    if (vc < vlines - 1)
      vc.din := vc + 1;
    else
      vc.din := 0;
    end if
  end if

  // Generate sync pulses (active low) and active video.
  hsync <> !(hc >= hfp && hc < hfp + hpulse)
  vsync <> !(vc >= vfp && vc < vfp + vpulse)
  activevideo <> (hc >= blackH && vc >= blackV)

  // Generate color.
  x_px.din := hc - blackH
  y_px.din := vc - blackV
end VGASyncGen