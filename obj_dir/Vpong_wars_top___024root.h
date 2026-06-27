// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpong_wars_top.h for the primary calling header

#ifndef VERILATED_VPONG_WARS_TOP___024ROOT_H_
#define VERILATED_VPONG_WARS_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vpong_wars_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpong_wars_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_OUT8(rrggbb,5,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ pong_wars_top__DOT__syncgen_y_px;
    SData/*9:0*/ pong_wars_top__DOT__syncgen_x_px;
    SData/*9:0*/ pong_wars_top__DOT__syncgen__DOT__hc;
    SData/*9:0*/ pong_wars_top__DOT__syncgen__DOT__vc;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpong_wars_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpong_wars_top___024root(Vpong_wars_top__Syms* symsp, const char* v__name);
    ~Vpong_wars_top___024root();
    VL_UNCOPYABLE(Vpong_wars_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
