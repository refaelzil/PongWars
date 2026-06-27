import dfhdl.* //import all the DFHDL goodness


class SquareObject extends RTDesign:
  val topLeftX = UInt(10) <> VAR.REG init 200
  val topLeftY = UInt(10) <> VAR.REG init 160
  val size: Int <> CONST = 32 // Size of the square (32x32 pixels)
  val Px = UInt(10) <> IN
  val Py = UInt(10) <> IN
  val SOF = Bit <> IN // Start of frame signal
  val DrawingRequest = Bit <> OUT
  val RGB = Bits(6) <> OUT

  DrawingRequest := (Px >= topLeftX && Px < topLeftX + size) && (Py >= topLeftY && Py < topLeftY + size)
  
  if(DrawingRequest) 
    RGB :=  b"6'001100"; 
  else 
    RGB := b"6'000000"; 
  if(SOF)
    // Move the square diagonally across the screen
    topLeftX.din := (topLeftX + 30) % 640 // Wrap around at 608 to stay within 640px width
    topLeftY.din := (topLeftY + 30) % 480 // Wrap around at 448 to stay within 480px height
  
end SquareObject
    

