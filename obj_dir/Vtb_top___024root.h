// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_25MHz,0,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(vga_r,7,0);
    VL_OUT8(vga_g,7,0);
    VL_OUT8(vga_b,7,0);
    CData/*7:0*/ tb_top__DOT__r;
    CData/*7:0*/ tb_top__DOT__g;
    CData/*7:0*/ tb_top__DOT__b;
    CData/*0:0*/ tb_top__DOT__dut__DOT__SOF;
    CData/*0:0*/ tb_top__DOT__dut__DOT__prev_vsync;
    CData/*0:0*/ tb_top__DOT__dut__DOT__state;
    CData/*0:0*/ tb_top__DOT__dut__DOT__DR;
    CData/*0:0*/ tb_top__DOT__dut__DOT__syncgen_activevideo;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_25MHz__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__hsync__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__b__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__g__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__r__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__vsync__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*9:0*/ tb_top__DOT__dut__DOT__syncgen_y_px;
    SData/*9:0*/ tb_top__DOT__dut__DOT__syncgen_x_px;
    SData/*9:0*/ tb_top__DOT__dut__DOT__syncgen__DOT__hc;
    SData/*9:0*/ tb_top__DOT__dut__DOT__syncgen__DOT__vc;
    SData/*9:0*/ tb_top__DOT__dut__DOT__square__DOT__topLeftX;
    SData/*9:0*/ tb_top__DOT__dut__DOT__square__DOT__topLeftY;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_top__DOT__mon__DOT__handle;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top___024root(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top___024root();
    VL_UNCOPYABLE(Vtb_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
