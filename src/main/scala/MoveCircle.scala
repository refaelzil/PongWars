import dfhdl.* //import all the DFHDL goodness

class MoveCircle (val x_init: SInt[11] <> CONST, val y_init: SInt[11] <> CONST) extends RTDesign {
  val Px = UInt(10) <> IN
  val Py = UInt(10) <> IN
  val SOF = Bit <> IN // Start of frame signal for game logic
  val collision = Bits(2) <> IN // Collision signal from CollisionControl
  val center_x = SInt(11) <> OUT.REG init x_init   // Width of visible pixels.
  val center_y = SInt(11) <> OUT.REG init y_init  // Height of visible lines.
  val speed_x = SInt(11) <> VAR.REG init 14 // Speed of the circle's movement
  val speed_y = SInt(11) <> VAR.REG init 14 // Speed of the circle's movement
  val corners =  Bits(4) <> VAR.REG init b"4'0"  // Corners of the circle for collision detection
  val border_upper_limit: SInt[11] <> CONST = 113 // Upper limit for the border
  val border_left_limit: SInt[11] <> CONST = 64 // Lower limit for the border in x direction
  val border_lower_limit: SInt[11] <> CONST = 367 // Lower limit for the border in y direction
  val border_right_limit: SInt[11] <> CONST = 570 // Upper limit for the border in x direction
  val radius: SInt[11] <> CONST = 7 // Radius of the circle

  val center_x_mem = SInt(11) <> VAR.REG init x_init
  val center_y_mem = SInt(11) <> VAR.REG init y_init
  val center_x_mem2 = SInt(11) <> VAR.REG  init x_init
  val center_y_mem2 = SInt(11) <> VAR.REG  init y_init
  val counter = UInt(10) <> VAR.REG init b"10'0000000000"
  val recursive = Bit <> OUT.REG init 0

  if(collision != b"2'00") {
    if(!corners(0)) corners(0).din := ( (Px.signed -^ center_x) >= 0 && (Py.signed -^ center_y) > 0 ) // Top-Right Quadrant
    if(!corners(1)) corners(1).din := ( (Px.signed -^ center_x) <= 0 && (Py.signed -^ center_y) > 0 ) // Top-Left Quadrant
    if(!corners(2)) corners(2).din := ( (Px.signed -^ center_x) <= 0 && (Py.signed -^ center_y) <= 0 ) // Bottom-Left Quadrant
    if(!corners(3)) corners(3).din := ( (Px.signed -^ center_x) >= 0 && (Py.signed -^ center_y) <= 0 ) // Bottom-Right Quadrant
  }
  
  if(SOF) {
    //recursive check
    center_x_mem.din := center_x
    center_y_mem.din := center_y
    center_x_mem2.din := center_x_mem
    center_y_mem2.din := center_y_mem
    //if not recursive:    
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
    else if(center_x + speed_x < border_left_limit + radius + 1 && center_y + speed_y < border_upper_limit + radius + 1) {
      speed_x.din := -speed_x
      speed_y.din := -speed_y
      center_x.din := center_x - speed_x
      center_y.din := center_y - speed_y
      corners.din := b"4'0"
    }
    else if(center_x + speed_x > border_right_limit - radius - 1 && center_y + speed_y < border_upper_limit + radius + 1) {
      speed_x.din := -speed_x
      speed_y.din := -speed_y
      center_x.din := center_x - speed_x
      center_y.din := center_y - speed_y
      corners.din := b"4'0"
    }
    else if(center_x + speed_x < border_left_limit + radius + 1 && center_y + speed_y > border_lower_limit - radius - 1) {
      speed_x.din := -speed_x
      speed_y.din := -speed_y
      center_x.din := center_x - speed_x
      center_y.din := center_y - speed_y
      corners.din := b"4'0"
    }
    else if(center_x + speed_x > border_right_limit - radius - 1 && center_y + speed_y > border_lower_limit - radius - 1) {
      speed_x.din := -speed_x
      speed_y.din := -speed_y
      center_x.din := center_x - speed_x
      center_y.din := center_y - speed_y
      corners.din := b"4'0"
    }
    else if(center_x + speed_x < border_left_limit + radius + 1) {
      speed_x.din := -speed_x
      center_x.din := center_x - speed_x
      center_y.din := (center_y + speed_y) % d"10'480"
      corners.din := b"4'0"
    }
    else if(center_x + speed_x > border_right_limit - radius - 1) {
      speed_x.din := -speed_x
      center_x.din := center_x - speed_x
      center_y.din := (center_y + speed_y) % d"10'480"
      corners.din := b"4'0"
    }
    else if(center_y + speed_y < border_upper_limit + radius + 1) {
      speed_y.din := -speed_y
      center_y.din := center_y - speed_y
      center_x.din := (center_x + speed_x) % d"10'640"
      corners.din := b"4'0"
    }
    else if(center_y + speed_y > border_lower_limit - radius - 1) {
      speed_y.din := -speed_y
      center_y.din := center_y - speed_y
      center_x.din := (center_x + speed_x) % d"10'640"
      corners.din := b"4'0"
    }
    else {
      center_x.din := (center_x + speed_x) % d"10'640"
      center_y.din := (center_y + speed_y) % d"10'480"
      corners.din := b"4'0"
    }
    if((center_x == center_x_mem2) && (center_y == center_y_mem2)){
      if(counter == 10){
        counter.din := 0
        center_x.din := center_x + speed_x*2
        center_y.din := center_y + speed_y*2
        corners.din := b"4'0"
        recursive.din := 1
      }
      else{
        recursive.din := 0
      }
      counter.din := counter+1
    }

  }
}



