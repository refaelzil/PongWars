// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top___024root.h"

void Vtb_top___024root___eval_act(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x3eULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc;
    __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc = 0;
    SData/*9:0*/ __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__vc;
    __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__vc = 0;
    // Body
    __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc 
        = vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc;
    __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__vc 
        = vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc;
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync 
            = vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync_din;
    }
    vlSelfRef.tb_top__DOT__dut__DOT__state = ((1U & 
                                               (~ (IData)(vlSelfRef.rst))) 
                                              && (IData)(vlSelfRef.tb_top__DOT__dut__DOT__state_din));
    if (vlSelfRef.rst) {
        vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX = 0xc8U;
        vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY = 0xa0U;
        vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px = 0U;
        __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc = 0U;
        __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__vc = 0U;
    } else {
        vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX 
            = vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX_din;
        vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY 
            = vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY_din;
        if ((0x33fU > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc))) {
            __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)));
        } else {
            __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__vc 
                = ((0x207U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc))
                    ? (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)))
                    : 0U);
            __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc = 0U;
        }
        vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px 
            = (0x3ffU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc) 
                         - (IData)(0xc0U)));
        vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px 
            = (0x3ffU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc) 
                         - (IData)(0x28U)));
    }
    vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc 
        = __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__hc;
    vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc 
        = __Vdly__tb_top__DOT__dut__DOT__syncgen__DOT__vc;
    vlSelfRef.tb_top__DOT__dut__DOT__state_din = vlSelfRef.tb_top__DOT__dut__DOT__state;
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__state)))) {
        vlSelfRef.tb_top__DOT__dut__DOT__state_din = 0U;
    }
    vlSelfRef.tb_top__DOT__dut__DOT__syncgen_activevideo 
        = ((0xc0U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)) 
           & (0x28U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)));
    vlSelfRef.tb_top__DOT__dut__DOT__DR = (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px) 
                                            >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX)) 
                                           & (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px) 
                                               < (0x3ffU 
                                                  & ((IData)(0x20U) 
                                                     + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX)))) 
                                              & (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px) 
                                                  >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY)) 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px) 
                                                    < 
                                                    (0x3ffU 
                                                     & ((IData)(0x20U) 
                                                        + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY)))))));
    vlSelfRef.tb_top__DOT__dut__DOT__sqG = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__DR)
                                             ? 0xffU
                                             : 0U);
}

void Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_event_TOP(QData/*63:0*/ handle, double t, CData/*7:0*/ r, CData/*7:0*/ g, CData/*7:0*/ b, IData/*31:0*/ hsync, IData/*31:0*/ vsync);

VL_INLINE_OPT void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vfunc_tb_top__DOT__mon__DOT__to8__2__Vfuncout;
    __Vfunc_tb_top__DOT__mon__DOT__to8__2__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__mon__DOT__to8__2__c;
    __Vfunc_tb_top__DOT__mon__DOT__to8__2__c = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__mon__DOT__to8__3__Vfuncout;
    __Vfunc_tb_top__DOT__mon__DOT__to8__3__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__mon__DOT__to8__3__c;
    __Vfunc_tb_top__DOT__mon__DOT__to8__3__c = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__mon__DOT__to8__4__Vfuncout;
    __Vfunc_tb_top__DOT__mon__DOT__to8__4__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__mon__DOT__to8__4__c;
    __Vfunc_tb_top__DOT__mon__DOT__to8__4__c = 0;
    // Body
    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_event_TOP(vlSelfRef.tb_top__DOT__mon__DOT__handle, VL_TIME_UNITED_D(1000), 
                                                                                ([&]() {
                __Vfunc_tb_top__DOT__mon__DOT__to8__2__c 
                    = vlSelfRef.tb_top__DOT__r;
                __Vfunc_tb_top__DOT__mon__DOT__to8__2__Vfuncout 
                    = __Vfunc_tb_top__DOT__mon__DOT__to8__2__c;
            }(), (IData)(__Vfunc_tb_top__DOT__mon__DOT__to8__2__Vfuncout)), 
                                                                                ([&]() {
                __Vfunc_tb_top__DOT__mon__DOT__to8__3__c 
                    = vlSelfRef.tb_top__DOT__g;
                __Vfunc_tb_top__DOT__mon__DOT__to8__3__Vfuncout 
                    = __Vfunc_tb_top__DOT__mon__DOT__to8__3__c;
            }(), (IData)(__Vfunc_tb_top__DOT__mon__DOT__to8__3__Vfuncout)), 
                                                                                ([&]() {
                __Vfunc_tb_top__DOT__mon__DOT__to8__4__c 
                    = vlSelfRef.tb_top__DOT__b;
                __Vfunc_tb_top__DOT__mon__DOT__to8__4__Vfuncout 
                    = __Vfunc_tb_top__DOT__mon__DOT__to8__4__c;
            }(), (IData)(__Vfunc_tb_top__DOT__mon__DOT__to8__4__Vfuncout)), (IData)(vlSelfRef.tb_top__DOT__hsync), vlSelfRef.tb_top__DOT__vsync);
}

