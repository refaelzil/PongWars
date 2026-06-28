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
  val DR = square.DrawingRequest // Use the square's drawing request to determine active video
  val sqR = square.vga_r // Get the square's RGB value
  val sqG = square.vga_g // Get the square's RGB value
  val sqB = square.vga_b // Get the square's RGB value
  if(syncgen.activevideo) // Left half of the screen
    if(DR) // If the square is being drawn
        vga_r := sqR // Use the square's color
        vga_g := sqG // Use the square's color
        vga_b := sqB // Use the square's color
    else if (syncgen.x_px < 320 && syncgen.y_px < 240) // Top-left quadrant
        vga_r := b"8'11111111" // Red for now
        vga_g := b"8'00000000" // Green for now
        vga_b := b"8'00000000" // Blue for now  
    else if (syncgen.x_px >= 320 && syncgen.y_px < 240) // Top-right quadrant
        vga_r := b"8'00000000" // Red for now
        vga_g := b"8'11111111" // Green for now
        vga_b := b"8'00000000" // Blue for now
    else if (syncgen.x_px < 320 && syncgen.y_px >= 240) // Bottom-left quadrant
        vga_r := b"8'00000000" // Red for now
        vga_g := b"8'00000000" // Green for now
        vga_b := b"8'11111111" // Blue for now
    else // Bottom-right quadrant
        vga_r := b"8'11111111" // Red for now
        vga_g := b"8'11111111" // Green for now
        vga_b := b"8'11111111" // Blue for now
  else
    vga_r := b"8'00000000" // Black during blanking
    vga_g := b"8'00000000" // Black during blanking
    vga_b := b"8'00000000" // Black during blanking
end pong_wars_top