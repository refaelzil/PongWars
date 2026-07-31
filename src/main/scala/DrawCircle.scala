import dfhdl.* //import all the DFHDL goodness

class DrawCircle extends RTDesign:
 

  val Px = UInt(10) <> IN
  val Py = UInt(10) <> IN
  val center_x= SInt(11) <> IN  // Width of visible pixels.
  val center_y= SInt(11) <> IN  // Height of visible lines.
  val radius: UInt[23] <> CONST = 8 // Radius of the circle.
  val DrawingRequest = Bit <> OUT
  val vga_r = Bits(8) <> OUT
  val vga_g = Bits(8) <> OUT
  val vga_b = Bits(8) <> OUT

  val delta_x = Px.signed -^ center_x
  val delta_y = Py.signed -^ center_y

  val product_x = delta_x *^ delta_x
  val product_y = delta_y *^ delta_y
  val radius_squared = radius * radius

  DrawingRequest := (product_x + product_y) <= radius_squared.signed  


  if(DrawingRequest) 
    vga_r :=  b"8'00000000"
    vga_g :=  b"8'11111111"
    vga_b :=  b"8'00000000" 
  else 
    vga_r :=  b"8'00000000"
    vga_g :=  b"8'00000000" 
    vga_b :=  b"8'00000000"

  
end DrawCircle
