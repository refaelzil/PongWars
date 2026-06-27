import dfhdl.* //import all the DFHDL goodness

class pong_wars_top extends RTDesign:
  val hsync = Bit <> OUT
  val vsync = Bit <> OUT
  val rrggbb = Bits(6) <> OUT
  val syncgen = new VGASyncGen()
  val SOF = Bit <> OUT // Start of frame signal for game logic
  val prev_vsync = Bit <> VAR.REG  // Register to hold previous vsync value

  syncgen.hsync <> hsync  
  syncgen.vsync <> vsync
  process{
    // Update the previous vsync value at the end of each cycle
    prev_vsync.din := syncgen.vsync
    SOF := prev_vsync && !syncgen.vsync // Generate SOF on falling edge of vsync
  }
  val square = new SquareObject()
  square.Px <> syncgen.x_px
  square.Py <> syncgen.y_px
  square.SOF <> SOF
  val DR = square.DrawingRequest // Use the square's drawing request to determine active video
  val sqRGB = square.RGB // Get the square's RGB value
  if(syncgen.activevideo) // Left half of the screen
    if(DR) // If the square is being drawn
        rrggbb := sqRGB // Use the square's color
    else if (syncgen.x_px < 320 && syncgen.y_px < 240) // Top-left quadrant
        rrggbb := b"6'110000" // Red for now
    else if (syncgen.x_px >= 320 && syncgen.y_px < 240) // Top-right quadrant
        rrggbb := b"6'001100" // Green for now
    else if (syncgen.x_px < 320 && syncgen.y_px >= 240) // Bottom-left quadrant
        rrggbb := b"6'000011" // Blue for now
    else // Bottom-right quadrant
        rrggbb := b"6'111111" // white background for now
  else
    rrggbb := b"6'00" // Black during blanking
end pong_wars_top