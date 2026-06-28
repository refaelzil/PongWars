// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top___024root.h"

VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_initial__TOP(vlSelf);
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
}

void Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_open_TOP(std::string name, QData/*63:0*/ &vga_monitor_open__Vfuncrtn);

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_tb_top__DOT__mon__DOT__vga_monitor_open__0__Vfuncout;
    __Vfunc_tb_top__DOT__mon__DOT__vga_monitor_open__0__Vfuncout = 0;
    // Body
    vlSelfRef.tb_top__DOT__dut__DOT__sqR = 0U;
    vlSelfRef.tb_top__DOT__dut__DOT__sqB = 0U;
    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_open_TOP(
                                                                                std::string{"VGA Monitor (auto)"}, __Vfunc_tb_top__DOT__mon__DOT__vga_monitor_open__0__Vfuncout);
    vlSelfRef.tb_top__DOT__mon__DOT__handle = __Vfunc_tb_top__DOT__mon__DOT__vga_monitor_open__0__Vfuncout;
}

VL_ATTR_COLD void Vtb_top___024root___eval_final__TOP(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_final(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_final__TOP(vlSelf);
}

void Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_close_TOP(QData/*63:0*/ handle);

VL_ATTR_COLD void Vtb_top___024root___eval_final__TOP(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_close_TOP(vlSelfRef.tb_top__DOT__mon__DOT__handle);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_settle(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_top.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_stl(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__dut__DOT__state_din = vlSelfRef.tb_top__DOT__dut__DOT__state;
    vlSelfRef.tb_top__DOT__hsync = (1U & (~ ((0x18U 
                                              <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)) 
                                             & (0x40U 
                                                > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)))));
    vlSelfRef.tb_top__DOT__vsync = (1U & (~ ((9U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)) 
                                             & (0xcU 
                                                > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)))));
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
    vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync_din 
        = vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync;
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__state)))) {
        vlSelfRef.tb_top__DOT__dut__DOT__state_din = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync_din 
            = vlSelfRef.tb_top__DOT__vsync;
        vlSelfRef.tb_top__DOT__dut__DOT__SOF = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync) 
                                                & (~ (IData)(vlSelfRef.tb_top__DOT__vsync)));
    }
    vlSelfRef.tb_top__DOT__dut__DOT__sqG = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__DR)
                                             ? 0xffU
                                             : 0U);
    if (vlSelfRef.tb_top__DOT__dut__DOT__syncgen_activevideo) {
        if (vlSelfRef.tb_top__DOT__dut__DOT__DR) {
            vlSelfRef.tb_top__DOT__r = vlSelfRef.tb_top__DOT__dut__DOT__sqR;
            vlSelfRef.tb_top__DOT__b = vlSelfRef.tb_top__DOT__dut__DOT__sqB;
            vlSelfRef.tb_top__DOT__g = vlSelfRef.tb_top__DOT__dut__DOT__sqG;
        } else if (((0x140U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px)) 
                    & (0xf0U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px)))) {
            vlSelfRef.tb_top__DOT__r = 0xffU;
            vlSelfRef.tb_top__DOT__b = 0U;
            vlSelfRef.tb_top__DOT__g = 0U;
        } else if (((0x140U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_x_px)) 
                    & (0xf0U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen_y_px)))) {
            vlSelfRef.tb_top__DOT__r = 0U;
            vlSelfRef.tb_top__DOT__b = 0U;
            vlSelfRef.tb_top__DOT__g = 0xffU;
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
        vlSelfRef.tb_top__DOT__b = 0U;
        vlSelfRef.tb_top__DOT__g = 0U;
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

VL_ATTR_COLD void Vtb_top___024root___eval_triggers__stl(Vtb_top___024root* vlSelf);

VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_25MHz)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] tb_top.b)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] tb_top.g)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] tb_top.hsync)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] tb_top.r)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] tb_top.vsync)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__nba(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_25MHz)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] tb_top.b)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] tb_top.g)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] tb_top.hsync)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] tb_top.r)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] tb_top.vsync)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_25MHz = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__hsync = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__vsync = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__r = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__dut__DOT__SOF = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__dut__DOT__prev_vsync = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__dut__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__dut__DOT__DR = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__dut__DOT__sqR = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__dut__DOT__sqG = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__dut__DOT__sqB = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__dut__DOT__prev_vsync_din = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__dut__DOT__state_din = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__dut__DOT__syncgen_activevideo = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__dut__DOT__syncgen_y_px = VL_RAND_RESET_I(10);
    vlSelf->tb_top__DOT__dut__DOT__syncgen_x_px = VL_RAND_RESET_I(10);
    vlSelf->tb_top__DOT__dut__DOT__syncgen__DOT__hc = VL_RAND_RESET_I(10);
    vlSelf->tb_top__DOT__dut__DOT__syncgen__DOT__vc = VL_RAND_RESET_I(10);
    vlSelf->tb_top__DOT__dut__DOT__square__DOT__topLeftX = VL_RAND_RESET_I(10);
    vlSelf->tb_top__DOT__dut__DOT__square__DOT__topLeftY = VL_RAND_RESET_I(10);
    vlSelf->tb_top__DOT__dut__DOT__square__DOT__topLeftX_din = VL_RAND_RESET_I(10);
    vlSelf->tb_top__DOT__dut__DOT__square__DOT__topLeftY_din = VL_RAND_RESET_I(10);
    vlSelf->tb_top__DOT__mon__DOT__handle = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk_25MHz__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__b__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__g__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__hsync__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__r__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__vsync__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
