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
    val circle = new CircleTop()
    val border = new Border()
    val matrix = new Matrix()
    //matrix VARS
    matrix.Px <> syncgen.x_px
    matrix.Py <> syncgen.y_px
    matrix.collision <> collision_control.collision(1)
    val matrix_dr = matrix.matrix_dr
    val matrix_r = matrix.vga_r
    val matrix_g = matrix.vga_g
    val matrix_b = matrix.vga_b
    

    //Circle VARS
    circle.Px <> syncgen.x_px
    circle.Py <> syncgen.y_px
    circle.SOF <> SOF
    circle.collision <> collision_control.collision
    val circle_DR = circle.DrawingRequest
    val circle_R = circle.vga_r
    val circle_G = circle.vga_g
    val circle_B = circle.vga_b



    border.Px <> syncgen.x_px
    border.Py <> syncgen.y_px
    val border_DR = border.DrawingRequest
    val border_R = border.vga_r
    val border_G = border.vga_g
    val border_B = border.vga_b

    collision_control.ball_dr <> circle_DR
    collision_control.border_dr <> border_DR
    collision_control.matrix_dr <> matrix_dr

    if(syncgen.activevideo) 
        if (border_DR) 
            vga_r := border_R 
            vga_g := border_G
            vga_b := border_B
        else if (circle_DR) 
            vga_r := circle_R 
            vga_g := circle_G
            vga_b := circle_B
        else if (matrix_dr(0))
            vga_r := matrix_r
            vga_g := matrix_g
            vga_b := matrix_b
        else
            vga_r := b"8'00000000"
            vga_g := b"8'00000000"
            vga_b := b"8'00000000"
    else 
        vga_r := b"8'00000000"
        vga_g := b"8'00000000" 
        vga_b := b"8'00000000" 

end pong_wars_top

