import dfhdl.*

class MoveCircle(
    val x_init: SInt[11] <> CONST,
    val y_init: SInt[11] <> CONST,
    val sx_init: SInt[11] <> CONST,
    val sy_init: SInt[11] <> CONST
) extends RTDesign:
  val Px = UInt(10) <> IN
  val Py = UInt(10) <> IN
  val SOF = Bit <> IN
  val collision = Bits(2) <> IN
  val center_x = SInt(11) <> OUT.REG init x_init
  val center_y = SInt(11) <> OUT.REG init y_init

  val speed_x = SInt(11) <> VAR.REG init sx_init
  val speed_y = SInt(11) <> VAR.REG init sy_init

  // --- contact centroid accumulators for this frame ---
  // |dx|,|dy| <= 8 inside the disc and at most ~209 px collide,
  // so |sum| <= 1672 and 16 bits is far more than enough
  val sum_x = SInt(16) <> VAR.REG init 0
  val sum_y = SInt(16) <> VAR.REG init 0

  // --- combinational: offset of the current pixel from the centre ---
  val dx = SInt(12) <> VAR
  val dy = SInt(12) <> VAR
  dx := Px.signed -^ center_x
  dy := Py.signed -^ center_y

  // --- pseudo-random speed magnitude 5..9 ---
  val counter = UInt(5) <> VAR.REG init 0
  counter.din := counter + 1

  val next_speed_x = SInt[11] <> VAR init sx_init
  next_speed_x := speed_x(10).sel(
    -(counter % 5 + 5).resize(10).signed,
    (counter % 5 + 5).resize(10).signed
  )

  val next_speed_y = SInt[11] <> VAR init sy_init
  next_speed_y := speed_y(10).sel(
    -(counter % 5 + 5).resize(10).signed,
    (counter % 5 + 5).resize(10).signed
  )

  // --- every colliding pixel adds its offset; no wedges, no dead zone ---
  if (collision != b"2'00")
    sum_x.din := sum_x + dx.resize(16)
    sum_y.din := sum_y + dy.resize(16)

  // --- project the contact normal onto the direction of travel ---
  // push > 0  =>  contact lies AHEAD of us on that axis
  // larger push  =>  that axis carries more of the contact
  val push_x = SInt(16) <> VAR
  val push_y = SInt(16) <> VAR
  if (speed_x > 0) push_x := sum_x else push_x := -sum_x
  if (speed_y > 0) push_y := sum_y else push_y := -sum_y

  val flip_x = Bit <> VAR
  val flip_y = Bit <> VAR
  flip_x := 0
  flip_y := 0
  if (push_x > push_y)
    if (push_x > 0) flip_x := 1
  else if (push_y > push_x)
    if (push_y > 0) flip_y := 1
  else if (push_x > 0)
    // exact tie, both ahead: true corner hit
    flip_x := 1
    flip_y := 1

  if (SOF)
    if (flip_x)
      speed_x.din := -next_speed_x
      center_x.din := center_x - speed_x
    else
      center_x.din := center_x + speed_x
    if (flip_y)
      speed_y.din := -next_speed_y
      center_y.din := center_y - speed_y
    else
      center_y.din := center_y + speed_y
    sum_x.din := 0
    sum_y.din := 0
  end if
end MoveCircle
