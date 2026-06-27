// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpong_wars_top.h for the primary calling header

#include "Vpong_wars_top__pch.h"
#include "Vpong_wars_top__Syms.h"
#include "Vpong_wars_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpong_wars_top___024root___dump_triggers__act(Vpong_wars_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vpong_wars_top___024root___eval_triggers__act(Vpong_wars_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpong_wars_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpong_wars_top___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpong_wars_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
