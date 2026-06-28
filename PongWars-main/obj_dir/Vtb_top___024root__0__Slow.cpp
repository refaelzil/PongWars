// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_25MHz__0 = vlSelfRef.clk_25MHz;
    vlSelfRef.__Vtrigprevexpr___TOP__hsync__0 = vlSelfRef.hsync;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__b__0 
        = vlSelfRef.tb_top__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__g__0 
        = vlSelfRef.tb_top__DOT__g;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__r__0 
        = vlSelfRef.tb_top__DOT__r;
    vlSelfRef.__Vtrigprevexpr___TOP__vsync__0 = vlSelfRef.vsync;
}

void Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_open_TOP(const std::string &name, QData/*63:0*/ &vga_monitor_open__Vfuncrtn);

VL_ATTR_COLD void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vinline__eval_initial__TOP___Vfunc_tb_top__DOT__mon__DOT__vga_monitor_open__0__Vfuncout;
    __Vinline__eval_initial__TOP___Vfunc_tb_top__DOT__mon__DOT__vga_monitor_open__0__Vfuncout = 0;
    // Body
    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_open_TOP("VGA Monitor (auto)"s, __Vinline__eval_initial__TOP___Vfunc_tb_top__DOT__mon__DOT__vga_monitor_open__0__Vfuncout);
    vlSelfRef.tb_top__DOT__mon__DOT__handle = __Vinline__eval_initial__TOP___Vfunc_tb_top__DOT__mon__DOT__vga_monitor_open__0__Vfuncout;
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vfunc_tb_top__DOT__mon__DOT__vga_monitor_open__0__Vfuncout;
    __Vfunc_tb_top__DOT__mon__DOT__vga_monitor_open__0__Vfuncout = 0;
    // Body
    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_open_TOP("VGA Monitor (auto)"s, __Vfunc_tb_top__DOT__mon__DOT__vga_monitor_open__0__Vfuncout);
    vlSelfRef.tb_top__DOT__mon__DOT__handle = __Vfunc_tb_top__DOT__mon__DOT__vga_monitor_open__0__Vfuncout;
}

void Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_close_TOP(QData/*63:0*/ handle);

VL_ATTR_COLD void Vtb_top___024root___eval_final(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_close_TOP(vlSelfRef.tb_top__DOT__mon__DOT__handle);
}

VL_ATTR_COLD void Vtb_top___024root___eval_final__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root____Vdpiimwrap_tb_top__DOT__mon__DOT__vga_monitor_close_TOP(vlSelfRef.tb_top__DOT__mon__DOT__handle);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_settle(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_settle\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/tb_top.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_top___024root___eval_triggers_vec__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers_vec__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__dut__DOT__state) {
        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: pong_wars_top.sv:67: Assertion failed in %m: unique case, but none matched for '1'h%X'\n",4, 'M',vlSymsp->name(),"tb_top.dut", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(vlSelfRef.tb_top__DOT__dut__DOT__state));
            VL_STOP_MT("rtl/pong_wars_top.sv", 67, "");
        }
    }
    vlSelfRef.hsync = (1U & (~ ((0x0010U <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)) 
                                & (0x0070U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__hc)))));
    vlSelfRef.vsync = (1U & (~ ((0x000aU <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)) 
                                & (0x000cU > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__syncgen__DOT__vc)))));
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
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__state)))) {
        vlSelfRef.tb_top__DOT__dut__DOT__SOF = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__prev_vsync) 
                                                & (~ (IData)(vlSelfRef.vsync)));
    }
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
    vlSelfRef.vga_r = vlSelfRef.tb_top__DOT__r;
    vlSelfRef.vga_g = vlSelfRef.tb_top__DOT__g;
    vlSelfRef.vga_b = vlSelfRef.tb_top__DOT__b;
}

VL_ATTR_COLD void Vtb_top___024root___eval_stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_top___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk_25MHz)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( hsync)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( tb_top.b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( tb_top.g)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( tb_top.r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( vsync)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk_25MHz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17259749768789346835ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999247747110030874ull);
    vlSelf->vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18337175696363507471ull);
    vlSelf->vga_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2055607138462276192ull);
    vlSelf->vga_g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5773750216550251743ull);
    vlSelf->vga_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17771436561197612375ull);
    vlSelf->tb_top__DOT__r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15570896406667180507ull);
    vlSelf->tb_top__DOT__g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11585222710090796940ull);
    vlSelf->tb_top__DOT__b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4502036361038579110ull);
    vlSelf->tb_top__DOT__dut__DOT__SOF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4750714782085749898ull);
    vlSelf->tb_top__DOT__dut__DOT__prev_vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11948113193230465853ull);
    vlSelf->tb_top__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2272428235606090364ull);
    vlSelf->tb_top__DOT__dut__DOT__DR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15076456102581464421ull);
    vlSelf->tb_top__DOT__dut__DOT__syncgen_activevideo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9884309677859560713ull);
    vlSelf->tb_top__DOT__dut__DOT__syncgen_y_px = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8341805904089192774ull);
    vlSelf->tb_top__DOT__dut__DOT__syncgen_x_px = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13616249983956920140ull);
    vlSelf->tb_top__DOT__dut__DOT__syncgen__DOT__hc = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1568352821202193943ull);
    vlSelf->tb_top__DOT__dut__DOT__syncgen__DOT__vc = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9923468626005645073ull);
    vlSelf->tb_top__DOT__dut__DOT__square__DOT__topLeftX = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14753507866659931820ull);
    vlSelf->tb_top__DOT__dut__DOT__square__DOT__topLeftY = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6450331538310750537ull);
    vlSelf->tb_top__DOT__mon__DOT__handle = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk_25MHz__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__hsync__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__g__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__vsync__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
