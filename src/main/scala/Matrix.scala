import dfhdl.* //import all the DFHDL goodness

class Matrix extends RTDesign:
  val Px = UInt(10) <> IN
  val Py = UInt(10) <> IN
  val SOF = Bit <> IN
  val collision_evil = Bit <> IN
  val collision_good = Bit <> IN
  val collision_d = Bits(2) <> VAR.REG init b"2'00"
  val matrix = Bits[32] X 16 <> VAR.REG initFile "./src/resources/MatrixInit.hex"
  val evil_touched = Bits[32] X 16 <> VAR.REG init all(all(0))
  val good_touched = Bits[32] X 16 <> VAR.REG init all(all(0))

  val matrix_dr = Bits(2) <> OUT
  val vga_r = Bits(8) <> OUT
  val vga_g = Bits(8) <> OUT
  val vga_b = Bits(8) <> OUT

  val row = Bits(4) <> VAR
  val col = Bits(5) <> VAR
  val row_reg = Bits(4) <> VAR.REG init b"4'0000"
  val col_reg = Bits(5) <> VAR.REG init b"5'00000"
  val border_upper_limit: Int <> CONST = 113
  val border_left_limit: Int <> CONST = 64
  val border_lower_limit: Int <> CONST = 367
  val border_right_limit: Int <> CONST = 570

  if (
    Px > border_left_limit && Px < border_right_limit && Py > border_upper_limit &&
    Py < border_lower_limit
  )
    row := ((Py - border_upper_limit) / 16).truncate
    col := ((Px - border_left_limit) / 16).truncate
    matrix_dr(1) := matrix(row)(col)
    matrix_dr(0) := 1
  else
    row := b"4'0000"
    col := b"5'00000"
    matrix_dr := b"2'00"

  row_reg.din := row
  col_reg.din := col
  collision_d(0).din := collision_evil
  collision_d(1).din := collision_good

  if (collision_d(0)) evil_touched(row_reg)(col_reg).din := 1
  if (collision_d(1)) good_touched(row_reg)(col_reg).din := 1

  if (SOF)
    for (r <- 0 until 16)
      matrix(r).din := matrix(r) ^ (evil_touched(r) ^ good_touched(r))
    evil_touched.din := all(all(0))
    good_touched.din := all(all(0))

  if (matrix_dr(1))
    vga_r := b"8'11111111"
    vga_g := b"8'11111111"
    vga_b := b"8'11111111"
  else
    vga_r := b"8'00000000"
    vga_g := b"8'00000000"
    vga_b := b"8'00000000"
end Matrix
