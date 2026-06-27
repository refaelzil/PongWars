// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPONG_WARS_TOP__SYMS_H_
#define VERILATED_VPONG_WARS_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpong_wars_top.h"

// INCLUDE MODULE CLASSES
#include "Vpong_wars_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vpong_wars_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpong_wars_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpong_wars_top___024root       TOP;

    // CONSTRUCTORS
    Vpong_wars_top__Syms(VerilatedContext* contextp, const char* namep, Vpong_wars_top* modelp);
    ~Vpong_wars_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
