import dfhdl.* //import all the DFHDL goodness


class SquareObject extends RTDesign:
  val topLeftX = UInt(10) <> VAR.REG init 200
  val topLeftY = UInt(10) <> VAR.REG init 160
  val size: Int <> CONST = 32 // Size of the square (32x32 pixels)
  val Px = UInt(10) <> IN
  val Py = UInt(10) <> IN
  val SOF = Bit <> IN // Start of frame signal
  val DrawingRequest = Bit <> OUT
  val vga_r = Bits(8) <> OUT
  val vga_g = Bits(8) <> OUT
  val vga_b = Bits(8) <> OUT

  DrawingRequest := (Px >= topLeftX && Px < (topLeftX + d"10'${size}")) && (Py >= topLeftY && Py < (topLeftY + d"10'${size}"))
  
  if(DrawingRequest) 
    vga_r :=  b"8'00000000"
    vga_g :=  b"8'11111111"
    vga_b :=  b"8'00000000" 
  else 
    vga_r :=  b"8'00000000"
    vga_g :=  b"8'00000000" 
    vga_b :=  b"8'00000000"
  if(SOF)
    // Move the square diagonally across the screen
    topLeftX.din := (topLeftX + d"10'30") % d"10'640" // Wrap around at 640 to stay within 640px width
    topLeftY.din := (topLeftY + d"10'30") % d"10'480" // Wrap around at 480 to stay within 480px height
  
end SquareObject
    

