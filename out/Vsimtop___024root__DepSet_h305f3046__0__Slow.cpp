// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimtop.h for the primary calling header

#include "verilated.h"

#include "Vsimtop__Syms.h"
#include "Vsimtop___024root.h"

VL_ATTR_COLD void Vsimtop___024root___eval_static(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsimtop___024root___eval_initial__TOP(Vsimtop___024root* vlSelf);

VL_ATTR_COLD void Vsimtop___024root___eval_initial(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_initial\n"); );
    // Body
    Vsimtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__im_req_valid__0 
        = vlSelf->im_req_valid;
}

VL_ATTR_COLD void Vsimtop___024root___eval_initial__TOP(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_altbank = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_altbank = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_altbank = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_write_altbank = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu_out_fpul_wen = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu_out_fpul = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu_out_wen = 1U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 2U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 3U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 4U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 5U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 6U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 7U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 8U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 9U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0xaU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0xbU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0xcU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0xdU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0xeU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0xfU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0x10U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0x11U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0x12U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0x13U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0x14U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0x15U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0x16U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0x17U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0x18U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0x19U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = 0x1aU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 2U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 3U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 4U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 5U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 6U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 7U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 8U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 9U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0xaU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0xbU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0xcU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0xdU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0xeU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0xfU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0x10U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0x11U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0x12U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0x13U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0x14U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0x15U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0x16U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0x17U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0x18U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0x19U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = 0x1aU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 1U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 2U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 3U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 4U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 5U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 6U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 7U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 8U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 9U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0xaU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0xbU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0xcU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0xdU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0xeU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0xfU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x10U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x11U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x12U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x13U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x14U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x15U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x16U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x17U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x18U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x19U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x1aU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 1U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 2U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 3U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 4U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 5U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 6U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 7U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 8U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 9U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0xaU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0xbU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0xcU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0xdU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0xeU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0xfU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x10U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x11U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x12U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x13U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x14U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x15U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x16U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x17U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x18U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x19U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = 0x1aU;
    vlSelf->simtop__DOT__core__DOT__rf_rsrc[4U] = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_exu_wpending = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_mtu0_wpending = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_mtu1_wpending = 0U;
    vlSelf->simtop__DOT__core__DOT__im_invalidate_req = 0U;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__two_volume = 0U;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__test_float = 0x4212c0e0U;
    vlSelf->simtop__DOT__core__DOT__im_invalidate_resp = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_sign = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_exp = 0x181U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_frac = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_zero = 1U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_inf = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__i_exp = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__is_exp_zero = 1U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_sign = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_exp = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_frac = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_zero = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_inf = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__i_exp = 0x7fU;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__is_frac_zero = 1U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__i = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__i = 0x3f800000U;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__FPU_PARAM_CFG = 0x27df77U;
}

VL_ATTR_COLD void Vsimtop___024root___eval_final(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsimtop___024root___eval_triggers__stl(Vsimtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimtop___024root___dump_triggers__stl(Vsimtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vsimtop___024root___eval_stl(Vsimtop___024root* vlSelf);

VL_ATTR_COLD void Vsimtop___024root___eval_settle(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vsimtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x7d0U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vsimtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("genrtl/simtop.v", 27, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vsimtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimtop___024root___dump_triggers__stl(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimtop___024root___stl_sequent__TOP__0(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ simtop__DOT__core__DOT__exu__DOT____VdfgTmp_hcbe31d0b__0;
    simtop__DOT__core__DOT__exu__DOT____VdfgTmp_hcbe31d0b__0 = 0;
    CData/*0:0*/ simtop__DOT__core__DOT__lsu__DOT____VdfgExtracted_h3810217f__0;
    simtop__DOT__core__DOT__lsu__DOT____VdfgExtracted_h3810217f__0 = 0;
    CData/*0:0*/ simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0;
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT____Vlvbound_ha588f6e9__0 = 0;
    CData/*0:0*/ simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0;
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT____Vlvbound_ha588f6e9__0 = 0;
    // Body
    vlSelf->simtop__DOT__rst = vlSelf->rst;
    vlSelf->simtop__DOT__dm_resp_rdata = vlSelf->dm_resp_rdata;
    vlSelf->simtop__DOT__core__DOT__e2_p1_wpending 
        = vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wpending;
    vlSelf->simtop__DOT__core__DOT__e2_p0_wpending 
        = vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wpending;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_ls_use_altbank 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_altbank;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_write_altbank 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_altbank;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_ls_use_altbank 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_altbank;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_write_altbank 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_write_altbank;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_opl 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_oph 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph;
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_valid;
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw;
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_opl 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_opl;
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_oph 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_oph;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_valid;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__in_opl 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__in_oph 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_valid;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__in_opl 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__in_oph 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_r0 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_r0;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_fpr 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_opl 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_oph 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_amo = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr 
        = vlSelf->simtop__DOT__core__DOT__csr_fpscr;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_raw;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_fop 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_fpul 
        = vlSelf->simtop__DOT__core__DOT__fpu_out_fpul;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_fpul_wen 
        = vlSelf->simtop__DOT__core__DOT__fpu_out_fpul_wen;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_wen 
        = vlSelf->simtop__DOT__core__DOT__fpu_out_wen;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__o_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__o_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__o_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__o_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__o_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__o_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__o_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__o_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__o_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__o_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_tag;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__i_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_i_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__i_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_i_tag;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_nan;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_trig 
        = vlSelf->simtop__DOT__pvr__DOT__ra_trig;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_rd 
        = vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_wr 
        = vlSelf->simtop__DOT__pvr__DOT__ra_vram_wr;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_addr 
        = vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_control 
        = vlSelf->simtop__DOT__pvr__DOT__ra_control;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__type_cnt 
        = vlSelf->simtop__DOT__pvr__DOT__type_cnt;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_opaque 
        = vlSelf->simtop__DOT__pvr__DOT__ra_opaque;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_opaque_mod 
        = vlSelf->simtop__DOT__pvr__DOT__ra_opaque_mod;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_trans 
        = vlSelf->simtop__DOT__pvr__DOT__ra_trans;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_trans_mod 
        = vlSelf->simtop__DOT__pvr__DOT__ra_trans_mod;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_puncht 
        = vlSelf->simtop__DOT__pvr__DOT__ra_puncht;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_entry_valid 
        = vlSelf->simtop__DOT__pvr__DOT__ra_entry_valid;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__opb_word 
        = vlSelf->simtop__DOT__pvr__DOT__opb_word;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__poly_addr 
        = vlSelf->simtop__DOT__pvr__DOT__poly_addr;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__render_poly 
        = vlSelf->simtop__DOT__pvr__DOT__render_poly;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__poly_drawn 
        = vlSelf->simtop__DOT__pvr__DOT__poly_drawn;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__opb_word 
        = vlSelf->simtop__DOT__pvr__DOT__opb_word;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__type_cnt 
        = vlSelf->simtop__DOT__pvr__DOT__type_cnt;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_addr 
        = vlSelf->simtop__DOT__pvr__DOT__poly_addr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__render_poly 
        = vlSelf->simtop__DOT__pvr__DOT__render_poly;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_rd 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_rd;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_wr 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_dout 
        = vlSelf->simtop__DOT__pvr__DOT____Vcellout__isp_parser_inst__isp_vram_dout;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_entry_valid 
        = vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_drawn 
        = vlSelf->simtop__DOT__pvr__DOT__poly_drawn;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__isp_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tsp_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tcw_word 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word;
    vlSelf->simtop__DOT__core__DOT__id_instr = vlSelf->im_resp_rdata;
    vlSelf->simtop__DOT__core__DOT__replay_icache_miss_pc 
        = vlSelf->simtop__DOT__core__DOT__id_reg_pc;
    vlSelf->simtop__DOT__core__DOT__e2_csr_wdst = vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_csr_id;
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpul 
        = vlSelf->simtop__DOT__core__DOT__csr_fpul;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__is_frac_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__is_exp_max 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__is_exp_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__is_exp_max 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_inf;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book_endian 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL 
                 >> 0x11U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__index_endian 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL 
                 >> 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__bank_bit 
        = (0x1fU & (vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL 
                    >> 8U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_selector 
        = (0x3fU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                    >> 0x15U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_array 
        = (4U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                  >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_quad_array 
        = (5U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                  >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__o_opb 
        = (3U & vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__TA_ALLOC_CTRL);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__om_opb 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__TA_ALLOC_CTRL 
                 >> 4U));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__t_opb 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__TA_ALLOC_CTRL 
                 >> 8U));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__tm_opb 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__TA_ALLOC_CTRL 
                 >> 0xcU));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__pt_opb 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__TA_ALLOC_CTRL 
                 >> 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__opb_mode 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__TA_ALLOC_CTRL 
                 >> 0x14U));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_write_t = 0U;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = 0U;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__waltbank = 0U;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 0U;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough_csr = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel) {
        vlSelf->simtop__DOT__core__DOT__e1_flags_restore 
            = vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_flags;
        vlSelf->simtop__DOT__core__DOT__replay_dcache_miss_pc 
            = vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_pc;
    } else {
        vlSelf->simtop__DOT__core__DOT__e1_flags_restore 
            = vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_flags;
        vlSelf->simtop__DOT__core__DOT__replay_dcache_miss_pc 
            = vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_pc;
    }
    vlSelf->simtop__DOT__boot_vector = vlSelf->boot_vector;
    vlSelf->simtop__DOT__im_resp_rdata = vlSelf->im_resp_rdata;
    vlSelf->simtop__DOT__im_resp_valid = vlSelf->im_resp_valid;
    vlSelf->simtop__DOT__vram_rd = vlSelf->vram_rd;
    vlSelf->simtop__DOT__vram_din = vlSelf->vram_din;
    vlSelf->simtop__DOT__v1_x = vlSelf->v1_x;
    vlSelf->simtop__DOT__v1_y = vlSelf->v1_y;
    vlSelf->simtop__DOT__v2_x = vlSelf->v2_x;
    vlSelf->simtop__DOT__v2_y = vlSelf->v2_y;
    vlSelf->simtop__DOT__v3_x = vlSelf->v3_x;
    vlSelf->simtop__DOT__v3_y = vlSelf->v3_y;
    vlSelf->simtop__DOT__v1_a = vlSelf->v1_a;
    vlSelf->simtop__DOT__v2_a = vlSelf->v2_a;
    vlSelf->simtop__DOT__v3_a = vlSelf->v3_a;
    vlSelf->simtop__DOT__Aa = vlSelf->Aa;
    vlSelf->simtop__DOT__Ba = vlSelf->Ba;
    vlSelf->simtop__DOT__C = vlSelf->C;
    vlSelf->simtop__DOT__c = vlSelf->c;
    vlSelf->simtop__DOT__x = vlSelf->x;
    vlSelf->simtop__DOT__y = vlSelf->y;
    vlSelf->simtop__DOT__interp = vlSelf->interp;
    vlSelf->simtop__DOT__core__DOT__e2_lsu_fpul_wen 
        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_fpul_wen;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_frl 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frl;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_frh 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frh;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_fr0 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fr0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__TEXT_CONTROL 
        = vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__PAL_RAM_CTRL 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__PAL_RAM_CTRL 
                 >> 0U));
    vlSelf->simtop__DOT__core__DOT__rf_rsrc[0U] = (0xfU 
                                                   & (vlSelf->im_resp_rdata 
                                                      >> 4U));
    vlSelf->simtop__DOT__core__DOT__rf_rsrc[1U] = (0xfU 
                                                   & (vlSelf->im_resp_rdata 
                                                      >> 8U));
    vlSelf->simtop__DOT__core__DOT__rf_rsrc[2U] = (0xfU 
                                                   & (vlSelf->im_resp_rdata 
                                                      >> 0x14U));
    vlSelf->simtop__DOT__core__DOT__rf_rsrc[3U] = (0xfU 
                                                   & (vlSelf->im_resp_rdata 
                                                      >> 0x18U));
    vlSelf->simtop__DOT__core__DOT__e1_reg_exu_flags 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_flags;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_rm 
        = (1U & vlSelf->simtop__DOT__core__DOT__csr_fpscr);
    vlSelf->simtop__DOT__pvr__DOT__ra_vram_din = (IData)(vlSelf->vram_din);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_i_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_i_tag;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__stride 
        = (0x1fU & vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__stride_flag 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x19U));
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_last = (vlSelf->simtop__DOT__pvr__DOT__ra_control 
                                                   >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_zclear = 
        (1U & (vlSelf->simtop__DOT__pvr__DOT__ra_control 
               >> 0x1eU));
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_flush = 
        (1U & (vlSelf->simtop__DOT__pvr__DOT__ra_control 
               >> 0x1cU));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__num_prims 
        = (0xfU & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                   >> 0x19U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
                 >> 0x19U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
                 >> 0x16U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
                 >> 0x18U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__culling_mode 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
                 >> 0x1bU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__z_write_disable 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
                 >> 0x1aU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__gouraud 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
                 >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__cache_bypass 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
                 >> 0x15U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__dcalc_ctrl 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
                 >> 0x14U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_flip 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
                 >> 0x12U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_flip 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
                 >> 0x11U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_clamp 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
                 >> 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_clamp 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
                 >> 0xfU));
    vlSelf->simtop__DOT__core__DOT__e1_bru_write_pr = 0U;
    vlSelf->simtop__DOT__core__DOT__dm_req_writeback = 0U;
    vlSelf->simtop__DOT__core__DOT__dm_req_invalidate = 0U;
    vlSelf->simtop__DOT__core__DOT__dm_req_nofill = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_lsu_fpul_wen = 0U;
    vlSelf->simtop__DOT__core__DOT__dm_req_flush = 0U;
    vlSelf->simtop__DOT__core__DOT__dm_req_prefetch = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_inf 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_inf) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_inf));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__exp 
        = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__test_float 
                    >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__man 
        = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__test_float);
    vlSelf->simtop__DOT__dm_resp_valid = vlSelf->dm_resp_valid;
    vlSelf->simtop__DOT__FDY12 = vlSelf->FDY12;
    vlSelf->simtop__DOT__FX1 = vlSelf->FX1;
    vlSelf->simtop__DOT__FDX12 = vlSelf->FDX12;
    vlSelf->simtop__DOT__FY1 = vlSelf->FY1;
    vlSelf->simtop__DOT__FDY23 = vlSelf->FDY23;
    vlSelf->simtop__DOT__FX2 = vlSelf->FX2;
    vlSelf->simtop__DOT__FDX23 = vlSelf->FDX23;
    vlSelf->simtop__DOT__FY2 = vlSelf->FY2;
    vlSelf->simtop__DOT__FDY31 = vlSelf->FDY31;
    vlSelf->simtop__DOT__FX3 = vlSelf->FX3;
    vlSelf->simtop__DOT__FDX31 = vlSelf->FDX31;
    vlSelf->simtop__DOT__FY3 = vlSelf->FY3;
    vlSelf->simtop__DOT__minx = vlSelf->minx;
    vlSelf->simtop__DOT__miny = vlSelf->miny;
    vlSelf->simtop__DOT__spanx = vlSelf->spanx;
    vlSelf->simtop__DOT__spany = vlSelf->spany;
    vlSelf->trace_pc0 = vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_pc;
    vlSelf->trace_pc1 = vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_pc;
    vlSelf->trace_instr0 = vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_raw;
    vlSelf->trace_instr1 = vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_raw;
    vlSelf->vram_wr = vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr;
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_tiley = 
        (0x3fU & (vlSelf->simtop__DOT__pvr__DOT__ra_control 
                  >> 8U));
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex = 
        (0x3fU & (vlSelf->simtop__DOT__pvr__DOT__ra_control 
                  >> 2U));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__shadow 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                 >> 0x18U));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__skip 
        = (7U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                 >> 0x15U));
    vlSelf->simtop__DOT__core__DOT__fpu_out_wdst = 
        (0xfU & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_tag));
    vlSelf->simtop__DOT__core__DOT__fpu_out_wbank = 
        (1U & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_tag) 
               >> 4U));
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_dout = (IData)(vlSelf->simtop__DOT__pvr__DOT____Vcellout__isp_parser_inst__isp_vram_dout);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
           >> 0x1dU);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__eol 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                 >> 0x1cU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C1 
        = (IData)((0xffffffffffULL & ((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult1 
                                       - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult2) 
                                      >> 8U)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C2 
        = (IData)((0xffffffffffULL & ((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult3 
                                       - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult4) 
                                      >> 8U)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C3 
        = (IData)((0xffffffffffULL & ((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult5 
                                       - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult6) 
                                      >> 8U)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult7 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, vlSelf->FDX12)), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,12, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult8 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, vlSelf->FDY12)), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,12, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult9 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, vlSelf->FDX23)), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,12, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult10 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, vlSelf->FDY23)), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,12, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult11 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, vlSelf->FDX31)), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,12, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult12 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, vlSelf->FDY31)), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,12, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)))));
    vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_tonly = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_valid = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_nan 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_nan) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_nan));
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
    vlSelf->simtop__DOT__core__DOT__rst = vlSelf->simtop__DOT__rst_reg;
    vlSelf->simtop__DOT__core__DOT__fpu_out_t_wen = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__rn = 
        (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_raw) 
                 >> 8U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_sign;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__imm = 
        (0xfffU & vlSelf->im_resp_rdata);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__imm = 
        (0xfffU & (vlSelf->im_resp_rdata >> 0x10U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_snan 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_nan) 
           & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_frac 
              >> 0x16U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_snan 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_nan) 
           & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_frac 
              >> 0x16U));
    vlSelf->im_req_valid = (1U & (~ (IData)(vlSelf->simtop__DOT__rst_reg)));
    vlSelf->simtop__DOT__core__DOT__fpu_out_valid = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_valid;
    vlSelf->simtop__DOT__clk = vlSelf->clk;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext 
        = (((- (IData)((1U & (vlSelf->im_resp_rdata 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->im_resp_rdata));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext 
        = (0xffU & vlSelf->im_resp_rdata);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext 
        = (((- (IData)((1U & (vlSelf->im_resp_rdata 
                              >> 0x17U)))) << 8U) | 
           (0xffU & (vlSelf->im_resp_rdata >> 0x10U)));
    vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext 
        = (0xffU & (vlSelf->im_resp_rdata >> 0x10U));
    vlSelf->simtop__DOT__core__DOT__replay_delayslot_miss_pc 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_sel)
            ? vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_pc
            : vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_pc);
    vlSelf->simtop__DOT__core__DOT__id_instr0_pc = 
        (0xfffffffcU & vlSelf->simtop__DOT__core__DOT__id_reg_pc);
    vlSelf->simtop__DOT__core__DOT__id_instr1_pc = 
        (2U | (0xfffffffcU & vlSelf->simtop__DOT__core__DOT__id_reg_pc));
    vlSelf->simtop__DOT__core__DOT__e2_lsu_waltbank 
        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_waltbank;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_v_en 
        = (1U & (vlSelf->simtop__DOT__core__DOT__csr_fpscr 
                 >> 0xbU));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_sign 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fr0 
           >> 0x1fU);
    vlSelf->simtop__DOT__core__DOT__e1_reg_bru_pr = vlSelf->simtop__DOT__core__DOT__csr_pr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_word_addr 
        = (0x1fffffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x1eU));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_store = 0U;
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_din = vlSelf->vram_din;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size 
        = (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__exp_biased 
        = (0xfffU & ((IData)(0x7fU) + VL_EXTENDS_II(12,11, (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_exp))));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_i_valid = 0U;
    vlSelf->simtop__DOT__core__DOT__if_pc_plus4 = ((IData)(4U) 
                                                   + 
                                                   (0xfffffffcU 
                                                    & vlSelf->simtop__DOT__core__DOT__if_reg_pc));
    vlSelf->simtop__DOT__core__DOT__replay_icache_miss 
        = ((~ (IData)(vlSelf->im_resp_valid)) & (IData)(vlSelf->simtop__DOT__core__DOT__id_reg_valid));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__scan_order 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x1aU));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_sign 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frh 
           >> 0x1fU);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_sign 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frl 
           >> 0x1fU);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmpz 
        = ((0x4011U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))) 
           | (0x4015U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw))));
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmpz 
        = ((0x4011U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))) 
           | (0x4015U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size 
        = (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
                 >> 3U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt 
        = (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x1bU));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__i_exp 
        = (0xffU & (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fr0 
                    >> 0x17U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__same_sign 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_sign) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_sign));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_frac 
        = (0x7fffffU & vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fr0);
    vlSelf->simtop__DOT__core__DOT__e1_mtu0_wdata = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl;
    vlSelf->simtop__DOT__core__DOT__e1_mtu1_wdata = vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext 
        = (0x2000000U | vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_frac);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext 
        = (0x2000000U | vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_frac);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__i_exp 
        = (0xffU & (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frl 
                    >> 0x17U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__i_exp 
        = (0xffU & (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frh 
                    >> 0x17U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac 
        = (0x7fffffU & vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frl);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_frac 
        = (0x7fffffU & vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frh);
    vlSelf->simtop__DOT__core__DOT__e2_lsu_wdst = vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_wdst;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_m 
        = (1U & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_flags) 
                 >> 3U));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_s 
        = (1U & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_flags) 
                 >> 1U));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_q 
        = (1U & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_flags) 
                 >> 2U));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_1 
        = ((1U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)
            ? (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
               << 1U) : vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph);
    vlSelf->simtop__DOT__core__DOT__e1_mtu0_wdst = 
        (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw) 
                 >> 8U));
    vlSelf->simtop__DOT__core__DOT__e1_mtu1_wdst = 
        (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw) 
                 >> 8U));
    vlSelf->simtop__DOT__core__DOT__id_instr0_rsl = 
        (0xfU & (vlSelf->im_resp_rdata >> 4U));
    vlSelf->simtop__DOT__core__DOT__id_instr1_rsl = 
        (0xfU & (vlSelf->im_resp_rdata >> 0x14U));
    vlSelf->simtop__DOT__core__DOT__id_instr1_rsh = 
        (0xfU & (vlSelf->im_resp_rdata >> 0x18U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__exp_diff 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_exp)) 
                     - VL_EXTENDS_II(11,10, (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_exp))));
    vlSelf->simtop__DOT__core__DOT__id_instr0_rsh = 
        (0xfU & (vlSelf->im_resp_rdata >> 8U));
    vlSelf->simtop__DOT__core__DOT__e1_exu_wen = 1U;
    vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr = 
        (1U & (vlSelf->simtop__DOT__core__DOT__csr_fpscr 
               >> 0x15U));
    vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp = vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_wfp;
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
    simtop__DOT__core__DOT__exu__DOT____VdfgTmp_hcbe31d0b__0 
        = (IData)((0x600aU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rn = 
        (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                 >> 8U));
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
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_gprw = 0U;
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
        }
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
    }
    vlSelf->simtop__DOT__core__DOT__e1_mtu0_wen = 0U;
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
    vlSelf->simtop__DOT__core__DOT__e1_mtu1_wen = 0U;
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
    vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_left 
        = (0x1fU & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_arith 
        = (IData)((0x400cU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))));
    vlSelf->simtop__DOT__core__DOT__id_instr1_raw = 
        (vlSelf->im_resp_rdata >> 0x10U);
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 0U;
    vlSelf->simtop__DOT__core__DOT__id_instr0_raw = 
        (0xffffU & vlSelf->im_resp_rdata);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl = 
        (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                 >> 4U));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh = 
        (0xfU & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                 >> 8U));
    vlSelf->simtop__DOT__core__DOT__e1_bru_delayslot = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t = 
        (1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_flags));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph 
           + vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph 
           + vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_r0);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4 
        = (0xfU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw));
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
    vlSelf->simtop__DOT__core__DOT__csr_fpscr_sz = 
        (1U & (vlSelf->simtop__DOT__core__DOT__csr_fpscr 
               >> 0x14U));
    vlSelf->simtop__DOT__core__DOT__boot_vector = vlSelf->simtop__DOT__boot_vector;
    vlSelf->simtop__DOT__core__DOT__im_resp_rdata = vlSelf->simtop__DOT__im_resp_rdata;
    vlSelf->simtop__DOT__core__DOT__im_resp_valid = vlSelf->simtop__DOT__im_resp_valid;
    vlSelf->simtop__DOT__pvr__DOT__vram_rd = vlSelf->simtop__DOT__vram_rd;
    vlSelf->simtop__DOT__pvr__DOT__vram_din = vlSelf->simtop__DOT__vram_din;
    vlSelf->simtop__DOT__pvr__DOT__v1_x = vlSelf->simtop__DOT__v1_x;
    vlSelf->simtop__DOT__pvr__DOT__v1_y = vlSelf->simtop__DOT__v1_y;
    vlSelf->simtop__DOT__pvr__DOT__v2_x = vlSelf->simtop__DOT__v2_x;
    vlSelf->simtop__DOT__pvr__DOT__v2_y = vlSelf->simtop__DOT__v2_y;
    vlSelf->simtop__DOT__pvr__DOT__v3_x = vlSelf->simtop__DOT__v3_x;
    vlSelf->simtop__DOT__pvr__DOT__v3_y = vlSelf->simtop__DOT__v3_y;
    vlSelf->simtop__DOT__pvr__DOT__v1_a = vlSelf->simtop__DOT__v1_a;
    vlSelf->simtop__DOT__pvr__DOT__v2_a = vlSelf->simtop__DOT__v2_a;
    vlSelf->simtop__DOT__pvr__DOT__v3_a = vlSelf->simtop__DOT__v3_a;
    vlSelf->simtop__DOT__pvr__DOT__Aa = vlSelf->simtop__DOT__Aa;
    vlSelf->simtop__DOT__pvr__DOT__Ba = vlSelf->simtop__DOT__Ba;
    vlSelf->simtop__DOT__pvr__DOT__C = vlSelf->simtop__DOT__C;
    vlSelf->simtop__DOT__pvr__DOT__c = vlSelf->simtop__DOT__c;
    vlSelf->simtop__DOT__pvr__DOT__x = vlSelf->simtop__DOT__x;
    vlSelf->simtop__DOT__pvr__DOT__y = vlSelf->simtop__DOT__y;
    vlSelf->simtop__DOT__pvr__DOT__interp = vlSelf->simtop__DOT__interp;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_fpul_wen 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_fpul_wen;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__i 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_frl;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__i 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_frh;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__i 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_fr0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__TEXT_CONTROL 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__TEXT_CONTROL;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__PAL_RAM_CTRL 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__PAL_RAM_CTRL;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_flags 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_exu_flags;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__rm 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_rm;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_tag;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__stride_full 
        = (0xfffffffffULL & (0x10ULL << (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__stride)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__stride_flag 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__stride_flag;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_last 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_last;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_zclear 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_zclear;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_flush 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_flush;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__num_prims 
        = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__num_prims;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__texture 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__uv_16_bit 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offset 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__culling_mode 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__culling_mode;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__z_write_disable 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__z_write_disable;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__gouraud 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__gouraud;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cache_bypass 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__cache_bypass;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__dcalc_ctrl 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__dcalc_ctrl;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_u_flip 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_flip;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_v_flip 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_flip;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_u_clamp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_clamp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_v_clamp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_clamp;
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
                                            }
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
                                            }
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
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
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
                                            }
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
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
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
                                        }
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
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
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
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
                                            }
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
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
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
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
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
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                             >> 0xdU)))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                          >> 0xcU)))) {
                if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
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
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = 1U;
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
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
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
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
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
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
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
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_prefetch 
        = vlSelf->simtop__DOT__core__DOT__dm_req_prefetch;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_inf;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__fixed 
        = ((0x7fU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__exp))
            ? ((0x1fU >= ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__exp) 
                          - (IData)(0x7fU))) ? ((0x800000U 
                                                 | vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__man) 
                                                << 
                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__exp) 
                                                 - (IData)(0x7fU)))
                : 0U) : ((0x1fU >= ((IData)(0x7fU) 
                                    - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__exp)))
                          ? ((0x800000U | vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__man) 
                             >> ((IData)(0x7fU) - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__exp)))
                          : 0U));
    vlSelf->simtop__DOT__core__DOT__dm_resp_valid = vlSelf->simtop__DOT__dm_resp_valid;
    vlSelf->simtop__DOT__pvr__DOT__FDY12 = vlSelf->simtop__DOT__FDY12;
    vlSelf->simtop__DOT__pvr__DOT__FX1 = vlSelf->simtop__DOT__FX1;
    vlSelf->simtop__DOT__pvr__DOT__FDX12 = vlSelf->simtop__DOT__FDX12;
    vlSelf->simtop__DOT__pvr__DOT__FY1 = vlSelf->simtop__DOT__FY1;
    vlSelf->simtop__DOT__pvr__DOT__FDY23 = vlSelf->simtop__DOT__FDY23;
    vlSelf->simtop__DOT__pvr__DOT__FX2 = vlSelf->simtop__DOT__FX2;
    vlSelf->simtop__DOT__pvr__DOT__FDX23 = vlSelf->simtop__DOT__FDX23;
    vlSelf->simtop__DOT__pvr__DOT__FY2 = vlSelf->simtop__DOT__FY2;
    vlSelf->simtop__DOT__pvr__DOT__FDY31 = vlSelf->simtop__DOT__FDY31;
    vlSelf->simtop__DOT__pvr__DOT__FX3 = vlSelf->simtop__DOT__FX3;
    vlSelf->simtop__DOT__pvr__DOT__FDX31 = vlSelf->simtop__DOT__FDX31;
    vlSelf->simtop__DOT__pvr__DOT__FY3 = vlSelf->simtop__DOT__FY3;
    vlSelf->simtop__DOT__pvr__DOT__minx = vlSelf->simtop__DOT__minx;
    vlSelf->simtop__DOT__pvr__DOT__miny = vlSelf->simtop__DOT__miny;
    vlSelf->simtop__DOT__pvr__DOT__spanx = vlSelf->simtop__DOT__spanx;
    vlSelf->simtop__DOT__pvr__DOT__spany = vlSelf->simtop__DOT__spany;
    vlSelf->simtop__DOT__trace_pc0 = vlSelf->trace_pc0;
    vlSelf->simtop__DOT__trace_pc1 = vlSelf->trace_pc1;
    vlSelf->simtop__DOT__trace_instr0 = vlSelf->trace_instr0;
    vlSelf->simtop__DOT__trace_instr1 = vlSelf->trace_instr1;
    vlSelf->simtop__DOT__vram_wr = vlSelf->vram_wr;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_tiley 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_tiley;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tiley 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_tiley;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_tilex 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tilex 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__shadow 
        = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__shadow;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__skip 
        = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__skip;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_words 
        = (0xffU & (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__two_volume) 
                     & (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__shadow))
                     ? ((IData)(3U) + ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__skip) 
                                       << 1U)) : ((IData)(3U) 
                                                  + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__skip))));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_wdst 
        = vlSelf->simtop__DOT__core__DOT__fpu_out_wdst;
    vlSelf->simtop__DOT__core__DOT__fprf_wdst0 = vlSelf->simtop__DOT__core__DOT__fpu_out_wdst;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_wbank 
        = vlSelf->simtop__DOT__core__DOT__fpu_out_wbank;
    vlSelf->simtop__DOT__core__DOT__fprf_wbank0 = vlSelf->simtop__DOT__core__DOT__fpu_out_wbank;
    vlSelf->vram_dout = (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_dout));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__volume_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__depth_comp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__volume_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__eol 
        = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__eol;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask 
        = ((0x20U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                     >> 0x14U)) | ((0x10U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                             >> 0x16U)) 
                                   | ((8U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                             >> 0x18U)) 
                                      | (((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__eol) 
                                          << 2U) | 
                                         ((2U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                                 >> 0x1cU)) 
                                          | (1U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                                   >> 0x1eU)))))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs12 
        = ((IData)((0xffffffffffffULL & VL_EXTENDS_QI(48,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C1))) 
           + ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult7) 
              - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult8)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs23 
        = ((IData)((0xffffffffffffULL & VL_EXTENDS_QI(48,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C2))) 
           + ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult9) 
              - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult10)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs31 
        = ((IData)((0xffffffffffffULL & VL_EXTENDS_QI(48,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C3))) 
           + ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult11) 
              - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult12)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_csr_tonly 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_tonly;
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
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__i_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_nan;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_csr_wen 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wen;
    vlSelf->simtop__DOT__core__DOT__e2_csr_wen = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_tonly)) 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wen));
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rst = vlSelf->simtop__DOT__core__DOT__rst;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rst 
        = vlSelf->simtop__DOT__core__DOT__rst;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rst = vlSelf->simtop__DOT__core__DOT__rst;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__rst = vlSelf->simtop__DOT__core__DOT__rst;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid) {
        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                        vlSelf->simtop__DOT__core__DOT__fpu_out_t_wen = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    vlSelf->simtop__DOT__core__DOT__fpu_out_t_wen = 1U;
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_t_wen 
        = vlSelf->simtop__DOT__core__DOT__fpu_out_t_wen;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext12 
        = (((- (IData)((1U & (vlSelf->im_resp_rdata 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__du0__DOT__imm));
    vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext12 
        = (((- (IData)((1U & (vlSelf->im_resp_rdata 
                              >> 0x1bU)))) << 0xcU) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__du1__DOT__imm));
    vlSelf->simtop__DOT__core__DOT__if_valid = vlSelf->im_req_valid;
    vlSelf->simtop__DOT__im_req_valid = vlSelf->im_req_valid;
    vlSelf->simtop__DOT__pvr__DOT__reset_n = vlSelf->im_req_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu_out_valid;
    vlSelf->simtop__DOT__core__DOT__fprf_wen0 = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu_out_valid) 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__fpu_out_wen));
    vlSelf->simtop__DOT__pvr__DOT__clock = vlSelf->simtop__DOT__clk;
    vlSelf->simtop__DOT__core__DOT__clk = vlSelf->simtop__DOT__clk;
    vlSelf->simtop__DOT__core__DOT__replay_stalled_pc 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_pc;
    vlSelf->simtop__DOT__core__DOT__replay_nodi_pc 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_pc;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_waltbank 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_waltbank;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__ven 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_v_en;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__ven 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_v_en;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_sign;
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_pr 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_pr;
    vlSelf->simtop__DOT__core__DOT__e1_bru_target = 
        (vlSelf->simtop__DOT__core__DOT__e1_reg_bru_opl 
         + vlSelf->simtop__DOT__core__DOT__e1_reg_bru_oph);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vq_comp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_din;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mip_map 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_v_size 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
           & (((IData)(8U) << (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size)) 
              - (IData)(1U)));
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
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid) {
        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_i_valid = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_i_valid = 1U;
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__i_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_i_valid;
    vlSelf->simtop__DOT__core__DOT__id_instr0_npc = 
        (0xfffffffcU & vlSelf->simtop__DOT__core__DOT__if_pc_plus4);
    vlSelf->simtop__DOT__core__DOT__id_instr1_npc = 
        (2U | (0xfffffffcU & vlSelf->simtop__DOT__core__DOT__if_pc_plus4));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__scan_order 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__scan_order;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_twid 
        = (1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__scan_order)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_sign;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT____VdfgTmp_h9fa499bc__0 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmpz)) 
           & (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl 
              >> 0x1fU));
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmp_opl 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmpz)
            ? 0U : vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT____VdfgTmp_h9fa499bc__0 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmpz)) 
           & (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl 
              >> 0x1fU));
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmp_opl 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmpz)
            ? 0U : vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_u_size 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
           & (((IData)(8U) << (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)) 
              - (IData)(1U)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_fmt 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal4 
        = (5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal8 
        = (6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_exp 
        = (0x1ffU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__i_exp) 
                     - (IData)(0x7fU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_exp_zero 
        = (0U == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__i_exp));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_exp_max 
        = (0xffU == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__i_exp));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__invalid_int 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_snan) 
           | ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_snan) 
              | ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_inf) 
                 & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__same_sign)) 
                    & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_inf)))));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_frac_zero 
        = (0U == vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_frac);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__out_wdata 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu0_wdata;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__out_wdata 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu1_wdata;
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
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_exp_zero 
        = (0U == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__i_exp));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_exp 
        = (0x1ffU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__i_exp) 
                     - (IData)(0x7fU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_exp_max 
        = (0xffU == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__i_exp));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_exp_zero 
        = (0U == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__i_exp));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_exp 
        = (0x1ffU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__i_exp) 
                     - (IData)(0x7fU)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_exp_max 
        = (0xffU == (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__i_exp));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_frac_zero 
        = (0U == vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac);
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
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_wdst 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdst;
    vlSelf->simtop__DOT__core__DOT__fprf_wdst1 = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdst;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_2 
        = ((2U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)
            ? (vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_1 
               << 2U) : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_1);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__out_wdst 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu0_wdst;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__out_wdst 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu1_wdst;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc0 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_rsl;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc2 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_rsl;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc3 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_rsh;
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
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc1 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_rsh;
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
    vlSelf->simtop__DOT__core__DOT__fpsb_set_p1 = (
                                                   (((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
                                                     ^ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_write_altbank)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh));
    vlSelf->simtop__DOT__core__DOT__fp_r0_busy = (1U 
                                                  & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                                                     >> 
                                                     ((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
                                                      << 4U)));
    vlSelf->simtop__DOT__core__DOT__fpsb_set_p0 = (
                                                   (((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
                                                     ^ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_altbank)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_wfp 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp;
    vlSelf->simtop__DOT__core__DOT__fprf_wen1 = vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_wen 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_wen;
    vlSelf->simtop__DOT__core__DOT__e2_p0_waltbank = 0U;
    vlSelf->simtop__DOT__core__DOT__e2_p1_waltbank = 0U;
    vlSelf->simtop__DOT__core__DOT__e2_p1_wdst = vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wdst;
    vlSelf->simtop__DOT__core__DOT__e2_p0_wdst = vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wdst;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__is_neg 
        = ((IData)((0x600bU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw)))) 
           | (IData)(simtop__DOT__core__DOT__exu__DOT____VdfgTmp_hcbe31d0b__0));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__use_carry 
        = ((IData)((0x300eU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw)))) 
           | ((IData)(simtop__DOT__core__DOT__exu__DOT____VdfgTmp_hcbe31d0b__0) 
              | (IData)((0x300aU == (0xf00fU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))))));
    vlSelf->simtop__DOT__core__DOT__e1_exu_wdst = vlSelf->simtop__DOT__core__DOT__exu__DOT__rn;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_nack 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_nack;
    vlSelf->trace_valid1 = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_nack)) 
                            & (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_valid));
    vlSelf->simtop__DOT__core__DOT__e2_flush0 = ((IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_nack) 
                                                 & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                                                    | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen)));
    vlSelf->simtop__DOT__core__DOT__replay_dcache_miss 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_nack;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__out_wen 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu0_wen;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__out_wen 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu1_wen;
    vlSelf->dm_req_wen = ((~ ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load) 
                              | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_gprw))) 
                          & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_store));
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_gprw));
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load) 
                                                  | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_gprw));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_right 
        = (0x1fU & ((IData)(1U) + (~ (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_left))));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_sign 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_arith) 
           & (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
              >> 0x1fU));
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_raw;
    vlSelf->simtop__DOT__core__DOT__id_dec1_csr_id 
        = ((0x8000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
            ? ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                ? ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                    ? ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                        ? ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                            ? 0U : ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                              ? 0U : 
                                             ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                               ? ((4U 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 0xcU
                                                     : 0U))
                                                   : 0U)
                                               : 0U))))
                        : 0U) : ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                  ? 0U : ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                           ? ((0x400U 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                               ? 1U
                                               : 0U)
                                           : ((0x200U 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                               ? ((0x100U 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                   ? 0U
                                                   : 1U)
                                               : 1U))))
                : 0U) : ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                          ? ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                              ? 0U : ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                       ? 0U : ((0x80U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 5U)
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 0U
                                                         : 5U)
                                                        : 0U))
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 0xbU)
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 0U
                                                         : 0xbU)
                                                        : 0U)))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 0xcU)
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 0U
                                                         : 0xcU)
                                                        : 0U))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 4U)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 4U
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 3U)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 3U
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 3U
                                                          : 6U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 2U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 0xaU)
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 2U
                                                         : 0xaU)
                                                        : 0U)))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 1U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 9U)
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 1U
                                                         : 9U)
                                                        : 0U))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 8U)
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 0U
                                                         : 8U)
                                                        : 0U))))))))
                          : ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                              ? 0U : ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                       ? 0U : ((0x80U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 5U)
                                                         : 0U))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 0xbU)
                                                         : 0U))
                                                       : 0U))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 0xcU)
                                                         : 0U))
                                                       : 0U)
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 4U)
                                                         : 0U)))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 6U)
                                                         : 0U))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 3U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 0xaU)
                                                         : 0U))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 2U)
                                                         : 0U))))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 9U)
                                                         : 0U))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 1U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 0U
                                                          : 8U)
                                                         : 0U))
                                                       : 0U)))))))));
    vlSelf->simtop__DOT__core__DOT__id_dec1_raltbank 
        = ((0x82U == (0xf08fU & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) 
           | (0x4083U == (0xf08fU & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))));
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
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
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
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
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
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
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
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
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
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
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
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
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
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
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
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                 >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wfp 
        = vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__in_raw 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_raw;
    vlSelf->simtop__DOT__core__DOT__id_dec0_csr_id 
        = ((0x8000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
            ? ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                ? ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                    ? ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                        ? ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                            ? 0U : ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                              ? 0U : 
                                             ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                               ? ((4U 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 0xcU
                                                     : 0U))
                                                   : 0U)
                                               : 0U))))
                        : 0U) : ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                  ? 0U : ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                           ? ((0x400U 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                               ? 1U
                                               : 0U)
                                           : ((0x200U 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                               ? ((0x100U 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                   ? 0U
                                                   : 1U)
                                               : 1U))))
                : 0U) : ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                          ? ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                              ? 0U : ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                       ? 0U : ((0x80U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 5U)
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 0U
                                                         : 5U)
                                                        : 0U))
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 0xbU)
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 0U
                                                         : 0xbU)
                                                        : 0U)))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 0xcU)
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 0U
                                                         : 0xcU)
                                                        : 0U))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 4U)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 4U
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 3U)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 3U
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 3U
                                                          : 6U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 2U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 0xaU)
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 2U
                                                         : 0xaU)
                                                        : 0U)))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 1U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 9U)
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 1U
                                                         : 9U)
                                                        : 0U))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 8U)
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 0U
                                                         : 8U)
                                                        : 0U))))))))
                          : ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                              ? 0U : ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                       ? 0U : ((0x80U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 5U)
                                                         : 0U))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 0xbU)
                                                         : 0U))
                                                       : 0U))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 0xcU)
                                                         : 0U))
                                                       : 0U)
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 4U)
                                                         : 0U)))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 6U)
                                                         : 0U))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 3U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 0xaU)
                                                         : 0U))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 2U)
                                                         : 0U))))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 9U)
                                                         : 0U))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 1U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 0U
                                                          : 8U)
                                                         : 0U))
                                                       : 0U)))))))));
    vlSelf->simtop__DOT__core__DOT__id_dec0_raltbank 
        = ((0x82U == (0xf08fU & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) 
           | (0x4083U == (0xf08fU & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))));
    vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
    simtop__DOT__core__DOT__lsu__DOT____VdfgExtracted_h3810217f__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl) 
           != (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh));
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
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_t 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_t 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift 
        = ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
            << 1U) | (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t));
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
        } else {
            if ((0x23U != (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
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
            if ((0x23U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                vlSelf->simtop__DOT__core__DOT__e1_bru_taken = 1U;
            } else if ((3U == (0xf0ffU & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw)))) {
                vlSelf->simtop__DOT__core__DOT__e1_bru_taken = 1U;
            } else if ((0xbU == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))) {
                vlSelf->simtop__DOT__core__DOT__e1_bru_taken = 1U;
            } else if ((0x2bU == (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw))) {
                vlSelf->simtop__DOT__core__DOT__e1_bru_taken = 1U;
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_imm4h 
        = (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph 
           + ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4) 
              << 2U));
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
    if (vlSelf->simtop__DOT__core__DOT__csr_fpscr_sz) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__fpscr_sz = 1U;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__fpsize = 3U;
    } else {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__fpscr_sz = 0U;
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__fpsize = 2U;
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_resp_valid 
        = vlSelf->simtop__DOT__core__DOT__dm_resp_valid;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY12 
        = vlSelf->simtop__DOT__pvr__DOT__FDY12;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1 
        = vlSelf->simtop__DOT__pvr__DOT__FX1;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX12 
        = vlSelf->simtop__DOT__pvr__DOT__FDX12;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1 
        = vlSelf->simtop__DOT__pvr__DOT__FY1;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY23 
        = vlSelf->simtop__DOT__pvr__DOT__FDY23;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2 
        = vlSelf->simtop__DOT__pvr__DOT__FX2;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX23 
        = vlSelf->simtop__DOT__pvr__DOT__FDX23;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2 
        = vlSelf->simtop__DOT__pvr__DOT__FY2;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY31 
        = vlSelf->simtop__DOT__pvr__DOT__FDY31;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3 
        = vlSelf->simtop__DOT__pvr__DOT__FX3;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX31 
        = vlSelf->simtop__DOT__pvr__DOT__FDX31;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3 
        = vlSelf->simtop__DOT__pvr__DOT__FY3;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__minx 
        = vlSelf->simtop__DOT__pvr__DOT__minx;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__miny 
        = vlSelf->simtop__DOT__pvr__DOT__miny;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__spanx 
        = vlSelf->simtop__DOT__pvr__DOT__spanx;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__spany 
        = vlSelf->simtop__DOT__pvr__DOT__spany;
    vlSelf->simtop__DOT__core__DOT__trace_pc0 = vlSelf->simtop__DOT__trace_pc0;
    vlSelf->simtop__DOT__core__DOT__trace_pc1 = vlSelf->simtop__DOT__trace_pc1;
    vlSelf->simtop__DOT__core__DOT__trace_instr0 = vlSelf->simtop__DOT__trace_instr0;
    vlSelf->simtop__DOT__core__DOT__trace_instr1 = vlSelf->simtop__DOT__trace_instr1;
    vlSelf->simtop__DOT__pvr__DOT__vram_wr = vlSelf->simtop__DOT__vram_wr;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wdst0 
        = vlSelf->simtop__DOT__core__DOT__fprf_wdst0;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wbank0 
        = vlSelf->simtop__DOT__core__DOT__fprf_wbank0;
    vlSelf->simtop__DOT__vram_dout = vlSelf->vram_dout;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_mask 
        = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__inTriangle 
        = (VL_LTES_III(32, 0U, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs12) 
           & (VL_LTES_III(32, 0U, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs23) 
              & VL_LTES_III(32, 0U, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs31)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__i_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__i_valid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_valid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_valid;
    vlSelf->simtop__DOT__core__DOT__e2_flags_wen = 
        ((IData)(vlSelf->simtop__DOT__core__DOT__e2_csr_wen) 
         & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_csr_id)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__rst 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__rst;
    vlSelf->simtop__DOT__core__DOT__im_req_valid = vlSelf->simtop__DOT__im_req_valid;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__reset_n 
        = vlSelf->simtop__DOT__pvr__DOT__reset_n;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__reset_n 
        = vlSelf->simtop__DOT__pvr__DOT__reset_n;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wen0 
        = vlSelf->simtop__DOT__core__DOT__fprf_wen0;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__clock;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__clock;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__clk = vlSelf->simtop__DOT__core__DOT__clk;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__clk 
        = vlSelf->simtop__DOT__core__DOT__clk;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__clk = vlSelf->simtop__DOT__core__DOT__clk;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__clk = vlSelf->simtop__DOT__core__DOT__clk;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__ven 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__ven;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__ven 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__ven;
    vlSelf->simtop__DOT__core__DOT__bru__DOT__out_target 
        = vlSelf->simtop__DOT__core__DOT__e1_bru_target;
    vlSelf->simtop__DOT__core__DOT__replay_mispredict_pc 
        = vlSelf->simtop__DOT__core__DOT__e1_bru_target;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_din;
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
    vlSelf->simtop__DOT__core__DOT__du0__DOT__in_npc 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_npc 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_mipmap 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_twid) 
           & (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map));
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
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__eq = 
        (vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmp_opl 
         == vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__subs 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmp_opl)) 
                                     + (0x100000000ULL 
                                        | (QData)((IData)(
                                                          (~ vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph)))))));
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__eq = 
        (vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmp_opl 
         == vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__subs 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmp_opl)) 
                                     + (0x100000000ULL 
                                        | (QData)((IData)(
                                                          (~ vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph)))))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__non_twid_addr 
        = (0xfffffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked) 
                       + ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked) 
                          * ((IData)(8U) << (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__col_fmt 
        = (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal4) 
            | (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal8))
            ? (3U & vlSelf->simtop__DOT__pvr__DOT__PAL_RAM_CTRL)
            : (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_invalid 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__invalid_int) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_v_en));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_zero 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_exp_zero) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_frac_zero));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_inf 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_exp_max) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_frac_zero));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_nan 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_frac_zero)) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_exp_max));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_exp 
        = (0xffU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_exp) 
                    >> 0U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_exp;
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
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wdst1 
        = vlSelf->simtop__DOT__core__DOT__fprf_wdst1;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_4 
        = ((4U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)
            ? (vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_2 
               << 4U) : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_2);
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
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__aa_frac_norm 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__swap_operand)
            ? vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext
            : vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_r0data 
        = vlSelf->simtop__DOT__core__DOT__fprf_r0data;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__i_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_tag;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_tag;
    vlSelf->simtop__DOT__core__DOT__fp_p1_waw_busy 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                 >> (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p1)));
    vlSelf->simtop__DOT__core__DOT__fp_p0_waw_busy 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                 >> (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p0)));
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wen1 
        = vlSelf->simtop__DOT__core__DOT__fprf_wen1;
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
    vlSelf->simtop__DOT__core__DOT__exu__DOT__carry 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__use_carry)
            ? (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t))
            : 0ULL);
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
    vlSelf->simtop__DOT__dm_req_wen = vlSelf->dm_req_wen;
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
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
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
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            }
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                 >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                }
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                            }
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                            }
                        }
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
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
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                         >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                        }
                    }
                }
            }
        } else if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                          >> 0xcU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = 0U;
                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = 1U;
                        }
                    }
                }
            }
        }
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wpending 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending;
    } else {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wpending 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending;
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wen 
        = vlSelf->simtop__DOT__core__DOT__e1_lsu_wen;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_1 
        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_right))
            ? (((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_sign) 
                << 0x1fU) | (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                             >> 1U)) : vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_csr_id 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_csr_id;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_raltbank 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_raltbank;
    vlSelf->simtop__DOT__core__DOT__rf_rbank_p1 = ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_md) 
                                                   & ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_rb) 
                                                      ^ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_raltbank)));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_csr_id 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_csr_id;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_raltbank 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_raltbank;
    vlSelf->simtop__DOT__core__DOT__rf_rbank_p0 = ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_md) 
                                                   & ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_rb) 
                                                      ^ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_raltbank)));
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
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                            }
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
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
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                            }
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
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
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                            }
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
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
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                        }
                                    }
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
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
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                            }
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
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
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                            }
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
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
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                        }
                                    }
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
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
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                        }
                                    }
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
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
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                        }
                                    }
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
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
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl;
                                    }
                                }
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                     >> 0xcU)))) {
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
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                            }
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                 >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                }
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                            }
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                         >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                        }
                    }
                }
            }
        } else if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                          >> 0xcU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst 
                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh;
                        }
                    }
                }
            }
        }
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_alt_wdst 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst;
    } else {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_alt_wdst 
            = vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst;
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wdst 
        = vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst;
    vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen = 0U;
    vlSelf->simtop__DOT__core__DOT__bru__DOT__out_taken 
        = vlSelf->simtop__DOT__core__DOT__e1_bru_taken;
    vlSelf->simtop__DOT__core__DOT__replay_mispredict 
        = vlSelf->simtop__DOT__core__DOT__e1_bru_taken;
    vlSelf->simtop__DOT__core__DOT__id_flush1 = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_bru_taken) 
                                                 & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_bru_delayslot)) 
                                                    | ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_sel) 
                                                       | (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_valid))));
    vlSelf->simtop__DOT__core__DOT__id_flush0 = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_bru_taken) 
                                                 & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_bru_delayslot)) 
                                                    | (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_sel))));
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata 
        = vlSelf->simtop__DOT__core__DOT__csr_rdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_gbr 
        = (vlSelf->simtop__DOT__core__DOT__csr_rdata 
           + vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0_gbr 
        = (vlSelf->simtop__DOT__core__DOT__csr_rdata 
           + vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_r0);
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
    vlSelf->simtop__DOT__pvr__DOT__vram_dout = vlSelf->simtop__DOT__vram_dout;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__reset_n 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__reset_n;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__clock;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__clk 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__clk;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_val 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_rounded;
    vlSelf->simtop__DOT__core__DOT__fpu_out_wdata = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_rounded;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_sign;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_sign;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__ltu 
        = (1U & (IData)((vlSelf->simtop__DOT__core__DOT__mtu0__DOT__subs 
                         >> 0x20U)));
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__ltu 
        = (1U & (IData)((vlSelf->simtop__DOT__core__DOT__mtu1__DOT__subs 
                         >> 0x20U)));
    if (((((((((0U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
               | (1U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) 
              | (2U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) 
             | (3U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) 
            | (4U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) 
           | (5U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) 
          | (6U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) 
         | (7U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))))) {
        if ((0U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm = 6U;
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_vq = 0U;
        } else if ((1U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm = 8U;
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_vq = 1U;
        } else if ((2U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm = 0x10U;
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_vq = 2U;
        } else if ((3U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm = 0x30U;
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_vq = 6U;
        } else if ((4U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm = 0xb0U;
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_vq = 0x16U;
        } else if ((5U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm = 0x2b0U;
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_vq = 0x56U;
        } else if ((6U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm = 0xab0U;
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_vq = 0x156U;
        } else {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm = 0x2ab0U;
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_vq = 0x556U;
        }
    } else if ((8U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm = 0xaab0U;
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_vq = 0x1556U;
    } else if ((9U == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm = 0x2aab0U;
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_vq = 0x5556U;
    } else if ((0xaU == ((IData)(3U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm = 0xaaab0U;
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_vq = 0x15556U;
    }
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_mipmap)
            ? (0xfffffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp)
                            ? vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_vq
                            : (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal4) 
                                | (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal8))
                                ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm 
                                   >> 1U) : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm)))
            : 0U);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux 
        = (0xfffffU & (((((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_twid) 
                          | (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal4)) 
                         | (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal8)) 
                        | (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp))
                        ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs 
                           + vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop)
                        : (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs 
                           + vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__non_twid_addr)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_shift 
        = (0xfffffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp)
                        ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux 
                           >> 5U) : ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal4)
                                      ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux 
                                         >> 4U) : ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal8)
                                                    ? 
                                                   (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux 
                                                    >> 3U)
                                                    : 
                                                   (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux 
                                                    >> 2U)))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vram_word_addr 
        = (0x1fffffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_word_addr 
                        + vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_shift));
    if (((((((((0U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux)) 
               | (1U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
              | (2U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
             | (3U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
            | (4U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
           | (5U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
          | (6U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
         | (7U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux)))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal4_nib 
            = (0xfU & ((0U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                        ? (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din)
                        : ((1U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                            ? (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                       >> 4U)) : ((2U 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                   ? (IData)(
                                                             (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                              >> 8U))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0xfU 
                                                     & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                    ? (IData)(
                                                              (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                               >> 0xcU))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                     ? (IData)(
                                                               (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                >> 0x10U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                      ? (IData)(
                                                                (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                 >> 0x14U))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (0xfU 
                                                        & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                       ? (IData)(
                                                                 (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                  >> 0x18U))
                                                       : (IData)(
                                                                 (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                  >> 0x1cU))))))))));
    } else if (((((((((8U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux)) 
                      | (9U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
                     | (0xaU == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
                    | (0xbU == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
                   | (0xcU == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
                  | (0xdU == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
                 | (0xeU == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
                | (0xfU == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux)))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal4_nib 
            = (0xfU & ((8U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                        ? (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                   >> 0x20U)) : ((9U 
                                                  == 
                                                  (0xfU 
                                                   & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                  ? (IData)(
                                                            (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                             >> 0x24U))
                                                  : 
                                                 ((0xaU 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                   ? (IData)(
                                                             (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                              >> 0x28U))
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0xfU 
                                                     & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                    ? (IData)(
                                                              (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                               >> 0x2cU))
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                     ? (IData)(
                                                               (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                >> 0x30U))
                                                     : 
                                                    ((0xdU 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                      ? (IData)(
                                                                (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                 >> 0x34U))
                                                      : 
                                                     ((0xeU 
                                                       == 
                                                       (0xfU 
                                                        & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                       ? (IData)(
                                                                 (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                  >> 0x38U))
                                                       : (IData)(
                                                                 (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                  >> 0x3cU))))))))));
    }
    if (((((((((0U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux)) 
               | (1U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
              | (2U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
             | (3U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
            | (4U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
           | (5U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
          | (6U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) 
         | (7U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux)))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal4_nib 
            = (0xfU & ((0U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                        ? (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din)
                        : ((1U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                            ? (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                       >> 8U)) : ((2U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                   ? (IData)(
                                                             (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                              >> 0x10U))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                    ? (IData)(
                                                              (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                               >> 0x18U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                     ? (IData)(
                                                               (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                >> 0x20U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                      ? (IData)(
                                                                (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                 >> 0x28U))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                                                       ? (IData)(
                                                                 (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                  >> 0x30U))
                                                       : (IData)(
                                                                 (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                  >> 0x38U))))))))));
    }
    if ((0U == (3U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16 
            = (0xffffU & (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din));
    } else if ((1U == (3U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16 
            = (0xffffU & (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                  >> 0x10U)));
    } else if ((2U == (3U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16 
            = (0xffffU & (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                  >> 0x20U)));
    } else if ((3U == (3U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16 
            = (0xffffU & (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                  >> 0x30U)));
    }
    if (((((((((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt)) 
               | (1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))) 
              | (2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))) 
             | (3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))) 
            | (4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))) 
           | (5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))) 
          | (6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))) 
         | (7U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt)))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
            = ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))
                ? (((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                      >> 0xfU)))) << 0x18U) 
                   | ((0xf80000U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                    << 9U)) | ((0x70000U 
                                                & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                   << 4U)) 
                                               | ((0xf800U 
                                                   & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                      << 6U)) 
                                                  | ((0x700U 
                                                      & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                         << 1U)) 
                                                     | ((0xf8U 
                                                         & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                            << 3U)) 
                                                        | (7U 
                                                           & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                              >> 2U))))))))
                : ((1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))
                    ? ((0xf80000U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                     << 8U)) | ((0x70000U 
                                                 & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                    << 3U)) 
                                                | ((0xfc00U 
                                                    & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                       << 5U)) 
                                                   | ((0x300U 
                                                       & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                          >> 1U)) 
                                                      | ((0xf8U 
                                                          & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                             << 3U)) 
                                                         | (7U 
                                                            & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                               >> 2U)))))))
                    : ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))
                        ? ((0xf0000000U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                           << 0x10U)) 
                           | ((0xf000000U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                             << 0xcU)) 
                              | ((0xf00000U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                               << 0xcU)) 
                                 | ((0xf0000U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                 << 8U)) 
                                    | ((0xf000U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                   << 8U)) 
                                       | ((0xf00U & 
                                           ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                            << 4U)) 
                                          | ((0xf0U 
                                              & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                 << 4U)) 
                                             | (0xfU 
                                                & (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16)))))))))
                        : ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))
                            ? (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16)
                            : ((4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))
                                ? (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16)
                                : ((5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))
                                    ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal4_nib) 
                                       << 0xcU) : (
                                                   (6U 
                                                    == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))
                                                    ? 
                                                   ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal4_nib) 
                                                    << 8U)
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                                    >> 0xfU)))) 
                                                     << 0x18U) 
                                                    | ((0xf80000U 
                                                        & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                           << 9U)) 
                                                       | ((0x70000U 
                                                           & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                              << 4U)) 
                                                          | ((0xf800U 
                                                              & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                                 << 6U)) 
                                                             | ((0x700U 
                                                                 & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                                    << 1U)) 
                                                                | ((0xf8U 
                                                                    & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                                       << 3U)) 
                                                                   | (7U 
                                                                      & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                                         >> 2U)))))))))))))));
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__invalid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_invalid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__invalid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_invalid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_invalid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_invalid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_nan;
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
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_exp 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_exp;
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
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_exp 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_exp;
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
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_8 
        = ((8U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)
            ? (vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_4 
               << 8U) : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_4);
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
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__i_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__i_tag;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_tag 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_tag;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wbank0 
        = vlSelf->simtop__DOT__core__DOT__rf_wbank_p0;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wbank1 
        = vlSelf->simtop__DOT__core__DOT__rf_wbank_p1;
    vlSelf->simtop__DOT__core__DOT__rf_wdst1 = vlSelf->trace_wdst1;
    vlSelf->simtop__DOT__trace_wdst1 = vlSelf->trace_wdst1;
    vlSelf->simtop__DOT__core__DOT__rf_wdst0 = vlSelf->trace_wdst0;
    vlSelf->simtop__DOT__trace_wdst0 = vlSelf->trace_wdst0;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__adder 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)) 
                             + ((QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph)) 
                                + vlSelf->simtop__DOT__core__DOT__exu__DOT__carry)));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__sub = 
        (0x1ffffffffULL & (1ULL + ((~ ((QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)) 
                                       + vlSelf->simtop__DOT__core__DOT__exu__DOT__carry)) 
                                   + ((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__is_neg)
                                       ? 0ULL : (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph))))));
    vlSelf->simtop__DOT__core__DOT__trace_valid1 = vlSelf->simtop__DOT__trace_valid1;
    vlSelf->simtop__DOT__trace_valid0 = vlSelf->trace_valid0;
    vlSelf->trace_wen0 = vlSelf->simtop__DOT__core__DOT__e2_p0_wen;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) {
        if (((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load) 
             | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_store))) {
            vlSelf->dm_req_valid = 1U;
        }
    }
    if (vlSelf->simtop__DOT__core__DOT__replay_dcache_miss) {
        vlSelf->dm_req_valid = 0U;
    }
    vlSelf->simtop__DOT__pvr_rd = ((~ (IData)(vlSelf->dm_req_wen)) 
                                   & (IData)(vlSelf->dm_req_valid));
    vlSelf->simtop__DOT__pvr_wr = ((IData)(vlSelf->dm_req_valid) 
                                   & (IData)(vlSelf->dm_req_wen));
    vlSelf->simtop__DOT__dm_req_valid = vlSelf->dm_req_valid;
    if (vlSelf->simtop__DOT__core__DOT__replay_dcache_miss) {
        vlSelf->simtop__DOT__core__DOT__e2_p1_wen = 0U;
    }
    vlSelf->trace_wen1 = vlSelf->simtop__DOT__core__DOT__e2_p1_wen;
    vlSelf->simtop__DOT__core__DOT__dm_req_wen = vlSelf->simtop__DOT__dm_req_wen;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_2 
        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_right))
            ? (((- (IData)((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_sign))) 
                << 0x1eU) | (vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_1 
                             >> 2U)) : vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_1);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank2 
        = vlSelf->simtop__DOT__core__DOT__rf_rbank_p1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank3 
        = vlSelf->simtop__DOT__core__DOT__rf_rbank_p1;
    vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata3 
        = (((~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh) 
                >> 3U)) & (IData)(vlSelf->simtop__DOT__core__DOT__rf_rbank_p1))
            ? vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1
           [(7U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh))]
            : vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0
           [vlSelf->simtop__DOT__core__DOT__id_instr1_rsh]);
    vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata2 
        = (((~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl) 
                >> 3U)) & (IData)(vlSelf->simtop__DOT__core__DOT__rf_rbank_p1))
            ? vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1
           [(7U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl))]
            : vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0
           [vlSelf->simtop__DOT__core__DOT__id_instr1_rsl]);
    if (vlSelf->simtop__DOT__core__DOT__rf_rbank_p0) {
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank0 = 1U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank1 = 1U;
        vlSelf->simtop__DOT__core__DOT__rf_rdata[4U] 
            = vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1
            [0U];
        vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rd_r0 
            = vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1
            [0U];
    } else {
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank0 = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank1 = 0U;
        vlSelf->simtop__DOT__core__DOT__rf_rdata[4U] 
            = vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0
            [0U];
        vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rd_r0 
            = vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0
            [0U];
    }
    vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata1 
        = (((~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh) 
                >> 3U)) & (IData)(vlSelf->simtop__DOT__core__DOT__rf_rbank_p0))
            ? vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1
           [(7U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh))]
            : vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0
           [vlSelf->simtop__DOT__core__DOT__id_instr0_rsh]);
    vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata0 
        = (((~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsl) 
                >> 3U)) & (IData)(vlSelf->simtop__DOT__core__DOT__rf_rbank_p0))
            ? vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1
           [(7U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsl))]
            : vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0
           [vlSelf->simtop__DOT__core__DOT__id_instr0_rsl]);
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
        vlSelf->simtop__DOT__core__DOT__e1_p1_wen = 0U;
        if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_sel) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wpending 
                = vlSelf->simtop__DOT__core__DOT__e1_exu_wpending;
            vlSelf->simtop__DOT__core__DOT__e1_p1_wen 
                = vlSelf->simtop__DOT__core__DOT__e1_exu_wen;
        }
        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_sel)))) {
            vlSelf->simtop__DOT__core__DOT__e1_p0_wpending 
                = vlSelf->simtop__DOT__core__DOT__e1_exu_wpending;
        }
    } else {
        vlSelf->simtop__DOT__core__DOT__e1_p1_wen = 0U;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_mtu0_wen))) {
        vlSelf->simtop__DOT__core__DOT__e1_p0_wpending 
            = vlSelf->simtop__DOT__core__DOT__e1_mtu0_wpending;
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
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_mtu1_wen))) {
        vlSelf->simtop__DOT__core__DOT__e1_p1_wpending 
            = vlSelf->simtop__DOT__core__DOT__e1_mtu1_wpending;
        vlSelf->simtop__DOT__core__DOT__e1_p1_wen = vlSelf->simtop__DOT__core__DOT__e1_mtu1_wen;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp)))) {
        if ((1U & (~ ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel)) 
                      | (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen))))) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wpending 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending;
            vlSelf->simtop__DOT__core__DOT__e1_p1_wen 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wen;
        }
        if ((1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel)) 
                   | (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen)))) {
            vlSelf->simtop__DOT__core__DOT__e1_p0_wpending 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending;
        }
        if (vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wen 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen;
        }
    }
    if (vlSelf->simtop__DOT__core__DOT__replay_dcache_miss) {
        vlSelf->simtop__DOT__core__DOT__e1_p1_wen = 0U;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp)))) {
        if ((1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel)) 
                   | (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen)))) {
            vlSelf->simtop__DOT__core__DOT__e1_p0_wen 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wen;
        }
    }
    if (vlSelf->simtop__DOT__core__DOT__replay_dcache_miss) {
        vlSelf->simtop__DOT__core__DOT__e1_p0_wen = 0U;
    }
    vlSelf->simtop__DOT__core__DOT__e1_p0_wdst = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid) {
        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_sel)))) {
            vlSelf->simtop__DOT__core__DOT__e1_p0_wdst 
                = vlSelf->simtop__DOT__core__DOT__e1_exu_wdst;
        }
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_mtu0_wen))) {
        vlSelf->simtop__DOT__core__DOT__e1_p0_wdst 
            = vlSelf->simtop__DOT__core__DOT__e1_mtu0_wdst;
    }
    vlSelf->simtop__DOT__core__DOT__e1_p1_wdst = 0U;
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
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp)))) {
        if ((1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel)) 
                   | (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen)))) {
            vlSelf->simtop__DOT__core__DOT__e1_p0_wdst 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel)) 
                      | (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen))))) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wdst 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst;
        }
        if (vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wdst 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst;
        }
    }
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
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_csr_rdata 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val = 0U;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata = 0ULL;
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
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                    ? (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr))
                                                    : (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr)));
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
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                    ? (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr))
                                                    : (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr)));
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
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                    ? (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr))
                                                    : (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr)));
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
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr))
                                                : (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr)));
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
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                    ? (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr))
                                                    : (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr)));
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
                                            vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                    ? (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr))
                                                    : (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr)));
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
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr))
                                                : (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr)));
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
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr))
                                                : (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr)));
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
                                        vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr))
                                                : (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr)));
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
                                    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                            ? (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr))
                                            : (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr)));
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
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata 
                                    = (QData)((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl));
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
