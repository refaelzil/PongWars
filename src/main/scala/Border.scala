import dfhdl.* //import all the DFHDL goodness

class Border extends RTDesign:
    val Px = UInt(10) <> IN
    val Py = UInt(10) <> IN
    val DrawingRequest = Bit <> OUT
    val vga_r = Bits(8) <> OUT
    val vga_g = Bits(8) <> OUT
    val vga_b = Bits(8) <> OUT

    val border_thickness: Int <> CONST = 10 // Thickness of the border in pixels
    val border_upper_limit: Int <> CONST = 112 // Upper limit for the border
    val border_left_limit: Int <> CONST = 64 // Lower limit for the border in x direction
    val border_lower_limit: Int <> CONST = 368 // Lower limit for the border in y direction
    val border_right_limit: Int <> CONST = 576 // Upper limit for the border in x direction
    if((Px < border_left_limit) && (Px >= (border_left_limit - border_thickness) ))
        DrawingRequest := 1
    else if (Px >= border_right_limit && Px < (border_right_limit + border_thickness) )
        DrawingRequest := 1
    else if (Py < border_upper_limit && Py >= (border_upper_limit - border_thickness) )
        DrawingRequest := 1
    else if (Py >= border_lower_limit && Py < (border_lower_limit + border_thickness) )
        DrawingRequest := 1
    else
        DrawingRequest := 0
    end if

    vga_r := b"8'00000000"
    vga_g := b"8'00000000"
    vga_b := b"8'11111111"


end Border

