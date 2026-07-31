import dfhdl.* //import all the DFHDL goodness

class CollisionControl extends RTDesign{
  val ball_dr = Bit <> IN
  val border_dr = Bit <> IN
  val collision = Bits(2) <> OUT

  if (ball_dr && border_dr)
    collision := b"2'01" // Both ball and border are being drawn
  else
    collision := b"2'00" // Neither the ball nor the border is being drawn

   
}

