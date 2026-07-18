import dfhdl.* //import all the DFHDL goodness

class pong_wars_top extends RTDesign:
  val hsync = Bit <> OUT
  val vsync = Bit <> OUT
  val vga_r = Bits(8) <> OUT
  val vga_g = Bits(8) <> OUT
  val vga_b = Bits(8) <> OUT
  val syncgen = new VGASyncGen()
  val SOF = Bit <> VAR // Start of frame signal for game logic
  val prev_vsync = Bit <> VAR.REG  // Register to hold previous vsync value

  syncgen.hsync <> hsync  
  syncgen.vsync <> vsync
  process{
    // Update the previous vsync value at the end of each cycle
    prev_vsync.din := syncgen.vsync
    SOF := prev_vsync && !vsync // Generate SOF on falling edge of vsync
  }
  val square = new SquareObject()
  square.Px <> syncgen.x_px
  square.Py <> syncgen.y_px
  square.SOF <> SOF
  val DR = square.DrawingRequest 
  val sqR = square.vga_r 
  val sqG = square.vga_g 
  val sqB = square.vga_b 

   val border = new Border()
   border.Px <> syncgen.x_px
   border.Py <> syncgen.y_px
   val border_DR = border.DrawingRequest
   val border_R = border.vga_r
   val border_G = border.vga_g
   val border_B = border.vga_b

  if(syncgen.activevideo) // Left half of the screen
    if(DR)
        vga_r := sqR 
        vga_g := sqG 
        vga_b := sqB 
    else if (border_DR) // Top-left quadrant
        vga_r := border_R 
        vga_g := border_G
        vga_b := border_B

    else
        vga_r := b"8'00000000" 
        vga_g := b"8'00000000" 
        vga_b := b"8'00000000" 
  else
        vga_r := b"8'00000000" 
        vga_g := b"8'00000000" 
        vga_b := b"8'00000000" 
end pong_wars_top

