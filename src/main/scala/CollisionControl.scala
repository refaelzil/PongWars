import dfhdl.* //import all the DFHDL goodness

class CollisionControl extends RTDesign{
  val ball_dr = Bit <> IN
  val border_dr = Bit <> IN
  val matrix_dr = Bits(2) <> IN
  val collision = Bits(2) <> OUT init b"2'00"
  
  if (ball_dr & border_dr)
    collision(0) := 1 // Both ball and border are being drawn
  else
    collision(0) := 0
  if(matrix_dr == b"2'11" && ball_dr)
    collision(1) := 1 // Both ball and matrix are being drawn
  else
    collision(1) := 0
   
}
//matrix_dr = 0 vga out = white
//
