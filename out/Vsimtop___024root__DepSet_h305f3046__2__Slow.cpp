// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimtop.h for the primary calling header

#include "verilated.h"

#include "Vsimtop__Syms.h"
#include "Vsimtop___024root.h"

VL_ATTR_COLD void Vsimtop___024root___stl_sequent__TOP__8(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___stl_sequent__TOP__8\n"); );
    // Init
    CData/*4:0*/ simtop__DOT__core__DOT____VdfgTmp_ha5bb1e30__0;
    simtop__DOT__core__DOT____VdfgTmp_ha5bb1e30__0 = 0;
    CData/*4:0*/ simtop__DOT__core__DOT____VdfgTmp_h46e61820__0;
    simtop__DOT__core__DOT____VdfgTmp_h46e61820__0 = 0;
    CData/*4:0*/ simtop__DOT__core__DOT____VdfgTmp_h4a8f69b7__0;
    simtop__DOT__core__DOT____VdfgTmp_h4a8f69b7__0 = 0;
    CData/*0:0*/ simtop__DOT__core__DOT____VdfgTmp_h1a7915f0__0;
    simtop__DOT__core__DOT____VdfgTmp_h1a7915f0__0 = 0;
    CData/*0:0*/ simtop__DOT__core__DOT____VdfgTmp_h5f4afbfc__0;
    simtop__DOT__core__DOT____VdfgTmp_h5f4afbfc__0 = 0;
    CData/*0:0*/ simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT____VdfgTmp_hf013ec3b__0;
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT____VdfgTmp_hf013ec3b__0 = 0;
    CData/*0:0*/ simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0;
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 = 0;
    // Body
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
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_is_inf;
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
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdst1 
        = vlSelf->simtop__DOT__core__DOT__trace_wdst1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdst0 
        = vlSelf->simtop__DOT__core__DOT__trace_wdst0;
    vlSelf->simtop__DOT__core__DOT__trace_wen0 = vlSelf->simtop__DOT__trace_wen0;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_valid 
        = vlSelf->simtop__DOT__core__DOT__dm_req_valid;
    vlSelf->simtop__DOT__core__DOT__trace_wen1 = vlSelf->simtop__DOT__trace_wen1;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_8 
        = ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_right))
            ? (((- (IData)((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_sign))) 
                << 0x18U) | (vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_4 
                             >> 8U)) : vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_4);
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6ab68d09__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h30afbd87__0) 
           & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst)));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h3b4896c3__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h2883dc79__0) 
           & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst)));
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_op 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_write_r0 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_write_r0;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_write_rn 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_legal 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_legal;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_is_mt 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_complex 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_complex;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_write_fpul 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_write_fpul;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_write_rn 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_write_rn;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_is_fp 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_is_fp;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_is_br 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_is_br;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_is_ex 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_is_ex;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_is_ls 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_is_ls;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_ls_use_freg 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_freg;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_use_rh 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rh;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_use_rl 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rl;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_use_r0 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_r0;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_rh 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_use_rh;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_rl 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_use_rl;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_r0 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_write_t 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_write_t;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_write_csr 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_csr 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr;
    simtop__DOT__core__DOT____VdfgTmp_h5f4afbfc__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr));
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_fpul 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul;
    vlSelf->simtop__DOT__core__DOT__p1_fpul_hazard 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpul_busy) 
           & ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul) 
              | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_write_fpul)));
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_ls_use_rh 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_t 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_use_t;
    simtop__DOT__core__DOT____VdfgTmp_h1a7915f0__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_t) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_write_t));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_op 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_legal 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_legal;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_mt 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_is_mt;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_complex 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_complex;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_write_r0 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_write_r0;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_write_rn 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_write_rn;
    vlSelf->simtop__DOT__core__DOT__dual_issue_int_no_interdep 
        = (1U & ((~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rl) 
                     & ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_rn) 
                        & ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl) 
                           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh))))) 
                 & (~ (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rh) 
                        & ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_rn) 
                           & ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh) 
                              == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh)))) 
                       | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rl) 
                           & ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_r0) 
                              & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl)))) 
                          | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rh) 
                              & ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_r0) 
                                 & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh)))) 
                             | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0) 
                                 & ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_rn) 
                                    & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh)))) 
                                | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_r0) 
                                   & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0)))))))));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_csr 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_use_csr;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_ls_use_freg 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_freg;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_use_rh 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rh;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_use_rl 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_use_r0 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_rh 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_use_rh;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_rl 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_use_rl;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_r0 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_use_r0;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_write_rn 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_br 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_is_br;
    vlSelf->simtop__DOT__core__DOT__id_bru_sel = (1U 
                                                  & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_br)));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_ex 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_is_ex;
    vlSelf->simtop__DOT__core__DOT__id_exu_sel = (1U 
                                                  & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_ex)));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_write_t 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_write_t;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_write_fpul 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_write_csr 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_fpul 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul;
    vlSelf->simtop__DOT__core__DOT__p0_fpul_hazard 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpul_busy) 
           & ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul) 
              | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul)));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_t 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_use_t;
    vlSelf->simtop__DOT__core__DOT__p0_t_hazard = ((IData)(vlSelf->simtop__DOT__core__DOT__t_busy) 
                                                   & ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_t) 
                                                      | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_t)));
    vlSelf->simtop__DOT__core__DOT__p0_csr_hazard = 
        ((IData)(vlSelf->simtop__DOT__core__DOT__csr_busy) 
         & ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_csr) 
            | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr) 
               | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul) 
                  | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_t)))));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_ls_use_rh 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_fp 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp;
    vlSelf->simtop__DOT__core__DOT__id_fpu_sel = (1U 
                                                  & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp)));
    if (vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp) {
        vlSelf->simtop__DOT__core__DOT__fprf_rsrc1 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_rsl;
        vlSelf->simtop__DOT__core__DOT__fprf_rsrc2 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_rsh;
    } else {
        vlSelf->simtop__DOT__core__DOT__fprf_rsrc1 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_rsl;
        vlSelf->simtop__DOT__core__DOT__fprf_rsrc2 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_rsh;
    }
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_ls 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls;
    vlSelf->simtop__DOT__core__DOT__id_lsu_sel = (1U 
                                                  & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls)));
    vlSelf->simtop__DOT__core__DOT__fprf_rbank0 = ((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
                                                   ^ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls)
                                                     ? (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_altbank)
                                                     : (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_altbank)));
    vlSelf->simtop__DOT__core__DOT__fprf_rsrc0 = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls)
                                                   ? 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh)
                                                    ? (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh)
                                                    : (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsl))
                                                   : 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh)
                                                    ? (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh)
                                                    : (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl)));
    vlSelf->dm_req_wdata = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))
                             ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))
                                 ? vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata
                                 : (((QData)((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata))))
                             : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))
                                 ? (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))) 
                                     << 0x30U) | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))))))
                                 : (((QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))) 
                                     << 0x38U) | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))) 
                                                         << 0x20U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))) 
                                                            << 0x18U) 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))) 
                                                               << 0x10U) 
                                                              | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))) 
                                                                  << 8U) 
                                                                 | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))))))))))));
    vlSelf->simtop__DOT__pvr__DOT__pvr_din = (IData)(
                                                     (vlSelf->dm_req_wdata 
                                                      >> 0U));
    vlSelf->simtop__DOT__dm_req_wdata = vlSelf->dm_req_wdata;
    vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata = 0U;
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata = 0U;
    vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen;
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
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                            }
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                                vlSelf->dm_req_addr 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            } else {
                                                vlSelf->dm_req_addr 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                            }
                                        } else {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
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
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                            }
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                                vlSelf->dm_req_addr 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            } else {
                                                vlSelf->dm_req_addr 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                            }
                                        } else {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
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
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                            }
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                                vlSelf->dm_req_addr 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            } else {
                                                vlSelf->dm_req_addr 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                            }
                                        } else {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                        }
                                    }
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                        } else {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                        }
                                    } else {
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
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
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                            }
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                                vlSelf->dm_req_addr 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            } else {
                                                vlSelf->dm_req_addr 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                            }
                                        } else {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
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
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                            }
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                                vlSelf->dm_req_addr 
                                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            } else {
                                                vlSelf->dm_req_addr 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                            }
                                        } else {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                        }
                                    }
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                        } else {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                        }
                                    } else {
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
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
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                        }
                                    }
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                        } else {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                        }
                                    } else {
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
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
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                        }
                                    }
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                        } else {
                                            vlSelf->dm_req_addr 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                        }
                                    } else {
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                    }
                                }
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                    } else {
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                    }
                                } else {
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                     >> 0xcU)))) {
                    if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0_gbr;
                        }
                    } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 8U)))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_gbr;
                            }
                        } else {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_gbr;
                        }
                    } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 8U)))) {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_gbr;
                        }
                    } else {
                        vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_gbr;
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
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_imm4;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 9U)))) {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_imm4;
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
                                    vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc;
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                            }
                        } else {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                        }
                    }
                }
            } else if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_imm4;
            } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                         >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                     >> 3U)))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
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
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
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
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                     >> 3U)))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
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
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                     >> 3U)))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                    }
                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                 >> 3U)))) {
                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                    }
                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
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
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                   >> 3U)))) {
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
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                                 >> 3U)))) {
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
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 3U)))) {
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
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
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
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                             >> 3U)))) {
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
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                          >> 3U)))) {
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
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
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
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
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
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
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
                                vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata 
                                = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                        }
                    } else {
                        vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                    }
                }
            }
        } else if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_imm4h;
        } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                        vlSelf->dm_req_addr 
                                            = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                                    }
                                } else {
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                         >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                                }
                            } else {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                                }
                            } else {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                     >> 3U)))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                            }
                        } else {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
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
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                                }
                            } else {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                     >> 3U)))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                            }
                        } else {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                            }
                        } else {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                 >> 3U)))) {
                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                        }
                    } else {
                        vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                    }
                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph;
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
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                                }
                            } else {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                     >> 3U)))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                            }
                        } else {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                            }
                        } else {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                                 >> 3U)))) {
                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                            vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                        }
                    } else {
                        vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                             >> 3U)))) {
            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                        vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                    }
                } else {
                    vlSelf->dm_req_addr = vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0;
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__out_t 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu0_t;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__out_t 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu1_t;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__eq 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_eq;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__gt 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_gt;
    vlSelf->simtop__DOT__core__DOT__fpu_out_t = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid) {
        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop)))) {
                        vlSelf->simtop__DOT__core__DOT__fpu_out_t 
                            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_gt;
                    }
                } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop))) {
                    vlSelf->simtop__DOT__core__DOT__fpu_out_t 
                        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_eq;
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_invalid 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__invalid_int) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_v_en));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_nan 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_nan) 
           | ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_nan) 
              | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__invalid_int)));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT____VdfgTmp_hf013ec3b__0 
        = (IData)((0U != (3U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum)));
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wen0 
        = vlSelf->simtop__DOT__core__DOT__trace_wen0;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wen1 
        = vlSelf->simtop__DOT__core__DOT__trace_wen1;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter 
        = ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_right))
            ? (((- (IData)((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_sign))) 
                << 0x10U) | (vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_8 
                             >> 0x10U)) : vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_8);
    vlSelf->simtop__DOT__core__DOT__p1_int_hazard = 
        (((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h2883dc79__0) 
          & ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h297f0f65__0) 
             & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rl))) 
         | (((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h2883dc79__0) 
             & ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h299a5b06__0) 
                & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rh))) 
            | (((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h3b4896c3__0) 
                & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0)) 
               | (((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h30afbd87__0) 
                   & ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h7333f59e__0) 
                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rl))) 
                  | (((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h30afbd87__0) 
                      & ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6cdcc83b__0) 
                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rh))) 
                     | ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6ab68d09__0) 
                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0)))))));
    vlSelf->simtop__DOT__core__DOT__p0_int_hazard = 
        (((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h2883dc79__0) 
          & ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h29b8f1bc__0) 
             & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_rl))) 
         | (((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h2883dc79__0) 
             & ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h29ae45fa__0) 
                & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_rh))) 
            | (((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h3b4896c3__0) 
                & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_r0)) 
               | (((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h30afbd87__0) 
                   & ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6cfdb3c1__0) 
                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_rl))) 
                  | (((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h30afbd87__0) 
                      & ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6ce33f07__0) 
                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_rh))) 
                     | ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6ab68d09__0) 
                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_r0)))))));
    vlSelf->simtop__DOT__core__DOT__p1_csr_hazard = 
        ((IData)(vlSelf->simtop__DOT__core__DOT__csr_busy) 
         & ((IData)(simtop__DOT__core__DOT____VdfgTmp_h5f4afbfc__0) 
            | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul) 
               | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_t))));
    vlSelf->simtop__DOT__core__DOT__p1_t_hazard = ((IData)(vlSelf->simtop__DOT__core__DOT__t_busy) 
                                                   & (IData)(simtop__DOT__core__DOT____VdfgTmp_h1a7915f0__0));
    vlSelf->simtop__DOT__core__DOT__dual_issue_no_res_conflict 
        = (1U & ((~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul) 
                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul))) 
                 & (~ (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_t) 
                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_t)) 
                       | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr) 
                           & ((IData)(simtop__DOT__core__DOT____VdfgTmp_h5f4afbfc__0) 
                              | (IData)(simtop__DOT__core__DOT____VdfgTmp_h1a7915f0__0))) 
                          | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_ex) 
                              & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_ex)) 
                             | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_br) 
                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_br)) 
                                | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls) 
                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_ls)) 
                                   | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp) 
                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_fp))))))))));
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rsrc1 
        = vlSelf->simtop__DOT__core__DOT__fprf_rsrc1;
    if (vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) {
        vlSelf->simtop__DOT__core__DOT__fprf_rdata1 
            = vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b1
            [vlSelf->simtop__DOT__core__DOT__fprf_rsrc1];
        vlSelf->simtop__DOT__core__DOT__fprf_rdata2 
            = vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b1
            [vlSelf->simtop__DOT__core__DOT__fprf_rsrc2];
    } else {
        vlSelf->simtop__DOT__core__DOT__fprf_rdata1 
            = vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b0
            [vlSelf->simtop__DOT__core__DOT__fprf_rsrc1];
        vlSelf->simtop__DOT__core__DOT__fprf_rdata2 
            = vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b0
            [vlSelf->simtop__DOT__core__DOT__fprf_rsrc2];
    }
    simtop__DOT__core__DOT____VdfgTmp_h46e61820__0 
        = (((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
            << 4U) | (IData)(vlSelf->simtop__DOT__core__DOT__fprf_rsrc1));
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rsrc2 
        = vlSelf->simtop__DOT__core__DOT__fprf_rsrc2;
    simtop__DOT__core__DOT____VdfgTmp_h4a8f69b7__0 
        = (((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
            << 4U) | (IData)(vlSelf->simtop__DOT__core__DOT__fprf_rsrc2));
    if (vlSelf->simtop__DOT__core__DOT__fprf_rbank0) {
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rbank0 = 1U;
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rsrc0 
            = vlSelf->simtop__DOT__core__DOT__fprf_rsrc0;
        vlSelf->simtop__DOT__core__DOT__fprf_rdata0 
            = vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b1
            [vlSelf->simtop__DOT__core__DOT__fprf_rsrc0];
    } else {
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rbank0 = 0U;
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rsrc0 
            = vlSelf->simtop__DOT__core__DOT__fprf_rsrc0;
        vlSelf->simtop__DOT__core__DOT__fprf_rdata0 
            = vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b0
            [vlSelf->simtop__DOT__core__DOT__fprf_rsrc0];
    }
    simtop__DOT__core__DOT____VdfgTmp_ha5bb1e30__0 
        = (((IData)(vlSelf->simtop__DOT__core__DOT__fprf_rbank0) 
            << 4U) | (IData)(vlSelf->simtop__DOT__core__DOT__fprf_rsrc0));
    vlSelf->simtop__DOT__core__DOT__dm_req_wdata = vlSelf->simtop__DOT__dm_req_wdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_alt_wdata 
        = vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wdata 
        = vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata;
    vlSelf->simtop__DOT__pvr__DOT__pvr_addr = (0xffffU 
                                               & (vlSelf->dm_req_addr 
                                                  >> 0U));
    vlSelf->simtop__DOT__dm_req_addr = vlSelf->dm_req_addr;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte 
        = (((7U == (7U & vlSelf->dm_req_addr)) << 7U) 
           | (((6U == (7U & vlSelf->dm_req_addr)) << 6U) 
              | (((5U == (7U & vlSelf->dm_req_addr)) 
                  << 5U) | (((4U == (7U & vlSelf->dm_req_addr)) 
                             << 4U) | (((3U == (7U 
                                                & vlSelf->dm_req_addr)) 
                                        << 3U) | ((
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->dm_req_addr)) 
                                                   << 2U) 
                                                  | (((1U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->dm_req_addr)) 
                                                      << 1U) 
                                                     | (0U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->dm_req_addr)))))))));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_word 
        = ((0xc0U & ((- (IData)((6U == (7U & vlSelf->dm_req_addr)))) 
                     << 6U)) | ((0x30U & ((- (IData)(
                                                     (4U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->dm_req_addr)))) 
                                          << 4U)) | 
                                ((0xcU & ((- (IData)(
                                                     (2U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->dm_req_addr)))) 
                                          << 2U)) | 
                                 (3U & (- (IData)((0U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->dm_req_addr))))))));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_long 
        = ((0xf0U & ((- (IData)((4U == (7U & vlSelf->dm_req_addr)))) 
                     << 4U)) | (0xfU & (- (IData)((0U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->dm_req_addr))))));
    vlSelf->dm_req_wmask = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))
                             ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))
                                 ? 0xffU : (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_long))
                             : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))
                                 ? (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_word)
                                 : (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte)));
    vlSelf->simtop__DOT__req_addr = (0x1fffffffU & vlSelf->dm_req_addr);
    if ((1U & (~ (vlSelf->dm_req_addr >> 0xfU)))) {
        if ((1U & (~ (vlSelf->dm_req_addr >> 0xeU)))) {
            if ((1U & (~ (vlSelf->dm_req_addr >> 0xdU)))) {
                if ((0x1000U & vlSelf->dm_req_addr)) {
                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                        = vlSelf->simtop__DOT__pvr__DOT__pal_ram
                        [(0xfffU & vlSelf->dm_req_addr)];
                } else if ((0x800U & vlSelf->dm_req_addr)) {
                    if ((0x400U & vlSelf->dm_req_addr)) {
                        if ((0x200U & vlSelf->dm_req_addr)) {
                            if ((0x100U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 7U)))) {
                                    if ((0x40U & vlSelf->dm_req_addr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & vlSelf->dm_req_addr)) {
                                                if (
                                                    (8U 
                                                     & vlSelf->dm_req_addr)) {
                                                    if (
                                                        (4U 
                                                         & vlSelf->dm_req_addr)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ vlSelf->dm_req_addr))) {
                                                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                                    = vlSelf->simtop__DOT__pvr__DOT__TA_OL_POINTERS_END;
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
                } else if ((0x400U & vlSelf->dm_req_addr)) {
                    if ((0x200U & vlSelf->dm_req_addr)) {
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 8U)))) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 7U)))) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 6U)))) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->dm_req_addr 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->dm_req_addr 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->dm_req_addr 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ vlSelf->dm_req_addr))) {
                                                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                                = vlSelf->simtop__DOT__pvr__DOT__TA_OL_POINTERS_START;
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
                } else if ((0x200U & vlSelf->dm_req_addr)) {
                    if ((0x100U & vlSelf->dm_req_addr)) {
                        if ((0x80U & vlSelf->dm_req_addr)) {
                            if ((0x40U & vlSelf->dm_req_addr)) {
                                if ((0x20U & vlSelf->dm_req_addr)) {
                                    if ((0x10U & vlSelf->dm_req_addr)) {
                                        if ((8U & vlSelf->dm_req_addr)) {
                                            if ((4U 
                                                 & vlSelf->dm_req_addr)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->dm_req_addr 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ vlSelf->dm_req_addr))) {
                                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                            = vlSelf->simtop__DOT__pvr__DOT__FOG_TABLE_END;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelf->dm_req_addr 
                                         >> 7U)))) {
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 6U)))) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->dm_req_addr 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelf->dm_req_addr))) {
                                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                        = vlSelf->simtop__DOT__pvr__DOT__FOG_TABLE_START;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x100U & vlSelf->dm_req_addr)) {
                    if ((1U & (~ (vlSelf->dm_req_addr 
                                  >> 7U)))) {
                        if ((0x40U & vlSelf->dm_req_addr)) {
                            if ((0x20U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 3U)))) {
                                        if ((4U & vlSelf->dm_req_addr)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->dm_req_addr 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelf->dm_req_addr))) {
                                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                        = vlSelf->simtop__DOT__pvr__DOT__TA_NEXT_OPB_INIT;
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->dm_req_addr 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->dm_req_addr))) {
                                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                    = vlSelf->simtop__DOT__pvr__DOT__TA_LIST_CONT;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x10U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->dm_req_addr))) {
                                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                    = vlSelf->simtop__DOT__pvr__DOT__TA_YUV_TEX_CNT;
                                            }
                                        }
                                    }
                                }
                            } else if ((8U & vlSelf->dm_req_addr)) {
                                if ((4U & vlSelf->dm_req_addr)) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__TA_YUV_TEX_CTRL;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__TA_YUV_TEX_BASE;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__TA_LIST_INIT;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__TA_ALLOC_CTRL;
                                }
                            }
                        } else if ((0x20U & vlSelf->dm_req_addr)) {
                            if ((0x10U & vlSelf->dm_req_addr)) {
                                if ((8U & vlSelf->dm_req_addr)) {
                                    if ((4U & vlSelf->dm_req_addr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->dm_req_addr))) {
                                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                    = vlSelf->simtop__DOT__pvr__DOT__TA_GLOB_TILE_CLIP;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__TA_ISP_CURRENT;
                                        }
                                    }
                                } else if ((4U & vlSelf->dm_req_addr)) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__TA_NEXT_OPB;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__TA_ISP_LIMIT;
                                    }
                                }
                            } else if ((8U & vlSelf->dm_req_addr)) {
                                if ((4U & vlSelf->dm_req_addr)) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__TA_OL_LIMIT;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__TA_ISP_BASE;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__TA_OL_BASE;
                                    }
                                }
                            }
                        } else if ((0x10U & vlSelf->dm_req_addr)) {
                            if ((8U & vlSelf->dm_req_addr)) {
                                if ((4U & vlSelf->dm_req_addr)) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__PT_ALPHA_REF;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__Y_COEFF;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FB_C_SOF;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__FB_BURSTCTRL;
                                }
                            }
                        } else if ((8U & vlSelf->dm_req_addr)) {
                            if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__SPG_STATUS;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__PAL_RAM_CTRL;
                                }
                            }
                        }
                    }
                } else if ((0x80U & vlSelf->dm_req_addr)) {
                    if ((0x40U & vlSelf->dm_req_addr)) {
                        if ((0x20U & vlSelf->dm_req_addr)) {
                            if ((0x10U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 3U)))) {
                                    if ((4U & vlSelf->dm_req_addr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->dm_req_addr))) {
                                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                    = vlSelf->simtop__DOT__pvr__DOT__SCALER_CTL;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__VO_STARTY;
                                        }
                                    }
                                }
                            } else if ((8U & vlSelf->dm_req_addr)) {
                                if ((4U & vlSelf->dm_req_addr)) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__VO_STARTX;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__VO_CONTROL;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__SPG_WIDTH;
                                }
                            }
                        } else if ((0x10U & vlSelf->dm_req_addr)) {
                            if ((8U & vlSelf->dm_req_addr)) {
                                if ((4U & vlSelf->dm_req_addr)) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__SPG_VBLANK;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__SPG_LOAD;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__SPG_HBLANK;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__SPG_CONTROL;
                                }
                            }
                        } else if ((8U & vlSelf->dm_req_addr)) {
                            if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__SPG_VBLANK_INT;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__SPG_HBLANK_INT;
                                }
                            }
                        } else if ((4U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__SPG_TRIGGER_POS;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->dm_req_addr 
                                             >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__FOG_CLAMP_MIN;
                            }
                        }
                    } else if ((0x20U & vlSelf->dm_req_addr)) {
                        if ((0x10U & vlSelf->dm_req_addr)) {
                            if ((8U & vlSelf->dm_req_addr)) {
                                if ((4U & vlSelf->dm_req_addr)) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__FOG_CLAMP_MAX;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FOG_DENSITY;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FOG_COL_VERT;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__FOG_COL_RAM;
                                }
                            }
                        } else if ((8U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 2U)))) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__SDRAM_CFG;
                                    }
                                }
                            }
                        } else if ((4U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__SDRAM_ARB_CFG;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->dm_req_addr 
                                             >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__SDRAM_REFRESH;
                            }
                        }
                    } else if ((0x10U & vlSelf->dm_req_addr)) {
                        if ((8U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 2U)))) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__ISP_FEED_CFG;
                                    }
                                }
                            }
                        }
                    } else if ((8U & vlSelf->dm_req_addr)) {
                        if ((4U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__ISP_BACKGND_T;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->dm_req_addr 
                                             >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__ISP_BACKGND_D;
                            }
                        }
                    } else if ((4U & vlSelf->dm_req_addr)) {
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__FPU_PERP_VAL;
                            }
                        }
                    } else if ((1U & (~ (vlSelf->dm_req_addr 
                                         >> 1U)))) {
                        if ((1U & (~ vlSelf->dm_req_addr))) {
                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                = vlSelf->simtop__DOT__pvr__DOT__HALF_OFFSET;
                        }
                    }
                } else if ((0x40U & vlSelf->dm_req_addr)) {
                    if ((0x20U & vlSelf->dm_req_addr)) {
                        if ((0x10U & vlSelf->dm_req_addr)) {
                            if ((8U & vlSelf->dm_req_addr)) {
                                if ((4U & vlSelf->dm_req_addr)) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__FPU_PARAM_CFG;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FPU_CULL_VAL;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FPU_SHAD_SCALE;
                                    }
                                }
                            }
                        } else if ((8U & vlSelf->dm_req_addr)) {
                            if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FB_Y_CLIP;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__FB_X_CLIP;
                                }
                            }
                        } else if ((4U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__FB_W_SOF2;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->dm_req_addr 
                                             >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__FB_W_SOF1;
                            }
                        }
                    } else if ((0x10U & vlSelf->dm_req_addr)) {
                        if ((8U & vlSelf->dm_req_addr)) {
                            if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FB_R_SIZE;
                                    }
                                }
                            }
                        } else if ((4U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__FB_R_SOF2;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->dm_req_addr 
                                             >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__FB_R_SOF1;
                            }
                        }
                    } else if ((8U & vlSelf->dm_req_addr)) {
                        if ((4U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__FB_W_LINESTRIDE;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->dm_req_addr 
                                             >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__FB_W_CTRL;
                            }
                        }
                    } else if ((4U & vlSelf->dm_req_addr)) {
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__FB_R_CTRL;
                            }
                        }
                    } else if ((1U & (~ (vlSelf->dm_req_addr 
                                         >> 1U)))) {
                        if ((1U & (~ vlSelf->dm_req_addr))) {
                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                = vlSelf->simtop__DOT__pvr__DOT__VO_BORDER_COL;
                        }
                    }
                } else if ((0x20U & vlSelf->dm_req_addr)) {
                    if ((0x10U & vlSelf->dm_req_addr)) {
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 2U)))) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__SPAN_SORT_CFG;
                                    }
                                }
                            }
                        }
                    } else if ((8U & vlSelf->dm_req_addr)) {
                        if ((4U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__REGION_BASE;
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelf->dm_req_addr 
                                         >> 2U)))) {
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__PARAM_BASE;
                            }
                        }
                    }
                } else if ((0x10U & vlSelf->dm_req_addr)) {
                    if ((8U & vlSelf->dm_req_addr)) {
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 2U)))) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__TEST_SELECT;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->dm_req_addr)) {
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__STARTRENDER;
                            }
                        }
                    }
                } else if ((8U & vlSelf->dm_req_addr)) {
                    if ((1U & (~ (vlSelf->dm_req_addr 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__SOFTRESET;
                            }
                        }
                    }
                } else if ((4U & vlSelf->dm_req_addr)) {
                    if ((1U & (~ (vlSelf->dm_req_addr 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelf->dm_req_addr))) {
                            vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                                = vlSelf->simtop__DOT__pvr__DOT__REVISION;
                        }
                    }
                } else if ((1U & (~ (vlSelf->dm_req_addr 
                                     >> 1U)))) {
                    if ((1U & (~ vlSelf->dm_req_addr))) {
                        vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout 
                            = vlSelf->simtop__DOT__pvr__DOT__ID;
                    }
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_t 
        = vlSelf->simtop__DOT__core__DOT__fpu_out_t;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__invalid 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_invalid;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_is_nan 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_nan;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_zero 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_nan)) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT____VdfgTmp_hecdd0ec1__0));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_inf 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_nan)) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT____VdfgTmp_hf5adef39__0));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
        = ((0x3fffffeU & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum 
                          >> 1U)) | (IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT____VdfgTmp_hf013ec3b__0));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
        = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_m 
        = vlSelf->simtop__DOT__core__DOT__exu__DOT__in_m;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_s 
        = vlSelf->simtop__DOT__core__DOT__exu__DOT__in_s;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_q 
        = vlSelf->simtop__DOT__core__DOT__exu__DOT__in_q;
    vlSelf->simtop__DOT__core__DOT__e1_exu_wdata = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid) {
        if ((0x8000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                  >> 0xcU)))) {
                        vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                            = vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                     >> 0xcU)))) {
                    if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                      >> 0xaU)))) {
                            if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                        ? (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                           | vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph)
                                        : (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                           ^ vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph));
                            } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                       & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph);
                            }
                        }
                    } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__adder);
                            }
                        }
                    }
                }
            }
        } else if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
            if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                        = (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__adder);
                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                            = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                                       >> 0xfU)))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl))
                                    : (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                                       >> 7U)))) 
                                        << 8U) | (0xffU 
                                                  & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)))
                                : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                    ? (0xffffU & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)
                                    : (0xffU & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)));
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__sub);
                        } else {
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__sub);
                            vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                                = (1U & (IData)((vlSelf->simtop__DOT__core__DOT__exu__DOT__sub 
                                                 >> 0x20U)));
                        }
                    } else {
                        vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                            = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                ? ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                    << 0x10U) | (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                                 >> 0x10U))
                                : ((0xffff0000U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl) 
                                   | ((0xff00U & (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                                  << 8U)) 
                                      | (0xffU & (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                                  >> 8U)))));
                    }
                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = (~ vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl);
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                 >> 0xcU)))) {
                if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                        ? ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                            >> 0x1fU)
                                            ? vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter
                                            : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter)
                                        : ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                            >> 0x1fU)
                                            ? vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter
                                            : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter));
                            }
                        }
                    }
                } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                        ? ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                            >> 0x1fU)
                                            ? vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter
                                            : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter)
                                        : ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                            >> 0x1fU)
                                            ? vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter
                                            : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter));
                            }
                        }
                    }
                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                            ? ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                                >> 0x1fU)
                                                ? vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter
                                                : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter)
                                            : ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                                >> 0x1fU)
                                                ? vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter
                                                : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter));
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                        ? ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                            >> 0x1fU)
                                            ? vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter
                                            : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter)
                                        : ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                            >> 0x1fU)
                                            ? vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter
                                            : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter));
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                             >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                    ? (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                       >> 0x10U) : 
                                   (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                    << 0x10U));
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                                    = (1U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph);
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t) 
                                        << 0x1fU) | 
                                       (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                        >> 1U));
                            } else {
                                vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                                    = (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                       >> 0x1fU);
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                        << 1U) | (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t));
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                                = (1U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph);
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = ((0x80000000U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph) 
                                   | (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                      >> 1U));
                        } else {
                            vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                                = (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                   >> 0x1fU);
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                   << 1U);
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                        ? ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                            >> 0x1fU)
                                            ? vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter
                                            : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter)
                                        : ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                            >> 0x1fU)
                                            ? vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter
                                            : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter));
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                             >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                    ? (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                       >> 8U) : (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                                 << 8U));
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                       - (IData)(1U));
                                vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                                    = (0U == vlSelf->simtop__DOT__core__DOT__e1_exu_wdata);
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                      >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                    ? ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                        >> 0x1fU) ? vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter
                                        : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter)
                                    : ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                        >> 0x1fU) ? vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter
                                        : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter));
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                         >> 1U)))) {
                        vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                            = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                                ? (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                   >> 2U) : (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                             << 2U));
                    }
                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                                = (1U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph);
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                    << 0x1fU) | (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                                 >> 1U));
                        } else {
                            vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                                = (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                   >> 0x1fU);
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                    << 1U) | (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                              >> 0x1fU));
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                            = (1U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph);
                        vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                            = (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                               >> 1U);
                    } else {
                        vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                            = (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                               >> 0x1fU);
                        vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                            = (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                               << 1U);
                    }
                }
            }
        } else if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
            if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__adder);
                                vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                                    = (1U & ((((~ (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                                   >> 0x1fU)) 
                                               & (~ 
                                                  (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                                   >> 0x1fU))) 
                                              & (IData)(
                                                        (vlSelf->simtop__DOT__core__DOT__exu__DOT__adder 
                                                         >> 0x1fU))) 
                                             | (((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                                  & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph) 
                                                 >> 0x1fU) 
                                                & (~ (IData)(
                                                             (vlSelf->simtop__DOT__core__DOT__exu__DOT__adder 
                                                              >> 0x1fU))))));
                            } else {
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__adder);
                                vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                                    = (1U & (IData)(
                                                    (vlSelf->simtop__DOT__core__DOT__exu__DOT__adder 
                                                     >> 0x20U)));
                            }
                        } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__adder);
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__sub);
                            vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                                = (1U & (((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                           ^ vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph) 
                                          >> 0x1fU) 
                                         & ((IData)(
                                                    (vlSelf->simtop__DOT__core__DOT__exu__DOT__sub 
                                                     >> 0x1fU)) 
                                            ^ (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                               >> 0x1fU))));
                        } else {
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__sub);
                            vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                                = (1U & (IData)((vlSelf->simtop__DOT__core__DOT__exu__DOT__sub 
                                                 >> 0x20U)));
                        }
                    } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw)))) {
                        vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                            = (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__sub);
                    }
                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw)))) {
                            if (vlSelf->simtop__DOT__core__DOT__exu__DOT__in_q) {
                                if (vlSelf->simtop__DOT__core__DOT__exu__DOT__in_m) {
                                    vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                        = (vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift 
                                           - vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl);
                                    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_q 
                                        = ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                            >> 0x1fU)
                                            ? (vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                               > vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift)
                                            : (vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                               <= vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift));
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                        = (vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift 
                                           + vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl);
                                    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_q 
                                        = ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                            >> 0x1fU)
                                            ? (vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                               >= vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift)
                                            : (vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                               < vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift));
                                }
                            } else if (vlSelf->simtop__DOT__core__DOT__exu__DOT__in_m) {
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = (vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift 
                                       + vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl);
                                vlSelf->simtop__DOT__core__DOT__exu__DOT__out_q 
                                    = ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                        >> 0x1fU) ? 
                                       (vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                        < vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift)
                                        : (vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                           >= vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift));
                            } else {
                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                    = (vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift 
                                       - vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl);
                                vlSelf->simtop__DOT__core__DOT__exu__DOT__out_q 
                                    = ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                        >> 0x1fU) ? 
                                       (vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                        <= vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift)
                                        : (vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                           > vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift));
                            }
                            vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                                = ((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__out_m) 
                                   == (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__out_q));
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                = ((vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                                    << 0x10U) | (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                                                 >> 0x10U));
                        }
                    }
                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))
                            ? (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                               | vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph)
                            : (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                               ^ vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph));
                } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                        = (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                           & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph);
                }
            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        vlSelf->simtop__DOT__core__DOT__exu__DOT__out_m 
                            = (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl 
                               >> 0x1fU);
                        vlSelf->simtop__DOT__core__DOT__exu__DOT__out_q 
                            = (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph 
                               >> 0x1fU);
                        vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t 
                            = ((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__out_m) 
                               != (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__out_q));
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                             >> 0xcU)))) {
            if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                  >> 6U)))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                  >> 6U)))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                  >> 6U)))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                  >> 6U)))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                                    = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                 >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__e1_exu_wdata 
                                                = vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__exu__DOT__out_m = 0U;
                                        vlSelf->simtop__DOT__core__DOT__exu__DOT__out_q = 0U;
                                        vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__e1_exu_flags = 
        (((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__out_m) 
          << 3U) | (((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__out_q) 
                     << 2U) | (((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__out_s) 
                                << 1U) | (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t))));
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rdata1 
        = vlSelf->simtop__DOT__core__DOT__fprf_rdata1;
    vlSelf->simtop__DOT__core__DOT__fp_rs1_busy = (1U 
                                                   & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                                                      >> (IData)(simtop__DOT__core__DOT____VdfgTmp_h46e61820__0)));
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rdata2 
        = vlSelf->simtop__DOT__core__DOT__fprf_rdata2;
    vlSelf->simtop__DOT__core__DOT__fp_rs2_busy = (1U 
                                                   & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                                                      >> (IData)(simtop__DOT__core__DOT____VdfgTmp_h4a8f69b7__0)));
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rdata0 
        = vlSelf->simtop__DOT__core__DOT__fprf_rdata0;
    vlSelf->simtop__DOT__core__DOT__dual_issue_fp_no_interdep 
        = (1U & ((~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_freg) 
                     & ((IData)(simtop__DOT__core__DOT____VdfgTmp_ha5bb1e30__0) 
                        == (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p0)))) 
                 & (~ (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rl) 
                        & ((IData)(simtop__DOT__core__DOT____VdfgTmp_h46e61820__0) 
                           == (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p0))) 
                       | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rh) 
                           | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_r0)) 
                          & ((IData)(simtop__DOT__core__DOT____VdfgTmp_h4a8f69b7__0) 
                             == (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p0)))))));
    vlSelf->simtop__DOT__core__DOT__fp_rs0_busy = (1U 
                                                   & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                                                      >> (IData)(simtop__DOT__core__DOT____VdfgTmp_ha5bb1e30__0)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_wdata 
        = vlSelf->simtop__DOT__core__DOT__dm_req_wdata;
    vlSelf->simtop__DOT__core__DOT__dm_req_addr = vlSelf->simtop__DOT__dm_req_addr;
    vlSelf->simtop__DOT__flash_cs = ((0x200000U <= vlSelf->simtop__DOT__req_addr) 
                                     & (0x21ffffU >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__system_cs = ((0x5f6800U <= vlSelf->simtop__DOT__req_addr) 
                                      & (0x5f69ffU 
                                         >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__maple_cs = ((0x5f6c00U <= vlSelf->simtop__DOT__req_addr) 
                                     & (0x5f6cffU >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__gdrom_cs = ((0x5f7000U <= vlSelf->simtop__DOT__req_addr) 
                                     & (0x5f70ffU >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__g1_reg_cs = ((0x5f7400U <= vlSelf->simtop__DOT__req_addr) 
                                      & (0x5f74ffU 
                                         >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__g2_reg_cs = ((0x5f7800U <= vlSelf->simtop__DOT__req_addr) 
                                      & (0x5f78ffU 
                                         >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__ta_reg_cs = ((0x5f8000U <= vlSelf->simtop__DOT__req_addr) 
                                      & (0x5f9fffU 
                                         >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__modem_cs = ((0x600000U <= vlSelf->simtop__DOT__req_addr) 
                                     & (0x6007ffU >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__aica_reg_cs = ((0x700000U 
                                         <= vlSelf->simtop__DOT__req_addr) 
                                        & (0x707fffU 
                                           >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__aica_rtc_cs = ((0x710000U 
                                         <= vlSelf->simtop__DOT__req_addr) 
                                        & (0x710007U 
                                           >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__aica_ram_cs = ((0x800000U 
                                         <= vlSelf->simtop__DOT__req_addr) 
                                        & (0x9fffffU 
                                           >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__g2_ext_cs = ((0x1000000U <= vlSelf->simtop__DOT__req_addr) 
                                      & (0x1ffffffU 
                                         >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__vram_64_cs = ((0x4000000U 
                                        <= vlSelf->simtop__DOT__req_addr) 
                                       & (0x47fffffU 
                                          >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__vram_32_cs = ((0x5000000U 
                                        <= vlSelf->simtop__DOT__req_addr) 
                                       & (0x57fffffU 
                                          >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__vram_64_mirr_cs = ((0x6000000U 
                                             <= vlSelf->simtop__DOT__req_addr) 
                                            & (0x67fffffU 
                                               >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__vram_32_mirr_cs = ((0x7000000U 
                                             <= vlSelf->simtop__DOT__req_addr) 
                                            & (0x77fffffU 
                                               >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__sdram_cs = ((0x8000000U <= vlSelf->simtop__DOT__req_addr) 
                                     & (0xbffffffU 
                                        >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__ta_fifo_cs = ((0x10000000U 
                                        <= vlSelf->simtop__DOT__req_addr) 
                                       & (0x107fffffU 
                                          >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__ta_yuv_cs = ((0x10800000U 
                                       <= vlSelf->simtop__DOT__req_addr) 
                                      & (0x10ffffffU 
                                         >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__ta_tex_cs = ((0x11000000U 
                                       <= vlSelf->simtop__DOT__req_addr) 
                                      & (0x117fffffU 
                                         >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__pvr_reg_cs = ((0x5f7c00U <= vlSelf->simtop__DOT__req_addr) 
                                       & (0x5f7cffU 
                                          >= vlSelf->simtop__DOT__req_addr));
    vlSelf->simtop__DOT__pvr__DOT__pvr_dout = vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout;
    vlSelf->simtop__DOT__pvr_dout = (QData)((IData)(vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_is_inf 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_inf;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__data 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate;
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x1ffffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0x19U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 1U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x2ffffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0x18U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 2U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x37fffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0x17U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 3U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3bfffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0x16U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 4U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3dfffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0x15U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 5U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3efffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0x14U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 6U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3f7ffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0x13U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 7U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3fbffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0x12U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 8U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3fdffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0x11U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 9U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3feffffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0x10U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0xaU));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3ff7fffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0xfU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0xbU));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3ffbfffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0xeU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0xcU));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3ffdfffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0xdU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0xdU));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3ffefffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0xcU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0xeU));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3fff7ffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0xbU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0xfU));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3fffbffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 0xaU));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0x10U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3fffdffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 9U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0x11U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3fffeffU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 8U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0x12U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3ffff7fU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 7U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0x13U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3ffffbfU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 6U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0x14U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3ffffdfU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 5U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0x15U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3ffffefU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 4U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0x16U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3fffff7U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 3U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0x17U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3fffffbU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 2U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0x18U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3fffffdU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | ((IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0) 
              << 1U));
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                 >> 0x19U));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
        = ((0x3fffffeU & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed) 
           | (IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_flags 
        = vlSelf->simtop__DOT__core__DOT__e1_exu_flags;
    vlSelf->simtop__DOT__core__DOT__e1_flags_wb = (
                                                   (0xeU 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_exu_flags)) 
                                                   | (1U 
                                                      & (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_write_t) 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_valid))
                                                          ? (IData)(vlSelf->simtop__DOT__core__DOT__e1_mtu1_t)
                                                          : 
                                                         (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_write_t) 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_valid))
                                                           ? (IData)(vlSelf->simtop__DOT__core__DOT__e1_mtu0_t)
                                                           : 
                                                          (((IData)(vlSelf->simtop__DOT__core__DOT__fpu_out_t_wen) 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__fpu_out_valid))
                                                            ? (IData)(vlSelf->simtop__DOT__core__DOT__fpu_out_t)
                                                            : (IData)(vlSelf->simtop__DOT__core__DOT__e1_exu_flags))))));
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_wdata 
        = vlSelf->simtop__DOT__core__DOT__e1_exu_wdata;
    vlSelf->simtop__DOT__core__DOT__e1_p0_wdata = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid) {
        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_exu_sel)))) {
            vlSelf->simtop__DOT__core__DOT__e1_p0_wdata 
                = vlSelf->simtop__DOT__core__DOT__e1_exu_wdata;
        }
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_mtu0_wen))) {
        vlSelf->simtop__DOT__core__DOT__e1_p0_wdata 
            = vlSelf->simtop__DOT__core__DOT__e1_mtu0_wdata;
    }
    vlSelf->simtop__DOT__core__DOT__e1_p1_wdata = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid) {
        if (vlSelf->simtop__DOT__core__DOT__e1_reg_exu_sel) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wdata 
                = vlSelf->simtop__DOT__core__DOT__e1_exu_wdata;
        }
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__e1_mtu1_wen))) {
        vlSelf->simtop__DOT__core__DOT__e1_p1_wdata 
            = vlSelf->simtop__DOT__core__DOT__e1_mtu1_wdata;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp)))) {
        if ((1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel)) 
                   | (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen)))) {
            vlSelf->simtop__DOT__core__DOT__e1_p0_wdata 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel)) 
                      | (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen))))) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wdata 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata;
        }
        if (vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wdata 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata;
        }
    }
    vlSelf->simtop__DOT__core__DOT__dual_issue = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_complex)) 
                                                  & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_complex)) 
                                                     & ((IData)(vlSelf->simtop__DOT__core__DOT__dual_issue_int_no_interdep) 
                                                        & ((IData)(vlSelf->simtop__DOT__core__DOT__dual_issue_fp_no_interdep) 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__dual_issue_no_res_conflict)))));
    vlSelf->simtop__DOT__core__DOT__p1_fp_hazard = 
        (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_freg) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__fp_rs0_busy)) 
         | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rl) 
             & (IData)(vlSelf->simtop__DOT__core__DOT__fp_rs1_busy)) 
            | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rh) 
                & (IData)(vlSelf->simtop__DOT__core__DOT__fp_rs2_busy)) 
               | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_r0) 
                   & (IData)(vlSelf->simtop__DOT__core__DOT__fp_r0_busy)) 
                  | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_write_rn) 
                     & (IData)(vlSelf->simtop__DOT__core__DOT__fp_p1_waw_busy))))));
    vlSelf->simtop__DOT__core__DOT__p0_fp_hazard = 
        (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_freg) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__fp_rs0_busy)) 
         | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl) 
             & (IData)(vlSelf->simtop__DOT__core__DOT__fp_rs1_busy)) 
            | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rh) 
                & (IData)(vlSelf->simtop__DOT__core__DOT__fp_rs2_busy)) 
               | (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0) 
                   & (IData)(vlSelf->simtop__DOT__core__DOT__fp_r0_busy)) 
                  | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn) 
                     & (IData)(vlSelf->simtop__DOT__core__DOT__fp_p0_waw_busy))))));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_addr 
        = vlSelf->simtop__DOT__core__DOT__dm_req_addr;
    vlSelf->simtop__DOT__dm_req_wmask = vlSelf->dm_req_wmask;
    vlSelf->simtop__DOT__pvr__DOT__ta_fifo_cs = vlSelf->simtop__DOT__ta_fifo_cs;
    vlSelf->simtop__DOT__pvr__DOT__ta_yuv_cs = vlSelf->simtop__DOT__ta_yuv_cs;
    vlSelf->simtop__DOT__pvr__DOT__ta_tex_cs = vlSelf->simtop__DOT__ta_tex_cs;
    if (vlSelf->simtop__DOT__pvr_reg_cs) {
        vlSelf->simtop__DOT__pvr__DOT__pvr_reg_cs = 1U;
        vlSelf->simtop__DOT__sh4_dm_rdata = vlSelf->simtop__DOT__pvr_dout;
    } else {
        vlSelf->simtop__DOT__pvr__DOT__pvr_reg_cs = 0U;
        vlSelf->simtop__DOT__sh4_dm_rdata = vlSelf->dm_resp_rdata;
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb 
        = (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
           & (- vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed));
    vlSelf->simtop__DOT__core__DOT__p1_hazard = ((IData)(vlSelf->simtop__DOT__core__DOT__p1_int_hazard) 
                                                 | ((IData)(vlSelf->simtop__DOT__core__DOT__p1_fp_hazard) 
                                                    | ((IData)(vlSelf->simtop__DOT__core__DOT__p1_t_hazard) 
                                                       | ((IData)(vlSelf->simtop__DOT__core__DOT__p1_fpul_hazard) 
                                                          | (IData)(vlSelf->simtop__DOT__core__DOT__p1_csr_hazard)))));
    vlSelf->simtop__DOT__core__DOT__p0_hazard = ((IData)(vlSelf->simtop__DOT__core__DOT__p0_int_hazard) 
                                                 | ((IData)(vlSelf->simtop__DOT__core__DOT__p0_fp_hazard) 
                                                    | ((IData)(vlSelf->simtop__DOT__core__DOT__p0_t_hazard) 
                                                       | ((IData)(vlSelf->simtop__DOT__core__DOT__p0_fpul_hazard) 
                                                          | (IData)(vlSelf->simtop__DOT__core__DOT__p0_csr_hazard)))));
    vlSelf->simtop__DOT__core__DOT__dm_req_wmask = vlSelf->simtop__DOT__dm_req_wmask;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd 
        = vlSelf->simtop__DOT__sh4_dm_rdata;
    vlSelf->simtop__DOT__core__DOT__dm_resp_rdata = vlSelf->simtop__DOT__sh4_dm_rdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_ll[0U] 
        = (IData)(vlSelf->simtop__DOT__sh4_dm_rdata);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_ll[1U] 
        = (IData)((vlSelf->simtop__DOT__sh4_dm_rdata 
                   >> 0x20U));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_wl[0U] 
        = (0xffffU & (IData)(vlSelf->simtop__DOT__sh4_dm_rdata));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_wl[1U] 
        = (0xffffU & (IData)((vlSelf->simtop__DOT__sh4_dm_rdata 
                              >> 0x10U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_wl[2U] 
        = (0xffffU & (IData)((vlSelf->simtop__DOT__sh4_dm_rdata 
                              >> 0x20U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_wl[3U] 
        = (0xffffU & (IData)((vlSelf->simtop__DOT__sh4_dm_rdata 
                              >> 0x30U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[0U] 
        = (0xffU & (IData)(vlSelf->simtop__DOT__sh4_dm_rdata));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[1U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__sh4_dm_rdata 
                            >> 8U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[2U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__sh4_dm_rdata 
                            >> 0x10U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[3U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__sh4_dm_rdata 
                            >> 0x18U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[4U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__sh4_dm_rdata 
                            >> 0x20U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[5U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__sh4_dm_rdata 
                            >> 0x28U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[6U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__sh4_dm_rdata 
                            >> 0x30U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[7U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__sh4_dm_rdata 
                            >> 0x38U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt = 0U;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((2U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 1U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((4U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 2U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((8U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 3U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x10U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 4U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x20U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 5U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x40U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 6U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x80U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 7U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x100U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 8U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x200U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 9U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x400U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0xaU : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x800U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0xbU : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x1000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0xcU : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x2000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0xdU : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x4000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0xeU : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x8000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0xfU : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x10000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0x10U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x20000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0x11U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x40000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0x12U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x80000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0x13U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x100000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0x14U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x200000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0x15U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x400000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0x16U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x800000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0x17U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x1000000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0x18U : 0U)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt 
        = (0x1fU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt) 
                    | ((0x2000000U & vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb)
                        ? 0x19U : 0U)));
    vlSelf->simtop__DOT__core__DOT__instr0_allow_issue 
        = (1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__p0_hazard)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_wmask 
        = vlSelf->simtop__DOT__core__DOT__dm_req_wmask;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_resp_rdata 
        = vlSelf->simtop__DOT__core__DOT__dm_resp_rdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_l 
        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_ll
        [(1U & ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_byte_offset) 
                >> 2U))];
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_w 
        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_wl
        [(3U & ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_byte_offset) 
                >> 1U))];
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_b 
        = vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl
        [vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_byte_offset];
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__count 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__exp_norm 
        = (0x7ffU & (((IData)(1U) + ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__swap_operand)
                                      ? (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_exp)
                                      : (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_exp))) 
                     - (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_norm 
        = (0x3ffffffU & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate 
                         << (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt)));
    vlSelf->simtop__DOT__core__DOT__instr0_issue = 
        ((IData)(vlSelf->simtop__DOT__core__DOT__instr0_allow_issue) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_valid));
    vlSelf->simtop__DOT__core__DOT__instr1_allow_issue 
        = (1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__p1_hazard)) 
                 & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_valid)) 
                    | ((IData)(vlSelf->simtop__DOT__core__DOT__instr0_allow_issue) 
                       & (IData)(vlSelf->simtop__DOT__core__DOT__dual_issue)))));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_ws 
        = (((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_w) 
                              >> 0xfU)))) << 0x10U) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_w));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bs 
        = (((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_b) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_b));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_frac 
        = (0x1ffffffU & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_zero)
                          ? vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_frac
                          : ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_zero)
                              ? vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_frac
                              : (((0x1fffffeU & (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum 
                                                 >> 1U)) 
                                  | (IData)(simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT____VdfgTmp_hf013ec3b__0)) 
                                 << (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt)))));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_frac 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_frac;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_norm_is_zero 
        = (0U == vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_norm);
    if (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_zero) {
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_exp 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_exp;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_sign 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_sign;
    } else if (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_zero) {
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_exp 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_exp;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_sign 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_sign;
    } else {
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_exp 
            = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__exp_norm;
        vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_sign 
            = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_norm_is_zero)) 
               & ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__swap_operand)
                   ? (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_sign)
                   : (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_sign)));
    }
    vlSelf->simtop__DOT__core__DOT__instr0_issued = vlSelf->simtop__DOT__core__DOT__instr0_issue;
    vlSelf->simtop__DOT__core__DOT__fpsb_set_en_p0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__instr0_issue));
    vlSelf->simtop__DOT__core__DOT__replay_stalled 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__instr0_issue)) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_valid));
    vlSelf->simtop__DOT__core__DOT__instr1_issue = 
        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_allow_issue));
    vlSelf->simtop__DOT__core__DOT__e2_lsu_wdata = 
        ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_use_passthrough)
          ? vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_passthrough
          : ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_rwsize))
              ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_rwsize))
                  ? 0U : vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_l)
              : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_rwsize))
                  ? vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_ws
                  : vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bs)));
    vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wdata 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdata;
    if (((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_amo) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_amo_write_t))) {
        vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wdata 
            = (0U == (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_oldval));
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_zero 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_nan)) 
           & (((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_zero) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_zero)) 
              | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_norm_is_zero)));
    vlSelf->simtop__DOT__core__DOT__instr1_issued = 
        ((IData)(vlSelf->simtop__DOT__core__DOT__instr1_issue) 
         & (((IData)(vlSelf->simtop__DOT__core__DOT__id_exu_sel) 
             & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_ex)) 
            | (((IData)(vlSelf->simtop__DOT__core__DOT__id_bru_sel) 
                & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_br)) 
               | (((IData)(vlSelf->simtop__DOT__core__DOT__id_lsu_sel) 
                   & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_ls)) 
                  | (((IData)(vlSelf->simtop__DOT__core__DOT__id_fpu_sel) 
                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_fp)) 
                     | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt))))));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_csr_wdata 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wdata;
    vlSelf->simtop__DOT__core__DOT__e2_flags_wb = (
                                                   (0xcU 
                                                    & (vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wdata 
                                                       >> 6U)) 
                                                   | (3U 
                                                      & vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wdata));
    vlSelf->simtop__DOT__core__DOT__e2_csr_wdata = vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_wdata 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdata;
    vlSelf->simtop__DOT__core__DOT__fprf_wdata1 = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdata;
    vlSelf->simtop__DOT__core__DOT__e2_p1_wdata = vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wdata;
    vlSelf->simtop__DOT__core__DOT__e2_p0_wdata = vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wdata;
    if ((((IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_valid) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wen)) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp)))) {
        if ((1U & (~ ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                      | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen))))) {
            vlSelf->simtop__DOT__core__DOT__e2_p1_wdata 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdata;
        }
        if ((1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                   | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen)))) {
            vlSelf->simtop__DOT__core__DOT__e2_p0_wdata 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdata;
        }
    }
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_sign;
    vlSelf->simtop__DOT__core__DOT__fpsb_set_en_p1 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_write_rn) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issued));
    vlSelf->simtop__DOT__core__DOT__replay_nodi = (
                                                   (~ (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issued)) 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_valid));
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wdata1 
        = vlSelf->simtop__DOT__core__DOT__fprf_wdata1;
    vlSelf->trace_wdata1 = vlSelf->simtop__DOT__core__DOT__e2_p1_wdata;
    vlSelf->trace_wdata0 = vlSelf->simtop__DOT__core__DOT__e2_p0_wdata;
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
         & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst)))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[4U] 
            = vlSelf->simtop__DOT__core__DOT__e1_p1_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr0_r0 
            = vlSelf->simtop__DOT__core__DOT__e1_p1_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst)))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[4U] 
            = vlSelf->simtop__DOT__core__DOT__e1_p0_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr0_r0 
            = vlSelf->simtop__DOT__core__DOT__e1_p0_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wen) 
                & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wdst)))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[4U] 
            = vlSelf->simtop__DOT__core__DOT__e2_p1_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr0_r0 
            = vlSelf->simtop__DOT__core__DOT__e2_p1_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wen) 
                & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wdst)))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[4U] 
            = vlSelf->simtop__DOT__core__DOT__e2_p0_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr0_r0 
            = vlSelf->simtop__DOT__core__DOT__e2_p0_wdata;
    } else {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[4U] 
            = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rd_r0;
        vlSelf->simtop__DOT__core__DOT__id_instr0_r0 
            = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rd_r0;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
         & (IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6cfdb3c1__0))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[0U] 
            = vlSelf->simtop__DOT__core__DOT__e1_p1_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr0_rl 
            = vlSelf->simtop__DOT__core__DOT__e1_p1_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                & (IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h29b8f1bc__0))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[0U] 
            = vlSelf->simtop__DOT__core__DOT__e1_p0_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr0_rl 
            = vlSelf->simtop__DOT__core__DOT__e1_p0_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wen) 
                & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wdst) 
                   == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsl)))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[0U] 
            = vlSelf->simtop__DOT__core__DOT__e2_p1_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr0_rl 
            = vlSelf->simtop__DOT__core__DOT__e2_p1_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wen) 
                & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wdst) 
                   == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsl)))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[0U] 
            = vlSelf->simtop__DOT__core__DOT__e2_p0_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr0_rl 
            = vlSelf->simtop__DOT__core__DOT__e2_p0_wdata;
    } else {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[0U] 
            = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata0;
        vlSelf->simtop__DOT__core__DOT__id_instr0_rl 
            = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata0;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
         & (IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6ce33f07__0))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[1U] 
            = vlSelf->simtop__DOT__core__DOT__e1_p1_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr0_rh 
            = vlSelf->simtop__DOT__core__DOT__e1_p1_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                & (IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h29ae45fa__0))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[1U] 
            = vlSelf->simtop__DOT__core__DOT__e1_p0_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr0_rh 
            = vlSelf->simtop__DOT__core__DOT__e1_p0_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wen) 
                & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wdst) 
                   == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh)))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[1U] 
            = vlSelf->simtop__DOT__core__DOT__e2_p1_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr0_rh 
            = vlSelf->simtop__DOT__core__DOT__e2_p1_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wen) 
                & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wdst) 
                   == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh)))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[1U] 
            = vlSelf->simtop__DOT__core__DOT__e2_p0_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr0_rh 
            = vlSelf->simtop__DOT__core__DOT__e2_p0_wdata;
    } else {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[1U] 
            = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata1;
        vlSelf->simtop__DOT__core__DOT__id_instr0_rh 
            = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata1;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
         & (IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h7333f59e__0))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[2U] 
            = vlSelf->simtop__DOT__core__DOT__e1_p1_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr1_rl 
            = vlSelf->simtop__DOT__core__DOT__e1_p1_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                & (IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h297f0f65__0))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[2U] 
            = vlSelf->simtop__DOT__core__DOT__e1_p0_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr1_rl 
            = vlSelf->simtop__DOT__core__DOT__e1_p0_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wen) 
                & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wdst) 
                   == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl)))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[2U] 
            = vlSelf->simtop__DOT__core__DOT__e2_p1_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr1_rl 
            = vlSelf->simtop__DOT__core__DOT__e2_p1_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wen) 
                & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wdst) 
                   == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl)))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[2U] 
            = vlSelf->simtop__DOT__core__DOT__e2_p0_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr1_rl 
            = vlSelf->simtop__DOT__core__DOT__e2_p0_wdata;
    } else {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[2U] 
            = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata2;
        vlSelf->simtop__DOT__core__DOT__id_instr1_rl 
            = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata2;
    }
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
         & (IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6cdcc83b__0))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[3U] 
            = vlSelf->simtop__DOT__core__DOT__e1_p1_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr1_rh 
            = vlSelf->simtop__DOT__core__DOT__e1_p1_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                & (IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h299a5b06__0))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[3U] 
            = vlSelf->simtop__DOT__core__DOT__e1_p0_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr1_rh 
            = vlSelf->simtop__DOT__core__DOT__e1_p0_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wen) 
                & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wdst) 
                   == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh)))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[3U] 
            = vlSelf->simtop__DOT__core__DOT__e2_p1_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr1_rh 
            = vlSelf->simtop__DOT__core__DOT__e2_p1_wdata;
    } else if (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wen) 
                & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wdst) 
                   == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh)))) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[3U] 
            = vlSelf->simtop__DOT__core__DOT__e2_p0_wdata;
        vlSelf->simtop__DOT__core__DOT__id_instr1_rh 
            = vlSelf->simtop__DOT__core__DOT__e2_p0_wdata;
    } else {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[3U] 
            = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata3;
        vlSelf->simtop__DOT__core__DOT__id_instr1_rh 
            = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata3;
    }
    vlSelf->simtop__DOT__core__DOT__if_pc_redirect 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__replay_icache_miss) 
           | ((IData)(vlSelf->simtop__DOT__core__DOT__replay_delayslot_miss) 
              | ((IData)(vlSelf->simtop__DOT__core__DOT__replay_nodi) 
                 | (IData)(vlSelf->simtop__DOT__core__DOT__e1_bru_taken))));
    vlSelf->simtop__DOT__core__DOT__if_pc_redirect_target 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_nack)
            ? vlSelf->simtop__DOT__core__DOT__replay_dcache_miss_pc
            : ((IData)(vlSelf->simtop__DOT__core__DOT__replay_delayslot_miss)
                ? vlSelf->simtop__DOT__core__DOT__replay_delayslot_miss_pc
                : ((IData)(vlSelf->simtop__DOT__core__DOT__e1_bru_taken)
                    ? vlSelf->simtop__DOT__core__DOT__e1_bru_target
                    : ((IData)(vlSelf->simtop__DOT__core__DOT__replay_icache_miss)
                        ? vlSelf->simtop__DOT__core__DOT__id_reg_pc
                        : ((IData)(vlSelf->simtop__DOT__core__DOT__replay_stalled)
                            ? vlSelf->simtop__DOT__core__DOT__id_instr0_pc
                            : ((IData)(vlSelf->simtop__DOT__core__DOT__replay_nodi)
                                ? vlSelf->simtop__DOT__core__DOT__id_instr1_pc
                                : 0U))))));
    vlSelf->simtop__DOT__core__DOT__rf_wdata1 = vlSelf->trace_wdata1;
    vlSelf->simtop__DOT__trace_wdata1 = vlSelf->trace_wdata1;
    vlSelf->simtop__DOT__core__DOT__rf_wdata0 = vlSelf->trace_wdata0;
    vlSelf->simtop__DOT__trace_wdata0 = vlSelf->trace_wdata0;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__in_rh 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_rh;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_rh 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_rh;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__in_rl 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_rl;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_rl 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_rl;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__in_r0 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_r0 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
    vlSelf->simtop__DOT__core__DOT__id_instr1_r0 = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
    vlSelf->simtop__DOT__core__DOT__id_dec0_oph = vlSelf->simtop__DOT__core__DOT__id_instr0_rh;
    vlSelf->simtop__DOT__core__DOT__id_dec1_oph = vlSelf->simtop__DOT__core__DOT__id_instr1_rh;
    vlSelf->simtop__DOT__core__DOT__id_dec0_opl = vlSelf->simtop__DOT__core__DOT__id_instr0_rl;
    if (vlSelf->simtop__DOT__core__DOT__id_instr0_valid) {
        if ((0x8000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 0xdU)))) {
                    if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                            = (0xfffffffcU & vlSelf->simtop__DOT__core__DOT__id_instr0_npc);
                    } else if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 0xaU)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                = vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext;
                        }
                    } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                    = (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext 
                                       << 2U);
                            }
                        }
                    }
                }
                if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 0xcU)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                            = vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext;
                    }
                } else if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                        = (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext 
                           << 2U);
                } else if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                        = ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                            ? vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext
                            : vlSelf->simtop__DOT__core__DOT__id_instr0_r0);
                } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                        = ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                            ? ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                ? vlSelf->simtop__DOT__core__DOT__id_instr0_npc
                                : (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext 
                                   << 2U)) : ((0x100U 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                               ? (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext 
                                                  << 1U)
                                               : vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext));
                } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 8U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                            = (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext 
                               << 2U);
                    }
                } else {
                    vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                        = ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                            ? (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext 
                               << 1U) : vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext);
                }
            } else if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                    = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                    = (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext12 
                       << 1U);
            } else if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                    = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                    = (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext 
                       << 1U);
            } else if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                            = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                        vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                            = (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext 
                               << 1U);
                    }
                } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                            = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                        vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                            = (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext 
                               << 1U);
                    }
                } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                        = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                    vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                        = (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext 
                           << 1U);
                } else {
                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                        = vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext;
                    vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                          >> 0xeU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 0xcU)))) {
                        if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_oph 
                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                            = vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                     >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 4U)))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                 >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 0xcU)))) {
                    if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                   >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                   >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                   >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                   >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 4U)))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
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
    vlSelf->simtop__DOT__core__DOT__id_dec1_opl = vlSelf->simtop__DOT__core__DOT__id_instr1_rl;
    if (vlSelf->simtop__DOT__core__DOT__id_instr1_valid) {
        if ((0x8000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                              >> 0xdU)))) {
                    if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                            = (0xfffffffcU & vlSelf->simtop__DOT__core__DOT__id_instr1_npc);
                    } else if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 0xaU)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                = vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext;
                        }
                    } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                    = (vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext 
                                       << 2U);
                            }
                        }
                    }
                }
                if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 0xcU)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                            = vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext;
                    }
                } else if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                        = (vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext 
                           << 2U);
                } else if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                        = ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                            ? vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext
                            : vlSelf->simtop__DOT__core__DOT__id_instr0_r0);
                } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                        = ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                            ? ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                ? vlSelf->simtop__DOT__core__DOT__id_instr1_npc
                                : (vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext 
                                   << 2U)) : ((0x100U 
                                               & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                               ? (vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext 
                                                  << 1U)
                                               : vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext));
                } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 8U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                            = (vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext 
                               << 2U);
                    }
                } else {
                    vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                        = ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                            ? (vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext 
                               << 1U) : vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext);
                }
            } else if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                    = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                    = (vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext12 
                       << 1U);
            } else if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                    = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                    = (vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext 
                       << 1U);
            } else if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                            = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                        vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                            = (vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext 
                               << 1U);
                    }
                } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                            = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                        vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                            = (vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext 
                               << 1U);
                    }
                } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                        = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                    vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                        = (vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext 
                           << 1U);
                } else {
                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                        = vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext;
                    vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                          >> 0xeU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 0xcU)))) {
                        if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                        = vlSelf->simtop__DOT__core__DOT__id_instr0_r0;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                            = vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                     >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 4U)))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                 >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                              >> 0xcU)))) {
                    if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                         >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 4U)))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_opl 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_npc;
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
    vlSelf->im_req_addr = ((IData)(vlSelf->simtop__DOT__core__DOT__if_pc_redirect)
                            ? vlSelf->simtop__DOT__core__DOT__if_pc_redirect_target
                            : vlSelf->simtop__DOT__core__DOT__if_pc_plus4);
    vlSelf->simtop__DOT__core__DOT__trace_wdata1 = vlSelf->simtop__DOT__trace_wdata1;
    vlSelf->simtop__DOT__core__DOT__trace_wdata0 = vlSelf->simtop__DOT__trace_wdata0;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_oph 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_oph;
    vlSelf->simtop__DOT__core__DOT__id_instr0_oph = vlSelf->simtop__DOT__core__DOT__id_dec0_oph;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_oph 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_oph;
    vlSelf->simtop__DOT__core__DOT__id_instr1_oph = vlSelf->simtop__DOT__core__DOT__id_dec1_oph;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_opl 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_opl;
    vlSelf->simtop__DOT__core__DOT__id_instr0_opl = vlSelf->simtop__DOT__core__DOT__id_dec0_opl;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_opl 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_opl;
    vlSelf->simtop__DOT__core__DOT__id_instr1_opl = vlSelf->simtop__DOT__core__DOT__id_dec1_opl;
    vlSelf->simtop__DOT__bios_cs = (0x1fffffU >= vlSelf->im_req_addr);
    vlSelf->simtop__DOT__core__DOT__if_pc_next = vlSelf->im_req_addr;
    vlSelf->simtop__DOT__im_req_addr = vlSelf->im_req_addr;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdata1 
        = vlSelf->simtop__DOT__core__DOT__trace_wdata1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdata0 
        = vlSelf->simtop__DOT__core__DOT__trace_wdata0;
    vlSelf->simtop__DOT__core__DOT__im_req_addr = vlSelf->simtop__DOT__im_req_addr;
}

