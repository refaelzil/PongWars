// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top__Syms.h"
#include "Vtb_top___024root.h"

extern "C" void* vga_monitor_open(const char* name);

VL_INLINE_OPT void Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_open_TOP(std::string name, QData/*63:0*/ &vga_monitor_open__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_open_TOP\n"); );
    // Body
    const char* name__Vcvt;
    for (size_t name__Vidx = 0; name__Vidx < 1; ++name__Vidx) name__Vcvt = name.c_str();
    void* vga_monitor_open__Vfuncrtn__Vcvt;
    vga_monitor_open__Vfuncrtn__Vcvt = vga_monitor_open(name__Vcvt);
    vga_monitor_open__Vfuncrtn = VL_CVT_VP_Q(vga_monitor_open__Vfuncrtn__Vcvt);
}

extern "C" void vga_monitor_event(void* handle, double t, unsigned char r, unsigned char g, unsigned char b, int hsync, int vsync);

VL_INLINE_OPT void Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_event_TOP(QData/*63:0*/ handle, double t, CData/*7:0*/ r, CData/*7:0*/ g, CData/*7:0*/ b, IData/*31:0*/ hsync, IData/*31:0*/ vsync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_event_TOP\n"); );
    // Body
    void* handle__Vcvt;
    for (size_t handle__Vidx = 0; handle__Vidx < 1; ++handle__Vidx) handle__Vcvt = VL_CVT_Q_VP(handle);
    double t__Vcvt;
    for (size_t t__Vidx = 0; t__Vidx < 1; ++t__Vidx) t__Vcvt = t;
    unsigned char r__Vcvt;
    for (size_t r__Vidx = 0; r__Vidx < 1; ++r__Vidx) r__Vcvt = r;
    unsigned char g__Vcvt;
    for (size_t g__Vidx = 0; g__Vidx < 1; ++g__Vidx) g__Vcvt = g;
    unsigned char b__Vcvt;
    for (size_t b__Vidx = 0; b__Vidx < 1; ++b__Vidx) b__Vcvt = b;
    int hsync__Vcvt;
    for (size_t hsync__Vidx = 0; hsync__Vidx < 1; ++hsync__Vidx) hsync__Vcvt = hsync;
    int vsync__Vcvt;
    for (size_t vsync__Vidx = 0; vsync__Vidx < 1; ++vsync__Vidx) vsync__Vcvt = vsync;
    vga_monitor_event(handle__Vcvt, t__Vcvt, r__Vcvt, g__Vcvt, b__Vcvt, hsync__Vcvt, vsync__Vcvt);
}

extern "C" void vga_monitor_close(void* handle);

VL_INLINE_OPT void Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_close_TOP(QData/*63:0*/ handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_close_TOP\n"); );
    // Body
    void* handle__Vcvt;
    for (size_t handle__Vidx = 0; handle__Vidx < 1; ++handle__Vidx) handle__Vcvt = VL_CVT_Q_VP(handle);
    vga_monitor_close(handle__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top___024root___eval_triggers__act(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk_25MHz) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_25MHz__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_top__DOT__b) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__b__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_top__DOT__g) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__g__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tb_top__DOT__hsync) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__hsync__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tb_top__DOT__r) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__r__0)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.tb_top__DOT__vsync) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vsync__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_25MHz__0 = vlSelfRef.clk_25MHz;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__b__0 
        = vlSelfRef.tb_top__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__g__0 
        = vlSelfRef.tb_top__DOT__g;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__hsync__0 
        = vlSelfRef.tb_top__DOT__hsync;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__r__0 
        = vlSelfRef.tb_top__DOT__r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vsync__0 
        = vlSelfRef.tb_top__DOT__vsync;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
