// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimtop.h for the primary calling header

#include "verilated.h"

#include "Vsimtop__Syms.h"
#include "Vsimtop___024root.h"

VL_INLINE_OPT void Vsimtop___024root___ico_sequent__TOP__0(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->simtop__DOT__rst = vlSelf->rst;
    vlSelf->simtop__DOT__dm_resp_rdata = vlSelf->dm_resp_rdata;
    vlSelf->simtop__DOT__core__DOT__id_instr = vlSelf->im_resp_rdata;
    vlSelf->simtop__DOT__boot_vector = vlSelf->boot_vector;
    vlSelf->simtop__DOT__im_resp_rdata = vlSelf->im_resp_rdata;
    vlSelf->simtop__DOT__im_resp_valid = vlSelf->im_resp_valid;
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
    vlSelf->simtop__DOT__x = vlSelf->x;
    vlSelf->simtop__DOT__y = vlSelf->y;
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult7 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->FDX12)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult8 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->FDY12)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult9 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->FDX23)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult10 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->FDY23)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult11 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->FDX31)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult12 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->FDY31)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps))));
    vlSelf->simtop__DOT__pvr__DOT__ra_vram_din = (IData)(vlSelf->vram_din);
    vlSelf->simtop__DOT__core__DOT__du0__DOT__imm = 
        (0xfffU & vlSelf->im_resp_rdata);
    vlSelf->simtop__DOT__core__DOT__du1__DOT__imm = 
        (0xfffU & (vlSelf->im_resp_rdata >> 0x10U));
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
    vlSelf->simtop__DOT__core__DOT__replay_icache_miss 
        = ((~ (IData)(vlSelf->im_resp_valid)) & (IData)(vlSelf->simtop__DOT__core__DOT__id_reg_valid));
    vlSelf->simtop__DOT__core__DOT__id_instr0_rsl = 
        (0xfU & (vlSelf->im_resp_rdata >> 4U));
    vlSelf->simtop__DOT__core__DOT__id_instr1_rsl = 
        (0xfU & (vlSelf->im_resp_rdata >> 0x14U));
    vlSelf->simtop__DOT__core__DOT__id_instr1_rsh = 
        (0xfU & (vlSelf->im_resp_rdata >> 0x18U));
    vlSelf->simtop__DOT__core__DOT__id_instr0_rsh = 
        (0xfU & (vlSelf->im_resp_rdata >> 8U));
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
    vlSelf->simtop__DOT__core__DOT__id_instr1_raw = 
        (vlSelf->im_resp_rdata >> 0x10U);
    vlSelf->simtop__DOT__core__DOT__id_instr0_raw = 
        (0xffffU & vlSelf->im_resp_rdata);
    vlSelf->simtop__DOT__sh4_dm_rdata = ((IData)(vlSelf->simtop__DOT__pvr_reg_cs)
                                          ? (QData)((IData)(vlSelf->simtop__DOT__pvr_dout))
                                          : vlSelf->dm_resp_rdata);
    vlSelf->simtop__DOT__core__DOT__boot_vector = vlSelf->simtop__DOT__boot_vector;
    vlSelf->simtop__DOT__core__DOT__im_resp_rdata = vlSelf->simtop__DOT__im_resp_rdata;
    vlSelf->simtop__DOT__core__DOT__im_resp_valid = vlSelf->simtop__DOT__im_resp_valid;
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
    vlSelf->simtop__DOT__pvr__DOT__x = vlSelf->simtop__DOT__x;
    vlSelf->simtop__DOT__pvr__DOT__y = vlSelf->simtop__DOT__y;
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
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vram_din 
        = (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_vram_din));
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_din = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext12 
        = (((- (IData)((1U & (vlSelf->im_resp_rdata 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__du0__DOT__imm));
    vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext12 
        = (((- (IData)((1U & (vlSelf->im_resp_rdata 
                              >> 0x1bU)))) << 0xcU) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__du1__DOT__imm));
    vlSelf->simtop__DOT__pvr__DOT__clock = vlSelf->simtop__DOT__clk;
    vlSelf->simtop__DOT__core__DOT__clk = vlSelf->simtop__DOT__clk;
    vlSelf->simtop__DOT__core__DOT__replay_delayslot_miss 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__replay_icache_miss) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__id_is_delayslot));
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc0 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_rsl;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6cfdb3c1__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsl));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h29b8f1bc__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsl));
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc2 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_rsl;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h7333f59e__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h297f0f65__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl));
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc3 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_rsh;
    vlSelf->simtop__DOT__core__DOT__fpsb_set_p1 = (
                                                   (((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
                                                     ^ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_write_altbank)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6cdcc83b__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h299a5b06__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh));
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc1 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_rsh;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6ce33f07__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h29ae45fa__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh));
    vlSelf->simtop__DOT__core__DOT__fpsb_set_p0 = (
                                                   (((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
                                                     ^ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_altbank)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_wen 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_wen;
    vlSelf->simtop__DOT__core__DOT__e2_p0_waltbank = 0U;
    vlSelf->simtop__DOT__core__DOT__e2_p1_waltbank = 0U;
    vlSelf->simtop__DOT__core__DOT__e2_p1_wdst = vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wdst;
    vlSelf->simtop__DOT__core__DOT__e2_p0_wdst = vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wdst;
    if ((((IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_valid) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wen)) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp)))) {
        if ((1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                   | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen)))) {
            vlSelf->simtop__DOT__core__DOT__e2_p0_waltbank 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_waltbank;
            vlSelf->simtop__DOT__core__DOT__e2_p0_wdst 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdst;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                      | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen))))) {
            vlSelf->simtop__DOT__core__DOT__e2_p1_waltbank 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_waltbank;
            vlSelf->simtop__DOT__core__DOT__e2_p1_wdst 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdst;
        }
    }
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_nack 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_nack;
    vlSelf->trace_valid1 = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_nack)) 
                            & (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_valid));
    vlSelf->simtop__DOT__core__DOT__e2_flush0 = ((IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_nack) 
                                                 & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                                                    | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen)));
    vlSelf->simtop__DOT__core__DOT__replay_dcache_miss 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_nack;
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
    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec1_write_r0 = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 1U;
    vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 0U;
    if (vlSelf->simtop__DOT__core__DOT__id_instr1_valid) {
        if ((0x8000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x40U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (8U 
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
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                                }
                                                            } else if (
                                                                       (1U 
                                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                            }
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                                }
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                                }
                                                            }
                                                        }
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                                = 
                                                                ((1U 
                                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                                  ? 2U
                                                                  : 1U);
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                            = 
                                                            ((2U 
                                                              & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                              ? 
                                                             ((1U 
                                                               & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                               ? 3U
                                                               : 6U)
                                                              : 
                                                             ((1U 
                                                               & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                               ? 8U
                                                               : 0U));
                                                    }
                                                } else if (
                                                           (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                            }
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                            = 
                                                            ((1U 
                                                              & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                              ? 2U
                                                              : 1U);
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                        = 
                                                        ((2U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                           ? 3U
                                                           : 6U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                           ? 8U
                                                           : 0U));
                                                }
                                            } else if (
                                                       (8U 
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 8U
                                                       : 0U));
                                            }
                                        } else if (
                                                   (0x20U 
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((0x40U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                            }
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                            = 
                                                            ((1U 
                                                              & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                              ? 2U
                                                              : 1U);
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                        = 
                                                        ((2U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                           ? 3U
                                                           : 6U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                           ? 8U
                                                           : 0U));
                                                }
                                            } else if (
                                                       (8U 
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 7U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 7U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 4U;
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                            }
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                            = 
                                                            ((1U 
                                                              & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                              ? 2U
                                                              : 1U);
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                        = 
                                                        ((2U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                           ? 3U
                                                           : 6U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                           ? 8U
                                                           : 0U));
                                                }
                                            } else if (
                                                       (8U 
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 0xaU;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 0xbU;
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 7U;
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 7U;
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 4U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x20U 
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((0x20U 
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 7U;
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 7U;
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 4U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 0xaU;
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 0xbU;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 7U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 7U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 4U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                        }
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 2U : 1U);
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                    = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                        ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 3U : 6U)
                                        : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 8U : 0U));
                            }
                        } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 7U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 7U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 4U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                        }
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 2U : 1U);
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                    = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                        ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 3U : 6U)
                                        : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 8U : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 0xaU;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 0xbU;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                        }
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 2U : 1U);
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                    = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                        ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 3U : 6U)
                                        : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 8U : 0U));
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 7U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                        }
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 2U : 1U);
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                    = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                        ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 3U : 6U)
                                        : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 8U : 0U));
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 7U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                        }
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 4U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 2U : 1U);
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                    = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                        ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 3U : 6U)
                                        : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 8U : 0U));
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                        }
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 2U : 1U);
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                    = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                        ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 3U : 6U)
                                        : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                            ? 8U : 0U));
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 5U;
                                    }
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                    = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                        ? 2U : 1U);
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op 
                                = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                    ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                        ? 3U : 6U) : 
                                   ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))
                                     ? 8U : 0U));
                        }
                    } else {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                    }
                } else if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                }
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 0xcU)))) {
                        if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 0xaU)))) {
                                if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_r0 = 1U;
                                } else if ((0x100U 
                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_r0 = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 9U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 8U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 1U;
                                    }
                                }
                            }
                        } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_r0 = 1U;
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                 >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                              >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 0xbU)))) {
                        if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 9U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_r0 = 1U;
                            }
                        }
                    }
                    if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 8U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 8U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 0xaU)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 9U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 8U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 1U;
                                }
                            }
                        }
                    } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                        }
                    } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                    }
                }
                if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                }
            }
        } else if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
            if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                              >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 1U;
                                }
                            }
                        }
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                    }
                } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                    }
                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                             >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                         >> 1U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                    }
                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                             >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                         >> 1U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                    }
                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 1U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                     >> 1U)))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                }
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                              >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 1U;
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                          >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                              >> 0xcU)))) {
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                        } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 1U;
                        } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 1U;
                        }
                    }
                } else {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 1U;
                                }
                            }
                        } else {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                 >> 0xcU)))) {
                if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    } else {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 1U)))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    }
                } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    } else {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 1U)))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    }
                } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    } else {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 1U)))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    }
                } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    } else {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 1U)))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    }
                } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                } else {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                        }
                    } else {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    }
                } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    }
                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 1U)))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 1U;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 0U;
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 0xaU)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 8U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 1U;
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
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                          >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                              >> 0xcU)))) {
                    if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                            }
                        }
                    } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                            }
                        }
                    } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                            }
                        }
                    } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                            }
                        }
                    } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                             >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 1U;
                        }
                    }
                }
            }
        }
    }
}
