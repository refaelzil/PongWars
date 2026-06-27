// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpong_wars_top__pch.h"

//============================================================
// Constructors

Vpong_wars_top::Vpong_wars_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpong_wars_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , hsync{vlSymsp->TOP.hsync}
    , vsync{vlSymsp->TOP.vsync}
    , rrggbb{vlSymsp->TOP.rrggbb}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpong_wars_top::Vpong_wars_top(const char* _vcname__)
    : Vpong_wars_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpong_wars_top::~Vpong_wars_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpong_wars_top___024root___eval_debug_assertions(Vpong_wars_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vpong_wars_top___024root___eval_static(Vpong_wars_top___024root* vlSelf);
void Vpong_wars_top___024root___eval_initial(Vpong_wars_top___024root* vlSelf);
void Vpong_wars_top___024root___eval_settle(Vpong_wars_top___024root* vlSelf);
void Vpong_wars_top___024root___eval(Vpong_wars_top___024root* vlSelf);

void Vpong_wars_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpong_wars_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpong_wars_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpong_wars_top___024root___eval_static(&(vlSymsp->TOP));
        Vpong_wars_top___024root___eval_initial(&(vlSymsp->TOP));
        Vpong_wars_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpong_wars_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpong_wars_top::eventsPending() { return false; }

uint64_t Vpong_wars_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpong_wars_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpong_wars_top___024root___eval_final(Vpong_wars_top___024root* vlSelf);

VL_ATTR_COLD void Vpong_wars_top::final() {
    Vpong_wars_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpong_wars_top::hierName() const { return vlSymsp->name(); }
const char* Vpong_wars_top::modelName() const { return "Vpong_wars_top"; }
unsigned Vpong_wars_top::threads() const { return 1; }
void Vpong_wars_top::prepareClone() const { contextp()->prepareClone(); }
void Vpong_wars_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
