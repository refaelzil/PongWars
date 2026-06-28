// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_top__pch.h"

Vtb_top__Syms::Vtb_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(366);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_tb_top__dut = new VerilatedScope{this, "tb_top.dut", "dut", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
}

Vtb_top__Syms::~Vtb_top__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_tb_top__dut, __Vscopep_tb_top__dut = nullptr);
    // Tear down sub module instances
}
