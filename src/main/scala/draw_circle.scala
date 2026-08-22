import dfhdl.* //import all the DFHDL goodness

class DrawCircle extends RTDesign:
 

  val Px = UInt(10) <> IN
  val Py = UInt(10) <> IN
  val center_x: Int <> CONST = 320 // Width of visible pixels.
  val center_y: Int <> CONST = 240 // Height of visible lines.
  val radius: Int <> CONST = 8 // Radius of the circle.
  val DrawingRequest = Bit <> OUT
  val vga_r = Bits(8) <> OUT
  val vga_g = Bits(8) <> OUT
  val vga_b = Bits(8) <> OUT

  val delta_x = UInt(32) <> VAR   
  val delta_y = UInt(32) <> VAR
  //delta_x := (d"32'${Px}" - d"32'${center_x}") * (d"32'${Px}" - d"32'${center_x}")
  //delta_y := (d"32'${Py}" - d"32'${center_y}") * (d"32'${Py}" - d"32'${center_y}")


  DrawingRequest := (Px - center_x) *^ (Px - center_x) +^ (Py - center_y) *^ (Py - center_y) <= radius *^ radius
 

  if(DrawingRequest) 
    vga_r :=  b"8'00000000"
    vga_g :=  b"8'11111111"
    vga_b :=  b"8'00000000" 
  else 
    vga_r :=  b"8'00000000"
    vga_g :=  b"8'00000000" 
    vga_b :=  b"8'00000000"

  
end DrawCircle
