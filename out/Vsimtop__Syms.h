// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIMTOP__SYMS_H_
#define VERILATED_VSIMTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsimtop.h"

// INCLUDE MODULE CLASSES
#include "Vsimtop___024root.h"
#include "Vsimtop___024unit.h"

// SYMS CLASS (contains all model state)
class Vsimtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsimtop* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsimtop___024root              TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_simtop__core;

    // CONSTRUCTORS
    Vsimtop__Syms(VerilatedContext* contextp, const char* namep, Vsimtop* modelp);
    ~Vsimtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
