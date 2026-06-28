// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_25MHz,0,0);
    CData/*0:0*/ tb_top__DOT__hsync;
    CData/*0:0*/ tb_top__DOT__vsync;
    VL_IN8(rst,0,0);
    CData/*7:0*/ tb_top__DOT__r;
    CData/*7:0*/ tb_top__DOT__g;
    CData/*7:0*/ tb_top__DOT__b;
    CData/*0:0*/ tb_top__DOT__dut__DOT__SOF;
    CData/*0:0*/ tb_top__DOT__dut__DOT__prev_vsync;
    CData/*0:0*/ tb_top__DOT__dut__DOT__state;
    CData/*0:0*/ tb_top__DOT__dut__DOT__DR;
    CData/*7:0*/ tb_top__DOT__dut__DOT__sqR;
    CData/*7:0*/ tb_top__DOT__dut__DOT__sqG;
    CData/*7:0*/ tb_top__DOT__dut__DOT__sqB;
    CData/*0:0*/ tb_top__DOT__dut__DOT__prev_vsync_din;
    CData/*0:0*/ tb_top__DOT__dut__DOT__state_din;
    CData/*0:0*/ tb_top__DOT__dut__DOT__syncgen_activevideo;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_25MHz__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__b__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__g__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__hsync__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__r__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__vsync__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_top__DOT__dut__DOT__syncgen_y_px;
    SData/*9:0*/ tb_top__DOT__dut__DOT__syncgen_x_px;
    SData/*9:0*/ tb_top__DOT__dut__DOT__syncgen__DOT__hc;
    SData/*9:0*/ tb_top__DOT__dut__DOT__syncgen__DOT__vc;
    SData/*9:0*/ tb_top__DOT__dut__DOT__square__DOT__topLeftX;
    SData/*9:0*/ tb_top__DOT__dut__DOT__square__DOT__topLeftY;
    SData/*9:0*/ tb_top__DOT__dut__DOT__square__DOT__topLeftX_din;
    SData/*9:0*/ tb_top__DOT__dut__DOT__square__DOT__topLeftY_din;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_top__DOT__mon__DOT__handle;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top___024root(Vtb_top__Syms* symsp, const char* v__name);
    ~Vtb_top___024root();
    VL_UNCOPYABLE(Vtb_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