VL_INLINE_OPT void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__hsync = (1U & (~ ((0x18U 
                                              <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)) 
                                             & (0x40U 
                                                > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)))));
    if (vlSelfRef.tb_top__DOT__dut__DOT__syncgen_activevideo) {
        if (vlSelfRef.tb_top__DOT__dut__DOT__DR) {
            vlSelfRef.tb_top__DOT__r = vlSelfRef.tb_top__DOT__dut__DOT__sqR;
            vlSelfRef.tb_top__DOT__g = vlSelfRef.tb_top__DOT__dut__DOT__sqG;
            vlSelfRef.tb_top__DOT__b = vlSelfRef.tb_top__DOT__dut__DOT__sqB;
        } else if (((0x140U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px)) 
                    & (0xf0U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px)))) {
            vlSelfRef.tb_top__DOT__r = 0xffU;
            vlSelfRef.tb_top__DOT__g = 0U;
            vlSelfRef.tb_top__DOT__b = 0U;
        } else if (((0x140U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px)) 
                    & (0xf0U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px)))) {
            vlSelfRef.tb_top__DOT__r = 0U;
            vlSelfRef.tb_top__DOT__g = 0xffU;
            vlSelfRef.tb_top__DOT__b = 0U;
        } else {
            if (((0x140U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px)) 
                 & (0xf0U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px)))) {
                vlSelfRef.tb_top__DOT__r = 0U;
                vlSelfRef.tb_top__DOT__g = 0U;
            } else {
                vlSelfRef.tb_top__DOT__r = 0xffU;
                vlSelfRef.tb_top__DOT__g = 0xffU;
            }
            vlSelfRef.tb_top__DOT__b = 0xffU;
        }
    } else {
        vlSelfRef.tb_top__DOT__r = 0U;
        vlSelfRef.tb_top__DOT__g = 0U;
        vlSelfRef.tb_top__DOT__b = 0U;
    }
    vlSelfRef.tb_top__DOT__vsync = (1U & (~ ((9U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)) 
                                             & (0xcU 
                                                > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)))));
    vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync_din 
        = vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync;
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__state)))) {
        vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync_din 
            = vlSelfRef.tb_top__DOT__vsync;
        vlSelfRef.tb_top__DOT__dut__DOT__SOF = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync) 
                                                & (~ (IData)(vlSelfRef.tb_top__DOT__vsync)));
    }
    vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX_din 
        = vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX;
    vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY_din 
        = vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY;
    if (vlSelfRef.tb_top__DOT__dut__DOT__SOF) {
        vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX_din 
            = (0x3ffU & VL_MODDIV_III(10, (0x3ffU & 
                                           ((IData)(0x1eU) 
                                            + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftX))), (IData)(0x280U)));
        vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY_din 
            = (0x3ffU & VL_MODDIV_III(10, (0x3ffU & 
                                           ((IData)(0x1eU) 
                                            + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__square__DOT__topLeftY))), (IData)(0x1e0U)));
    }
}

void Vtb_top___024root___eval_triggers__act(Vtb_top___024root* vlSelf);

bool Vtb_top___024root___eval_phase__act(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_top___024root___eval_phase__nba(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__nba(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top___024root___eval(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_top.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk_25MHz & 0xfeU))) {
        Verilated::overWidthError("clk_25MHz");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
