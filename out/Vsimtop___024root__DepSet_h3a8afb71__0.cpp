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
                                     | ((~ (IData)(vlSelf->im_req_valid)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__im_req_valid__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__im_req_valid__0 
        = vlSelf->im_req_valid;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 256> Vsimtop__ConstPool__TABLE_hba7c879b_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsimtop__ConstPool__TABLE_hff42c4ae_0;

VL_INLINE_OPT void Vsimtop___024root___nba_sequent__TOP__1(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ simtop__DOT__core__DOT__exu__DOT____VdfgTmp_hcbe31d0b__0;
    simtop__DOT__core__DOT__exu__DOT____VdfgTmp_hcbe31d0b__0 = 0;
    CData/*0:0*/ simtop__DOT__core__DOT__lsu__DOT____VdfgExtracted_h3810217f__0;
    simtop__DOT__core__DOT__lsu__DOT____VdfgExtracted_h3810217f__0 = 0;
    CData/*0:0*/ simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0;
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 = 0;
    CData/*0:0*/ simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0;
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v0;
    __Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v0 = 0;
    IData/*31:0*/ __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v0;
    __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v0;
    __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v1;
    __Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v1 = 0;
    IData/*31:0*/ __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v1;
    __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v1 = 0;
    CData/*0:0*/ __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v1;
    __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v1 = 0;
    CData/*0:0*/ __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v2;
    __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v2 = 0;
    CData/*3:0*/ __Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v0;
    __Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v0 = 0;
    IData/*31:0*/ __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v0;
    __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v0;
    __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v1;
    __Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v1 = 0;
    IData/*31:0*/ __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v1;
    __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v1 = 0;
    CData/*0:0*/ __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v1;
    __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v1 = 0;
    CData/*0:0*/ __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v2;
    __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v2 = 0;
    CData/*3:0*/ __Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v0;
    __Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v0 = 0;
    IData/*31:0*/ __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v0;
    __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v0;
    __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v1;
    __Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v1 = 0;
    IData/*31:0*/ __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v1;
    __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v1 = 0;
    CData/*0:0*/ __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v1;
    __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v0;
    __Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v0 = 0;
    IData/*31:0*/ __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v0;
    __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v0;
    __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v1;
    __Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v1 = 0;
    IData/*31:0*/ __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v1;
    __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v1 = 0;
    CData/*0:0*/ __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v1;
    __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v1 = 0;
    SData/*11:0*/ __Vdlyvdim0__simtop__DOT__pvr__DOT__pal_ram__v0;
    __Vdlyvdim0__simtop__DOT__pvr__DOT__pal_ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__simtop__DOT__pvr__DOT__pal_ram__v0;
    __Vdlyvval__simtop__DOT__pvr__DOT__pal_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simtop__DOT__pvr__DOT__pal_ram__v0;
    __Vdlyvset__simtop__DOT__pvr__DOT__pal_ram__v0 = 0;
    // Body
    __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v0 = 0U;
    __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v1 = 0U;
    __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v0 = 0U;
    __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v1 = 0U;
    __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v0 = 0U;
    __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v1 = 0U;
    __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v2 = 0U;
    __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v0 = 0U;
    __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v1 = 0U;
    __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v2 = 0U;
    __Vdlyvset__simtop__DOT__pvr__DOT__pal_ram__v0 = 0U;
    if (vlSelf->simtop__DOT__core__DOT__fprf_wen0) {
        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__fprf_wbank0)))) {
            __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v0 
                = vlSelf->simtop__DOT__core__DOT__fprf_wdata0;
            __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v0 = 1U;
            __Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v0 
                = vlSelf->simtop__DOT__core__DOT__fprf_wdst0;
        }
        if (vlSelf->simtop__DOT__core__DOT__fprf_wbank0) {
            __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v0 
                = vlSelf->simtop__DOT__core__DOT__fprf_wdata0;
            __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v0 = 1U;
            __Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v0 
                = vlSelf->simtop__DOT__core__DOT__fprf_wdst0;
        }
        vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
            = ((~ ((IData)(1U) << (((IData)(vlSelf->simtop__DOT__core__DOT__fprf_wbank0) 
                                    << 4U) | (IData)(vlSelf->simtop__DOT__core__DOT__fprf_wdst0)))) 
               & vlSelf->simtop__DOT__core__DOT__fp_scoreboard);
    }
    if (vlSelf->simtop__DOT__core__DOT__fprf_wen1) {
        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr)))) {
            __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v1 
                = vlSelf->simtop__DOT__core__DOT__fprf_wdata1;
            __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v1 = 1U;
            __Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v1 
                = vlSelf->simtop__DOT__core__DOT__fprf_wdst1;
        }
        if (vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) {
            __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v1 
                = vlSelf->simtop__DOT__core__DOT__fprf_wdata1;
            __Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v1 = 1U;
            __Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v1 
                = vlSelf->simtop__DOT__core__DOT__fprf_wdst1;
        }
        vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
            = ((~ ((IData)(1U) << (((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
                                    << 4U) | (IData)(vlSelf->simtop__DOT__core__DOT__fprf_wdst1)))) 
               & vlSelf->simtop__DOT__core__DOT__fp_scoreboard);
    }
    if (vlSelf->trace_wen0) {
        if ((1U & (~ ((~ ((IData)(vlSelf->trace_wdst0) 
                          >> 3U)) & (IData)(vlSelf->simtop__DOT__core__DOT__rf_wbank_p0))))) {
            __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v0 
                = vlSelf->trace_wdata0;
            __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v0 = 1U;
            __Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v0 
                = vlSelf->trace_wdst0;
        }
        if (((~ ((IData)(vlSelf->trace_wdst0) >> 3U)) 
             & (IData)(vlSelf->simtop__DOT__core__DOT__rf_wbank_p0))) {
            __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v0 
                = vlSelf->trace_wdata0;
            __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v0 = 1U;
            __Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v0 
                = (7U & (IData)(vlSelf->trace_wdst0));
        }
    }
    if (vlSelf->trace_wen1) {
        if ((1U & (~ ((~ ((IData)(vlSelf->trace_wdst1) 
                          >> 3U)) & (IData)(vlSelf->simtop__DOT__core__DOT__rf_wbank_p1))))) {
            __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v1 
                = vlSelf->trace_wdata1;
            __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v1 = 1U;
            __Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v1 
                = vlSelf->trace_wdst1;
        }
        if (((~ ((IData)(vlSelf->trace_wdst1) >> 3U)) 
             & (IData)(vlSelf->simtop__DOT__core__DOT__rf_wbank_p1))) {
            __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v1 
                = vlSelf->trace_wdata1;
            __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v1 = 1U;
            __Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v1 
                = (7U & (IData)(vlSelf->trace_wdst1));
        }
    }
    if (((IData)(vlSelf->simtop__DOT__pvr_wr) & (vlSelf->dm_req_addr 
                                                 >> 0xcU))) {
        __Vdlyvval__simtop__DOT__pvr__DOT__pal_ram__v0 
            = (IData)(vlSelf->dm_req_wdata);
        __Vdlyvset__simtop__DOT__pvr__DOT__pal_ram__v0 = 1U;
        __Vdlyvdim0__simtop__DOT__pvr__DOT__pal_ram__v0 
            = (0xfffU & vlSelf->dm_req_addr);
    }
    if (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_valid) {
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_i_tag 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_tag;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_inf 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_inf;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_inf 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_inf;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_nan 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_nan;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_zero 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_zero;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_zero 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_zero;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_nan 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_nan;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_sign 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_sign;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_sign 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_sign;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_frac 
            = ((0x1fffffeU & ((IData)((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_frac 
                                       >> 0x17U)) << 1U)) 
               | (0U != (0x7fffffU & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_frac))));
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_frac 
            = (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_frac 
               << 2U);
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_exp 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_exp;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_exp 
            = ((0x200U & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_exp) 
                          << 1U)) | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_exp));
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_waltbank 
        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__waltbank;
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr 
        = vlSelf->simtop__DOT__core__DOT__fprf_rdata0;
    if (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_valid) {
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_tag 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_tag;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_sign 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_sign;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_frac 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_frac;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_inf 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_inf;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_zero 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_zero;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_nan 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_nan;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_exp 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_exp;
    }
    vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_sel 
        = vlSelf->simtop__DOT__core__DOT__id_fpu_sel;
    if (vlSelf->simtop__DOT__core__DOT__id_bru_sel) {
        vlSelf->simtop__DOT__core__DOT__e1_reg_bru_oph 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_oph;
        vlSelf->simtop__DOT__core__DOT__e1_reg_bru_opl 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_opl;
        vlSelf->simtop__DOT__core__DOT__e1_reg_bru_valid 
            = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_br) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issue));
        vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_raw;
    } else {
        vlSelf->simtop__DOT__core__DOT__e1_reg_bru_oph 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_oph;
        vlSelf->simtop__DOT__core__DOT__e1_reg_bru_opl 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_opl;
        vlSelf->simtop__DOT__core__DOT__e1_reg_bru_valid 
            = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_br) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__instr0_issue));
        vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_raw;
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_i_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_valid;
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_write_t 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_write_t;
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_pc 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_pc;
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_pc 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_pc;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_valid;
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_oph;
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_oph;
    vlSelf->simtop__DOT__core__DOT__if_reg_pc = vlSelf->im_req_addr;
    vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wpending 
        = vlSelf->simtop__DOT__core__DOT__e1_p1_wpending;
    vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wpending 
        = vlSelf->simtop__DOT__core__DOT__e1_p0_wpending;
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_opl;
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_opl;
    vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wdata 
        = vlSelf->simtop__DOT__core__DOT__e1_p0_wdata;
    vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wdata 
        = vlSelf->simtop__DOT__core__DOT__e1_p1_wdata;
    if (((IData)(vlSelf->simtop__DOT__core__DOT__fpu_out_fpul_wen) 
         | (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_fpul_wen))) {
        vlSelf->simtop__DOT__core__DOT__fpul_busy = 0U;
    }
    if ((((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__instr0_issue)) 
         | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_write_fpul) 
            & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issued)))) {
        vlSelf->simtop__DOT__core__DOT__fpul_busy = 1U;
    }
    vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fr0 
        = vlSelf->simtop__DOT__core__DOT__fprf_r0data;
    if (vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wen) {
        vlSelf->simtop__DOT__core__DOT__csr_busy = 0U;
    }
    if ((((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__instr0_issue)) 
         | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr) 
            & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issued)))) {
        vlSelf->simtop__DOT__core__DOT__csr_busy = 1U;
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_amo_write_t 
        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_write_t;
    if (vlSelf->simtop__DOT__core__DOT__id_fpu_sel) {
        vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop 
            = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op;
        vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid 
            = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_fp) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issue));
        vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_raw 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_raw;
    } else {
        vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop 
            = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op;
        vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid 
            = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__instr0_issue));
        vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_raw 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_raw;
    }
    vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wen = vlSelf->simtop__DOT__core__DOT__e1_p1_wen;
    vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wen = vlSelf->simtop__DOT__core__DOT__e1_p0_wen;
    vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wdst 
        = vlSelf->simtop__DOT__core__DOT__e1_p0_wdst;
    vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wdst 
        = vlSelf->simtop__DOT__core__DOT__e1_p1_wdst;
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_valid;
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_valid 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_valid) 
           & (~ (IData)(vlSelf->simtop__DOT__core__DOT__replay_dcache_miss)));
    if (vlSelf->simtop__DOT__core__DOT__fpu_out_t_wen) {
        vlSelf->simtop__DOT__core__DOT__t_busy = 0U;
    }
    if (((((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_t) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp)) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__instr0_issue)) 
         | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_write_t) 
             & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_fp)) 
            & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issued)))) {
        vlSelf->simtop__DOT__core__DOT__t_busy = 1U;
    }
    vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frl 
        = vlSelf->simtop__DOT__core__DOT__fprf_rdata1;
    vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frh 
        = vlSelf->simtop__DOT__core__DOT__fprf_rdata2;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_wdst 
        = vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_wen 
        = vlSelf->dm_req_wen;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_write_csr 
        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_fpul_wen 
        = vlSelf->simtop__DOT__core__DOT__e1_lsu_fpul_wen;
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_raw;
    if (vlSelf->simtop__DOT__core__DOT__fpsb_set_en_p0) {
        vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
            = (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
               | (0xffffffffULL & ((IData)(1U) << (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p0))));
    }
    if (vlSelf->simtop__DOT__core__DOT__fpsb_set_en_p1) {
        vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
            = (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
               | (0xffffffffULL & ((IData)(1U) << (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p1))));
    }
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_raw;
    vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen 
        = vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_use_passthrough 
        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough;
    vlSelf->simtop__DOT__core__DOT__e1_reg_exu_sel 
        = vlSelf->simtop__DOT__core__DOT__id_exu_sel;
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_valid 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issue));
    vlSelf->simtop__DOT__core__DOT__id_reg_pc = vlSelf->im_req_addr;
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_raw;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_wfp 
        = vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp;
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_raw;
    if (vlSelf->simtop__DOT__core__DOT__id_exu_sel) {
        vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_oph;
        vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_opl;
        vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid 
            = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_ex) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issue));
        vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_raw;
    } else {
        vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_oph;
        vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_opl;
        vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid 
            = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_ex) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__instr0_issue));
        vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_raw;
    }
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_valid;
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_valid 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_valid) 
           & (~ (IData)(vlSelf->simtop__DOT__core__DOT__replay_dcache_miss)));
    vlSelf->simtop__DOT__core__DOT__id_reg_valid = vlSelf->im_req_valid;
    vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_byte_offset 
        = (7U & vlSelf->dm_req_addr);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_rwsize 
        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize;
    if (((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_amo))) {
        if (vlSelf->dm_resp_valid) {
            if (vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_state) {
                vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_state = 0U;
            } else {
                vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_oldval 
                    = ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_b) 
                       & vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_passthrough);
                vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_state = 1U;
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_r0 = 
        vlSelf->simtop__DOT__core__DOT__id_instr_rs
        [4U];
    vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_csr_id 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id;
    vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid;
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_flags 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_flags;
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_flags 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_flags;
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_flags 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_flags;
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_flags 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_write_t)
            ? ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_valid)
                ? ((0xeU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_flags)) 
                   | (IData)(vlSelf->simtop__DOT__core__DOT__e1_mtu0_t))
                : (IData)(vlSelf->simtop__DOT__core__DOT__e1_exu_flags))
            : (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_flags));
    if (vlSelf->simtop__DOT__core__DOT__id_lsu_sel) {
        vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_opl;
        vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_oph;
        vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_raw;
    } else {
        vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_opl;
        vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_oph;
        vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_raw;
    }
    if (vlSelf->simtop__DOT__rst_reg) {
        __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v2 = 1U;
        __Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v2 = 1U;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_i_valid = 0U;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_valid = 0U;
        vlSelf->simtop__DOT__core__DOT__if_reg_pc = 
            (vlSelf->boot_vector - (IData)(4U));
        vlSelf->simtop__DOT__core__DOT__fpul_busy = 0U;
        vlSelf->simtop__DOT__core__DOT__csr_busy = 0U;
        vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wen = 0U;
        vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wen = 0U;
        vlSelf->simtop__DOT__core__DOT__t_busy = 0U;
        vlSelf->simtop__DOT__core__DOT__fp_scoreboard = 0U;
        vlSelf->simtop__DOT__core__DOT__id_reg_valid = 0U;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_state = 0U;
    }
    if (vlSelf->simtop__DOT__core__DOT__e2_csr_wen) {
        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst))) {
            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst))) {
                if (VL_UNLIKELY((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst)))) {
                    VL_WRITEF("[%0t] %%Error: core.v:1193: Assertion failed in %Nsimtop.core: Writing to non-exist CSR %2#\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),4,
                              (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst));
                    VL_STOP_MT("genrtl/cpu/core.v", 1193, "");
                } else if (VL_UNLIKELY((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst)))) {
                    VL_WRITEF("[%0t] %%Error: core.v:1193: Assertion failed in %Nsimtop.core: Writing to non-exist CSR %2#\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),4,
                              (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst));
                    VL_STOP_MT("genrtl/cpu/core.v", 1193, "");
                } else {
                    vlSelf->simtop__DOT__core__DOT__csr_fpul 
                        = vlSelf->simtop__DOT__core__DOT__e2_csr_wdata;
                }
            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst))) {
                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst))) {
                    vlSelf->simtop__DOT__core__DOT__csr_fpscr 
                        = vlSelf->simtop__DOT__core__DOT__e2_csr_wdata;
                } else {
                    vlSelf->simtop__DOT__core__DOT__csr_pr 
                        = vlSelf->simtop__DOT__core__DOT__e2_csr_wdata;
                }
            } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst))) {
                vlSelf->simtop__DOT__core__DOT__csr_macl 
                    = vlSelf->simtop__DOT__core__DOT__e2_csr_wdata;
            } else {
                vlSelf->simtop__DOT__core__DOT__csr_mach 
                    = vlSelf->simtop__DOT__core__DOT__e2_csr_wdata;
            }
        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst))) {
            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst))) {
                if (VL_UNLIKELY((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst)))) {
                    VL_WRITEF("[%0t] %%Error: core.v:1193: Assertion failed in %Nsimtop.core: Writing to non-exist CSR %2#\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),4,
                              (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst));
                    VL_STOP_MT("genrtl/cpu/core.v", 1193, "");
                } else {
                    vlSelf->simtop__DOT__core__DOT__csr_sgr 
                        = vlSelf->simtop__DOT__core__DOT__e2_csr_wdata;
                }
            } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst))) {
                vlSelf->simtop__DOT__core__DOT__csr_dbr 
                    = vlSelf->simtop__DOT__core__DOT__e2_csr_wdata;
            } else {
                vlSelf->simtop__DOT__core__DOT__csr_spc 
                    = vlSelf->simtop__DOT__core__DOT__e2_csr_wdata;
            }
        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst))) {
            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst))) {
                vlSelf->simtop__DOT__core__DOT__csr_ssr 
                    = vlSelf->simtop__DOT__core__DOT__e2_csr_wdata;
            } else {
                vlSelf->simtop__DOT__core__DOT__csr_vbr 
                    = vlSelf->simtop__DOT__core__DOT__e2_csr_wdata;
            }
        } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wdst))) {
            vlSelf->simtop__DOT__core__DOT__csr_gbr 
                = vlSelf->simtop__DOT__core__DOT__e2_csr_wdata;
        } else {
            vlSelf->simtop__DOT__core__DOT__csr_sr_md 
                = (1U & (vlSelf->simtop__DOT__core__DOT__e2_csr_wdata 
                         >> 0x1eU));
            vlSelf->simtop__DOT__core__DOT__csr_sr_rb 
                = (1U & (vlSelf->simtop__DOT__core__DOT__e2_csr_wdata 
                         >> 0x1dU));
            vlSelf->simtop__DOT__core__DOT__csr_sr_bl 
                = (1U & (vlSelf->simtop__DOT__core__DOT__e2_csr_wdata 
                         >> 0x1cU));
            vlSelf->simtop__DOT__core__DOT__csr_sr_fd 
                = (1U & (vlSelf->simtop__DOT__core__DOT__e2_csr_wdata 
                         >> 0xfU));
            vlSelf->simtop__DOT__core__DOT__csr_sr_imask 
                = (0xfU & (vlSelf->simtop__DOT__core__DOT__e2_csr_wdata 
                           >> 4U));
        }
    }
    if (vlSelf->simtop__DOT__core__DOT__id_lsu_sel) {
        vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id 
            = vlSelf->simtop__DOT__core__DOT__id_dec1_csr_id;
        vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid 
            = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_ls) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issue));
    } else {
        vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id 
            = vlSelf->simtop__DOT__core__DOT__id_dec0_csr_id;
        vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid 
            = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__instr0_issue));
    }
    if (vlSelf->simtop__DOT__core__DOT__e2_reg_bru_write_pr) {
        vlSelf->simtop__DOT__core__DOT__csr_pr = vlSelf->simtop__DOT__core__DOT__e2_reg_bru_pr_target;
    }
    if (vlSelf->simtop__DOT__core__DOT__fpu_out_fpul_wen) {
        vlSelf->simtop__DOT__core__DOT__csr_fpul = vlSelf->simtop__DOT__core__DOT__fpu_out_fpul;
    }
    if (__Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v0) {
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b0[__Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v0] 
            = __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v0;
    }
    if (__Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v1) {
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b0[__Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v1] 
            = __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b0__v1;
    }
    if (__Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v0) {
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b1[__Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v0] 
            = __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v0;
    }
    if (__Vdlyvset__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v1) {
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b1[__Vdlyvdim0__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v1] 
            = __Vdlyvval__simtop__DOT__core__DOT__fprf__DOT__rf_array_b1__v1;
    }
    if (__Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v0) {
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[__Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v0] 
            = __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v0;
    }
    if (__Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v1) {
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[__Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v1] 
            = __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v1;
    }
    if (__Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b0__v2) {
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[0U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[1U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[2U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[3U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[4U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[5U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[6U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[7U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[8U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[9U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[0xaU] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[0xbU] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[0xcU] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[0xdU] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[0xeU] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[0xfU] = 0x8d000000U;
    }
    if (__Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v0) {
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[__Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v0] 
            = __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v0;
    }
    if (__Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v1) {
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[__Vdlyvdim0__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v1] 
            = __Vdlyvval__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v1;
    }
    if (__Vdlyvset__simtop__DOT__core__DOT__rf__DOT__rf_array_b1__v2) {
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[0U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[1U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[2U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[3U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[4U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[5U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[6U] = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[7U] = 0U;
    }
    if (__Vdlyvset__simtop__DOT__pvr__DOT__pal_ram__v0) {
        vlSelf->simtop__DOT__pvr__DOT__pal_ram[__Vdlyvdim0__simtop__DOT__pvr__DOT__pal_ram__v0] 
            = __Vdlyvval__simtop__DOT__pvr__DOT__pal_ram__v0;
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__i_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_i_tag;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_i_tag;
    vlSelf->simtop__DOT__core__DOT__e2_lsu_waltbank 
        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_waltbank;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_fpr 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_tag;
    vlSelf->simtop__DOT__core__DOT__fpu_out_wdst = 
        (0xfU & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_tag));
    vlSelf->simtop__DOT__core__DOT__fpu_out_wbank = 
        (1U & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_tag) 
               >> 4U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_inf 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_inf) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_inf));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_nan 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_nan) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_nan));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__exp_biased 
        = (0xfffU & ((IData)(0x7fU) + VL_EXTENDS_II(12,11, (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_exp))));
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_oph 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_oph;
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_opl 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_opl;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__i_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_i_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_i_valid;
    vlSelf->trace_pc0 = vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_pc;
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_pc 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_pc;
    vlSelf->trace_pc1 = vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_pc;
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_pc 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_pc;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_valid;
    vlSelf->simtop__DOT__core__DOT__fpu_out_valid = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_valid;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__in_oph 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__in_oph 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph;
    vlSelf->simtop__DOT__core__DOT__if_pc_plus4 = ((IData)(4U) 
                                                   + 
                                                   (0xfffffffcU 
                                                    & vlSelf->simtop__DOT__core__DOT__if_reg_pc));
    vlSelf->simtop__DOT__core__DOT__e2_p1_wpending 
        = vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wpending;
    vlSelf->simtop__DOT__core__DOT__e2_p0_wpending 
        = vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wpending;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__same_sign 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_sign) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_sign));
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__in_opl 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl;
    vlSelf->simtop__DOT__core__DOT__e1_mtu0_wdata = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__in_opl 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl;
    vlSelf->simtop__DOT__core__DOT__e1_mtu1_wdata = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_fr0 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fr0;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_sign 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fr0 
           >> 0x1fU);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__i_exp 
        = (0xffU & (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fr0 
                    >> 0x17U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_frac 
        = (0x7fffffU & vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fr0);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_fop 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop;
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_valid 
        = vlSelf->simtop__DOT__core__DOT__instr0_issue;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_snan 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_nan) 
           & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_frac 
              >> 0x16U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
        = (0x2000000U | vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_frac);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_snan 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_nan) 
           & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_frac 
              >> 0x16U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
        = (0x2000000U | vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_frac);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_frl 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frl;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_sign 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frl 
           >> 0x1fU);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__i_exp 
        = (0xffU & (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frl 
                    >> 0x17U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac 
        = (0x7fffffU & vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frl);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_frh 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frh;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_sign 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frh 
           >> 0x1fU);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__i_exp 
        = (0xffU & (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frh 
                    >> 0x17U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_frac 
        = (0x7fffffU & vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frh);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_valid = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu_out_t_wen = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_i_valid = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__exp_diff 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_exp)) 
                     - VL_EXTENDS_II(11,10, (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_exp))));
    vlSelf->simtop__DOT__core__DOT__e2_lsu_wdst = vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_wdst;
    vlSelf->simtop__DOT__core__DOT__e2_lsu_fpul_wen 
        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_fpul_wen;
    vlSelf->trace_instr1 = vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_raw;
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_raw 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_raw;
    vlSelf->trace_instr0 = vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_raw;
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_raw 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_raw;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_raw;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__rn = 
        (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_raw) 
                 >> 8U));
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_valid;
    vlSelf->simtop__DOT__core__DOT__replay_icache_miss_pc 
        = vlSelf->simtop__DOT__core__DOT__id_reg_pc;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmpz 
        = ((0x4011U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) 
           | (0x4015U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))));
    vlSelf->simtop__DOT__core__DOT__e1_mtu1_wdst = 
        (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw) 
                 >> 8U));
    vlSelf->simtop__DOT__core__DOT__e1_mtu1_wen = 0U;
    vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp = vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_wfp;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmpz 
        = ((0x4011U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) 
           | (0x4015U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))));
    vlSelf->simtop__DOT__core__DOT__e1_mtu0_wdst = 
        (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw) 
                 >> 8U));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_oph 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph;
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_valid 
        = vlSelf->simtop__DOT__core__DOT__instr1_issued;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_opl 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_1 
        = ((1U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)
            ? (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
               << 1U) : vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_left 
        = (0x1fU & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid;
    vlSelf->simtop__DOT__core__DOT__replay_icache_miss 
        = ((~ (IData)(vlSelf->im_resp_valid)) & (IData)(vlSelf->simtop__DOT__core__DOT__id_reg_valid));
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel 
        = vlSelf->simtop__DOT__core__DOT__id_lsu_sel;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw;
    vlSelf->simtop__DOT__core__DOT__e1_exu_wen = 1U;
    simtop__DOT__core__DOT__exu__DOT____VdfgTmp_hcbe31d0b__0 
        = (IData)((0x600aU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rn = 
        (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                 >> 8U));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_arith 
        = (IData)((0x400cU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))));
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_valid;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_passthrough 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough_csr)
            ? vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata
            : vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_amo 
        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_amo;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_valid 
        = ((IData)(vlSelf->dm_req_valid) & (~ (IData)(vlSelf->simtop__DOT__core__DOT__replay_dcache_miss)));
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw;
    vlSelf->simtop__DOT__core__DOT__e1_bru_delayslot = 0U;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_r0 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_r0;
    vlSelf->simtop__DOT__core__DOT__e2_csr_wdst = vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_csr_id;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_opl 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_flags = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_flags = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_write_t 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_write_t;
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_valid 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_mt) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__instr0_issue));
    vlSelf->simtop__DOT__core__DOT__replay_dcache_miss_pc 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)
            ? vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_pc
            : vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_pc);
    if (vlSelf->simtop__DOT__core__DOT__replay_dcache_miss) {
        vlSelf->simtop__DOT__core__DOT__e1_reg_flags 
            = vlSelf->simtop__DOT__core__DOT__e1_flags_restore;
    } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__replay_dcache_miss)))) {
        vlSelf->simtop__DOT__core__DOT__e1_reg_flags 
            = vlSelf->simtop__DOT__core__DOT__e1_flags_wb;
    }
    vlSelf->simtop__DOT__core__DOT__e1_flags_restore 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)
            ? (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_flags)
            : (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_flags));
    if (vlSelf->simtop__DOT__core__DOT__e2_flags_wen) {
        vlSelf->simtop__DOT__core__DOT__e1_reg_flags 
            = vlSelf->simtop__DOT__core__DOT__e2_flags_wb;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wen) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_tonly))) {
        vlSelf->simtop__DOT__core__DOT__e1_reg_flags 
            = ((0xeU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_flags)) 
               | (1U & vlSelf->simtop__DOT__core__DOT__e2_csr_wdata));
    }
    if (vlSelf->simtop__DOT__rst_reg) {
        vlSelf->simtop__DOT__core__DOT__csr_sr_md = 1U;
        vlSelf->simtop__DOT__core__DOT__csr_sr_rb = 0U;
        vlSelf->simtop__DOT__core__DOT__csr_sr_bl = 1U;
        vlSelf->simtop__DOT__core__DOT__csr_sr_fd = 0U;
        vlSelf->simtop__DOT__core__DOT__csr_sr_imask = 0xfU;
        vlSelf->simtop__DOT__core__DOT__csr_vbr = 0U;
        vlSelf->simtop__DOT__core__DOT__csr_fpscr = 0x40001U;
        vlSelf->simtop__DOT__core__DOT__csr_pr = 0x8c000128U;
        vlSelf->simtop__DOT__core__DOT__csr_gbr = 0x8c000000U;
        vlSelf->simtop__DOT__core__DOT__csr_ssr = 0x500000f0U;
        vlSelf->simtop__DOT__core__DOT__csr_spc = 0xac000800U;
        vlSelf->simtop__DOT__core__DOT__csr_vbr = 0x8c000000U;
        vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_valid = 0U;
        vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_valid = 0U;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_valid = 0U;
        vlSelf->simtop__DOT__core__DOT__e1_reg_flags = 0U;
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_oph 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph 
           + vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph 
           + vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_r0);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_store = 0U;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_gprw = 0U;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load = 0U;
    if (((((((((((((((((((((((((((((((((0x9000U == 
                                        (0xf000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                                       | (0xd000U == 
                                          (0xf000U 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                      | (0x6000U == 
                                         (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                     | (0x6001U == 
                                        (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                    | (0x6002U == (0xf00fU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                   | (0x6004U == (0xf00fU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                  | (0x6005U == (0xf00fU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                 | (0x6006U == (0xf00fU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                | (0x8400U == (0xff00U 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                               | (0x8500U == (0xff00U 
                                              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                              | (0x5000U == (0xf000U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                             | (0xcU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                            | (0xdU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                           | (0xeU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                          | (0xc400U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                         | (0xc500U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                        | (0xc600U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                       | (0x4007U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                      | (0x4017U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                     | (0x4027U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                    | (0x4037U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                   | (0x4047U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                  | (0x40f6U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                 | (0x4006U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                | (0x4016U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
               | (0x4026U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
              | (0x4066U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
             | (0x4056U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
            | (0x4087U == (0xf08fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
           | (0xf008U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
          | (0xf006U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
         | (0xf009U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load = 1U;
    } else if ((1U & (~ (((((((((((((((((((((((((((
                                                   (((((((((0x2000U 
                                                            == 
                                                            (0xf00fU 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                                                           | (0x2001U 
                                                              == 
                                                              (0xf00fU 
                                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                          | (0x2002U 
                                                             == 
                                                             (0xf00fU 
                                                              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                         | (0x2004U 
                                                            == 
                                                            (0xf00fU 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                        | (0x2005U 
                                                           == 
                                                           (0xf00fU 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                       | (0x2006U 
                                                          == 
                                                          (0xf00fU 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                      | (0x8000U 
                                                         == 
                                                         (0xff00U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                     | (0x8100U 
                                                        == 
                                                        (0xff00U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                    | (0x1000U 
                                                       == 
                                                       (0xf000U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                   | (4U 
                                                      == 
                                                      (0xf00fU 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                  | (5U 
                                                     == 
                                                     (0xf00fU 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                 | (6U 
                                                    == 
                                                    (0xf00fU 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                | (0xc000U 
                                                   == 
                                                   (0xff00U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                               | (0xc100U 
                                                  == 
                                                  (0xff00U 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                              | (0xc200U 
                                                 == 
                                                 (0xff00U 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                             | (0xc3U 
                                                == 
                                                (0xf0ffU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                            | (0x93U 
                                               == (0xf0ffU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                           | (0xa3U 
                                              == (0xf0ffU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                          | (0xb3U 
                                             == (0xf0ffU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                         | (0x83U == 
                                            (0xf0ffU 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                        | (0x4003U 
                                           == (0xf0ffU 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                       | (0x4013U == 
                                          (0xf0ffU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                      | (0x4023U == 
                                         (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                     | (0x4033U == 
                                        (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                    | (0x4043U == (0xf0ffU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                   | (0x4032U == (0xf0ffU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                  | (0x40f2U == (0xf0ffU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                 | (0x4002U == (0xf0ffU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                | (0x4012U == (0xf0ffU 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                               | (0x4022U == (0xf0ffU 
                                              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                              | (0x4062U == (0xf0ffU 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                             | (0x4052U == (0xf0ffU 
                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                            | (0x4083U == (0xf08fU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                           | (0xf00aU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                          | (0xf00bU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                         | (0xf007U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))))) {
        if ((1U & (~ (((((((((((((2U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                                 | (0x12U == (0xf0ffU 
                                              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                | (0x22U == (0xf0ffU 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                               | (0x32U == (0xf0ffU 
                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                              | (0x42U == (0xf0ffU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                             | (0x3aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                            | (0xfaU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                           | (0xaU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                          | (0x1aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                         | (0x2aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                        | (0x82U == (0xf08fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                       | (0x5aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                      | (0x6aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))))) {
            if ((0xcc00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_state)))) {
                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load = 1U;
                }
            } else if (((((0x401bU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                          | (0xcd00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                         | (0xcf00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                        | (0xce00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))) {
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_state)))) {
                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load = 1U;
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl = 
        (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                 >> 4U));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh = 
        (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                 >> 8U));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4 
        = (0xfU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw));
    vlSelf->simtop__DOT__core__DOT__e2_reg_bru_write_pr 
        = vlSelf->simtop__DOT__core__DOT__e1_bru_write_pr;
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpul 
        = vlSelf->simtop__DOT__core__DOT__csr_fpul;
    vlSelf->simtop__DOT__core__DOT__e1_reg_bru_pr = vlSelf->simtop__DOT__core__DOT__csr_pr;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr 
        = vlSelf->simtop__DOT__core__DOT__csr_fpscr;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_rm 
        = (1U & vlSelf->simtop__DOT__core__DOT__csr_fpscr);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_v_en 
        = (1U & (vlSelf->simtop__DOT__core__DOT__csr_fpscr 
                 >> 0xbU));
    vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr = 
        (1U & (vlSelf->simtop__DOT__core__DOT__csr_fpscr 
               >> 0x15U));
    vlSelf->simtop__DOT__core__DOT__csr_fpscr_sz = 
        (1U & (vlSelf->simtop__DOT__core__DOT__csr_fpscr 
               >> 0x14U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_tag;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_waltbank 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_waltbank;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_wdst 
        = vlSelf->simtop__DOT__core__DOT__fpu_out_wdst;
    vlSelf->simtop__DOT__core__DOT__fprf_wdst0 = vlSelf->simtop__DOT__core__DOT__fpu_out_wdst;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_wbank 
        = vlSelf->simtop__DOT__core__DOT__fpu_out_wbank;
    vlSelf->simtop__DOT__core__DOT__fprf_wbank0 = vlSelf->simtop__DOT__core__DOT__fpu_out_wbank;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_overflow = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_underflow = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_inexact = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_exp 
        = (0xffU & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__exp_biased));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_frac 
        = (0x7fffffU & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_frac 
                        >> 2U));
    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_zero) 
                  | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_inf))))) {
        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_nan)))) {
            if ((0U != (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__exp_biased) 
                                >> 8U)))) {
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_overflow = 1U;
            }
        }
        if (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_nan) {
            vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_exp = 0xffU;
            vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_frac = 0x3fffffU;
        } else if ((0U != (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__exp_biased) 
                                   >> 8U)))) {
            vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_inexact = 1U;
            vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_exp = 0xffU;
            vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_frac = 0U;
        } else if (((0U == vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_frac) 
                    & (0U != (3U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_frac)))) {
            vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_inexact = 1U;
            if ((0x7fU == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_exp))) {
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_underflow = 1U;
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_valid;
    vlSelf->simtop__DOT__trace_pc0 = vlSelf->trace_pc0;
    vlSelf->simtop__DOT__core__DOT__id_instr0_pc = 
        (0xfffffffcU & vlSelf->simtop__DOT__core__DOT__id_reg_pc);
    vlSelf->simtop__DOT__trace_pc1 = vlSelf->trace_pc1;
    vlSelf->simtop__DOT__core__DOT__id_instr1_pc = 
        (2U | (0xfffffffcU & vlSelf->simtop__DOT__core__DOT__id_reg_pc));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu_out_valid;
    vlSelf->simtop__DOT__core__DOT__fprf_wen0 = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu_out_valid) 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__fpu_out_wen));
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__out_wdata 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu0_wdata;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__out_wdata 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu1_wdata;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__i 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_fr0;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_exp 
        = (0x1ffU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__i_exp) 
                     - (IData)(0x7fU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_exp_zero 
        = (0U == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__i_exp));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_exp_max 
        = (0xffU == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__i_exp));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_frac_zero 
        = (0U == vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_frac);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__data 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3fffffeU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | (1U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                 | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                    >> 1U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3fffffdU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 1U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 1U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                            >> 2U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3fffffbU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 2U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 2U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                            >> 3U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3fffff7U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 3U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 3U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                            >> 4U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3ffffefU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 4U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 4U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                            >> 5U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3ffffdfU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 5U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 5U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                            >> 6U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3ffffbfU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 6U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 6U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                            >> 7U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3ffff7fU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 7U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 7U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                            >> 8U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3fffeffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 8U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 8U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                            >> 9U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3fffdffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 9U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 9U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                            >> 0xaU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3fffbffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0xaU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0xaU) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                              >> 0xbU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3fff7ffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0xbU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0xbU) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                              >> 0xcU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3ffefffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0xcU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0xcU) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                              >> 0xdU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3ffdfffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0xdU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0xdU) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                              >> 0xeU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3ffbfffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0xeU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0xeU) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                              >> 0xfU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3ff7fffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0xfU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0xfU) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                              >> 0x10U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3feffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0x10U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0x10U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                               >> 0x11U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3fdffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0x11U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0x11U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                               >> 0x12U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3fbffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0x12U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0x12U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                               >> 0x13U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3f7ffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0x13U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0x13U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                               >> 0x14U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3efffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0x14U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0x14U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                               >> 0x15U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3dfffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0x15U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0x15U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                               >> 0x16U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x3bfffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0x16U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0x16U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                               >> 0x17U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x37fffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0x17U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0x17U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                               >> 0x18U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x2ffffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0x18U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                  >> 0x18U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
                               >> 0x19U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
        = ((0x1ffffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0) 
              << 0x19U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__invalid_int 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_snan) 
           | ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_snan) 
              | ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_inf) 
                 & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__same_sign)) 
                    & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_inf)))));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__data 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3fffffeU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | (1U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                 | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                    >> 1U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3fffffdU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 1U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 1U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                            >> 2U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3fffffbU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 2U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 2U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                            >> 3U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3fffff7U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 3U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 3U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                            >> 4U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3ffffefU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 4U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 4U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                            >> 5U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3ffffdfU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 5U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 5U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                            >> 6U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3ffffbfU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 6U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 6U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                            >> 7U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3ffff7fU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 7U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 7U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                            >> 8U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3fffeffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 8U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 8U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                            >> 9U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3fffdffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 9U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 9U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                            >> 0xaU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3fffbffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0xaU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0xaU) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                              >> 0xbU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3fff7ffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0xbU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0xbU) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                              >> 0xcU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3ffefffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0xcU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0xcU) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                              >> 0xdU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3ffdfffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0xdU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0xdU) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                              >> 0xeU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3ffbfffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0xeU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0xeU) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                              >> 0xfU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3ff7fffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0xfU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0xfU) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                              >> 0x10U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3feffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0x10U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0x10U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                               >> 0x11U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3fdffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0x11U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0x11U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                               >> 0x12U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3fbffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0x12U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0x12U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                               >> 0x13U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3f7ffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0x13U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0x13U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                               >> 0x14U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3efffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0x14U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0x14U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                               >> 0x15U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3dfffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0x15U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0x15U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                               >> 0x16U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x3bfffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0x16U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0x16U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                               >> 0x17U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x37fffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0x17U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0x17U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                               >> 0x18U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x2ffffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0x18U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 
        = (1U & ((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                  >> 0x18U) | (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
                               >> 0x19U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
        = ((0x1ffffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0) 
              << 0x19U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__i 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_frl;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_exp_zero 
        = (0U == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__i_exp));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_exp 
        = (0x1ffU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__i_exp) 
                     - (IData)(0x7fU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_exp_max 
        = (0xffU == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__i_exp));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_frac_zero 
        = (0U == vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__i 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_frh;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_exp_zero 
        = (0U == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__i_exp));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_exp 
        = (0x1ffU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__i_exp) 
                     - (IData)(0x7fU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_exp_max 
        = (0xffU == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__i_exp));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__o_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__frac_eq 
        = (vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_frac 
           == vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__frac_gt 
        = (vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_frac 
           > vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_frac_zero 
        = (0U == vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_frac);
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid) {
        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_valid = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_valid = 1U;
                }
            } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_valid = 1U;
            }
        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_valid = 1U;
            }
        }
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__i_valid 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_valid;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_valid 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_valid;
        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                        vlSelf->simtop__DOT__core__DOT__fpu_out_t_wen = 1U;
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_i_valid = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    vlSelf->simtop__DOT__core__DOT__fpu_out_t_wen = 1U;
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_i_valid = 1U;
                }
            }
        }
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_t_wen 
            = vlSelf->simtop__DOT__core__DOT__fpu_out_t_wen;
    } else {
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__i_valid 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_valid;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_valid 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_valid;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_t_wen 
            = vlSelf->simtop__DOT__core__DOT__fpu_out_t_wen;
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__i_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_i_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__shamt 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__exp_diff;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__shamt_bounded 
        = (0x1fU & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__exp_diff));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__neg_exp_diff 
        = (0x7ffU & (- (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__exp_diff)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__swap_operand 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,11, (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__exp_diff))) 
           | ((0U == VL_EXTENDS_II(32,11, (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__exp_diff))) 
              & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_frac 
                 < vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_frac)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_wdst 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdst;
    vlSelf->simtop__DOT__core__DOT__fprf_wdst1 = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdst;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_fpul_wen 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_fpul_wen;
    vlSelf->simtop__DOT__trace_instr1 = vlSelf->trace_instr1;
    vlSelf->simtop__DOT__trace_instr0 = vlSelf->trace_instr0;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT____VdfgTmp_h9fa499bc__0 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmpz)) 
           & (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl 
              >> 0x1fU));
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmp_opl 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmpz)
            ? 0U : vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__out_wdst 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu1_wdst;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_valid) {
        if (((((((((9U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw)) 
                   | (0x6003U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw)))) 
                  | ((0x8800U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) 
                     | (0x3000U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))))) 
                 | ((0x4011U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) 
                    | (0x3002U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))))) 
                | (0x3003U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw)))) 
               | ((0x4015U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) 
                  | (0x3006U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))))) 
              | (0x3007U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw)))) 
             | (0x200cU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))))) {
            if ((9U != (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) {
                if ((0x6003U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw)))) {
                    vlSelf->simtop__DOT__core__DOT__e1_mtu1_wen = 1U;
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__out_wen 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu1_wen;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_wfp 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp;
    vlSelf->simtop__DOT__core__DOT__fprf_wen1 = vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT____VdfgTmp_h9fa499bc__0 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmpz)) 
           & (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl 
              >> 0x1fU));
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmp_opl 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmpz)
            ? 0U : vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__out_wdst 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu0_wdst;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_2 
        = ((2U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)
            ? (vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_1 
               << 2U) : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_right 
        = (0x1fU & ((IData)(1U) + (~ (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_left))));
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid) {
        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                      >> 0xfU)))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                          >> 0xeU)))) {
                if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                  >> 0xcU)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_exu_wen = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                     >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                  >> 0xbU)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                      >> 0xaU)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                          >> 9U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                              >> 8U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                     >> 5U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__e1_exu_wen = 0U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->simtop__DOT__core__DOT__e1_exu_wen = 0U;
    }
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_wen 
        = vlSelf->simtop__DOT__core__DOT__e1_exu_wen;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__is_neg 
        = ((IData)((0x600bU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw)))) 
           | (IData)(simtop__DOT__core__DOT__exu__DOT____VdfgTmp_hcbe31d0b__0));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__use_carry 
        = ((IData)((0x300eU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw)))) 
           | ((IData)(simtop__DOT__core__DOT__exu__DOT____VdfgTmp_hcbe31d0b__0) 
              | (IData)((0x300aU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))))));
    vlSelf->simtop__DOT__core__DOT__e1_exu_wdst = vlSelf->simtop__DOT__core__DOT__exu__DOT__rn;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_sign 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_arith) 
           & (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
              >> 0x1fU));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_amo = 0U;
    if ((1U & (~ ((((((((((((((((((((((((((((((((0x9000U 
                                                 == 
                                                 (0xf000U 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                                                | (0xd000U 
                                                   == 
                                                   (0xf000U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                               | (0x6000U 
                                                  == 
                                                  (0xf00fU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                              | (0x6001U 
                                                 == 
                                                 (0xf00fU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                             | (0x6002U 
                                                == 
                                                (0xf00fU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                            | (0x6004U 
                                               == (0xf00fU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                           | (0x6005U 
                                              == (0xf00fU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                          | (0x6006U 
                                             == (0xf00fU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                         | (0x8400U 
                                            == (0xff00U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                        | (0x8500U 
                                           == (0xff00U 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                       | (0x5000U == 
                                          (0xf000U 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                      | (0xcU == (0xf00fU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                     | (0xdU == (0xf00fU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                    | (0xeU == (0xf00fU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                   | (0xc400U == (0xff00U 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                  | (0xc500U == (0xff00U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                 | (0xc600U == (0xff00U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                | (0x4007U == (0xf0ffU 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                               | (0x4017U == (0xf0ffU 
                                              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                              | (0x4027U == (0xf0ffU 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                             | (0x4037U == (0xf0ffU 
                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                            | (0x4047U == (0xf0ffU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                           | (0x40f6U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                          | (0x4006U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                         | (0x4016U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                        | (0x4026U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                       | (0x4066U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                      | (0x4056U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                     | (0x4087U == (0xf08fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                    | (0xf008U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                   | (0xf006U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                  | (0xf009U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))))) {
        if (((((((((((((((((((((((((((((((((((((0x2000U 
                                                == 
                                                (0xf00fU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                                               | (0x2001U 
                                                  == 
                                                  (0xf00fU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                              | (0x2002U 
                                                 == 
                                                 (0xf00fU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                             | (0x2004U 
                                                == 
                                                (0xf00fU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                            | (0x2005U 
                                               == (0xf00fU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                           | (0x2006U 
                                              == (0xf00fU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                          | (0x8000U 
                                             == (0xff00U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                         | (0x8100U 
                                            == (0xff00U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                        | (0x1000U 
                                           == (0xf000U 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                       | (4U == (0xf00fU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                      | (5U == (0xf00fU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                     | (6U == (0xf00fU 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                    | (0xc000U == (0xff00U 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                   | (0xc100U == (0xff00U 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                  | (0xc200U == (0xff00U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                 | (0xc3U == (0xf0ffU 
                                              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                | (0x93U == (0xf0ffU 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                               | (0xa3U == (0xf0ffU 
                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                              | (0xb3U == (0xf0ffU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                             | (0x83U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                            | (0x4003U == (0xf0ffU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                           | (0x4013U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                          | (0x4023U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                         | (0x4033U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                        | (0x4043U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                       | (0x4032U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                      | (0x40f2U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                     | (0x4002U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                    | (0x4012U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                   | (0x4022U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                  | (0x4062U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                 | (0x4052U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                | (0x4083U == (0xf08fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
               | (0xf00aU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
              | (0xf00bU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
             | (0xf007U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))) {
            vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_store = 1U;
        } else if ((1U & (~ (((((((((((((2U == (0xf0ffU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                                        | (0x12U == 
                                           (0xf0ffU 
                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                       | (0x22U == 
                                          (0xf0ffU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                      | (0x32U == (0xf0ffU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                     | (0x42U == (0xf0ffU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                    | (0x3aU == (0xf0ffU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                   | (0xfaU == (0xf0ffU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                  | (0xaU == (0xf0ffU 
                                              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                 | (0x1aU == (0xf0ffU 
                                              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                | (0x2aU == (0xf0ffU 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                               | (0x82U == (0xf08fU 
                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                              | (0x5aU == (0xf0ffU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                             | (0x6aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))))) {
            if ((0xcc00U != (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                if (((((0x401bU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                       | (0xcd00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                      | (0xcf00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                     | (0xce00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))) {
                    if (vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_state) {
                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_store = 1U;
                    }
                }
            }
        }
        if ((1U & (~ ((((((((((((((((((((((((((((((
                                                   ((((((0x2000U 
                                                         == 
                                                         (0xf00fU 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                                                        | (0x2001U 
                                                           == 
                                                           (0xf00fU 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                       | (0x2002U 
                                                          == 
                                                          (0xf00fU 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                      | (0x2004U 
                                                         == 
                                                         (0xf00fU 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                     | (0x2005U 
                                                        == 
                                                        (0xf00fU 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                    | (0x2006U 
                                                       == 
                                                       (0xf00fU 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                   | (0x8000U 
                                                      == 
                                                      (0xff00U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                  | (0x8100U 
                                                     == 
                                                     (0xff00U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                 | (0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                                | (4U 
                                                   == 
                                                   (0xf00fU 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                               | (5U 
                                                  == 
                                                  (0xf00fU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                              | (6U 
                                                 == 
                                                 (0xf00fU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                             | (0xc000U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                            | (0xc100U 
                                               == (0xff00U 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                           | (0xc200U 
                                              == (0xff00U 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                          | (0xc3U 
                                             == (0xf0ffU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                         | (0x93U == 
                                            (0xf0ffU 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                        | (0xa3U == 
                                           (0xf0ffU 
                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                       | (0xb3U == 
                                          (0xf0ffU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                      | (0x83U == (0xf0ffU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                     | (0x4003U == 
                                        (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                    | (0x4013U == (0xf0ffU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                   | (0x4023U == (0xf0ffU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                  | (0x4033U == (0xf0ffU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                 | (0x4043U == (0xf0ffU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                | (0x4032U == (0xf0ffU 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                               | (0x40f2U == (0xf0ffU 
                                              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                              | (0x4002U == (0xf0ffU 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                             | (0x4012U == (0xf0ffU 
                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                            | (0x4022U == (0xf0ffU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                           | (0x4062U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                          | (0x4052U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                         | (0x4083U == (0xf08fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                        | (0xf00aU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                       | (0xf00bU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                      | (0xf007U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))))) {
            if ((((((((((((((2U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                            | (0x12U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                           | (0x22U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                          | (0x32U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                         | (0x42U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                        | (0x3aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                       | (0xfaU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                      | (0xaU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                     | (0x1aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                    | (0x2aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                   | (0x82U == (0xf08fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                  | (0x5aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                 | (0x6aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))) {
                vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_gprw = 1U;
            }
            if ((1U & (~ (((((((((((((2U == (0xf0ffU 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                                     | (0x12U == (0xf0ffU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                    | (0x22U == (0xf0ffU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                   | (0x32U == (0xf0ffU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                  | (0x42U == (0xf0ffU 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                 | (0x3aU == (0xf0ffU 
                                              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                | (0xfaU == (0xf0ffU 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                               | (0xaU == (0xf0ffU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                              | (0x1aU == (0xf0ffU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                             | (0x2aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                            | (0x82U == (0xf08fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                           | (0x5aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                          | (0x6aU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))))) {
                if ((0xcc00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_amo = 1U;
                } else if (((((0x401bU == (0xf0ffU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                              | (0xcd00U == (0xff00U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                             | (0xcf00U == (0xff00U 
                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                            | (0xce00U == (0xff00U 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))) {
                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_amo = 1U;
                }
            }
        }
    }
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_bru_valid) {
        if (((((((((0x8b00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))) 
                   | (0x8f00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
                  | (0x8900U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
                 | (0x8d00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
                | (0xa000U == (0xf000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
               | (0xb000U == (0xf000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
              | (0x402bU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
             | (0x400bU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))))) {
            if ((0x8b00U != (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                if ((0x8f00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                    vlSelf->simtop__DOT__core__DOT__e1_bru_delayslot = 1U;
                } else if ((0x8900U != (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                    vlSelf->simtop__DOT__core__DOT__e1_bru_delayslot = 1U;
                }
            }
        } else if ((0x23U != (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
            if ((3U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                vlSelf->simtop__DOT__core__DOT__e1_bru_delayslot = 1U;
            } else if ((0xbU == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))) {
                vlSelf->simtop__DOT__core__DOT__e1_bru_delayslot = 1U;
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__bru__DOT__out_delayslot 
        = vlSelf->simtop__DOT__core__DOT__e1_bru_delayslot;
    vlSelf->dm_req_wen = ((~ ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load) 
                              | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_gprw))) 
                          & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_store));
    simtop__DOT__core__DOT__lsu__DOT____VdfgExtracted_h3810217f__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl) 
           != (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_imm4h 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph 
           + ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4) 
              << 2U));
    vlSelf->simtop__DOT__core__DOT__e1_bru_write_pr = 0U;
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_pr 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_pr;
    vlSelf->simtop__DOT__core__DOT__e1_bru_target = 
        (vlSelf->simtop__DOT__core__DOT__e1_reg_bru_opl 
         + vlSelf->simtop__DOT__core__DOT__e1_reg_bru_oph);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__rm 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_rm;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__ven 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_v_en;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__ven 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_v_en;
    if (vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) {
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rbank1 = 1U;
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rbank2 = 1U;
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_r0bank = 1U;
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wbank1 = 1U;
        vlSelf->simtop__DOT__core__DOT__fprf_rbank1 = 1U;
        vlSelf->simtop__DOT__core__DOT__fprf_rbank2 = 1U;
        vlSelf->simtop__DOT__core__DOT__fprf_r0bank = 1U;
        vlSelf->simtop__DOT__core__DOT__fprf_wbank1 = 1U;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_fr = 1U;
        vlSelf->simtop__DOT__core__DOT__fprf_r0data 
            = vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b1
            [0U];
    } else {
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rbank1 = 0U;
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rbank2 = 0U;
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_r0bank = 0U;
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wbank1 = 0U;
        vlSelf->simtop__DOT__core__DOT__fprf_rbank1 = 0U;
        vlSelf->simtop__DOT__core__DOT__fprf_rbank2 = 0U;
        vlSelf->simtop__DOT__core__DOT__fprf_r0bank = 0U;
        vlSelf->simtop__DOT__core__DOT__fprf_wbank1 = 0U;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_fr = 0U;
        vlSelf->simtop__DOT__core__DOT__fprf_r0data 
            = vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b0
            [0U];
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_tag 
        = (((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
            << 4U) | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__rn));
    vlSelf->simtop__DOT__core__DOT__fp_r0_busy = (1U 
                                                  & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                                                     >> 
                                                     ((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
                                                      << 4U)));
    if (vlSelf->simtop__DOT__core__DOT__csr_fpscr_sz) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__fpscr_sz = 1U;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__fpsize = 3U;
    } else {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__fpscr_sz = 0U;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__fpsize = 2U;
    }
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wdst0 
        = vlSelf->simtop__DOT__core__DOT__fprf_wdst0;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wbank0 
        = vlSelf->simtop__DOT__core__DOT__fprf_wbank0;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__overflow 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_overflow;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__underflow 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_underflow;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__inexact 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_inexact;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_rounded 
        = (((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_exp) 
                          << 0x17U) | vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_frac));
    vlSelf->simtop__DOT__core__DOT__trace_pc0 = vlSelf->simtop__DOT__trace_pc0;
    vlSelf->simtop__DOT__core__DOT__replay_stalled_pc 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_pc;
    vlSelf->simtop__DOT__core__DOT__trace_pc1 = vlSelf->simtop__DOT__trace_pc1;
    vlSelf->simtop__DOT__core__DOT__replay_nodi_pc 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_pc;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wen0 
        = vlSelf->simtop__DOT__core__DOT__fprf_wen0;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_zero 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_exp_zero) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_frac_zero));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_inf 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_exp_max) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_frac_zero));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_nan 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_frac_zero)) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_exp_max));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_invalid 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__invalid_int) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_v_en));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_exp 
        = (0xffU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_exp) 
                    >> 0U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_exp;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid) {
        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_frac 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac;
                    }
                } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_frac 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac;
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_nan 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_frac_zero)) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_exp_max));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_zero 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_exp_zero) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_frac_zero));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_inf 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_exp_max) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_frac_zero));
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid) {
        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_sign 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_sign;
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_sign 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_sign;
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_sign 
                            = (1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_sign)));
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_sign 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_sign;
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_sign 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_sign;
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_sign 
                        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_sign) 
                           ^ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_sign));
                }
            } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_sign 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_sign;
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_sign 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_sign;
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_sign 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_sign;
            }
        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_sign 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_sign;
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_sign 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_sign;
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_sign 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_sign) 
           ^ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_sign));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__o_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_exp 
        = (0xffU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_exp) 
                    >> 0U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__exp_eq 
        = ((0xffU & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_exp)) 
           == (0xffU & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_exp)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__exp_gt 
        = ((0xffU & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_exp)) 
           > (0xffU & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_exp)));
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid) {
        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_frac 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac;
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_frac 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_frac;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_frac 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_frac;
                }
            }
            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_frac 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_frac;
                }
            } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_frac 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_frac;
            }
        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_frac 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac;
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_frac 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_frac;
            }
        }
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_frac 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_frac;
    } else {
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_frac 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_frac;
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__x_frac 
        = (0xffffffffffffULL & ((0x800000ULL | (QData)((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_frac))) 
                                * (0x800000ULL | (QData)((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_frac)))));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_nan 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_frac_zero)) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_exp_max));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_zero 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_exp_zero) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_frac_zero));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_inf 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_exp_max) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_frac_zero));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__i_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__i_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_shifted 
        = (0x3ffffffU & ((0x1aU <= (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__exp_diff))
                          ? (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                             >> 0x19U) : ((0x3fffffeU 
                                           & (((0x1000000U 
                                                | (0xffffffU 
                                                   & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_frac 
                                                      >> 1U))) 
                                               >> (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__shamt_bounded)) 
                                              << 1U)) 
                                          | ((0x19U 
                                              >= (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__shamt_bounded)) 
                                             & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual 
                                                >> (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__shamt_bounded))))));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__shamt 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__neg_exp_diff;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__shamt_bounded 
        = (0x1fU & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__neg_exp_diff));
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wdst1 
        = vlSelf->simtop__DOT__core__DOT__fprf_wdst1;
    vlSelf->simtop__DOT__core__DOT__trace_instr1 = vlSelf->simtop__DOT__trace_instr1;
    vlSelf->simtop__DOT__core__DOT__trace_instr0 = vlSelf->simtop__DOT__trace_instr0;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__eq = 
        (vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmp_opl 
         == vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__subs 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmp_opl)) 
                                     + (0x100000000ULL 
                                        | (QData)((IData)(
                                                          (~ vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph)))))));
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wen1 
        = vlSelf->simtop__DOT__core__DOT__fprf_wen1;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__eq = 
        (vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmp_opl 
         == vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__subs 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmp_opl)) 
                                     + (0x100000000ULL 
                                        | (QData)((IData)(
                                                          (~ vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph)))))));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_4 
        = ((4U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)
            ? (vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_2 
               << 4U) : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_2);
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid) {
        if ((0x8000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                  >> 0xcU)))) {
                        if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                          >> 0xaU)))) {
                                if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_exu_wdst = 0U;
                                } else if ((0x100U 
                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_exu_wdst = 0U;
                                }
                            }
                        } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_exu_wdst = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_wdst 
        = vlSelf->simtop__DOT__core__DOT__e1_exu_wdst;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_1 
        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_right))
            ? (((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_sign) 
                << 0x1fU) | (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                             >> 1U)) : vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph);
    vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_tonly = 0U;
    vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wen = 0U;
    if (((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_amo) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_amo_write_t))) {
        vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_tonly = 1U;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_write_csr) 
         | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_fpul_wen))) {
        vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wen = 1U;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_amo) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_amo_write_t))) {
        vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wen = 1U;
    }
    vlSelf->simtop__DOT__core__DOT__e2_lsu_wen = 0U;
    if (vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_use_passthrough) {
        if ((1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_fpul_wen)) 
                   & (~ (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_wfp))))) {
            vlSelf->simtop__DOT__core__DOT__e2_lsu_wen = 1U;
        }
    } else if (vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_valid) {
        if (vlSelf->dm_resp_valid) {
            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_wen)))) {
                vlSelf->simtop__DOT__core__DOT__e2_lsu_wen = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_write_csr) 
         | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_fpul_wen))) {
        vlSelf->simtop__DOT__core__DOT__e2_lsu_wen = 0U;
    }
    if (vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_amo) {
        vlSelf->simtop__DOT__core__DOT__e2_lsu_wen = 0U;
    }
    vlSelf->simtop__DOT__core__DOT__e2_lsu_nack = 0U;
    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_use_passthrough)))) {
        if (vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_valid) {
            if ((1U & (~ (IData)(vlSelf->dm_resp_valid)))) {
                vlSelf->simtop__DOT__core__DOT__e2_lsu_nack = 1U;
            }
        }
    }
    if ((((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_amo) 
          & (~ (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_state))) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_valid))) {
        vlSelf->simtop__DOT__core__DOT__e2_lsu_nack = 1U;
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_write_t = 0U;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 0U;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__waltbank = 0U;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 0U;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough_csr = 0U;
    vlSelf->simtop__DOT__core__DOT__dm_req_writeback = 0U;
    vlSelf->simtop__DOT__core__DOT__dm_req_invalidate = 0U;
    vlSelf->simtop__DOT__core__DOT__dm_req_nofill = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_lsu_fpul_wen = 0U;
    vlSelf->simtop__DOT__core__DOT__dm_req_flush = 0U;
    vlSelf->simtop__DOT__core__DOT__dm_req_prefetch = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_gprw));
    vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load) 
                                                  | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_gprw));
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 0U;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_valid;
    vlSelf->simtop__DOT__core__DOT__e1_mtu0_wen = 0U;
    vlSelf->simtop__DOT__rst_reg = vlSelf->rst;
    vlSelf->simtop__DOT__core__DOT__e1_reg_exu_flags 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_flags;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_m 
        = (1U & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_flags) 
                 >> 3U));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_s 
        = (1U & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_flags) 
                 >> 1U));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_q 
        = (1U & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_flags) 
                 >> 2U));
    vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t = 
        (1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_flags));
    vlSelf->simtop__DOT__core__DOT__e1_csr_sr = (((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_md) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_rb) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_bl) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_fd) 
                                                           << 0xfU) 
                                                          | ((0x300U 
                                                              & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_flags) 
                                                                 << 6U)) 
                                                             | (((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_imask) 
                                                                 << 4U) 
                                                                | (3U 
                                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_flags))))))));
    vlSelf->simtop__DOT__dm_req_wen = vlSelf->dm_req_wen;
    vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_bru_valid) {
        if (((((((((0x8b00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))) 
                   | (0x8f00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
                  | (0x8900U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
                 | (0x8d00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
                | (0xa000U == (0xf000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
               | (0xb000U == (0xf000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
              | (0x402bU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
             | (0x400bU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))))) {
            if ((0x8b00U != (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                if ((0x8f00U != (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                    if ((0x8900U != (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                        if ((0x8d00U != (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                            if ((0xa000U != (0xf000U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                                if ((0xb000U == (0xf000U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_bru_write_pr = 1U;
                                } else if ((0x402bU 
                                            != (0xf0ffU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_bru_write_pr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__bru__DOT__out_write_pr 
        = vlSelf->simtop__DOT__core__DOT__e1_bru_write_pr;
    vlSelf->simtop__DOT__core__DOT__e2_reg_bru_pr_target 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_sel)
            ? vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_npc
            : vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_npc);
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_npc 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_npc 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
    vlSelf->simtop__DOT__core__DOT__e1_reg_bru_sel 
        = vlSelf->simtop__DOT__core__DOT__id_bru_sel;
    vlSelf->simtop__DOT__core__DOT__replay_delayslot_miss_pc 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_sel)
            ? vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_pc
            : vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_pc);
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_bru_valid) {
        if (((((((((0x8b00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))) 
                   | (0x8f00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
                  | (0x8900U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
                 | (0x8d00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
                | (0xa000U == (0xf000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
               | (0xb000U == (0xf000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
              | (0x402bU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
             | (0x400bU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))))) {
            if ((0x8b00U != (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                if ((0x8f00U != (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                    if ((0x8900U != (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                        if ((0x8d00U != (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                            if ((0xa000U != (0xf000U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                                if ((0xb000U != (0xf000U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_bru_target 
                                        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_oph;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x23U != (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
            if ((3U != (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                if ((0xbU == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))) {
                    vlSelf->simtop__DOT__core__DOT__e1_bru_target 
                        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_pr;
                } else if ((0x2bU == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))) {
                    vlSelf->simtop__DOT__core__DOT__e1_bru_target 
                        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_pr;
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__bru__DOT__out_target 
        = vlSelf->simtop__DOT__core__DOT__e1_bru_target;
    vlSelf->simtop__DOT__core__DOT__replay_mispredict_pc 
        = vlSelf->simtop__DOT__core__DOT__e1_bru_target;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__ven 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__ven;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__ven 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__ven;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_r0data 
        = vlSelf->simtop__DOT__core__DOT__fprf_r0data;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__i_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_tag;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_tag;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize = 0U;
    if ((((((((((((((((0x2000U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                      | (0x6000U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                     | (0x2004U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                    | (0x6004U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                   | (0x8000U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                  | (0x8400U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                 | (4U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                | (0xcU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
               | (0xc000U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
              | (0xc400U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
             | (0x401bU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
            | (0xcd00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
           | (0xcf00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
          | (0xcc00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
         | (0xce00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize = 0U;
    } else if ((((((((((((0x9000U == (0xf000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                         | (0x2001U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                        | (0x6001U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                       | (0x2005U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                      | (0x6005U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                     | (0x8100U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                    | (0x8500U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                   | (5U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                  | (0xdU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                 | (0xc100U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                | (0xc500U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize = 1U;
    } else if ((((((((((((((((((((((((((((((((((0xd000U 
                                                == 
                                                (0xf000U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                                               | (0x2002U 
                                                  == 
                                                  (0xf00fU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                              | (0x6002U 
                                                 == 
                                                 (0xf00fU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                             | (0x2006U 
                                                == 
                                                (0xf00fU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                            | (0x6006U 
                                               == (0xf00fU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                           | (0x1000U 
                                              == (0xf000U 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                          | (0x5000U 
                                             == (0xf000U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                         | (6U == (0xf00fU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                        | (0xeU == 
                                           (0xf00fU 
                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                       | (0xc200U == 
                                          (0xff00U 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                      | (0xc600U == 
                                         (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                     | (0xc3U == (0xf0ffU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                    | (0x4007U == (0xf0ffU 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                   | (0x4017U == (0xf0ffU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                  | (0x4027U == (0xf0ffU 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                 | (0x4037U == (0xf0ffU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                                | (0x4047U == (0xf0ffU 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                               | (0x40f6U == (0xf0ffU 
                                              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                              | (0x4006U == (0xf0ffU 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                             | (0x4016U == (0xf0ffU 
                                            & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                            | (0x4026U == (0xf0ffU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                           | (0x4087U == (0xf08fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                          | (0x4003U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                         | (0x4013U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                        | (0x4023U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                       | (0x4033U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                      | (0x4043U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                     | (0x4032U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                    | (0x40f2U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                   | (0x4002U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                  | (0x4012U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                 | (0x4022U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                | (0x4083U == (0xf08fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize = 2U;
    } else if (((((((0xf008U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) 
                    | (0xf006U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                   | (0xf009U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                  | (0xf00aU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                 | (0xf00bU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) 
                | (0xf007U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))))) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize 
            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__fpsize;
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_val 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_rounded;
    vlSelf->simtop__DOT__core__DOT__fpu_out_wdata = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_rounded;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__invalid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_invalid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__invalid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_invalid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_invalid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_invalid;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid) {
        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_exp 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_exp;
                    }
                } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_exp 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_exp;
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_is_snan 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_nan) 
           & (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frl 
              >> 0x16U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_sign;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid) {
        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_exp 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_exp;
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_exp 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_exp;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_exp 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_exp;
                }
            }
            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_exp 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_exp;
                }
            } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_exp 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_exp;
            }
        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_exp 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_exp;
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_exp 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_exp;
            }
        }
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_exp 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_exp;
    } else {
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_exp 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_exp;
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__x_exp 
        = (0x3ffU & (VL_EXTENDS_II(10,9, (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_exp)) 
                     + VL_EXTENDS_II(10,9, (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_exp))));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__exp_frac_eq 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__exp_eq) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__frac_eq));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__exp_frac_gt 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__exp_gt) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__frac_gt));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_frac 
        = (0x7fffffffffffULL & ((1U & (IData)((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__x_frac 
                                               >> 0x2fU)))
                                 ? vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__x_frac
                                 : (0x7ffffffffffeULL 
                                    & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__x_frac 
                                       << 1U))));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__o_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_unordered 
        = (((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_nan) 
            | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_nan)) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_i_valid));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_is_snan 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_nan) 
           & (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frh 
              >> 0x16U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__o_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__o_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_inf;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid) {
        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_nan 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_nan;
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_zero 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_zero;
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_inf 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_inf;
                    }
                } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_nan 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_nan;
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_zero 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_zero;
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_inf 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_inf;
                }
            }
        }
        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_nan 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_nan;
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_nan 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_nan;
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_zero 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_zero;
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_zero 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_zero;
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_inf 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_inf;
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_inf 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_inf;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_nan 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_nan;
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_zero 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_zero;
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_inf 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_inf;
                }
            }
            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_nan 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_nan;
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_zero 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_zero;
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_inf 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_inf;
                }
            } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_nan 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_nan;
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_zero 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_zero;
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_inf 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_inf;
            }
        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_nan 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_nan;
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_nan 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_nan;
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_zero 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_zero;
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_zero 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_zero;
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_inf 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_inf;
                vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_inf 
                    = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_inf;
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__shifted 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_shifted;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_shifted 
        = (0x3ffffffU & ((0x1aU <= (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__neg_exp_diff))
                          ? (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                             >> 0x19U) : ((0x3fffffeU 
                                           & (((0x1000000U 
                                                | (0xffffffU 
                                                   & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_frac 
                                                      >> 1U))) 
                                               >> (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__shamt_bounded)) 
                                              << 1U)) 
                                          | ((0x19U 
                                              >= (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__shamt_bounded)) 
                                             & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual 
                                                >> (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__shamt_bounded))))));
    if (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__swap_operand) {
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__aa_frac_norm 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__bb_frac_norm 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_shifted;
    } else {
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__aa_frac_norm 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__bb_frac_norm 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_shifted;
    }
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__ltu 
        = (1U & (IData)((vlSelf->simtop__DOT__core__DOT__mtu1__DOT__subs 
                         >> 0x20U)));
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__ltu 
        = (1U & (IData)((vlSelf->simtop__DOT__core__DOT__mtu0__DOT__subs 
                         >> 0x20U)));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_8 
        = ((8U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)
            ? (vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_4 
               << 8U) : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_4);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_2 
        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_right))
            ? (((- (IData)((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_sign))) 
                << 0x1eU) | (vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_1 
                             >> 2U)) : vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_csr_tonly 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_tonly;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_csr_wen 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wen;
    vlSelf->simtop__DOT__core__DOT__e2_csr_wen = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_tonly)) 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wen));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_wen 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_wen;
    vlSelf->simtop__DOT__core__DOT__e2_p0_waltbank = 0U;
    vlSelf->simtop__DOT__core__DOT__e2_p1_waltbank = 0U;
    vlSelf->simtop__DOT__core__DOT__e2_p1_wdst = vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wdst;
    vlSelf->simtop__DOT__core__DOT__e2_p0_wdst = vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wdst;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_nack 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_nack;
    vlSelf->trace_valid1 = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_nack)) 
                            & (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_valid));
    vlSelf->simtop__DOT__core__DOT__e2_flush0 = ((IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_nack) 
                                                 & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                                                    | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen)));
    vlSelf->simtop__DOT__core__DOT__replay_dcache_miss 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_nack;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) {
        if ((0x8000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 0xcU)))) {
                        if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_write_t 
                                    = (IData)((0U == 
                                               (0x300U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))));
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 9U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 8U)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough_csr = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                    }
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                    }
                                }
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                 >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_fpul_wen = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                     >> 0xcU)))) {
                    if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 0U;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 0xbU)))) {
                        if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 8U)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                 >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 0xbU)))) {
                        if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 9U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 8U)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                          >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_write_t = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough_csr = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_fpul_wen = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                                }
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                            }
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                    }
                                }
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                            }
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                    }
                                }
                            }
                        } else {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                    }
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                }
                            }
                        } else {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 0U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                            }
                        }
                    }
                }
            }
            if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                          >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xcU)))) {
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough_csr = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                 >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                 >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                 >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough_csr = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough_csr = 1U;
                            }
                        }
                    }
                }
            }
            if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                      >> 0xfU)))) {
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 0xcU)))) {
                        if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                                    }
                                                }
                                            }
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__waltbank = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__waltbank = 1U;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__waltbank = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__waltbank = 1U;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__waltbank = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__waltbank = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__waltbank = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__waltbank = 1U;
                                    }
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 4U)))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                    }
                                }
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                          >> 0xeU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 0xcU)))) {
                        if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__dm_req_writeback = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__dm_req_flush = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__dm_req_invalidate = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__dm_req_prefetch = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__dm_req_nofill = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_writeback 
            = vlSelf->simtop__DOT__core__DOT__dm_req_writeback;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_invalidate 
            = vlSelf->simtop__DOT__core__DOT__dm_req_invalidate;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_nofill 
            = vlSelf->simtop__DOT__core__DOT__dm_req_nofill;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_fpul_wen 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_fpul_wen;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_flush 
            = vlSelf->simtop__DOT__core__DOT__dm_req_flush;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_prefetch 
            = vlSelf->simtop__DOT__core__DOT__dm_req_prefetch;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wpending 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_alt_wdst 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wen 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_wen;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wdst 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst;
    } else {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_writeback 
            = vlSelf->simtop__DOT__core__DOT__dm_req_writeback;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_invalidate 
            = vlSelf->simtop__DOT__core__DOT__dm_req_invalidate;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_nofill 
            = vlSelf->simtop__DOT__core__DOT__dm_req_nofill;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_fpul_wen 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_fpul_wen;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_flush 
            = vlSelf->simtop__DOT__core__DOT__dm_req_flush;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_prefetch 
            = vlSelf->simtop__DOT__core__DOT__dm_req_prefetch;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wpending 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_alt_wdst 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wen 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_wen;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wdst 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst;
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wfp 
        = vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_valid) {
        if (((((((((9U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw)) 
                   | (0x6003U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw)))) 
                  | ((0x8800U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) 
                     | (0x3000U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))))) 
                 | ((0x4011U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) 
                    | (0x3002U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))))) 
                | (0x3003U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw)))) 
               | ((0x4015U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) 
                  | (0x3006U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))))) 
              | (0x3007U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw)))) 
             | (0x200cU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))))) {
            if ((9U != (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) {
                if ((0x6003U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw)))) {
                    vlSelf->simtop__DOT__core__DOT__e1_mtu0_wen = 1U;
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__out_wen 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu0_wen;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_flags 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_exu_flags;
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_t 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_t 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift 
        = ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
            << 1U) | (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__carry 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__use_carry)
            ? (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t))
            : 0ULL);
    vlSelf->simtop__DOT__core__DOT__e1_bru_taken = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_bru_valid) {
        if (((((((((0x8b00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))) 
                   | (0x8f00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
                  | (0x8900U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
                 | (0x8d00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
                | (0xa000U == (0xf000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
               | (0xb000U == (0xf000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
              | (0x402bU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) 
             | (0x400bU == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))))) {
            vlSelf->simtop__DOT__core__DOT__e1_bru_taken 
                = (1U & ((0x8b00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))
                          ? (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t))
                          : ((0x8f00U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))
                              ? (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t))
                              : ((0x8900U == (0xff00U 
                                              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))
                                  ? (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t)
                                  : ((0x8d00U != (0xff00U 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))) 
                                     | (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t))))));
        } else if ((0x23U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
            vlSelf->simtop__DOT__core__DOT__e1_bru_taken = 1U;
        } else if ((3U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
            vlSelf->simtop__DOT__core__DOT__e1_bru_taken = 1U;
        } else if ((0xbU == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))) {
            vlSelf->simtop__DOT__core__DOT__e1_bru_taken = 1U;
        } else if ((0x2bU == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))) {
            vlSelf->simtop__DOT__core__DOT__e1_bru_taken = 1U;
        }
    }
    vlSelf->simtop__DOT__core__DOT__csr_rdata = ((8U 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                     ? 0U
                                                     : vlSelf->simtop__DOT__core__DOT__csr_fpul))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                     ? vlSelf->simtop__DOT__core__DOT__csr_fpscr
                                                     : vlSelf->simtop__DOT__core__DOT__csr_pr)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                     ? vlSelf->simtop__DOT__core__DOT__csr_macl
                                                     : vlSelf->simtop__DOT__core__DOT__csr_mach)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                     ? 0U
                                                     : vlSelf->simtop__DOT__core__DOT__csr_sgr)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                     ? vlSelf->simtop__DOT__core__DOT__csr_dbr
                                                     : vlSelf->simtop__DOT__core__DOT__csr_spc))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                     ? vlSelf->simtop__DOT__core__DOT__csr_ssr
                                                     : vlSelf->simtop__DOT__core__DOT__csr_vbr)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id))
                                                     ? vlSelf->simtop__DOT__core__DOT__csr_gbr
                                                     : vlSelf->simtop__DOT__core__DOT__e1_csr_sr))));
    vlSelf->simtop__DOT__core__DOT__dm_req_wen = vlSelf->simtop__DOT__dm_req_wen;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) {
        if ((0x8000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
            if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen 
                                        = simtop__DOT__core__DOT__lsu__DOT____VdfgExtracted_h3810217f__0;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen 
                                    = simtop__DOT__core__DOT__lsu__DOT____VdfgExtracted_h3810217f__0;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_alt_wen 
        = vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen;
    vlSelf->simtop__DOT__core__DOT__e1_p1_wpending = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_p0_wpending = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid) {
        if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_sel) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wpending 
                = vlSelf->simtop__DOT__core__DOT__e1_exu_wpending;
        }
        vlSelf->simtop__DOT__core__DOT__e1_p0_wdst = 0U;
        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_sel)))) {
            vlSelf->simtop__DOT__core__DOT__e1_p0_wpending 
                = vlSelf->simtop__DOT__core__DOT__e1_exu_wpending;
            vlSelf->simtop__DOT__core__DOT__e1_p0_wdst 
                = vlSelf->simtop__DOT__core__DOT__e1_exu_wdst;
        }
    } else {
        vlSelf->simtop__DOT__core__DOT__e1_p0_wdst = 0U;
    }
    vlSelf->simtop__DOT__core__DOT__e1_p1_wdst = 0U;
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_mtu1_wen))) {
        vlSelf->simtop__DOT__core__DOT__e1_p1_wpending 
            = vlSelf->simtop__DOT__core__DOT__e1_mtu1_wpending;
    }
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid) {
        if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_sel) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wdst 
                = vlSelf->simtop__DOT__core__DOT__e1_exu_wdst;
        }
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_mtu1_wen))) {
        vlSelf->simtop__DOT__core__DOT__e1_p1_wdst 
            = vlSelf->simtop__DOT__core__DOT__e1_mtu1_wdst;
    }
    vlSelf->simtop__DOT__core__DOT__id_instr1_npc = 
        (2U | (0xfffffffcU & vlSelf->simtop__DOT__core__DOT__if_pc_plus4));
    vlSelf->simtop__DOT__core__DOT__id_instr0_npc = 
        (0xfffffffcU & vlSelf->simtop__DOT__core__DOT__if_pc_plus4);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__i_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__i_tag;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_tag;
    if ((0U == (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4_zext_shifted 
            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize_bytes = 1U;
    } else if ((1U == (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4_zext_shifted 
            = ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4) 
               << 1U);
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize_bytes = 2U;
    } else if ((2U == (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4_zext_shifted 
            = ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4) 
               << 2U);
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize_bytes = 4U;
    } else {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4_zext_shifted = 0U;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize_bytes = 8U;
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_wdata 
        = vlSelf->simtop__DOT__core__DOT__fpu_out_wdata;
    vlSelf->simtop__DOT__core__DOT__fprf_wdata0 = vlSelf->simtop__DOT__core__DOT__fpu_out_wdata;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_is_snan 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_nan) 
           & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_frac 
              >> 0x16U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_exp 
        = (0x3ffU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__x_exp) 
                     + ((1U & (IData)((vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__x_frac 
                                       >> 0x2fU))) ? 1U
                         : 0U)));
    __Vtableidx1 = (((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__exp_frac_gt) 
                     << 7U) | (((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__exp_frac_eq) 
                                << 6U) | (((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_inf) 
                                           << 5U) | 
                                          (((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_inf) 
                                            << 4U) 
                                           | (((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_sign) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_sign) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_zero) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_zero))))))));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__cmp_eq 
        = Vsimtop__ConstPool__TABLE_hba7c879b_0[__Vtableidx1];
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__cmp_gt 
        = Vsimtop__ConstPool__TABLE_hff42c4ae_0[__Vtableidx1];
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__x_frac_norm 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__unordered 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_unordered;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_invalid 
        = (((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_is_snan) 
            | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_is_snan)) 
           & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_i_valid) 
              & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_v_en)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_is_snan 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_nan) 
           & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_frac 
              >> 0x16U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT____VdfgTmp_hecdd0ec1__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_zero) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_zero));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT____VdfgTmp_hf5adef39__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_inf) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_inf));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__shifted 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_shifted;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__lt = 
        (((IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT____VdfgTmp_h9fa499bc__0) 
          ^ (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph 
             >> 0x1fU)) ? (IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT____VdfgTmp_h9fa499bc__0)
          : (IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__ltu));
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__lt = 
        (((IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT____VdfgTmp_h9fa499bc__0) 
          ^ (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph 
             >> 0x1fU)) ? (IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT____VdfgTmp_h9fa499bc__0)
          : (IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__ltu));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter 
        = ((0x10U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)
            ? (vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_8 
               << 0x10U) : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_8);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_4 
        = ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_right))
            ? (((- (IData)((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_sign))) 
                << 0x1cU) | (vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_2 
                             >> 4U)) : vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_2);
    vlSelf->simtop__DOT__core__DOT__e2_flags_wen = 
        ((IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wen) 
         & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_csr_id)));
    if ((((IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_valid) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wen)) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp)))) {
        if ((1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                   | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen)))) {
            vlSelf->simtop__DOT__core__DOT__e2_p0_waltbank 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_waltbank;
        }
    }
    vlSelf->simtop__DOT__core__DOT__rf_wbank_p0 = ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_md) 
                                                   & ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_rb) 
                                                      ^ (IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_waltbank)));
    if ((((IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_valid) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wen)) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp)))) {
        if ((1U & (~ ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                      | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen))))) {
            vlSelf->simtop__DOT__core__DOT__e2_p1_waltbank 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_waltbank;
        }
    }
    vlSelf->simtop__DOT__core__DOT__rf_wbank_p1 = ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_md) 
                                                   & ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_rb) 
                                                      ^ (IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_waltbank)));
    if ((((IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_valid) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wen)) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp)))) {
        if ((1U & (~ ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                      | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen))))) {
            vlSelf->simtop__DOT__core__DOT__e2_p1_wdst 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdst;
        }
        vlSelf->trace_wdst1 = vlSelf->simtop__DOT__core__DOT__e2_p1_wdst;
        if ((1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                   | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen)))) {
            vlSelf->simtop__DOT__core__DOT__e2_p0_wdst 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdst;
        }
    } else {
        vlSelf->trace_wdst1 = vlSelf->simtop__DOT__core__DOT__e2_p1_wdst;
    }
    vlSelf->trace_wdst0 = vlSelf->simtop__DOT__core__DOT__e2_p0_wdst;
    vlSelf->simtop__DOT__trace_valid1 = vlSelf->trace_valid1;
    vlSelf->trace_valid0 = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_flush0)) 
                            & (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_valid));
    vlSelf->simtop__DOT__core__DOT__e2_p0_wen = vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wen;
    if ((((IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_valid) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wen)) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp)))) {
        if ((1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                   | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen)))) {
            vlSelf->simtop__DOT__core__DOT__e2_p0_wen 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_wen;
        }
    }
    if (vlSelf->simtop__DOT__core__DOT__e2_flush0) {
        vlSelf->simtop__DOT__core__DOT__e2_p0_wen = 0U;
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_flush 
        = vlSelf->simtop__DOT__core__DOT__replay_dcache_miss;
    vlSelf->simtop__DOT__core__DOT__e1_flush = vlSelf->simtop__DOT__core__DOT__replay_dcache_miss;
    vlSelf->simtop__DOT__core__DOT__e1_flags_restore_en 
        = vlSelf->simtop__DOT__core__DOT__replay_dcache_miss;
    vlSelf->simtop__DOT__core__DOT__e2_flush1 = vlSelf->simtop__DOT__core__DOT__replay_dcache_miss;
    vlSelf->dm_req_valid = 0U;
    vlSelf->simtop__DOT__core__DOT__e2_p1_wen = vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wen;
    if ((((IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_valid) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wen)) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp)))) {
        if ((1U & (~ ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                      | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen))))) {
            vlSelf->simtop__DOT__core__DOT__e2_p1_wen 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_wen;
        }
    }
    vlSelf->simtop__DOT__core__DOT__e1_p1_wen = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid) {
        if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_sel) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wen 
                = vlSelf->simtop__DOT__core__DOT__e1_exu_wen;
        }
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_mtu1_wen))) {
        vlSelf->simtop__DOT__core__DOT__e1_p1_wen = vlSelf->simtop__DOT__core__DOT__e1_mtu1_wen;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_mtu0_wen))) {
        vlSelf->simtop__DOT__core__DOT__e1_p0_wpending 
            = vlSelf->simtop__DOT__core__DOT__e1_mtu0_wpending;
        vlSelf->simtop__DOT__core__DOT__e1_p0_wdst 
            = vlSelf->simtop__DOT__core__DOT__e1_mtu0_wdst;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp)))) {
        if ((1U & (~ ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel)) 
                      | (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen))))) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wpending 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending;
            vlSelf->simtop__DOT__core__DOT__e1_p1_wdst 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst;
            vlSelf->simtop__DOT__core__DOT__e1_p1_wen 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wen;
        }
        if ((1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel)) 
                   | (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen)))) {
            vlSelf->simtop__DOT__core__DOT__e1_p0_wpending 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending;
            vlSelf->simtop__DOT__core__DOT__e1_p0_wdst 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst;
        }
        if (vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wdst 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst;
            vlSelf->simtop__DOT__core__DOT__e1_p1_wen 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen;
        }
    }
    vlSelf->simtop__DOT__core__DOT__e1_p0_wen = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid) {
        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_sel)))) {
            vlSelf->simtop__DOT__core__DOT__e1_p0_wen 
                = vlSelf->simtop__DOT__core__DOT__e1_exu_wen;
        }
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_mtu0_wen))) {
        vlSelf->simtop__DOT__core__DOT__e1_p0_wen = vlSelf->simtop__DOT__core__DOT__e1_mtu0_wen;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp)))) {
        if ((1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel)) 
                   | (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen)))) {
            vlSelf->simtop__DOT__core__DOT__e1_p0_wen 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wen;
        }
    }
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) {
        if (((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load) 
             | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_store))) {
            vlSelf->dm_req_valid = 1U;
        }
    }
    if (vlSelf->simtop__DOT__core__DOT__replay_dcache_miss) {
        vlSelf->dm_req_valid = 0U;
        vlSelf->simtop__DOT__core__DOT__e2_p1_wen = 0U;
        vlSelf->simtop__DOT__core__DOT__e1_p1_wen = 0U;
        vlSelf->simtop__DOT__core__DOT__e1_p0_wen = 0U;
    }
    vlSelf->simtop__DOT__core__DOT__rst = vlSelf->simtop__DOT__rst_reg;
    vlSelf->im_req_valid = (1U & (~ (IData)(vlSelf->simtop__DOT__rst_reg)));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__adder 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)) 
                             + ((QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph)) 
                                + vlSelf->simtop__DOT__core__DOT__exu__DOT__carry)));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__sub = 
        (0x1ffffffffULL & (1ULL + ((~ ((QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)) 
                                       + vlSelf->simtop__DOT__core__DOT__exu__DOT__carry)) 
                                   + ((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__is_neg)
                                       ? 0ULL : (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph))))));
    vlSelf->simtop__DOT__core__DOT__bru__DOT__out_taken 
        = vlSelf->simtop__DOT__core__DOT__e1_bru_taken;
    vlSelf->simtop__DOT__core__DOT__replay_mispredict 
        = vlSelf->simtop__DOT__core__DOT__e1_bru_taken;
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata 
        = vlSelf->simtop__DOT__core__DOT__csr_rdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_gbr 
        = (vlSelf->simtop__DOT__core__DOT__csr_rdata 
           + vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0_gbr 
        = (vlSelf->simtop__DOT__core__DOT__csr_rdata 
           + vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_r0);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_wen 
        = vlSelf->simtop__DOT__core__DOT__dm_req_wen;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_npc 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__in_npc 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
    vlSelf->simtop__DOT__core__DOT__id_flush1 = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_bru_taken) 
                                                 & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_bru_delayslot)) 
                                                    | ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_sel) 
                                                       | (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_valid))));
    vlSelf->simtop__DOT__core__DOT__id_flush0 = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_bru_taken) 
                                                 & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_bru_delayslot)) 
                                                    | (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_sel))));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_imm4 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl 
           + (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4_zext_shifted));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl 
           + vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize_bytes);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh_inc 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph 
           + vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize_bytes);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph 
           - vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize_bytes);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wdata0 
        = vlSelf->simtop__DOT__core__DOT__fprf_wdata0;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__x_exp_norm 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_eq 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_i_valid) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__cmp_eq));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_gt 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_i_valid) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__cmp_gt));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__invalid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_invalid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__invalid_int 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_is_snan) 
           | ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_is_snan) 
              | ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT____VdfgTmp_hf5adef39__0) 
                 & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT____VdfgTmp_hecdd0ec1__0))));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum 
        = (0x7ffffffU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__same_sign)
                          ? (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__aa_frac_norm 
                             + vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__bb_frac_norm)
                          : (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__aa_frac_norm 
                             - vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__bb_frac_norm)));
    vlSelf->simtop__DOT__core__DOT__e1_mtu1_t = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_valid) {
        if (((((((((9U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw)) 
                   | (0x6003U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw)))) 
                  | ((0x8800U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) 
                     | (0x3000U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))))) 
                 | ((0x4011U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) 
                    | (0x3002U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))))) 
                | (0x3003U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw)))) 
               | ((0x4015U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) 
                  | (0x3006U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))))) 
              | (0x3007U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw)))) 
             | (0x200cU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))))) {
            if ((9U != (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) {
                if ((0x6003U != (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw)))) {
                    vlSelf->simtop__DOT__core__DOT__e1_mtu1_t 
                        = (((0x8800U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) 
                            | (0x3000U == (0xf00fU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))))
                            ? (IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__eq)
                            : (((0x4011U == (0xf0ffU 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) 
                                | (0x3002U == (0xf00fU 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))))
                                ? ((IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__ltu) 
                                   | (IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__eq))
                                : ((0x3003U == (0xf00fU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw)))
                                    ? ((IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__lt) 
                                       | (IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__eq))
                                    : (((0x4015U == 
                                         (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) 
                                        | (0x3006U 
                                           == (0xf00fU 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))))
                                        ? (IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__ltu)
                                        : ((0x3007U 
                                            == (0xf00fU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw)))
                                            ? (IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__lt)
                                            : (((((vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl 
                                                   >> 0x18U) 
                                                  == 
                                                  (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph 
                                                   >> 0x18U)) 
                                                 | ((0xffU 
                                                     & (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl 
                                                        >> 0x10U)) 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph 
                                                        >> 0x10U)))) 
                                                | ((0xffU 
                                                    & (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl 
                                                       >> 8U)) 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph 
                                                       >> 8U)))) 
                                               | ((0xffU 
                                                   & vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl) 
                                                  == 
                                                  (0xffU 
                                                   & vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph))))))));
                }
            }
        } else if (((0xc800U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) 
                    | (0x2008U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))))) {
            vlSelf->simtop__DOT__core__DOT__e1_mtu1_t 
                = (0U == (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl 
                          & vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph));
        } else if ((8U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) {
            vlSelf->simtop__DOT__core__DOT__e1_mtu1_t = 0U;
        } else if ((0x18U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) {
            vlSelf->simtop__DOT__core__DOT__e1_mtu1_t = 1U;
        }
    }
    vlSelf->simtop__DOT__core__DOT__e1_mtu0_t = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_valid) {
        if (((((((((9U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw)) 
                   | (0x6003U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw)))) 
                  | ((0x8800U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) 
                     | (0x3000U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))))) 
                 | ((0x4011U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) 
                    | (0x3002U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))))) 
                | (0x3003U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw)))) 
               | ((0x4015U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) 
                  | (0x3006U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))))) 
              | (0x3007U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw)))) 
             | (0x200cU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))))) {
            if ((9U != (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) {
                if ((0x6003U != (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw)))) {
                    vlSelf->simtop__DOT__core__DOT__e1_mtu0_t 
                        = (((0x8800U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) 
                            | (0x3000U == (0xf00fU 
                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))))
                            ? (IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__eq)
                            : (((0x4011U == (0xf0ffU 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) 
                                | (0x3002U == (0xf00fU 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))))
                                ? ((IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__ltu) 
                                   | (IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__eq))
                                : ((0x3003U == (0xf00fU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw)))
                                    ? ((IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__lt) 
                                       | (IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__eq))
                                    : (((0x4015U == 
                                         (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) 
                                        | (0x3006U 
                                           == (0xf00fU 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))))
                                        ? (IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__ltu)
                                        : ((0x3007U 
                                            == (0xf00fU 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw)))
                                            ? (IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__lt)
                                            : (((((vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl 
                                                   >> 0x18U) 
                                                  == 
                                                  (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph 
                                                   >> 0x18U)) 
                                                 | ((0xffU 
                                                     & (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl 
                                                        >> 0x10U)) 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph 
                                                        >> 0x10U)))) 
                                                | ((0xffU 
                                                    & (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl 
                                                       >> 8U)) 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph 
                                                       >> 8U)))) 
                                               | ((0xffU 
                                                   & vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl) 
                                                  == 
                                                  (0xffU 
                                                   & vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph))))))));
                }
            }
        } else if (((0xc800U == (0xff00U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) 
                    | (0x2008U == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))))) {
            vlSelf->simtop__DOT__core__DOT__e1_mtu0_t 
                = (0U == (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl 
                          & vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph));
        } else if ((8U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) {
            vlSelf->simtop__DOT__core__DOT__e1_mtu0_t = 0U;
        } else if ((0x18U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) {
            vlSelf->simtop__DOT__core__DOT__e1_mtu0_t = 1U;
        }
    }
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_8 
        = ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_right))
            ? (((- (IData)((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_sign))) 
                << 0x18U) | (vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_4 
                             >> 8U)) : vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_4);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wbank0 
        = vlSelf->simtop__DOT__core__DOT__rf_wbank_p0;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wbank1 
        = vlSelf->simtop__DOT__core__DOT__rf_wbank_p1;
    vlSelf->simtop__DOT__core__DOT__rf_wdst1 = vlSelf->trace_wdst1;
    vlSelf->simtop__DOT__trace_wdst1 = vlSelf->trace_wdst1;
    vlSelf->simtop__DOT__core__DOT__rf_wdst0 = vlSelf->trace_wdst0;
    vlSelf->simtop__DOT__trace_wdst0 = vlSelf->trace_wdst0;
    vlSelf->simtop__DOT__core__DOT__trace_valid1 = vlSelf->simtop__DOT__trace_valid1;
    vlSelf->simtop__DOT__trace_valid0 = vlSelf->trace_valid0;
    vlSelf->trace_wen0 = vlSelf->simtop__DOT__core__DOT__e2_p0_wen;
    vlSelf->simtop__DOT__pvr_rd = ((~ (IData)(vlSelf->dm_req_wen)) 
                                   & (IData)(vlSelf->dm_req_valid));
    vlSelf->simtop__DOT__pvr_wr = ((IData)(vlSelf->dm_req_valid) 
                                   & (IData)(vlSelf->dm_req_wen));
    vlSelf->simtop__DOT__dm_req_valid = vlSelf->dm_req_valid;
    vlSelf->trace_wen1 = vlSelf->simtop__DOT__core__DOT__e2_p1_wen;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h30afbd87__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wpending));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h2883dc79__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wpending));
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rst = vlSelf->simtop__DOT__core__DOT__rst;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rst 
        = vlSelf->simtop__DOT__core__DOT__rst;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rst = vlSelf->simtop__DOT__core__DOT__rst;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__rst = vlSelf->simtop__DOT__core__DOT__rst;
    vlSelf->simtop__DOT__core__DOT__if_valid = vlSelf->im_req_valid;
    vlSelf->simtop__DOT__im_req_valid = vlSelf->im_req_valid;
    vlSelf->simtop__DOT__pvr__DOT__reset_n = vlSelf->im_req_valid;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_csr_rdata 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val = 0U;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata = 0ULL;
    vlSelf->simtop__DOT__core__DOT__id_instr1_valid 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__id_flush1)) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__id_reg_valid));
    vlSelf->simtop__DOT__core__DOT__id_is_delayslot 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_bru_taken) 
           & ((~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_flush0) 
                  | (IData)(vlSelf->simtop__DOT__core__DOT__id_flush1))) 
              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_bru_delayslot)));
    vlSelf->simtop__DOT__core__DOT__id_instr0_valid 
        = ((~ ((vlSelf->simtop__DOT__core__DOT__id_reg_pc 
                >> 1U) | (IData)(vlSelf->simtop__DOT__core__DOT__id_flush0))) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__id_reg_valid));
    vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) {
        if ((0x8000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                    ? 0x3f800000U
                                                    : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr);
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? 0U
                                                : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr);
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                    }
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                    ? 
                                                   (0x7fffffffU 
                                                    & vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr)
                                                    : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr);
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? (
                                                   ((~ 
                                                     (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr 
                                                      >> 0x1fU)) 
                                                    << 0x1fU) 
                                                   | (0x7fffffffU 
                                                      & vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr))
                                                : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr);
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                    }
                                }
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr;
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                            = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                            ? vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata
                                            : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr);
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                        = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr));
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                     >> 0xcU)))) {
                    if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 9U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 8U)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                                }
                            }
                            if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                        ? ((QData)((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_oldval)) 
                                           | (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl)))
                                        : ((QData)((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_oldval)) 
                                           ^ (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl))));
                            } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = ((QData)((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_oldval)) 
                                       & (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl)));
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                         >> 0xaU)))) {
                        if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 8U)))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_r0));
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_r0));
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                 >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 0xbU)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 0xaU)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 9U)))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_r0));
                            }
                        }
                    }
                }
            }
        } else if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                          >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xcU)))) {
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                      ? (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl))
                                                      : (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata)));
                                            }
                                        }
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh_inc;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                                }
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                        = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                                }
                                            }
                                        }
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh_inc;
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                            }
                                        }
                                    }
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh_inc;
                                            }
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                        }
                                    }
                                }
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh_inc;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                    }
                                }
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata));
                                            }
                                        }
                                    }
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh_inc;
                                            }
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                        }
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata));
                                        }
                                    }
                                }
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh_inc;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                    }
                                }
                            }
                        } else {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata));
                                        }
                                    }
                                }
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh_inc;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                    }
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata));
                                    }
                                }
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh_inc;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                }
                            }
                        } else {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                            = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata));
                                    }
                                }
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh_inc;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                            = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                    = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                        ? 0xffU : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph);
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (0x80ULL 
                                               | (QData)((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_oldval)));
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata));
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh_inc;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                        = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata));
                                }
                            }
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh_inc;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                            }
                        }
                    }
                }
            }
            if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                          >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xcU)))) {
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                 >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                        }
                                    }
                                }
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                 >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                        }
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                            = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                    }
                                }
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                        = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                        }
                    }
                }
            } else if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
            } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                        = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                        = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                         >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                        = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_r0));
                            }
                        }
                    }
                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                        = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                         >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                        = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                        = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                     >> 3U)))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                        }
                    }
                }
            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                        = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                         >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                        = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                        = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                     >> 3U)))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                 >> 3U)))) {
                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                        }
                    } else {
                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                            = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
                    }
                }
            }
        }
    }
}
