import dfhdl.* //import all the DFHDL goodness

class CircleTop extends RTDesign {
    val Px = UInt(10) <> IN
    val Py = UInt(10) <> IN
    val SOF = Bit <> IN 
    val collision = Bits(2) <> IN
    
    val DrawingRequest = Bit <> OUT
    val vga_r = Bits(8) <> OUT
    val vga_g = Bits(8) <> OUT
    val vga_b = Bits(8) <> OUT// Start of frame signal
    
    val move_circle = new MoveCircle()
    move_circle.SOF <> SOF
    move_circle.Px <> Px
    move_circle.Py <> Py
    move_circle.collision <> collision
    
   

    val draw_circle = new DrawCircle()
    draw_circle.Px <> Px 
    draw_circle.Py <> Py
    draw_circle.center_x <> move_circle.center_x
    draw_circle.center_y <> move_circle.center_y
    
    DrawingRequest := draw_circle.DrawingRequest
    vga_r := draw_circle.vga_r
    vga_g := draw_circle.vga_g
    vga_b := draw_circle.vga_b
}
