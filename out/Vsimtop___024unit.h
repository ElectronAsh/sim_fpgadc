// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsimtop.h for the primary calling header

#ifndef VERILATED_VSIMTOP___024UNIT_H_
#define VERILATED_VSIMTOP___024UNIT_H_  // guard

#include "verilated.h"

class Vsimtop__Syms;
VL_MODULE(Vsimtop___024unit) {
  public:

    // INTERNAL VARIABLES
    Vsimtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsimtop___024unit(Vsimtop__Syms* symsp, const char* name);
    ~Vsimtop___024unit();
    VL_UNCOPYABLE(Vsimtop___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
