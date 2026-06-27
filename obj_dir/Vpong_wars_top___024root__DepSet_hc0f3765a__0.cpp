// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpong_wars_top.h for the primary calling header

#include "Vpong_wars_top__pch.h"
#include "Vpong_wars_top___024root.h"

void Vpong_wars_top___024root___eval_act(Vpong_wars_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpong_wars_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_wars_top___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vpong_wars_top___024root___nba_sequent__TOP__0(Vpong_wars_top___024root* vlSelf);

void Vpong_wars_top___024root___eval_nba(Vpong_wars_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpong_wars_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_wars_top___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpong_wars_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vpong_wars_top___024root___nba_sequent__TOP__0(Vpong_wars_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpong_wars_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_wars_top___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vdly__pong_wars_top__DOT__syncgen__DOT__hc;
    __Vdly__pong_wars_top__DOT__syncgen__DOT__hc = 0;
    SData/*9:0*/ __Vdly__pong_wars_top__DOT__syncgen__DOT__vc;
    __Vdly__pong_wars_top__DOT__syncgen__DOT__vc = 0;
    // Body
    __Vdly__pong_wars_top__DOT__syncgen__DOT__hc = vlSelfRef.pong_wars_top__DOT__syncgen__DOT__hc;
    __Vdly__pong_wars_top__DOT__syncgen__DOT__vc = vlSelfRef.pong_wars_top__DOT__syncgen__DOT__vc;
    if (vlSelfRef.rst) {
        vlSelfRef.pong_wars_top__DOT__syncgen_x_px = 0U;
        vlSelfRef.pong_wars_top__DOT__syncgen_y_px = 0U;
        __Vdly__pong_wars_top__DOT__syncgen__DOT__hc = 0U;
        __Vdly__pong_wars_top__DOT__syncgen__DOT__vc = 0U;
    } else {
        if ((0x33fU > (IData)(vlSelfRef.pong_wars_top__DOT__syncgen__DOT__hc))) {
            __Vdly__pong_wars_top__DOT__syncgen__DOT__hc 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.pong_wars_top__DOT__syncgen__DOT__hc)));
        } else {
            __Vdly__pong_wars_top__DOT__syncgen__DOT__vc 
                = ((0x207U > (IData)(vlSelfRef.pong_wars_top__DOT__syncgen__DOT__vc))
                    ? (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.pong_wars_top__DOT__syncgen__DOT__vc)))
                    : 0U);
            __Vdly__pong_wars_top__DOT__syncgen__DOT__hc = 0U;
        }
        vlSelfRef.pong_wars_top__DOT__syncgen_x_px 
            = (0x3ffU & ((IData)(vlSelfRef.pong_wars_top__DOT__syncgen__DOT__hc) 
                         - (IData)(0xc0U)));
        vlSelfRef.pong_wars_top__DOT__syncgen_y_px 
            = (0x3ffU & ((IData)(vlSelfRef.pong_wars_top__DOT__syncgen__DOT__vc) 
                         - (IData)(0x28U)));
    }
    vlSelfRef.pong_wars_top__DOT__syncgen__DOT__hc 
        = __Vdly__pong_wars_top__DOT__syncgen__DOT__hc;
    vlSelfRef.pong_wars_top__DOT__syncgen__DOT__vc 
        = __Vdly__pong_wars_top__DOT__syncgen__DOT__vc;
    vlSelfRef.hsync = (1U & (~ ((0x18U <= (IData)(vlSelfRef.pong_wars_top__DOT__syncgen__DOT__hc)) 
                                & (0x40U > (IData)(vlSelfRef.pong_wars_top__DOT__syncgen__DOT__hc)))));
    vlSelfRef.vsync = (1U & (~ ((9U <= (IData)(vlSelfRef.pong_wars_top__DOT__syncgen__DOT__vc)) 
                                & (0xcU > (IData)(vlSelfRef.pong_wars_top__DOT__syncgen__DOT__vc)))));
    vlSelfRef.rrggbb = (((0xc0U <= (IData)(vlSelfRef.pong_wars_top__DOT__syncgen__DOT__hc)) 
                         & (0x28U <= (IData)(vlSelfRef.pong_wars_top__DOT__syncgen__DOT__vc)))
                         ? (((0x140U > (IData)(vlSelfRef.pong_wars_top__DOT__syncgen_x_px)) 
                             & (0xf0U > (IData)(vlSelfRef.pong_wars_top__DOT__syncgen_y_px)))
                             ? 0x30U : (((0x140U <= (IData)(vlSelfRef.pong_wars_top__DOT__syncgen_x_px)) 
                                         & (0xf0U > (IData)(vlSelfRef.pong_wars_top__DOT__syncgen_y_px)))
                                         ? 0xcU : (
                                                   ((0x140U 
                                                     > (IData)(vlSelfRef.pong_wars_top__DOT__syncgen_x_px)) 
                                                    & (0xf0U 
                                                       <= (IData)(vlSelfRef.pong_wars_top__DOT__syncgen_y_px)))
                                                    ? 3U
                                                    : 0x3fU)))
                         : 0U);
}

void Vpong_wars_top___024root___eval_triggers__act(Vpong_wars_top___024root* vlSelf);

bool Vpong_wars_top___024root___eval_phase__act(Vpong_wars_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpong_wars_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_wars_top___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpong_wars_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpong_wars_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpong_wars_top___024root___eval_phase__nba(Vpong_wars_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpong_wars_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_wars_top___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpong_wars_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpong_wars_top___024root___dump_triggers__nba(Vpong_wars_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpong_wars_top___024root___dump_triggers__act(Vpong_wars_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vpong_wars_top___024root___eval(Vpong_wars_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpong_wars_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_wars_top___024root___eval\n"); );
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
            Vpong_wars_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/pong_wars_top.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vpong_wars_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/pong_wars_top.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpong_wars_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpong_wars_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpong_wars_top___024root___eval_debug_assertions(Vpong_wars_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpong_wars_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_wars_top___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
