import dfhdl.* //import all the DFHDL goodness

class Counter8 extends RTDesign{
  val cnt = UInt(10) <> OUT.REG init 0
  cnt.din := cnt + 1

}