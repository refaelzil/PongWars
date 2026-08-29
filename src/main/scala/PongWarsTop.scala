import dfhdl.* //import all the DFHDL goodness

class pong_wars_top extends RTDesign:
    val hsync = Bit <> OUT
    val vsync = Bit <> OUT
    val vga_r = Bits(8) <> OUT
    val vga_g = Bits(8) <> OUT
    val vga_b = Bits(8) <> OUT
    val syncgen = new VGASyncGen()
    val SOF = Bit <> VAR // Start of frame signal for game logic
    val prev_vsync = Bit <> VAR.REG  // Register to hold previous vsync value
    

    syncgen.hsync <> hsync  
    syncgen.vsync <> vsync
  
    // Update the previous vsync value at the end of each cycle
    prev_vsync.din := syncgen.vsync
    SOF := prev_vsync && !vsync // Generate SOF on falling edge of vsync



  
    //init instances
    val collision_control = new CollisionControl()
    val circle_evil = new CircleTop(is_evil = true, x_init = 520, y_init = 240)
    val circle_good = new CircleTop(is_evil = false, x_init = 121, y_init = 240)
    val border = new Border()
    val matrix = new Matrix()
    //matrix VARS
    matrix.Px <> syncgen.x_px
    matrix.Py <> syncgen.y_px
    matrix.SOF <> SOF
    matrix.collision_evil <> collision_control.collision_evil(1)
    matrix.collision_good <> collision_control.collision_good(1)
    val matrix_dr = matrix.matrix_dr
    val matrix_r = matrix.vga_r
    val matrix_g = matrix.vga_g
    val matrix_b = matrix.vga_b

    

    //Circle VARS
    circle_evil.Px <> syncgen.x_px
    circle_evil.Py <> syncgen.y_px
    circle_evil.SOF <> SOF
    circle_evil.collision <> collision_control.collision_evil
    val circle_evil_DR = circle_evil.DrawingRequest
    val circle_evil_R = circle_evil.vga_r
    val circle_evil_G = circle_evil.vga_g
    val circle_evil_B = circle_evil.vga_b

    circle_good.Px <> syncgen.x_px
    circle_good.Py <> syncgen.y_px
    circle_good.SOF <> SOF
    circle_good.collision <> collision_control.collision_good
    val circle_good_DR = circle_good.DrawingRequest
    val circle_good_R = circle_good.vga_r
    val circle_good_G = circle_good.vga_g
    val circle_good_B = circle_good.vga_b
    val recursive_good = circle_good.recursive
    val recursive_evil = circle_evil.recursive


    border.Px <> syncgen.x_px
    border.Py <> syncgen.y_px
    val border_DR = border.DrawingRequest
    val border_R = border.vga_r
    val border_G = border.vga_g
    val border_B = border.vga_b

    collision_control.ball_evil_dr <> circle_evil_DR
    collision_control.ball_good_dr <> circle_good_DR
    collision_control.border_dr <> border_DR
    collision_control.matrix_dr <> matrix_dr

    if(syncgen.activevideo) 
        if (circle_evil_DR) 
            vga_r := circle_evil_R 
            vga_g := circle_evil_G
            vga_b := circle_evil_B
        else if (circle_good_DR)
            vga_r := circle_good_R
            vga_g := circle_good_G
            vga_b := circle_good_B
        else if (recursive_good || recursive_evil)
            vga_r := b"8'00000000"
            vga_g := b"8'11111111"
            vga_b := b"8'00000000"
        else if (border_DR) 
            vga_r := border_R 
            vga_g := border_G
            vga_b := border_B
        else if (matrix_dr(0))
            vga_r := matrix_r
            vga_g := matrix_g
            vga_b := matrix_b
        else
            vga_r := b"8'10000000"
            vga_g := b"8'10000000"
            vga_b := b"8'10000000"
    else 
        vga_r := b"8'10000000"
        vga_g := b"8'10000000" 
        vga_b := b"8'10000000" 

end pong_wars_top

