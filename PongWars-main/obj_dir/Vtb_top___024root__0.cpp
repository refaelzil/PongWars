// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

extern "C" void* vga_monitor_open(const char* name);

void Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_open_TOP(const std::string &name, QData/*63:0*/ &vga_monitor_open__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_open_TOP\n"); );
    // Body
    const char* name__Vcvt;
    name__Vcvt = name.c_str();
    void* vga_monitor_open__Vfuncrtn__Vcvt;
    vga_monitor_open__Vfuncrtn__Vcvt = vga_monitor_open(name__Vcvt);
    vga_monitor_open__Vfuncrtn = VL_CVT_VP_Q(vga_monitor_open__Vfuncrtn__Vcvt);
}

extern "C" void vga_monitor_event(void* handle, double t, unsigned char r, unsigned char g, unsigned char b, int hsync, int vsync);

void Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_event_TOP(QData/*63:0*/ handle, double t, CData/*7:0*/ r, CData/*7:0*/ g, CData/*7:0*/ b, IData/*31:0*/ hsync, IData/*31:0*/ vsync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_event_TOP\n"); );
    // Body
    void* handle__Vcvt;
    handle__Vcvt = VL_CVT_Q_VP(handle);
    double t__Vcvt;
    t__Vcvt = t;
    unsigned char r__Vcvt;
    r__Vcvt = r;
    unsigned char g__Vcvt;
    g__Vcvt = g;
    unsigned char b__Vcvt;
    b__Vcvt = b;
    int hsync__Vcvt;
    hsync__Vcvt = hsync;
    int vsync__Vcvt;
    vsync__Vcvt = vsync;
    vga_monitor_event(handle__Vcvt, t__Vcvt, r__Vcvt, g__Vcvt, b__Vcvt, hsync__Vcvt, vsync__Vcvt);
}

extern "C" void vga_monitor_close(void* handle);

void Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_close_TOP(QData/*63:0*/ handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_close_TOP\n"); );
    // Body
    void* handle__Vcvt;
    handle__Vcvt = VL_CVT_Q_VP(handle);
    vga_monitor_close(handle__Vcvt);
}

void Vtb_top___024root___eval_triggers_vec__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers_vec__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.vsync) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__vsync__0)) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.tb_top__DOT__r) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__r__0)) 
                                                         << 4U)) 
                                                     | (((((IData)(vlSelfRef.tb_top__DOT__g) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__g__0)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.tb_top__DOT__b) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__b__0)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.hsync) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hsync__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.clk_25MHz) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_25MHz__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_25MHz__0 = vlSelfRef.clk_25MHz;
    vlSelfRef.__Vtrigprevexpr___TOP__hsync__0 = vlSelfRef.hsync;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__b__0 
        = vlSelfRef.tb_top__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__g__0 
        = vlSelfRef.tb_top__DOT__g;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__r__0 
        = vlSelfRef.tb_top__DOT__r;
    vlSelfRef.__Vtrigprevexpr___TOP__vsync__0 = vlSelfRef.vsync;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VactTriggered[0U]);
    }
}

bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tb_top__DOT__dut__DOT__state;
    __Vdly__tb_top__DOT__dut__DOT__state = 0;
    SData/*9:0*/ __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc;
    __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc = 0;
    SData/*9:0*/ __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__vc;
    __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__vc = 0;
    // Body
    __Vdly__tb_top__DOT__dut__DOT__state = vlSelfRef.tb_top__DOT__dut__DOT__state;
    __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc 
        = vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc;
    __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__vc 
        = vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc;
    __Vdly__tb_top__DOT__dut__DOT__state = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                            && (IData)(vlSelfRef.tb_top__DOT__dut__DOT__state));
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync 
            = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__state)
                ? (IData)(vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync)
                : (IData)(vlSelfRef.vsync));
    }
    if (vlSelfRef.rst) {
        vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX = 0x000000c8U;
        vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY = 0x000000a0U;
        vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px = 0U;
        __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc = 0U;
        __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__vc = 0U;
    } else {
        if (vlSelfRef.tb_top__DOT__dut__DOT__SOF) {
            vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX 
                = (0x000003ffU & VL_MODDIV_III(10, 
                                               (0x000003ffU 
                                                & ((IData)(0x001eU) 
                                                   + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX))), (IData)(0x0280U)));
            vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY 
                = (0x000003ffU & VL_MODDIV_III(10, 
                                               (0x000003ffU 
                                                & ((IData)(0x001eU) 
                                                   + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY))), (IData)(0x01e0U)));
        } else {
            vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX 
                = (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX));
            vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY 
                = (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY));
        }
        if ((0x031fU > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc))) {
            __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)));
        } else {
            __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__vc 
                = ((0x020cU > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc))
                    ? (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)))
                    : 0U);
            __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc = 0U;
        }
        vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px 
            = (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc) 
                              - (IData)(0x00a0U)));
        vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px 
            = (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc) 
                              - (IData)(0x002dU)));
    }
    vlSelfRef.tb_top__DOT__dut__DOT__state = __Vdly__tb_top__DOT__dut__DOT__state;
    vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc 
        = __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc;
    vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc 
        = __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__vc;
    if (vlSelfRef.tb_top__DOT__dut__DOT__state) {
        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: pong_wars_top.sv:67: Assertion failed in %m: unique case, but none matched for '1'h%X'\n",4, 'M',vlSymsp->name(),"tb_top.dut", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(vlSelfRef.tb_top__DOT__dut__DOT__state));
            VL_STOP_MT("rtl/pong_wars_top.sv", 67, "");
        }
    }
    vlSelfRef.tb_top__DOT__dut__DOT__syncgen_activevideo 
        = ((0x00a0U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)) 
           & (0x002dU <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)));
    vlSelfRef.tb_top__DOT__dut__DOT__DR = (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px) 
                                            >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX)) 
                                           & (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px) 
                                               < (0x000003ffU 
                                                  & ((IData)(0x0020U) 
                                                     + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX)))) 
                                              & (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px) 
                                                  >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY)) 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px) 
                                                    < 
                                                    (0x000003ffU 
                                                     & ((IData)(0x0020U) 
                                                        + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY)))))));
}

void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ tb_top__DOT__mon__DOT____VlemCall_2__to8;
    CData/*7:0*/ tb_top__DOT__mon__DOT____VlemCall_1__to8;
    CData/*7:0*/ tb_top__DOT__mon__DOT____VlemCall_0__to8;
    CData/*7:0*/ __Vfunc_tb_top__DOT__mon__DOT__to8__1__c;
    __Vfunc_tb_top__DOT__mon__DOT__to8__1__c = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__mon__DOT__to8__2__c;
    __Vfunc_tb_top__DOT__mon__DOT__to8__2__c = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__mon__DOT__to8__3__c;
    __Vfunc_tb_top__DOT__mon__DOT__to8__3__c = 0;
    // Body
    __Vfunc_tb_top__DOT__mon__DOT__to8__1__c = vlSelfRef.tb_top__DOT__r;
    tb_top__DOT__mon__DOT____VlemCall_0__to8 = __Vfunc_tb_top__DOT__mon__DOT__to8__1__c;
    __Vfunc_tb_top__DOT__mon__DOT__to8__2__c = vlSelfRef.tb_top__DOT__g;
    tb_top__DOT__mon__DOT____VlemCall_1__to8 = __Vfunc_tb_top__DOT__mon__DOT__to8__2__c;
    __Vfunc_tb_top__DOT__mon__DOT__to8__3__c = vlSelfRef.tb_top__DOT__b;
    tb_top__DOT__mon__DOT____VlemCall_2__to8 = __Vfunc_tb_top__DOT__mon__DOT__to8__3__c;
    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_event_TOP(vlSelfRef.tb_top__DOT__mon__DOT__handle, VL_TIME_UNITED_D(1000), (IData)(tb_top__DOT__mon__DOT____VlemCall_0__to8), tb_top__DOT__mon__DOT____VlemCall_1__to8, (IData)(tb_top__DOT__mon__DOT____VlemCall_2__to8), vlSelfRef.hsync, (IData)(vlSelfRef.vsync));
}

