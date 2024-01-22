// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimtop.h for the primary calling header

#include "verilated.h"

#include "Vsimtop__Syms.h"
#include "Vsimtop__Syms.h"
#include "Vsimtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimtop___024root___dump_triggers__ico(Vsimtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimtop___024root___eval_triggers__ico(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimtop___024root___dump_triggers__act(Vsimtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimtop___024root___eval_triggers__act(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->simtop__DOT____Vcellinp__pvr__reset_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__simtop__DOT____Vcellinp__pvr__reset_n__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__simtop__DOT__pvr__DOT__isp_entry_valid__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__simtop__DOT____Vcellinp__pvr__reset_n__0 
        = vlSelf->simtop__DOT____Vcellinp__pvr__reset_n;
    vlSelf->__Vtrigprevexpr___TOP__simtop__DOT__pvr__DOT__isp_entry_valid__0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
