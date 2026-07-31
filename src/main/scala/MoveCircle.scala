import dfhdl.* //import all the DFHDL goodness

class MoveCircle extends RTDesign {
  val Px = UInt(10) <> IN
  val Py = UInt(10) <> IN
  val SOF = Bit <> IN // Start of frame signal for game logic
  val collision = Bits(2) <> IN // Collision signal from CollisionControl
  val center_x = SInt(11) <> OUT.REG init 320 // Width of visible pixels.
  val center_y = SInt(11) <> OUT.REG init 240 // Height of visible lines.
  val speed_x = SInt(11) <> VAR.REG init 5 // Speed of the circle's movement
  val speed_y = SInt(11) <> VAR.REG init 5 // Speed of the circle's movement
  val corners =  Bits(4) <> VAR.REG init b"4'0"  // Corners of the circle for collision detection
  if(collision != b"2'0") {
    corners(0).din := (if(corners(0))  corners(0)  else ( (Px.signed -^ center_x) >= 0 && (Py.signed -^ center_y) >= 0 ) )// Top-Right Quadrant
    corners(1).din := (if(corners(1))  corners(1)  else ( (Px.signed -^ center_x) <= 0 && (Py.signed -^ center_y) >= 0 ) )// Top-Left Quadrant
    corners(2).din := (if(corners(2))  corners(2)  else ( (Px.signed -^ center_x) <= 0 && (Py.signed -^ center_y) <= 0 ) ) // Bottom-Left Quadrant
    corners(3).din := (if(corners(3))  corners(3)  else ( (Px.signed -^ center_x) >= 0 && (Py.signed -^ center_y) <= 0 ) ) // Bottom-Right Quadrant
  }

  if(SOF) {
    if(corners(0)+^corners(1)+^corners(2)+^corners(3) == b"4'1") {
        speed_x.din := -speed_x
        speed_y.din := -speed_y
    }
    else if(corners == b"4'0011" || corners == b"4'1100") {
        speed_y.din := -speed_y
    }
    else if(corners == b"4'0101" || corners == b"4'1010") {
        speed_x.din := -speed_x
    }
    center_x.din := (center_x + speed_x) % d"10'640" // Move the circle horizontally and wrap around at 640
    center_y.din := (center_y + speed_y) % d"10'480" // Move the circle vertically and wrap around at 480
  }
  
}
