import dfhdl.* //import all the DFHDL goodness

class MoveCircle (val x_init: SInt[11] <> CONST, val y_init: SInt[11] <> CONST) extends RTDesign {
  val Px = UInt(10) <> IN
  val Py = UInt(10) <> IN
  val SOF = Bit <> IN // Start of frame signal for game logic
  val collision = Bits(2) <> IN // Collision signal from CollisionControl
  val center_x = SInt(11) <> OUT.REG init x_init   // Width of visible pixels.
  val center_y = SInt(11) <> OUT.REG init y_init  // Height of visible lines.
  val speed_x = SInt(11) <> VAR.REG init 7 // Speed of the circle's movement
  val speed_y = SInt(11) <> VAR.REG init 7 // Speed of the circle's movement
  val corners =  Bits(4) <> VAR.REG init b"4'0"  // Corners of the circle for collision detection

  if(collision != b"2'00") {
    if(!corners(0)) corners(0).din := ( (Px.signed -^ center_x) >= 0 && (Py.signed -^ center_y) > 0 ) // Top-Right Quadrant
    if(!corners(1)) corners(1).din := ( (Px.signed -^ center_x) <= 0 && (Py.signed -^ center_y) > 0 ) // Top-Left Quadrant
    if(!corners(2)) corners(2).din := ( (Px.signed -^ center_x) <= 0 && (Py.signed -^ center_y) <= 0 ) // Bottom-Left Quadrant
    if(!corners(3)) corners(3).din := ( (Px.signed -^ center_x) >= 0 && (Py.signed -^ center_y) <= 0 ) // Bottom-Right Quadrant
  }

  if(SOF) {
    if(corners == b"4'1001" || corners == b"4'0110") {
      speed_x.din := -speed_x
      center_x.din := (center_x - speed_x) % d"10'640"
      center_y.din := (center_y + speed_y) % d"10'480"
      corners.din := b"4'0"
    }
    else if(corners == b"4'0011" || corners == b"4'1100") {
      speed_y.din := -speed_y
      center_x.din := (center_x + speed_x) % d"10'640"
      center_y.din := (center_y - speed_y) % d"10'480"
      corners.din := b"4'0"
    }
    else if(corners != b"4'0") {
      speed_x.din := -speed_x
      speed_y.din := -speed_y
      center_x.din := (center_x - speed_x) % d"10'640"
      center_y.din := (center_y - speed_y) % d"10'480"
      corners.din := b"4'0"
    }
    else {
      center_x.din := (center_x + speed_x) % d"10'640"
      center_y.din := (center_y + speed_y) % d"10'480"
      corners.din := b"4'0"
    }
  }
}



