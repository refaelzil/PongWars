// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpong_wars_top.h for the primary calling header

#include "Vpong_wars_top__pch.h"
#include "Vpong_wars_top__Syms.h"
#include "Vpong_wars_top___024root.h"

void Vpong_wars_top___024root___ctor_var_reset(Vpong_wars_top___024root* vlSelf);

Vpong_wars_top___024root::Vpong_wars_top___024root(Vpong_wars_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpong_wars_top___024root___ctor_var_reset(this);
}

void Vpong_wars_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpong_wars_top___024root::~Vpong_wars_top___024root() {
}
