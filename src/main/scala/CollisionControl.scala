import dfhdl.* //import all the DFHDL goodness

class CollisionControl extends RTDesign{
  val ball_evil_dr = Bit <> IN
  val ball_good_dr = Bit <> IN
  val border_dr = Bit <> IN
  val matrix_dr = Bits(2) <> IN
  val collision_good = Bits(2) <> OUT init b"2'00"
  val collision_evil = Bits(2) <> OUT init b"2'00"
  
  if (ball_evil_dr & border_dr)
    collision_evil(0) := 1 // Both ball and border are being drawn
  else
    collision_evil(0) := 0
  if(matrix_dr == b"2'01" && ball_evil_dr)
    collision_evil(1) := 1 // Both ball and matrix are being drawn
  else
    collision_evil(1) := 0
  if (ball_good_dr & border_dr)
    collision_good(0) := 1 // Both ball and border are being drawn
  else
    collision_good(0) := 0
  if(matrix_dr == b"2'11" && ball_good_dr)
    collision_good(1) := 1 // Both ball and matrix are being drawn
  else
    collision_good(1) := 0 
}
//matrix_dr = 0 vga out = white
//
