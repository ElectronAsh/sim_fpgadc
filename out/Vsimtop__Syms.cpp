// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsimtop__Syms.h"
#include "Vsimtop.h"
#include "Vsimtop___024root.h"

// FUNCTIONS
Vsimtop__Syms::~Vsimtop__Syms()
{
}

Vsimtop__Syms::Vsimtop__Syms(VerilatedContext* contextp, const char* namep, Vsimtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_simtop__core.configure(this, name(), "simtop.core", "core", -9, VerilatedScope::SCOPE_OTHER);
}