void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hsync = (1U & (~ ((0x0010U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)) 
                                & (0x0070U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)))));
    if (vlSelfRef.tb_top__DOT__dut__DOT__syncgen_activevideo) {
        if (vlSelfRef.tb_top__DOT__dut__DOT__DR) {
            vlSelfRef.tb_top__DOT__r = 0U;
            vlSelfRef.tb_top__DOT__g = (0x000000ffU 
                                        & (- (IData)((IData)(vlSelfRef.tb_top__DOT__dut__DOT__DR))));
            vlSelfRef.tb_top__DOT__b = 0U;
        } else if (((0x0140U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px)) 
                    & (0x00f0U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px)))) {
            vlSelfRef.tb_top__DOT__r = 0xffU;
            vlSelfRef.tb_top__DOT__g = (0x000000ffU 
                                        & 0U);
            vlSelfRef.tb_top__DOT__b = 0U;
        } else if (((0x0140U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px)) 
                    & (0x00f0U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px)))) {
            vlSelfRef.tb_top__DOT__r = 0U;
            vlSelfRef.tb_top__DOT__g = (0x000000ffU 
                                        & 0xffU);
            vlSelfRef.tb_top__DOT__b = 0U;
        } else {
            if (((0x0140U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px)) 
                 & (0x00f0U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px)))) {
                vlSelfRef.tb_top__DOT__r = 0U;
                vlSelfRef.tb_top__DOT__g = (0x000000ffU 
                                            & 0U);
            } else {
                vlSelfRef.tb_top__DOT__r = 0xffU;
                vlSelfRef.tb_top__DOT__g = (0x000000ffU 
                                            & 0xffU);
            }
            vlSelfRef.tb_top__DOT__b = 0xffU;
        }
    } else {
        vlSelfRef.tb_top__DOT__r = 0U;
        vlSelfRef.tb_top__DOT__g = 0U;
        vlSelfRef.tb_top__DOT__b = 0U;
    }
    vlSelfRef.vsync = (1U & (~ ((0x000aU <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)) 
                                & (0x000cU > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)))));
    vlSelfRef.vga_r = vlSelfRef.tb_top__DOT__r;
    vlSelfRef.vga_g = vlSelfRef.tb_top__DOT__g;
    vlSelfRef.vga_b = vlSelfRef.tb_top__DOT__b;
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__state)))) {
        vlSelfRef.tb_top__DOT__dut__DOT__SOF = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync) 
                                                & (~ (IData)(vlSelfRef.vsync)));
    }
}

void Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vinline__nba_sequent__TOP__1_tb_top__DOT__mon__DOT____VlemCall_2__to8;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__1_tb_top__DOT__mon__DOT____VlemCall_1__to8;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__1_tb_top__DOT__mon__DOT____VlemCall_0__to8;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__1___Vfunc_tb_top__DOT__mon__DOT__to8__1__c;
    __Vinline__nba_sequent__TOP__1___Vfunc_tb_top__DOT__mon__DOT__to8__1__c = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__1___Vfunc_tb_top__DOT__mon__DOT__to8__2__c;
    __Vinline__nba_sequent__TOP__1___Vfunc_tb_top__DOT__mon__DOT__to8__2__c = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__1___Vfunc_tb_top__DOT__mon__DOT__to8__3__c;
    __Vinline__nba_sequent__TOP__1___Vfunc_tb_top__DOT__mon__DOT__to8__3__c = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x000000000000003eULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__1___Vfunc_tb_top__DOT__mon__DOT__to8__1__c 
            = vlSelfRef.tb_top__DOT__r;
        __Vinline__nba_sequent__TOP__1_tb_top__DOT__mon__DOT____VlemCall_0__to8 
            = __Vinline__nba_sequent__TOP__1___Vfunc_tb_top__DOT__mon__DOT__to8__1__c;
        __Vinline__nba_sequent__TOP__1___Vfunc_tb_top__DOT__mon__DOT__to8__2__c 
            = vlSelfRef.tb_top__DOT__g;
        __Vinline__nba_sequent__TOP__1_tb_top__DOT__mon__DOT____VlemCall_1__to8 
            = __Vinline__nba_sequent__TOP__1___Vfunc_tb_top__DOT__mon__DOT__to8__2__c;
        __Vinline__nba_sequent__TOP__1___Vfunc_tb_top__DOT__mon__DOT__to8__3__c 
            = vlSelfRef.tb_top__DOT__b;
        __Vinline__nba_sequent__TOP__1_tb_top__DOT__mon__DOT____VlemCall_2__to8 
            = __Vinline__nba_sequent__TOP__1___Vfunc_tb_top__DOT__mon__DOT__to8__3__c;
        Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_event_TOP(vlSelfRef.tb_top__DOT__mon__DOT__handle, VL_TIME_UNITED_D(1000), __Vinline__nba_sequent__TOP__1_tb_top__DOT__mon__DOT____VlemCall_0__to8, __Vinline__nba_sequent__TOP__1_tb_top__DOT__mon__DOT____VlemCall_1__to8, __Vinline__nba_sequent__TOP__1_tb_top__DOT__mon__DOT____VlemCall_2__to8, (IData)(vlSelfRef.hsync), vlSelfRef.vsync);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.hsync = (1U & (~ ((0x0010U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)) 
                                    & (0x0070U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)))));
        if (vlSelfRef.tb_top__DOT__dut__DOT__syncgen_activevideo) {
            if (vlSelfRef.tb_top__DOT__dut__DOT__DR) {
                vlSelfRef.tb_top__DOT__r = 0U;
                vlSelfRef.tb_top__DOT__g = (0x000000ffU 
                                            & (- (IData)((IData)(vlSelfRef.tb_top__DOT__dut__DOT__DR))));
                vlSelfRef.tb_top__DOT__b = 0U;
            } else if (((0x0140U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px)) 
                        & (0x00f0U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px)))) {
                vlSelfRef.tb_top__DOT__r = 0xffU;
                vlSelfRef.tb_top__DOT__g = (0x000000ffU 
                                            & 0U);
                vlSelfRef.tb_top__DOT__b = 0U;
            } else if (((0x0140U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px)) 
                        & (0x00f0U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px)))) {
                vlSelfRef.tb_top__DOT__r = 0U;
                vlSelfRef.tb_top__DOT__g = (0x000000ffU 
                                            & 0xffU);
                vlSelfRef.tb_top__DOT__b = 0U;
            } else {
                if (((0x0140U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px)) 
                     & (0x00f0U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px)))) {
                    vlSelfRef.tb_top__DOT__r = 0U;
                    vlSelfRef.tb_top__DOT__g = (0x000000ffU 
                                                & 0U);
                } else {
                    vlSelfRef.tb_top__DOT__r = 0xffU;
                    vlSelfRef.tb_top__DOT__g = (0x000000ffU 
                                                & 0xffU);
                }
                vlSelfRef.tb_top__DOT__b = 0xffU;
            }
        } else {
            vlSelfRef.tb_top__DOT__r = 0U;
            vlSelfRef.tb_top__DOT__g = 0U;
            vlSelfRef.tb_top__DOT__b = 0U;
        }
        vlSelfRef.vsync = (1U & (~ ((0x000aU <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)) 
                                    & (0x000cU > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)))));
        vlSelfRef.vga_r = vlSelfRef.tb_top__DOT__r;
        vlSelfRef.vga_g = vlSelfRef.tb_top__DOT__g;
        vlSelfRef.vga_b = vlSelfRef.tb_top__DOT__b;
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__state)))) {
            vlSelfRef.tb_top__DOT__dut__DOT__SOF = 
                ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync) 
                 & (~ (IData)(vlSelfRef.vsync)));
        }
    }
}

void Vtb_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_top___024root___eval_phase__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtb_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_top___024root___eval_phase__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_top___024root___eval_nba(vlSelf);
        Vtb_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_top___024root___eval(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl/tb_top.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl/tb_top.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtb_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_debug_assertions\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_25MHz & 0xfeU)))) {
        Verilated::overWidthError("clk_25MHz");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
}
#endif  // VL_DEBUG