VL_ATTR_COLD void Vsimtop___024root___stl_sequent__TOP__0(Vsimtop___024root* vlSelf);
VL_ATTR_COLD void Vsimtop___024root___stl_sequent__TOP__1(Vsimtop___024root* vlSelf);
void Vsimtop___024root___nba_sequent__TOP__4(Vsimtop___024root* vlSelf);
void Vsimtop___024root___ico_sequent__TOP__2(Vsimtop___024root* vlSelf);
VL_ATTR_COLD void Vsimtop___024root___stl_sequent__TOP__4(Vsimtop___024root* vlSelf);
void Vsimtop___024root___ico_sequent__TOP__4(Vsimtop___024root* vlSelf);
void Vsimtop___024root___ico_sequent__TOP__5(Vsimtop___024root* vlSelf);
void Vsimtop___024root___nba_sequent__TOP__9(Vsimtop___024root* vlSelf);

VL_ATTR_COLD void Vsimtop___024root___eval_stl(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsimtop___024root___stl_sequent__TOP__0(vlSelf);
        Vsimtop___024root___stl_sequent__TOP__1(vlSelf);
        Vsimtop___024root___nba_sequent__TOP__4(vlSelf);
        Vsimtop___024root___ico_sequent__TOP__2(vlSelf);
        Vsimtop___024root___stl_sequent__TOP__4(vlSelf);
        Vsimtop___024root___ico_sequent__TOP__4(vlSelf);
        Vsimtop___024root___ico_sequent__TOP__5(vlSelf);
        Vsimtop___024root___nba_sequent__TOP__9(vlSelf);
        Vsimtop___024root___stl_sequent__TOP__8(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimtop___024root___dump_triggers__ico(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimtop___024root___dump_triggers__act(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge im_req_valid)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimtop___024root___dump_triggers__nba(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge im_req_valid)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimtop___024root___ctor_var_reset(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->boot_vector = VL_RAND_RESET_I(32);
    vlSelf->im_req_addr = VL_RAND_RESET_I(32);
    vlSelf->im_req_valid = VL_RAND_RESET_I(1);
    vlSelf->im_resp_rdata = VL_RAND_RESET_I(32);
    vlSelf->im_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->dm_req_addr = VL_RAND_RESET_I(32);
    vlSelf->dm_req_wdata = VL_RAND_RESET_Q(64);
    vlSelf->dm_req_wmask = VL_RAND_RESET_I(8);
    vlSelf->dm_req_wen = VL_RAND_RESET_I(1);
    vlSelf->dm_req_valid = VL_RAND_RESET_I(1);
    vlSelf->dm_resp_rdata = VL_RAND_RESET_Q(64);
    vlSelf->dm_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->trace_valid0 = VL_RAND_RESET_I(1);
    vlSelf->trace_pc0 = VL_RAND_RESET_I(32);
    vlSelf->trace_instr0 = VL_RAND_RESET_I(16);
    vlSelf->trace_wen0 = VL_RAND_RESET_I(1);
    vlSelf->trace_wdst0 = VL_RAND_RESET_I(4);
    vlSelf->trace_wdata0 = VL_RAND_RESET_I(32);
    vlSelf->trace_valid1 = VL_RAND_RESET_I(1);
    vlSelf->trace_pc1 = VL_RAND_RESET_I(32);
    vlSelf->trace_instr1 = VL_RAND_RESET_I(16);
    vlSelf->trace_wen1 = VL_RAND_RESET_I(1);
    vlSelf->trace_wdst1 = VL_RAND_RESET_I(4);
    vlSelf->trace_wdata1 = VL_RAND_RESET_I(32);
    vlSelf->vram_rd = VL_RAND_RESET_I(1);
    vlSelf->vram_wr = VL_RAND_RESET_I(1);
    vlSelf->vram_addr = VL_RAND_RESET_I(23);
    vlSelf->vram_din = VL_RAND_RESET_I(32);
    vlSelf->vram_dout = VL_RAND_RESET_I(32);
    vlSelf->v1_x = VL_RAND_RESET_I(32);
    vlSelf->v1_y = VL_RAND_RESET_I(32);
    vlSelf->v2_x = VL_RAND_RESET_I(32);
    vlSelf->v2_y = VL_RAND_RESET_I(32);
    vlSelf->v3_x = VL_RAND_RESET_I(32);
    vlSelf->v3_y = VL_RAND_RESET_I(32);
    vlSelf->v1_a = VL_RAND_RESET_I(32);
    vlSelf->v2_a = VL_RAND_RESET_I(32);
    vlSelf->v3_a = VL_RAND_RESET_I(32);
    vlSelf->Aa = VL_RAND_RESET_I(32);
    vlSelf->Ba = VL_RAND_RESET_I(32);
    vlSelf->C = VL_RAND_RESET_I(32);
    vlSelf->c = VL_RAND_RESET_I(32);
    vlSelf->x = VL_RAND_RESET_I(32);
    vlSelf->y = VL_RAND_RESET_I(32);
    vlSelf->interp = VL_RAND_RESET_I(32);
    vlSelf->FDY12 = VL_RAND_RESET_I(32);
    vlSelf->FX1 = VL_RAND_RESET_I(32);
    vlSelf->FDX12 = VL_RAND_RESET_I(32);
    vlSelf->FY1 = VL_RAND_RESET_I(32);
    vlSelf->FDY23 = VL_RAND_RESET_I(32);
    vlSelf->FX2 = VL_RAND_RESET_I(32);
    vlSelf->FDX23 = VL_RAND_RESET_I(32);
    vlSelf->FY2 = VL_RAND_RESET_I(32);
    vlSelf->FDY31 = VL_RAND_RESET_I(32);
    vlSelf->FX3 = VL_RAND_RESET_I(32);
    vlSelf->FDX31 = VL_RAND_RESET_I(32);
    vlSelf->FY3 = VL_RAND_RESET_I(32);
    vlSelf->minx = VL_RAND_RESET_I(32);
    vlSelf->miny = VL_RAND_RESET_I(32);
    vlSelf->spanx = VL_RAND_RESET_I(32);
    vlSelf->spany = VL_RAND_RESET_I(32);
    vlSelf->twop = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__boot_vector = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__im_req_addr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__im_req_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__im_resp_rdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__im_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__dm_req_addr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__dm_req_wdata = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__dm_req_wmask = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__dm_req_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__dm_req_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__dm_resp_rdata = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__dm_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__trace_valid0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__trace_pc0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__trace_instr0 = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__trace_wen0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__trace_wdst0 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__trace_wdata0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__trace_valid1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__trace_pc1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__trace_instr1 = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__trace_wen1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__trace_wdst1 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__trace_wdata1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__vram_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__vram_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__vram_addr = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__vram_din = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__vram_dout = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__v1_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__v1_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__v2_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__v2_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__v3_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__v3_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__v1_a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__v2_a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__v3_a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__Aa = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__Ba = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__interp = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FDY12 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FX1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FDX12 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FY1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FDY23 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FX2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FDX23 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FY2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FDY31 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FX3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FDX31 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FY3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__minx = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__miny = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__spanx = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__spany = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__twop = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__rst_reg = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__req_addr = VL_RAND_RESET_I(29);
    vlSelf->simtop__DOT__bios_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__flash_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__system_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__maple_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__gdrom_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__g1_reg_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__g2_reg_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr_reg_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__ta_reg_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__modem_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__aica_reg_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__aica_rtc_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__aica_ram_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__g2_ext_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__vram_64_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__vram_32_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__vram_64_mirr_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__vram_32_mirr_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__sdram_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__ta_fifo_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__ta_yuv_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__ta_tex_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__sh4_dm_rdata = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr_dout = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__boot_vector = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__im_req_addr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__im_req_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__im_resp_rdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__im_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__im_invalidate_req = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__im_invalidate_resp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__dm_req_addr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__dm_req_wdata = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__core__DOT__dm_req_wmask = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__dm_req_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__dm_req_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__dm_resp_rdata = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__core__DOT__dm_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__dm_req_flush = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__dm_req_invalidate = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__dm_req_writeback = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__dm_req_prefetch = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__dm_req_nofill = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__trace_valid0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__trace_pc0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__trace_instr0 = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__trace_wen0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__trace_wdst0 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__trace_wdata0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__trace_valid1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__trace_pc1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__trace_instr1 = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__trace_wen1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__trace_wdst1 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__trace_wdata1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__if_pc_redirect = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__if_pc_redirect_target = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__if_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__if_pc_plus4 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__if_pc_next = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__csr_sr_md = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__csr_sr_rb = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__csr_sr_bl = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__csr_sr_fd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__csr_sr_imask = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__csr_ssr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__csr_spc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__csr_gbr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__csr_vbr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__csr_dbr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__csr_sgr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__csr_mach = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__csr_macl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__csr_pr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__csr_fpscr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__csr_fpul = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__csr_fpscr_sz = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_flush0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_flush1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_is_delayslot = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr0_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__id_instr1_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__id_instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_instr1_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_instr0_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr1_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr0_npc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr1_npc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr0_rsl = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__id_instr0_rsh = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__id_instr1_rsl = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__id_instr1_rsh = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__rf_rsrc[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__rf_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simtop__DOT__core__DOT__rf_wen0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf_wdst0 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__rf_wdata0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__rf_wen1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf_wdst1 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__rf_wdata1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__rf_rbank_p0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf_rbank_p1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf_wbank_p0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf_wbank_p1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rd_r0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__id_instr_rs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simtop__DOT__core__DOT__fprf_rsrc0 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fprf_rbank0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf_rdata0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fprf_rsrc1 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fprf_rbank1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fprf_rsrc2 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fprf_rbank2 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fprf_wen0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf_wdst0 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fprf_wbank0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf_wdata0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fprf_wen1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf_wdst1 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fprf_wbank1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf_wdata1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fprf_r0bank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf_r0data = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_dec0_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_dec0_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_dec0_use_r0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_use_rl = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_use_rh = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_write_rn = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_write_r0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rh = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_freg = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_altbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_altbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_use_csr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_is_mt = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ex = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_is_br = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_csr_id = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__id_dec0_raltbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_complex = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_dec1_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_use_rl = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_use_rh = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_write_r0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rl = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rh = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_r0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_freg = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_altbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_write_rn = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_write_altbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_write_fpul = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_is_ex = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_is_br = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_is_ls = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_is_fp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_csr_id = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__id_dec1_raltbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_instr0_rl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr0_rh = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr0_r0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr1_rl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr1_rh = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr1_r0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr0_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr0_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr1_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__id_instr1_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__p0_int_hazard = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__p1_int_hazard = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fp_scoreboard = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpsb_set_p0 = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpsb_set_p1 = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpsb_set_en_p0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpsb_set_en_p1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fp_rs0_busy = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fp_rs1_busy = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fp_rs2_busy = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fp_r0_busy = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fp_p0_waw_busy = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fp_p1_waw_busy = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__p0_fp_hazard = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__p1_fp_hazard = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__t_busy = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__p0_t_hazard = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__p1_t_hazard = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpul_busy = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__p0_fpul_hazard = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__p1_fpul_hazard = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__csr_busy = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__p0_csr_hazard = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__p1_csr_hazard = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__p0_hazard = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__p1_hazard = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_exu_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_exu_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_exu_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_bru_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_bru_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__e1_reg_bru_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_bru_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_r0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fop = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_frh = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_fr0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__dual_issue_int_no_interdep = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__dual_issue_fp_no_interdep = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__dual_issue_no_res_conflict = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__dual_issue = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__instr0_allow_issue = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__instr1_allow_issue = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_exu_sel = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_bru_sel = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_lsu_sel = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__id_fpu_sel = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_exu_sel = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_bru_sel = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_id = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_reg_fpu_sel = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__instr0_issue = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__instr1_issue = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__instr0_issued = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__instr1_issued = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__replay_icache_miss = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__replay_icache_miss_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__replay_delayslot_miss = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__replay_delayslot_miss_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__replay_stalled = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__replay_stalled_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__replay_nodi = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__replay_nodi_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__replay_mispredict = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__replay_mispredict_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__replay_dcache_miss = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__replay_dcache_miss_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_flags = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_flags = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_npc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_npc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr0_write_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_instr1_write_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_flags = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_flush = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_flags_restore = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_flags_restore_en = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_csr_sr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_exu_flags = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_exu_flags = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_exu_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_exu_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_exu_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_exu_wpending = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_reg_bru_pr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_bru_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_bru_taken = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_bru_target = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_bru_delayslot = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_bru_write_pr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_mtu0_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_mtu0_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_mtu0_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_mtu0_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_mtu0_wpending = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_mtu1_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_mtu1_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_mtu1_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_mtu1_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_mtu1_wpending = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_lsu_fpul_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wpending = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_lsu_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e2_lsu_csr_tonly = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_lsu_nack = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_lsu_fpul_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_lsu_waltbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_lsu_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_lsu_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e2_lsu_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_fpul = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu_out_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu_out_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu_out_t_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu_out_fpul = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu_out_fpul_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu_out_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu_out_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fpu_out_wbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu_out_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_flags_wb = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e2_flags_wb = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e2_flags_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_p0_wpending = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_p0_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_p0_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_p0_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e1_p1_wpending = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_p1_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e1_p1_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e1_p1_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wpending = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wpending = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_flags = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_pc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_flags = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_csr_id = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e2_reg_bru_write_pr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_reg_bru_pr_target = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e2_flush0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_flush1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_p0_wpending = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_p0_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_p0_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e2_p0_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e2_p1_wpending = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_p1_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_p1_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e2_p1_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e2_p0_waltbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_p1_waltbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__e2_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__e2_csr_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__e2_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6cfdb3c1__0 = 0;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h29b8f1bc__0 = 0;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6ce33f07__0 = 0;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h29ae45fa__0 = 0;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h7333f59e__0 = 0;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h297f0f65__0 = 0;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6cdcc83b__0 = 0;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h299a5b06__0 = 0;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h2883dc79__0 = 0;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h3b4896c3__0 = 0;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h30afbd87__0 = 0;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6ab68d09__0 = 0;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc0 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rdata0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc1 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc2 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank2 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc3 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rdata3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank3 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wen0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdst0 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdata0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wen1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdst1 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdata1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wbank0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wbank1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rd_r0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rsrc0 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rbank0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rdata0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rsrc1 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rbank1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rsrc2 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rbank2 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_r0bank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_r0data = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wen0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wdst0 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wbank0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wdata0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wen1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wdst1 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wbank1 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wdata1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simtop__DOT__core__DOT__du0__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__in_npc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__in_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__in_rl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__in_rh = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__in_r0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_r0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_rl = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_rh = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_write_rn = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_write_r0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_use_rl = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_use_rh = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_use_r0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_ls_use_freg = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_ls_use_altbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_ls_use_rh = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_write_rn = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_write_altbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_op = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_fpul = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_write_fpul = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_csr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_write_csr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_mt = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_ex = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_br = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_ls = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_fp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_csr_id = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_raltbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_complex = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_write_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_legal = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__imm = VL_RAND_RESET_I(12);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext12 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_npc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_rl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_rh = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_r0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_r0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_rl = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_rh = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_write_rn = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_write_r0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_use_rl = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_use_rh = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_use_r0 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_ls_use_freg = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_ls_use_altbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_ls_use_rh = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_write_rn = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_write_altbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_op = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_fpul = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_write_fpul = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_csr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_write_csr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_is_mt = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_is_ex = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_is_br = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_is_ls = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_is_fp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_csr_id = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_raltbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_complex = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_write_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_legal = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__imm = VL_RAND_RESET_I(12);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext12 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_flags = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_flags = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_m = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_q = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_s = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__in_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_m = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_q = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_s = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__out_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rn = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__use_carry = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__carry = VL_RAND_RESET_Q(33);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__adder = VL_RAND_RESET_Q(33);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__is_neg = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__sub = VL_RAND_RESET_Q(33);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rn_shift = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_left = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_right = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_4 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_8 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_arith = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_4 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_8 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_pr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__bru__DOT__in_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__bru__DOT__out_taken = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__bru__DOT__out_target = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__bru__DOT__out_delayslot = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__bru__DOT__out_write_pr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__in_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__in_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__in_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__out_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__out_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__out_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__out_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmpz = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__cmp_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__subs = VL_RAND_RESET_Q(33);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__lt = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__ltu = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__eq = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT____VdfgTmp_h9fa499bc__0 = 0;
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__in_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__in_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__in_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__out_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__out_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__out_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__out_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmpz = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__cmp_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__subs = VL_RAND_RESET_Q(33);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__lt = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__ltu = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__eq = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT____VdfgTmp_h9fa499bc__0 = 0;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_flush = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__fpscr_sz = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_r0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_fpr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_opl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__in_oph = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_alt_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_alt_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_alt_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_fpul_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wpending = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wfp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e1_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_csr_tonly = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_nack = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_fpul_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_waltbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_wfp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_addr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_wdata = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_wmask = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_resp_rdata = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_flush = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_invalidate = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_writeback = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_prefetch = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_nofill = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4 = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__imm4_zext_shifted = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_imm4 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_imm4h = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_gbr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__addr_gen_r0_gbr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize_bytes = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rl_inc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__rh_inc = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_gprw = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_amo = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__use_passthrough_csr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__passthrough_val = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__write_csr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__waltbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_write_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_state = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__amo_oldval = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__fpsize = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_word = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_long = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_rwsize = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_byte_offset = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_passthrough = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_use_passthrough = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_waltbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_write_csr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_fpul_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_wfp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_amo = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_reg_amo_write_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_wl[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_ll[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_b = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_w = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_l = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bs = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_ws = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_raw = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_fop = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_frl = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_frh = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_fr0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_t = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_t_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_fpul = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_fpul_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_wen = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_wdst = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_wbank = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__out_wdata = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_fr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_v_en = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpscr_rm = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__rn = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_l_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_h_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__in_0_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_i_tag = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_a_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_b_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_c_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_tag = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_exp = VL_RAND_RESET_I(11);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_frac = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_o_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_invalid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_overflow = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_underflow = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_inexact = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_rounded = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_i_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_eq = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_gt = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_invalid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fcmp_unordered = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__o_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__i_exp = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_frac_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_exp_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_l__DOT__is_exp_max = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__o_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__o_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__o_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__o_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__o_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__i_exp = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_frac_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_exp_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_h__DOT__is_exp_max = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__o_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__i_exp = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_frac_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_exp_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__expand_0__DOT__is_exp_max = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__o_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__o_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__o_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__o_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__o_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__i_exp = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__is_frac_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__is_exp_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_zero_expand__DOT__is_exp_max = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__o_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__o_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__o_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__o_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__o_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__i_exp = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__is_frac_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__is_exp_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__const_one_expand__DOT__is_exp_max = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__ven = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__i_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__i_tag = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__a_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__c_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_tag = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_exp = VL_RAND_RESET_I(11);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_frac = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__o_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__invalid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_invalid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_exp = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_frac = VL_RAND_RESET_Q(47);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__mul_o_tag = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_exp = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_frac = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_exp = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_frac = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_i_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_i_tag = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_tag = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_exp = VL_RAND_RESET_I(11);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_frac = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_invalid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__ven = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__i_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__i_tag = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_exp = VL_RAND_RESET_I(9);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_tag = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_exp = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_frac = VL_RAND_RESET_Q(47);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__o_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__invalid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__x_exp = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__x_frac = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__x_exp_norm = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__x_frac_norm = VL_RAND_RESET_Q(47);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__a_is_snan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_is_snan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__invalid_int = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT____VdfgTmp_hecdd0ec1__0 = 0;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT____VdfgTmp_hf5adef39__0 = 0;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__ven = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__i_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__i_tag = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_exp = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_exp = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_tag = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_exp = VL_RAND_RESET_I(11);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_frac = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__invalid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__exp_diff = VL_RAND_RESET_I(11);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__neg_exp_diff = VL_RAND_RESET_I(11);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_ext = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_ext = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_shifted = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_shifted = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__swap_operand = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__aa_frac_norm = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__bb_frac_norm = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__same_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum = VL_RAND_RESET_I(27);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_sum_truncate = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_shamt = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_norm = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_norm_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__exp_norm = VL_RAND_RESET_I(11);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_is_snan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_is_snan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__invalid_int = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__data = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__shamt = VL_RAND_RESET_I(11);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__shifted = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__residual = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__shamt_bounded = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__data = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__shamt = VL_RAND_RESET_I(11);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__shifted = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__residual = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__shamt_bounded = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__data = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb = VL_RAND_RESET_I(26);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__rm = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_exp = VL_RAND_RESET_I(11);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_frac = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__i_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_val = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__underflow = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__inexact = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__exp_biased = VL_RAND_RESET_I(12);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_exp = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fma_round__DOT__o_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__ven = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__i_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_exp = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_exp = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_frac = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__eq = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__gt = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__invalid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__unordered = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__exp_eq = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__exp_gt = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__frac_eq = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__frac_gt = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__exp_frac_eq = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__exp_frac_gt = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__cmp_eq = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__cmp_gt = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__a_is_snan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fcmp__DOT__b_is_snan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__pvr_reg_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ta_fifo_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ta_yuv_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ta_tex_cs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__pvr_addr = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__pvr__DOT__pvr_din = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__pvr_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__pvr_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__pvr_dout = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ta_fifo_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__vram_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__vram_din = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__vram_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__vram_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__vram_dout = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v1_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v1_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v2_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v2_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v3_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v3_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v1_a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v2_a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v3_a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__Aa = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__Ba = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__interp = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FDY12 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FX1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FDX12 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FY1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FDY23 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FX2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FDX23 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FY2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FDY31 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FX3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FDX31 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FY3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__minx = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__miny = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__spanx = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__spany = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__twop = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__pvr__DOT__ID = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__REVISION = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SOFTRESET = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__STARTRENDER = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TEST_SELECT = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__PARAM_BASE = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__REGION_BASE = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SPAN_SORT_CFG = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__VO_BORDER_COL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FB_R_CTRL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FB_W_CTRL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FB_W_LINESTRIDE = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FB_R_SOF1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FB_R_SOF2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FB_R_SIZE = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FB_W_SOF1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FB_W_SOF2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FB_X_CLIP = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FB_Y_CLIP = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FPU_SHAD_SCALE = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FPU_CULL_VAL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FPU_PARAM_CFG = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__HALF_OFFSET = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FPU_PERP_VAL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ISP_BACKGND_D = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ISP_BACKGND_T = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ISP_FEED_CFG = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SDRAM_REFRESH = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SDRAM_ARB_CFG = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SDRAM_CFG = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FOG_COL_RAM = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FOG_COL_VERT = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FOG_DENSITY = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FOG_CLAMP_MAX = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FOG_CLAMP_MIN = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SPG_TRIGGER_POS = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SPG_HBLANK_INT = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SPG_VBLANK_INT = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SPG_CONTROL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SPG_HBLANK = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SPG_LOAD = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SPG_VBLANK = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SPG_WIDTH = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__VO_CONTROL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__VO_STARTX = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__VO_STARTY = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SCALER_CTL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__PAL_RAM_CTRL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__SPG_STATUS = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FB_BURSTCTRL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FB_C_SOF = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__Y_COEFF = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__PT_ALPHA_REF = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_OL_BASE = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_ISP_BASE = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_OL_LIMIT = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_ISP_LIMIT = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_NEXT_OPB = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_ISP_CURRENT = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_GLOB_TILE_CLIP = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_ALLOC_CTRL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_LIST_INIT = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_YUV_TEX_BASE = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_YUV_TEX_CTRL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_YUV_TEX_CNT = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_LIST_CONT = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_NEXT_OPB_INIT = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FOG_TABLE_START = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FOG_TABLE_END = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_OL_POINTERS_START = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__TA_OL_POINTERS_END = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__PALETTE_RAM_START = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__PALETTE_RAM_END = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->simtop__DOT__pvr__DOT__pal_ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simtop__DOT__pvr__DOT__ra_trig = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_vram_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__ra_vram_din = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_control = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_last = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_zclear = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_flush = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_tiley = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__ra_opaque = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_opaque_mod = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_trans = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_trans_mod = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_puncht = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__opb_word = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__poly_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__render_poly = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__type_cnt = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__poly_drawn = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_din = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_dout = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_switch = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_trig = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__FPU_PARAM_CFG = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__TA_ALLOC_CTRL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__REGION_BASE = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__PARAM_BASE = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_din = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_control = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_last = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_zclear = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_flush = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_tiley = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_tilex = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__type_cnt = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_opaque = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_opaque_mod = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_trans = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_trans_mod = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_puncht = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__opb_word = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__poly_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__render_poly = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__poly_drawn = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__opb_mode = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__pt_opb = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__tm_opb = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__t_opb = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__om_opb = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__o_opb = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__next_region = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__num_prims = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__shadow = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__skip = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__eol = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ol_jump_bytes = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__draw_last_tile = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__opb_word = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__type_cnt = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__render_poly = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_din = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_dout = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_drawn = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tilex = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tiley = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY12 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX12 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY23 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX23 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY31 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX31 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__minx = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__miny = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__spanx = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__spany = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__twop = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_addr_64 = VL_RAND_RESET_I(21);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_mask = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__num_prims = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__shadow = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__skip = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__eol = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__culling_mode = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__z_write_disable = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__gouraud = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__cache_bypass = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__dcalc_ctrl = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__volume_inst = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_flip = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_flip = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_clamp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_clamp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__scan_order = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__stride = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_selector = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_start_addr = VL_RAND_RESET_I(21);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp2_inst = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex2_cont = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_off_col = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_off_col = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_off_col = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_z = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_base_col_0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_base_col_1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_off_col = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__two_volume = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_words = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult1 = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult2 = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult3 = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult4 = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult5 = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult6 = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult7 = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult8 = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs12 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult9 = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult10 = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs23 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult11 = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult12 = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs31 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__inTriangle = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__ui = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vi = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_pix_fmt = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__twop_out = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vram_tex_addr = VL_RAND_RESET_I(21);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__isp_inst = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tsp_inst = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tcw_word = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_pix_fmt = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vram_tex_addr = VL_RAND_RESET_I(21);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vram_din = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__texel_argb = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__depth_comp = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__culling_mode = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__z_write_disable = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__texture = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offset = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__gouraud = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__uv_16_bit = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cache_bypass = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__dcalc_ctrl = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__volume_inst = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_u_flip = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_v_flip = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_u_clamp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_v_clamp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_u_size = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_v_size = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mip_map = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vq_comp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_fmt = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__scan_order = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__stride = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_selector = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_start_addr = VL_RAND_RESET_I(21);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__im_req_valid__0 = VL_RAND_RESET_I(1);
}
