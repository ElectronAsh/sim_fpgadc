// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimtop.h for the primary calling header

#include "verilated.h"

#include "Vsimtop__Syms.h"
#include "Vsimtop___024root.h"

VL_INLINE_OPT void Vsimtop___024root___ico_sequent__TOP__7(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___ico_sequent__TOP__7\n"); );
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
    // Body
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_din;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__inTriangle 
        = (VL_LTES_III(32, 0U, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs12) 
           & (VL_LTES_III(32, 0U, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs23) 
              & VL_LTES_III(32, 0U, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs31)));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__clock;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__clock;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__clk = vlSelf->simtop__DOT__core__DOT__clk;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__clk 
        = vlSelf->simtop__DOT__core__DOT__clk;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__clk = vlSelf->simtop__DOT__core__DOT__clk;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__clk = vlSelf->simtop__DOT__core__DOT__clk;
    vlSelf->simtop__DOT__core__DOT__fp_p1_waw_busy 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                 >> (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p1)));
    vlSelf->simtop__DOT__core__DOT__fp_p0_waw_busy 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                 >> (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p0)));
    vlSelf->simtop__DOT__core__DOT__rf_wbank_p0 = ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_md) 
                                                   & ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_rb) 
                                                      ^ (IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_waltbank)));
    vlSelf->simtop__DOT__core__DOT__rf_wbank_p1 = ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_md) 
                                                   & ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_rb) 
                                                      ^ (IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_waltbank)));
    vlSelf->trace_wdst1 = vlSelf->simtop__DOT__core__DOT__e2_p1_wdst;
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
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) {
        if (((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load) 
             | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_store))) {
            vlSelf->dm_req_valid = 1U;
        }
    }
    vlSelf->simtop__DOT__core__DOT__e2_p1_wen = vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wen;
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
    if (((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_wfp)))) {
        if ((1U & (~ ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_sel)) 
                      | (IData)(vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen))))) {
            vlSelf->simtop__DOT__core__DOT__e1_p1_wen 
                = vlSelf->simtop__DOT__core__DOT__e1_lsu_wen;
        }
        if (vlSelf->simtop__DOT__core__DOT__e1_lsu_alt_wen) {
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
    if (vlSelf->simtop__DOT__core__DOT__replay_dcache_miss) {
        vlSelf->dm_req_valid = 0U;
    }
    if ((((IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_valid) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wen)) 
         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_wfp)))) {
        if ((1U & (~ ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                      | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen))))) {
            vlSelf->simtop__DOT__core__DOT__e2_p1_wen 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_wen;
        }
    }
    if (vlSelf->simtop__DOT__core__DOT__replay_dcache_miss) {
        vlSelf->simtop__DOT__core__DOT__e2_p1_wen = 0U;
        vlSelf->simtop__DOT__core__DOT__e1_p1_wen = 0U;
        vlSelf->simtop__DOT__core__DOT__e1_p0_wen = 0U;
    }
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_csr_id 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_csr_id;
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
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_raltbank 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_raltbank;
    vlSelf->simtop__DOT__core__DOT__rf_rbank_p1 = ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_md) 
                                                   & ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_rb) 
                                                      ^ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_raltbank)));
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
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_csr_id 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_csr_id;
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
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_raltbank 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_raltbank;
    vlSelf->simtop__DOT__core__DOT__rf_rbank_p0 = ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_md) 
                                                   & ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_rb) 
                                                      ^ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_raltbank)));
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__clock;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__clk 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__clk;
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
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_ws 
        = (((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_w) 
                              >> 0xfU)))) << 0x10U) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_w));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bs 
        = (((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_b) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_b));
    vlSelf->simtop__DOT__core__DOT__trace_wdst1 = vlSelf->simtop__DOT__trace_wdst1;
    vlSelf->simtop__DOT__core__DOT__trace_wdst0 = vlSelf->simtop__DOT__trace_wdst0;
    vlSelf->simtop__DOT__core__DOT__trace_valid0 = vlSelf->simtop__DOT__trace_valid0;
    vlSelf->simtop__DOT__core__DOT__rf_wen0 = vlSelf->trace_wen0;
    vlSelf->simtop__DOT__trace_wen0 = vlSelf->trace_wen0;
    vlSelf->simtop__DOT__pvr__DOT__pvr_rd = vlSelf->simtop__DOT__pvr_rd;
    vlSelf->simtop__DOT__pvr__DOT__pvr_wr = vlSelf->simtop__DOT__pvr_wr;
    vlSelf->simtop__DOT__core__DOT__dm_req_valid = vlSelf->simtop__DOT__dm_req_valid;
    vlSelf->simtop__DOT__core__DOT__rf_wen1 = vlSelf->trace_wen1;
    vlSelf->simtop__DOT__trace_wen1 = vlSelf->trace_wen1;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6ab68d09__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h30afbd87__0) 
           & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst)));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h3b4896c3__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h2883dc79__0) 
           & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst)));
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rdata3 
        = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata3;
    vlSelf->simtop__DOT__core__DOT__rf_rdata[3U] = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata3;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rdata2 
        = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata2;
    vlSelf->simtop__DOT__core__DOT__rf_rdata[2U] = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata2;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rdata1 
        = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata1;
    vlSelf->simtop__DOT__core__DOT__rf_rdata[1U] = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rdata0 
        = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata0;
    vlSelf->simtop__DOT__core__DOT__rf_rdata[0U] = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata0;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rd_r0 
        = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rd_r0;
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
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdst1 
        = vlSelf->simtop__DOT__core__DOT__trace_wdst1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdst0 
        = vlSelf->simtop__DOT__core__DOT__trace_wdst0;
    vlSelf->simtop__DOT__core__DOT__trace_wen0 = vlSelf->simtop__DOT__trace_wen0;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_valid 
        = vlSelf->simtop__DOT__core__DOT__dm_req_valid;
    vlSelf->simtop__DOT__core__DOT__trace_wen1 = vlSelf->simtop__DOT__trace_wen1;
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
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wen0 
        = vlSelf->simtop__DOT__core__DOT__trace_wen0;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wen1 
        = vlSelf->simtop__DOT__core__DOT__trace_wen1;
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
    vlSelf->simtop__DOT__core__DOT__instr0_allow_issue 
        = (1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__p0_hazard)));
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
    vlSelf->simtop__DOT__core__DOT__instr0_issue = 
        ((IData)(vlSelf->simtop__DOT__core__DOT__instr0_allow_issue) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_valid));
    vlSelf->simtop__DOT__core__DOT__instr1_allow_issue 
        = (1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__p1_hazard)) 
                 & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_valid)) 
                    | ((IData)(vlSelf->simtop__DOT__core__DOT__instr0_allow_issue) 
                       & (IData)(vlSelf->simtop__DOT__core__DOT__dual_issue)))));
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
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdata1 
        = vlSelf->simtop__DOT__core__DOT__trace_wdata1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdata0 
        = vlSelf->simtop__DOT__core__DOT__trace_wdata0;
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
    vlSelf->simtop__DOT__core__DOT__fpsb_set_en_p1 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_write_rn) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issued));
    vlSelf->simtop__DOT__core__DOT__replay_nodi = (
                                                   (~ (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issued)) 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_valid));
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
    vlSelf->im_req_addr = ((IData)(vlSelf->simtop__DOT__core__DOT__if_pc_redirect)
                            ? vlSelf->simtop__DOT__core__DOT__if_pc_redirect_target
                            : vlSelf->simtop__DOT__core__DOT__if_pc_plus4);
    vlSelf->simtop__DOT__bios_cs = (0x1fffffU >= vlSelf->im_req_addr);
    vlSelf->simtop__DOT__core__DOT__if_pc_next = vlSelf->im_req_addr;
    vlSelf->simtop__DOT__im_req_addr = vlSelf->im_req_addr;
    vlSelf->simtop__DOT__core__DOT__im_req_addr = vlSelf->simtop__DOT__im_req_addr;
}

void Vsimtop___024root___ico_sequent__TOP__0(Vsimtop___024root* vlSelf);
void Vsimtop___024root___ico_sequent__TOP__1(Vsimtop___024root* vlSelf);
void Vsimtop___024root___ico_sequent__TOP__2(Vsimtop___024root* vlSelf);
void Vsimtop___024root___ico_sequent__TOP__3(Vsimtop___024root* vlSelf);
void Vsimtop___024root___ico_sequent__TOP__4(Vsimtop___024root* vlSelf);
void Vsimtop___024root___ico_sequent__TOP__5(Vsimtop___024root* vlSelf);
void Vsimtop___024root___ico_sequent__TOP__6(Vsimtop___024root* vlSelf);

void Vsimtop___024root___eval_ico(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vsimtop___024root___ico_sequent__TOP__0(vlSelf);
        Vsimtop___024root___ico_sequent__TOP__1(vlSelf);
        Vsimtop___024root___ico_sequent__TOP__2(vlSelf);
        Vsimtop___024root___ico_sequent__TOP__3(vlSelf);
        Vsimtop___024root___ico_sequent__TOP__4(vlSelf);
        Vsimtop___024root___ico_sequent__TOP__5(vlSelf);
        Vsimtop___024root___ico_sequent__TOP__6(vlSelf);
        Vsimtop___024root___ico_sequent__TOP__7(vlSelf);
    }
}

void Vsimtop___024root___eval_act(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsimtop___024root___nba_sequent__TOP__0(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*23:0*/ simtop__DOT____Vcellout__pvr__vram_addr;
    simtop__DOT____Vcellout__pvr__vram_addr = 0;
    CData/*7:0*/ __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state;
    __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = 0;
    IData/*23:0*/ __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr;
    __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__ra_opaque;
    __Vdly__simtop__DOT__pvr__DOT__ra_opaque = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__ra_opaque_mod;
    __Vdly__simtop__DOT__pvr__DOT__ra_opaque_mod = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__ra_trans;
    __Vdly__simtop__DOT__pvr__DOT__ra_trans = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__ra_trans_mod;
    __Vdly__simtop__DOT__pvr__DOT__ra_trans_mod = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__ra_puncht;
    __Vdly__simtop__DOT__pvr__DOT__ra_puncht = 0;
    IData/*23:0*/ __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__next_region;
    __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__next_region = 0;
    CData/*2:0*/ __Vdly__simtop__DOT__pvr__DOT__type_cnt;
    __Vdly__simtop__DOT__pvr__DOT__type_cnt = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__opb_word;
    __Vdly__simtop__DOT__pvr__DOT__opb_word = 0;
    CData/*0:0*/ __Vdly__simtop__DOT__pvr__DOT__poly_drawn;
    __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 0;
    CData/*7:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0;
    IData/*23:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_vram_addr;
    __Vdly__simtop__DOT__pvr__DOT__isp_vram_addr = 0;
    CData/*0:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done = 0;
    CData/*2:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt = 0;
    CData/*3:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0 = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0 = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0 = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0 = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0 = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0 = 0;
    IData/*23:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last = 0;
    SData/*9:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps = 0;
    SData/*9:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps = 0;
    // Body
    __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__next_region 
        = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__next_region;
    __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
        = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state;
    __Vdly__simtop__DOT__pvr__DOT__ra_puncht = vlSelf->simtop__DOT__pvr__DOT__ra_puncht;
    __Vdly__simtop__DOT__pvr__DOT__ra_trans_mod = vlSelf->simtop__DOT__pvr__DOT__ra_trans_mod;
    __Vdly__simtop__DOT__pvr__DOT__ra_trans = vlSelf->simtop__DOT__pvr__DOT__ra_trans;
    __Vdly__simtop__DOT__pvr__DOT__ra_opaque_mod = vlSelf->simtop__DOT__pvr__DOT__ra_opaque_mod;
    __Vdly__simtop__DOT__pvr__DOT__ra_opaque = vlSelf->simtop__DOT__pvr__DOT__ra_opaque;
    __Vdly__simtop__DOT__pvr__DOT__type_cnt = vlSelf->simtop__DOT__pvr__DOT__type_cnt;
    __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr = vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr;
    __Vdly__simtop__DOT__pvr__DOT__opb_word = vlSelf->simtop__DOT__pvr__DOT__opb_word;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state;
    __Vdly__simtop__DOT__pvr__DOT__poly_drawn = vlSelf->simtop__DOT__pvr__DOT__poly_drawn;
    __Vdly__simtop__DOT__pvr__DOT__isp_vram_addr = vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst;
    if ((1U & (~ (IData)(vlSelf->im_req_valid)))) {
        vlSelf->simtop__DOT__pvr__DOT__REVISION = 0x11U;
        vlSelf->simtop__DOT__pvr__DOT__ID = 0x17fd11dbU;
    }
    if (vlSelf->im_req_valid) {
        if (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size) 
             > (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) {
            if (((((((((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size)) 
                       | (1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) 
                      | (2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) 
                     | (3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) 
                    | (4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) 
                   | (5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) 
                  | (6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) 
                 | (7U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size)))) {
                vlSelf->twop = ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                                 ? ((0x1fc0U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__ui) 
                                                << 3U)) 
                                    | (0x3fU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                 : ((1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                                     ? ((0x3f00U & 
                                         ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__ui) 
                                          << 4U)) | 
                                        (0xffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                     : ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                                         ? ((0x7c00U 
                                             & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__ui) 
                                                << 5U)) 
                                            | (0x3ffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                         : ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                                             ? ((0xf000U 
                                                 & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__ui) 
                                                    << 6U)) 
                                                | (0xfffU 
                                                   & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                             : ((4U 
                                                 == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                                                 ? 
                                                ((0x1c000U 
                                                  & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__ui) 
                                                     << 7U)) 
                                                 | (0x3fffU 
                                                    & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                                                  ? 
                                                 ((0x30000U 
                                                   & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__ui) 
                                                      << 8U)) 
                                                  | (0xffffU 
                                                     & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                                                   ? 
                                                  ((0x40000U 
                                                    & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__ui) 
                                                       << 9U)) 
                                                   | (0x3ffffU 
                                                      & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                                   : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)))))));
            }
        } else if (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size) 
                    > (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) {
            if (((((((((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)) 
                       | (1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                      | (2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                     | (3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                    | (4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                   | (5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                  | (6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                 | (7U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) {
                vlSelf->twop = ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                 ? ((0x1fc0U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vi) 
                                                << 3U)) 
                                    | (0x3fU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                 : ((1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                     ? ((0x3f00U & 
                                         ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vi) 
                                          << 4U)) | 
                                        (0xffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                     : ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                         ? ((0x7c00U 
                                             & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vi) 
                                                << 5U)) 
                                            | (0x3ffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                         : ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                             ? ((0xf000U 
                                                 & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vi) 
                                                    << 6U)) 
                                                | (0xfffU 
                                                   & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                             : ((4U 
                                                 == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                                 ? 
                                                ((0x1c000U 
                                                  & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vi) 
                                                     << 7U)) 
                                                 | (0x3fffU 
                                                    & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                                  ? 
                                                 ((0x30000U 
                                                   & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vi) 
                                                      << 8U)) 
                                                  | (0xffffU 
                                                     & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                                   ? 
                                                  ((0x40000U 
                                                    & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vi) 
                                                       << 9U)) 
                                                   | (0x3ffffU 
                                                      & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                                   : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)))))));
            }
        } else if (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size) 
                    == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) {
            vlSelf->twop = (((((((((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)) 
                                   | (1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                                  | (2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                                 | (3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                                | (4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                               | (7U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                              | (6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                             | (7U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))
                             ? ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                 ? (0x3fU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                                 : ((1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                     ? (0xffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                                     : ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                         ? (0x3ffU 
                                            & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                                         : ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                             ? (0xfffU 
                                                & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                                             : ((4U 
                                                 == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                                 ? 
                                                (0x3fffU 
                                                 & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                                                 : 
                                                ((7U 
                                                  == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                                  ? 
                                                 (0xffffU 
                                                  & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                                   ? 
                                                  (0x3ffffU 
                                                   & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                                                   : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)))))))
                             : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full);
        }
        if (vlSelf->simtop__DOT__pvr__DOT__render_poly) {
            vlSelf->simtop__DOT__pvr__DOT__isp_switch = 1U;
        }
        if (vlSelf->simtop__DOT__pvr__DOT__poly_drawn) {
            vlSelf->simtop__DOT__pvr__DOT__isp_switch = 0U;
        }
        vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr = 0U;
        vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid = 0U;
        __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 0U;
        if ((0U < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
            if ((0x2eU > (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)));
            }
            if ((0x2fU > (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_vram_addr 
                    = (0xffffffU & ((IData)(4U) + vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr));
            }
        }
        if (((((((((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)) 
                   | (1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                  | (2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                 | (3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                | (4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
               | (5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
              | (6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
             | (7U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
            if ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                if (vlSelf->simtop__DOT__pvr__DOT__render_poly) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_vram_addr 
                        = vlSelf->simtop__DOT__pvr__DOT__poly_addr;
                    if ((vlSelf->simtop__DOT__pvr__DOT__opb_word 
                         >> 0x1fU)) {
                        if (((4U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                     >> 0x1dU)) | (5U 
                                                   == 
                                                   (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                                    >> 0x1dU)))) {
                            if ((5U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                        >> 0x1dU))) {
                                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done = 0U;
                            }
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt = 0U;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt 
                                = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__num_prims;
                            vlSelf->simtop__DOT__pvr__DOT__isp_vram_rd = 1U;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 1U;
                        } else {
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt = 0U;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt = 0U;
                            __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 1U;
                        }
                    } else if ((0U != (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask))) {
                        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt 
                            = (7U & ((IData)(1U) + 
                                     ((((((1U & (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask)) 
                                          + (1U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask) 
                                                   >> 1U))) 
                                         + (1U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask) 
                                                  >> 2U))) 
                                        + (1U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask) 
                                                 >> 3U))) 
                                       + (1U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask) 
                                                >> 4U))) 
                                      + (1U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask) 
                                               >> 5U)))));
                        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt = 0U;
                        vlSelf->simtop__DOT__pvr__DOT__isp_vram_rd = 1U;
                        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 1U;
                    } else {
                        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt = 0U;
                        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt = 0U;
                        __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 1U;
                    }
                }
            } else if ((1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 6U;
            } else if ((4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp2_inst 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex2_cont 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            }
        } else if (((((((((8U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)) 
                          | (9U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                         | (0xaU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                        | (0xbU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                       | (0xcU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                      | (0xdU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                     | (0xeU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                    | (0xfU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
            if ((8U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((0U != (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture)))) {
                        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                            = ((0U == vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst)
                                ? 0x10U : 0xbU);
                    }
                } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0xbU;
                }
            } else if ((9U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0xbU;
                }
            } else if ((0xaU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0xbU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__two_volume)
                        ? 0xcU : ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)
                                   ? 0xfU : 0x10U));
            } else if ((0xcU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0xdU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0xeU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x10U;
                }
            } else {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_off_col 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            }
        } else if (((((((((0x10U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)) 
                          | (0x11U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                         | (0x12U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                        | (0x13U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                       | (0x14U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                      | (0x15U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                     | (0x16U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                    | (0x17U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
            if ((0x10U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x11U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x12U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((0U != (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture)))) {
                        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                            = ((0U == vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst)
                                ? 0x1aU : 0x15U);
                    }
                } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x15U;
                }
            } else if ((0x13U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x15U;
                }
            } else if ((0x14U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x15U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__two_volume)
                        ? 0x16U : ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)
                                    ? 0x19U : 0x1aU));
            } else if ((0x16U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            }
        } else if (((((((((0x18U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)) 
                          | (0x19U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                         | (0x1aU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                        | (0x1bU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                       | (0x1cU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                      | (0x1dU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                     | (0x1eU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                    | (0x1fU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
            if ((0x18U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x1aU;
                }
            } else if ((0x19U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_off_col 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x1aU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x1bU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x1cU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((0U != (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture)))) {
                        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                            = ((0U == vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst)
                                ? ((5U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                           >> 0x1dU))
                                    ? 0x24U : 0x2eU)
                                : 0x1fU);
                    }
                } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x1fU;
                }
            } else if ((0x1dU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x1fU;
                }
            } else if ((0x1eU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__two_volume)
                        ? 0x20U : ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)
                                    ? 0x23U : ((5U 
                                                == 
                                                (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                                 >> 0x1dU))
                                                ? 0x24U
                                                : 0x2eU)));
            }
        } else if (((((((((0x20U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)) 
                          | (0x21U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                         | (0x22U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                        | (0x23U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                       | (0x24U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                      | (0x25U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                     | (0x26U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                    | (0x27U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
            if ((0x20U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x21U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x22U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)
                        ? 0x23U : 0x2eU);
            } else if ((0x23U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_off_col 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = ((5U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                               >> 0x1dU)) ? 0x24U : 0x2eU);
            } else if ((0x24U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x25U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x26U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_z 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x29U;
                }
            } else {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x29U;
                }
            }
        } else if (((((((((0x28U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)) 
                          | (0x29U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                         | (0x2aU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                        | (0x2bU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                       | (0x2cU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                      | (0x2dU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                     | (0x2eU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                    | (0x2fU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
            if ((0x28U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x29U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_base_col_0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__two_volume)
                        ? 0x2aU : ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)
                                    ? 0x2dU : 0x2eU));
            } else if ((0x2aU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x2bU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x2cU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_base_col_1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x2eU;
                }
            } else if ((0x2dU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_off_col 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x2eU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid = 1U;
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x30U;
            } else if ((vlSelf->simtop__DOT__pvr__DOT__opb_word 
                        >> 0x1fU)) {
                if ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt))) {
                    if ((5U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                >> 0x1dU))) {
                        if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done) {
                            __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 1U;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0U;
                        } else {
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0;
                            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x;
                            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y;
                            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0;
                            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0;
                            vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid = 1U;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x2eU;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done = 1U;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0;
                        }
                    } else {
                        __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 1U;
                        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0U;
                    }
                } else {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt 
                        = (0xfU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt) 
                                   - (IData)(1U)));
                    __Vdly__simtop__DOT__pvr__DOT__isp_vram_addr 
                        = (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr 
                                        - (IData)(4U)));
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 1U;
                }
            } else if ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt))) {
                __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 1U;
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0U;
            } else {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt 
                    = (7U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt) 
                             - (IData)(1U)));
                __Vdly__simtop__DOT__pvr__DOT__isp_vram_addr 
                    = (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr 
                                    - (((IData)(1U) 
                                        + ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_words) 
                                           << 1U)) 
                                       << 2U)));
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 6U;
            }
        } else if ((0x30U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
            if ((((((VL_LTS_III(32, 0x27fU, (vlSelf->FX1 
                                             >> 8U)) 
                     | VL_LTS_III(32, 0x27fU, (vlSelf->FX2 
                                               >> 8U))) 
                    | VL_LTS_III(32, 0x27fU, (vlSelf->FX3 
                                              >> 8U))) 
                   | VL_LTS_III(32, 0x1dfU, (vlSelf->FY1 
                                             >> 8U))) 
                  | VL_LTS_III(32, 0x1dfU, (vlSelf->FY2 
                                            >> 8U))) 
                 | VL_LTS_III(32, 0x1dfU, (vlSelf->FY3 
                                           >> 8U)))) {
                __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 1U;
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0U;
            }
            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last 
                = vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr;
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult1 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, vlSelf->FDY12)), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, vlSelf->FX1))));
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult2 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, vlSelf->FDX12)), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, vlSelf->FY1))));
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult3 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, vlSelf->FDY23)), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, vlSelf->FX2))));
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult4 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, vlSelf->FDX23)), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, vlSelf->FY2))));
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult5 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, vlSelf->FDY31)), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, vlSelf->FX3))));
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult6 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, vlSelf->FDX31)), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, vlSelf->FY3))));
            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps 
                = (0x3ffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_cont_tiley) 
                             << 5U));
            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps 
                = (0x3ffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex) 
                             << 5U));
            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)));
        } else if ((0x31U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
            if (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps) 
                 < ((IData)(0x20U) + ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_cont_tiley) 
                                      << 5U)))) {
                if (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps) 
                     < ((IData)(0x20U) + ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex) 
                                          << 5U)))) {
                    if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__inTriangle) {
                        __Vdly__simtop__DOT__pvr__DOT__isp_vram_addr 
                            = (0xffffffU & ((((IData)(0x280U) 
                                              * (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)) 
                                             + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)) 
                                            << 2U));
                        vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr = 1U;
                        vlSelf->simtop__DOT__pvr__DOT__isp_vram_dout 
                            = (QData)((IData)(((0xff000000U 
                                                & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0) 
                                               | ((0xff0000U 
                                                   & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0) 
                                                     | (0xffU 
                                                        & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 
                                                           >> 0x10U)))))));
                    }
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)));
                } else {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)));
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps 
                        = (0x3ffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex) 
                                     << 5U));
                }
            } else {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x2fU;
                __Vdly__simtop__DOT__pvr__DOT__isp_vram_addr 
                    = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last;
            }
        }
    } else {
        vlSelf->simtop__DOT__pvr__DOT__isp_switch = 0U;
        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0U;
        vlSelf->simtop__DOT__pvr__DOT__isp_vram_rd = 0U;
        vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr = 0U;
        vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid = 0U;
        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done = 1U;
        __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 0U;
    }
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last;
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr = __Vdly__simtop__DOT__pvr__DOT__isp_vram_addr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst;
    vlSelf->simtop__DOT__twop = vlSelf->twop;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_entry_valid 
        = vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_rd 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_rd;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_wr 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr;
    vlSelf->vram_wr = vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_dout 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_dout;
    vlSelf->vram_dout = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_dout);
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult7 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->FDX12)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult9 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->FDX23)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult11 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->FDX31)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult8 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->FDY12)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult10 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->FDY23)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult12 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->FDY31)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tcw_word 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x1eU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt 
        = (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x1bU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__scan_order 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x1aU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__stride 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x19U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_selector 
        = (0x3fU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                    >> 0x15U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_start_addr 
        = (0x1fffffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tsp_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst;
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size 
        = (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
                 >> 3U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size 
        = (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__isp_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst;
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
           >> 0x1dU);
    if (vlSelf->im_req_valid) {
        if (((IData)(vlSelf->simtop__DOT__pvr_reg_cs) 
             & (IData)(vlSelf->simtop__DOT__pvr_wr))) {
            if ((1U & (~ (vlSelf->dm_req_addr >> 0xfU)))) {
                if ((1U & (~ (vlSelf->dm_req_addr >> 0xeU)))) {
                    if ((1U & (~ (vlSelf->dm_req_addr 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelf->dm_req_addr)) {
                            if ((0x800U & vlSelf->dm_req_addr)) {
                                if ((0x400U & vlSelf->dm_req_addr)) {
                                    if ((0x200U & vlSelf->dm_req_addr)) {
                                        if ((0x100U 
                                             & vlSelf->dm_req_addr)) {
                                            if ((0x80U 
                                                 & vlSelf->dm_req_addr)) {
                                                if (
                                                    (0x40U 
                                                     & vlSelf->dm_req_addr)) {
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->dm_req_addr)) {
                                                        if (
                                                            (0x10U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__PALETTE_RAM_END 
                                                                                = (IData)(vlSelf->dm_req_wdata);
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
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->dm_req_addr 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->dm_req_addr 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->dm_req_addr 
                                                             >> 5U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
                                                            if (
                                                                (1U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__PALETTE_RAM_START 
                                                                                = (IData)(vlSelf->dm_req_wdata);
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
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 0xcU)))) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->dm_req_addr 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->dm_req_addr 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->dm_req_addr 
                                                             >> 5U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
                                                            if (
                                                                (8U 
                                                                 & vlSelf->dm_req_addr)) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SOFTRESET 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (0x10U 
                                                             & vlSelf->dm_req_addr)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->dm_req_addr 
                                                                     >> 3U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__STARTRENDER 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (8U 
                                                                 & vlSelf->dm_req_addr)) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TEST_SELECT 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->dm_req_addr)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
                                                            if (
                                                                (1U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__PARAM_BASE 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__REGION_BASE 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (0x10U 
                                                             & vlSelf->dm_req_addr)) {
                                                            if (
                                                                (1U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SPAN_SORT_CFG 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x40U 
                                                     & vlSelf->dm_req_addr)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->dm_req_addr 
                                                             >> 5U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
                                                            if (
                                                                (1U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__VO_BORDER_COL 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FB_R_CTRL 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (8U 
                                                                 & vlSelf->dm_req_addr)) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FB_W_CTRL 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FB_W_LINESTRIDE 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (0x10U 
                                                             & vlSelf->dm_req_addr)) {
                                                            if (
                                                                (1U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FB_R_SOF1 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FB_R_SOF2 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FB_R_SIZE 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->dm_req_addr)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
                                                            if (
                                                                (1U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FB_W_SOF1 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FB_W_SOF2 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (8U 
                                                                 & vlSelf->dm_req_addr)) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FB_X_CLIP 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FB_Y_CLIP 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (0x10U 
                                                             & vlSelf->dm_req_addr)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->dm_req_addr 
                                                                     >> 3U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FPU_SHAD_SCALE 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (8U 
                                                                 & vlSelf->dm_req_addr)) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FPU_CULL_VAL 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FPU_PARAM_CFG 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((0x80U 
                                                 & vlSelf->dm_req_addr)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->dm_req_addr 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->dm_req_addr 
                                                             >> 5U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
                                                            if (
                                                                (1U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__HALF_OFFSET 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FPU_PERP_VAL 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (8U 
                                                                 & vlSelf->dm_req_addr)) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__ISP_BACKGND_D 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__ISP_BACKGND_T 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (0x10U 
                                                             & vlSelf->dm_req_addr)) {
                                                            if (
                                                                (8U 
                                                                 & vlSelf->dm_req_addr)) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__ISP_FEED_CFG 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->dm_req_addr)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
                                                            if (
                                                                (1U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SDRAM_REFRESH 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SDRAM_ARB_CFG 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (8U 
                                                                 & vlSelf->dm_req_addr)) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SDRAM_CFG 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (0x10U 
                                                             & vlSelf->dm_req_addr)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->dm_req_addr 
                                                                     >> 3U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FOG_COL_VERT 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FOG_COL_RAM 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FOG_CLAMP_MAX 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FOG_DENSITY 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x40U 
                                                     & vlSelf->dm_req_addr)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->dm_req_addr 
                                                             >> 5U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
                                                            if (
                                                                (8U 
                                                                 & vlSelf->dm_req_addr)) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SPG_HBLANK_INT 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SPG_VBLANK_INT 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->dm_req_addr 
                                                                     >> 3U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SPG_TRIGGER_POS 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FOG_CLAMP_MIN 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (0x10U 
                                                             & vlSelf->dm_req_addr)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->dm_req_addr 
                                                                     >> 3U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SPG_HBLANK 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SPG_CONTROL 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SPG_VBLANK 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SPG_LOAD 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->dm_req_addr)) {
                                                        if (
                                                            (0x10U 
                                                             & vlSelf->dm_req_addr)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->dm_req_addr 
                                                                     >> 3U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SCALER_CTL 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__VO_STARTY 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__VO_STARTX 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__VO_CONTROL 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->dm_req_addr 
                                                                     >> 3U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SPG_WIDTH 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x100U 
                                             & vlSelf->dm_req_addr)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->dm_req_addr 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->dm_req_addr 
                                                         >> 6U)))) {
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->dm_req_addr)) {
                                                        if (
                                                            (0x10U 
                                                             & vlSelf->dm_req_addr)) {
                                                            if (
                                                                (8U 
                                                                 & vlSelf->dm_req_addr)) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_ISP_CURRENT 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_GLOB_TILE_CLIP 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->dm_req_addr 
                                                                     >> 3U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_NEXT_OPB 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_ISP_LIMIT 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_OL_LIMIT 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_ISP_BASE 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->dm_req_addr 
                                                                     >> 3U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_OL_BASE 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->dm_req_addr 
                                                             >> 5U)))) {
                                                        if (
                                                            (0x10U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__PT_ALPHA_REF 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__Y_COEFF 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->dm_req_addr 
                                                                     >> 3U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FB_C_SOF 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FB_BURSTCTRL 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__SPG_STATUS 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__PAL_RAM_CTRL 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x40U 
                                                     & vlSelf->dm_req_addr)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->dm_req_addr 
                                                             >> 5U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->dm_req_addr 
                                                                     >> 3U)))) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_LIST_INIT 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_ALLOC_CTRL 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_YUV_TEX_CTRL 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_YUV_TEX_BASE 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (0x10U 
                                                             & vlSelf->dm_req_addr)) {
                                                            if (
                                                                (1U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_YUV_TEX_CNT 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->dm_req_addr)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
                                                            if (
                                                                (1U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_LIST_CONT 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_NEXT_OPB_INIT 
                                                                                = (IData)(vlSelf->dm_req_wdata);
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
                                    if ((0x200U & vlSelf->dm_req_addr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->dm_req_addr 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->dm_req_addr 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->dm_req_addr 
                                                             >> 5U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
                                                            if (
                                                                (1U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FOG_TABLE_START 
                                                                                = (IData)(vlSelf->dm_req_wdata);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x100U 
                                             & vlSelf->dm_req_addr)) {
                                            if ((0x80U 
                                                 & vlSelf->dm_req_addr)) {
                                                if (
                                                    (0x40U 
                                                     & vlSelf->dm_req_addr)) {
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->dm_req_addr)) {
                                                        if (
                                                            (0x10U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__FOG_TABLE_END 
                                                                                = (IData)(vlSelf->dm_req_wdata);
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
                                if ((0x400U & vlSelf->dm_req_addr)) {
                                    if ((0x200U & vlSelf->dm_req_addr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->dm_req_addr 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->dm_req_addr 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->dm_req_addr 
                                                             >> 5U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->dm_req_addr 
                                                                 >> 4U)))) {
                                                            if (
                                                                (1U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_OL_POINTERS_START 
                                                                                = (IData)(vlSelf->dm_req_wdata);
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
                            if ((0x800U & vlSelf->dm_req_addr)) {
                                if ((0x400U & vlSelf->dm_req_addr)) {
                                    if ((0x200U & vlSelf->dm_req_addr)) {
                                        if ((0x100U 
                                             & vlSelf->dm_req_addr)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->dm_req_addr 
                                                     >> 7U)))) {
                                                if (
                                                    (0x40U 
                                                     & vlSelf->dm_req_addr)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->dm_req_addr 
                                                             >> 5U)))) {
                                                        if (
                                                            (0x10U 
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__TA_OL_POINTERS_END 
                                                                                = (IData)(vlSelf->dm_req_wdata);
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
            }
        }
    }
    if (vlSelf->im_req_valid) {
        vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 0U;
        vlSelf->simtop__DOT__pvr__DOT__ra_vram_wr = 0U;
        vlSelf->simtop__DOT__pvr__DOT__ra_entry_valid = 0U;
        vlSelf->simtop__DOT__pvr__DOT__render_poly = 0U;
        if (((((((((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)) 
                   | (1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) 
                  | (2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) 
                 | (3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) 
                | (4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) 
               | (5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) 
              | (6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) 
             | (7U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)))) {
            if ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                if (vlSelf->simtop__DOT__pvr__DOT__ra_trig) {
                    __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                }
                vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__draw_last_tile = 0U;
            } else if ((1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__REGION_BASE);
            } else if ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = (0xffffffU & ((IData)(4U) + vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr));
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                vlSelf->simtop__DOT__pvr__DOT__ra_control 
                    = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
            } else if ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = (0xffffffU & ((IData)(4U) + vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr));
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                __Vdly__simtop__DOT__pvr__DOT__ra_opaque 
                    = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
            } else if ((4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = (0xffffffU & ((IData)(4U) + vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr));
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                __Vdly__simtop__DOT__pvr__DOT__ra_opaque_mod 
                    = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
            } else if ((5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = (0xffffffU & ((IData)(4U) + vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr));
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                __Vdly__simtop__DOT__pvr__DOT__ra_trans 
                    = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
            } else if ((6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = (0xffffffU & ((IData)(4U) + vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr));
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                __Vdly__simtop__DOT__pvr__DOT__ra_trans_mod 
                    = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
                vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
            } else {
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = (0xffffffU & ((IData)(4U) + vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr));
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                __Vdly__simtop__DOT__pvr__DOT__ra_puncht 
                    = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
            }
        } else if (((((((((8U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)) 
                          | (9U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) 
                         | (0xaU == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) 
                        | (0xbU == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) 
                       | (0xcU == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) 
                      | (0xdU == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) 
                     | (0xeU == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) 
                    | (0xfU == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)))) {
            if ((8U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__next_region 
                    = vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr;
                vlSelf->simtop__DOT__pvr__DOT__ra_entry_valid = 1U;
                __Vdly__simtop__DOT__pvr__DOT__type_cnt = 0U;
            } else if ((9U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__type_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__type_cnt)));
                if ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__type_cnt))) {
                    if ((1U & (~ (vlSelf->simtop__DOT__pvr__DOT__ra_opaque 
                                  >> 0x1fU)))) {
                        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                        __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                            = (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__PARAM_BASE 
                                            + vlSelf->simtop__DOT__pvr__DOT__ra_opaque));
                        vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ol_jump_bytes 
                            = (0xffU & VL_MULS_III(32, (IData)(4U), 
                                                   ((IData)(4U) 
                                                    << (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__o_opb))));
                        vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                    }
                } else if ((1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__type_cnt))) {
                    if ((1U & (~ (vlSelf->simtop__DOT__pvr__DOT__ra_opaque_mod 
                                  >> 0x1fU)))) {
                        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                        __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                            = (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__PARAM_BASE 
                                            + vlSelf->simtop__DOT__pvr__DOT__ra_opaque_mod));
                        vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ol_jump_bytes 
                            = (0xffU & VL_MULS_III(32, (IData)(4U), 
                                                   ((IData)(4U) 
                                                    << (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__om_opb))));
                        vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                    }
                } else if ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__type_cnt))) {
                    if ((1U & (~ (vlSelf->simtop__DOT__pvr__DOT__ra_trans 
                                  >> 0x1fU)))) {
                        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                        __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                            = (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__PARAM_BASE 
                                            + vlSelf->simtop__DOT__pvr__DOT__ra_trans));
                        vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ol_jump_bytes 
                            = (0xffU & VL_MULS_III(32, (IData)(4U), 
                                                   ((IData)(4U) 
                                                    << (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__t_opb))));
                        vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                    }
                } else if ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__type_cnt))) {
                    if ((1U & (~ (vlSelf->simtop__DOT__pvr__DOT__ra_trans_mod 
                                  >> 0x1fU)))) {
                        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                        __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                            = (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__PARAM_BASE 
                                            + vlSelf->simtop__DOT__pvr__DOT__ra_trans_mod));
                        vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ol_jump_bytes 
                            = (0xffU & VL_MULS_III(32, (IData)(4U), 
                                                   ((IData)(4U) 
                                                    << (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__tm_opb))));
                        vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                    }
                } else if ((4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__type_cnt))) {
                    if ((1U & (~ (vlSelf->simtop__DOT__pvr__DOT__ra_puncht 
                                  >> 0x1fU)))) {
                        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                        __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                            = (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__PARAM_BASE 
                                            + vlSelf->simtop__DOT__pvr__DOT__ra_puncht));
                        vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ol_jump_bytes 
                            = (0xffU & VL_MULS_III(32, (IData)(4U), 
                                                   ((IData)(4U) 
                                                    << (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__pt_opb))));
                        vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                    }
                } else if ((5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__type_cnt))) {
                    __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = 0xfU;
                }
            } else if ((0xaU == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
            } else if ((0xbU == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                __Vdly__simtop__DOT__pvr__DOT__opb_word 
                    = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
            } else if ((0xcU == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                if ((vlSelf->simtop__DOT__pvr__DOT__opb_word 
                     >> 0x1fU)) {
                    if ((4U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                >> 0x1dU))) {
                        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                        vlSelf->simtop__DOT__pvr__DOT__poly_addr 
                            = (0xffffffU & ((0xf00000U 
                                             & vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__PARAM_BASE) 
                                            + (0x7ffffcU 
                                               & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                                  << 2U))));
                        vlSelf->simtop__DOT__pvr__DOT__render_poly = 1U;
                    } else if ((5U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                       >> 0x1dU))) {
                        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                        vlSelf->simtop__DOT__pvr__DOT__poly_addr 
                            = (0xffffffU & ((0xf00000U 
                                             & vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__PARAM_BASE) 
                                            + (0x7ffffcU 
                                               & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                                  << 2U))));
                        vlSelf->simtop__DOT__pvr__DOT__render_poly = 1U;
                    } else if (VL_LIKELY((7U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                                 >> 0x1dU)))) {
                        if (vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__eol) {
                            __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = 0xeU;
                        } else {
                            __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = 0xbU;
                            __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                                = (0xfffffcU & vlSelf->simtop__DOT__pvr__DOT__opb_word);
                            vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                        }
                    } else {
                        VL_WRITEF("Undefined Object prim type! (OL overrun?)\n\n");
                        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = 0U;
                    }
                } else {
                    __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                    vlSelf->simtop__DOT__pvr__DOT__poly_addr 
                        = (0xffffffU & ((0xf00000U 
                                         & vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__PARAM_BASE) 
                                        + (0x7ffffcU 
                                           & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                                              << 2U))));
                    vlSelf->simtop__DOT__pvr__DOT__render_poly = 1U;
                }
            } else if ((0xdU == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                if (vlSelf->simtop__DOT__pvr__DOT__poly_drawn) {
                    __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                        = (0xffffffU & ((IData)(4U) 
                                        + vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr));
                    __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = 0xbU;
                    if (vlSelf->simtop__DOT__pvr__DOT__ra_cont_last) {
                        vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__draw_last_tile = 1U;
                    }
                }
            } else if ((0xeU == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                if (((7U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                             >> 0x1dU)) | (IData)(vlSelf->simtop__DOT__pvr__DOT__poly_drawn))) {
                    __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = 9U;
                }
            } else if (vlSelf->simtop__DOT__pvr__DOT__ra_cont_last) {
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = 0U;
            } else {
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = 2U;
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__next_region;
                vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
            }
        }
    } else {
        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = 0U;
        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__next_region = 0U;
        __Vdly__simtop__DOT__pvr__DOT__opb_word = 0U;
        __Vdly__simtop__DOT__pvr__DOT__type_cnt = 0U;
        vlSelf->simtop__DOT__pvr__DOT__poly_addr = 0U;
        vlSelf->simtop__DOT__pvr__DOT__render_poly = 0U;
    }
    vlSelf->simtop__DOT__pvr__DOT__twop = vlSelf->simtop__DOT__twop;
    vlSelf->simtop__DOT__vram_wr = vlSelf->vram_wr;
    vlSelf->simtop__DOT__vram_dout = vlSelf->vram_dout;
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mip_map 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vq_comp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_fmt 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__scan_order 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__scan_order;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__stride 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__stride;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_selector 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_selector;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_start_addr 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_start_addr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_u_flip 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_flip;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_v_flip 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_flip;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_u_clamp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_clamp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_v_clamp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_clamp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_u_size 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__ui) 
           & (((IData)(8U) << (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)) 
              - (IData)(1U)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_v_size 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vi) 
           & (((IData)(8U) << (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size)) 
              - (IData)(1U)));
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__volume_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__depth_comp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__volume_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
        = __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__next_region 
        = __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__next_region;
    vlSelf->simtop__DOT__pvr__DOT__ra_opaque = __Vdly__simtop__DOT__pvr__DOT__ra_opaque;
    vlSelf->simtop__DOT__pvr__DOT__ra_opaque_mod = __Vdly__simtop__DOT__pvr__DOT__ra_opaque_mod;
    vlSelf->simtop__DOT__pvr__DOT__ra_trans = __Vdly__simtop__DOT__pvr__DOT__ra_trans;
    vlSelf->simtop__DOT__pvr__DOT__ra_trans_mod = __Vdly__simtop__DOT__pvr__DOT__ra_trans_mod;
    vlSelf->simtop__DOT__pvr__DOT__ra_puncht = __Vdly__simtop__DOT__pvr__DOT__ra_puncht;
    vlSelf->simtop__DOT__pvr__DOT__type_cnt = __Vdly__simtop__DOT__pvr__DOT__type_cnt;
    vlSelf->simtop__DOT__pvr__DOT__poly_drawn = __Vdly__simtop__DOT__pvr__DOT__poly_drawn;
    vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr = __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr;
    vlSelf->simtop__DOT__pvr__DOT__opb_word = __Vdly__simtop__DOT__pvr__DOT__opb_word;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__twop 
        = vlSelf->simtop__DOT__pvr__DOT__twop;
    vlSelf->simtop__DOT__pvr__DOT__vram_wr = vlSelf->simtop__DOT__vram_wr;
    vlSelf->simtop__DOT__pvr__DOT__vram_dout = vlSelf->simtop__DOT__vram_dout;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__inTriangle 
        = (VL_LTES_III(32, 0U, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs12) 
           & (VL_LTES_III(32, 0U, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs23) 
              & VL_LTES_III(32, 0U, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs31)));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_rd 
        = vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_wr 
        = vlSelf->simtop__DOT__pvr__DOT__ra_vram_wr;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_entry_valid 
        = vlSelf->simtop__DOT__pvr__DOT__ra_entry_valid;
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
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__render_poly 
        = vlSelf->simtop__DOT__pvr__DOT__render_poly;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__render_poly 
        = vlSelf->simtop__DOT__pvr__DOT__render_poly;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__type_cnt 
        = vlSelf->simtop__DOT__pvr__DOT__type_cnt;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__type_cnt 
        = vlSelf->simtop__DOT__pvr__DOT__type_cnt;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__poly_addr 
        = vlSelf->simtop__DOT__pvr__DOT__poly_addr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_addr 
        = vlSelf->simtop__DOT__pvr__DOT__poly_addr;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__poly_drawn 
        = vlSelf->simtop__DOT__pvr__DOT__poly_drawn;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_drawn 
        = vlSelf->simtop__DOT__pvr__DOT__poly_drawn;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_addr 
        = vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr;
    simtop__DOT____Vcellout__pvr__vram_addr = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_switch)
                                                ? vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr
                                                : vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_control 
        = vlSelf->simtop__DOT__pvr__DOT__ra_control;
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_last = (vlSelf->simtop__DOT__pvr__DOT__ra_control 
                                                   >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_zclear = 
        (1U & (vlSelf->simtop__DOT__pvr__DOT__ra_control 
               >> 0x1eU));
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_flush = 
        (1U & (vlSelf->simtop__DOT__pvr__DOT__ra_control 
               >> 0x1cU));
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_tiley = 
        (0x3fU & (vlSelf->simtop__DOT__pvr__DOT__ra_control 
                  >> 8U));
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex = 
        (0x3fU & (vlSelf->simtop__DOT__pvr__DOT__ra_control 
                  >> 2U));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__opb_word 
        = vlSelf->simtop__DOT__pvr__DOT__opb_word;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__opb_word 
        = vlSelf->simtop__DOT__pvr__DOT__opb_word;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__num_prims 
        = (0xfU & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                   >> 0x19U));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__shadow 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                 >> 0x18U));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__skip 
        = (7U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                 >> 0x15U));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__eol 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                 >> 0x1cU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__twop;
    vlSelf->simtop__DOT__pvr__DOT__vram_addr = simtop__DOT____Vcellout__pvr__vram_addr;
    vlSelf->vram_addr = (0x7fffffU & simtop__DOT____Vcellout__pvr__vram_addr);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_last 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_last;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_zclear 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_zclear;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_flush 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_flush;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_tiley 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_tiley;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tiley 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_tiley;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_tilex 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tilex 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__num_prims 
        = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__num_prims;
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
    vlSelf->simtop__DOT__vram_addr = vlSelf->vram_addr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_mask 
        = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask;
}

VL_INLINE_OPT void Vsimtop___024root___nba_sequent__TOP__2(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT____VdfgTmp_hf013ec3b__0;
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT____VdfgTmp_hf013ec3b__0 = 0;
    CData/*0:0*/ simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0;
    simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT____Vlvbound_h8de9eeee__0 = 0;
    // Body
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
                                        vlSelf->dm_req_addr 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                    ? vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec
                                                    : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph)
                                                : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
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
                                        vlSelf->dm_req_addr 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                    ? vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec
                                                    : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph)
                                                : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
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
                                        vlSelf->dm_req_addr 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                    ? vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec
                                                    : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph)
                                                : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
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
                                    vlSelf->dm_req_addr 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec
                                                : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph)
                                            : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
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
                                        vlSelf->dm_req_addr 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                    ? vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec
                                                    : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph)
                                                : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
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
                                        vlSelf->dm_req_addr 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                    ? vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec
                                                    : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph)
                                                : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
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
                                    vlSelf->dm_req_addr 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec
                                                : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph)
                                            : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
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
                                    vlSelf->dm_req_addr 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec
                                                : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph)
                                            : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
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
                                    vlSelf->dm_req_addr 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                                ? vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec
                                                : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph)
                                            : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
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
                                vlSelf->dm_req_addr 
                                    = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                        ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))
                                            ? vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec
                                            : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_oph)
                                        : vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl);
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
                                    vlSelf->dm_req_addr 
                                        = vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_opl;
                                }
                            } else {
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
        } else if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                          >> 0xcU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_raw)))) {
                                vlSelf->dm_req_addr 
                                    = vlSelf->simtop__DOT__core__DOT__lsu__DOT__rn_dec;
                            }
                        } else {
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
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__out_t 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu1_t;
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__out_t 
        = vlSelf->simtop__DOT__core__DOT__e1_mtu0_t;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter 
        = ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_right))
            ? (((- (IData)((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_sign))) 
                << 0x10U) | (vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_8 
                             >> 0x10U)) : vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_8);
    vlSelf->simtop__DOT__core__DOT__trace_wdst1 = vlSelf->simtop__DOT__trace_wdst1;
    vlSelf->simtop__DOT__core__DOT__trace_wdst0 = vlSelf->simtop__DOT__trace_wdst0;
    vlSelf->simtop__DOT__core__DOT__trace_valid0 = vlSelf->simtop__DOT__trace_valid0;
    vlSelf->simtop__DOT__core__DOT__rf_wen0 = vlSelf->trace_wen0;
    vlSelf->simtop__DOT__trace_wen0 = vlSelf->trace_wen0;
    vlSelf->simtop__DOT__pvr__DOT__pvr_rd = vlSelf->simtop__DOT__pvr_rd;
    vlSelf->simtop__DOT__pvr__DOT__pvr_wr = vlSelf->simtop__DOT__pvr_wr;
    vlSelf->simtop__DOT__core__DOT__dm_req_valid = vlSelf->simtop__DOT__dm_req_valid;
    vlSelf->simtop__DOT__core__DOT__rf_wen1 = vlSelf->trace_wen1;
    vlSelf->simtop__DOT__trace_wen1 = vlSelf->trace_wen1;
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6ab68d09__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h30afbd87__0) 
           & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst)));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h3b4896c3__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT____VdfgTmp_h2883dc79__0) 
           & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__rst 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__rst;
    vlSelf->simtop__DOT__core__DOT__im_req_valid = vlSelf->simtop__DOT__im_req_valid;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__reset_n 
        = vlSelf->simtop__DOT__pvr__DOT__reset_n;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__reset_n 
        = vlSelf->simtop__DOT__pvr__DOT__reset_n;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_valid;
    vlSelf->simtop__DOT__core__DOT__replay_delayslot_miss 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__replay_icache_miss) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__id_is_delayslot));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__in_valid 
        = vlSelf->simtop__DOT__core__DOT__id_instr0_valid;
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
    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))) {
        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))) {
            vlSelf->dm_req_wdata = vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata;
            vlSelf->dm_req_wmask = 0xffU;
        } else {
            vlSelf->dm_req_wdata = (((QData)((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)));
            vlSelf->dm_req_wmask = vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_long;
        }
    } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))) {
        vlSelf->dm_req_wdata = (((QData)((IData)((0xffffU 
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
                                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))))));
        vlSelf->dm_req_wmask = vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_word;
    } else {
        vlSelf->dm_req_wdata = (((QData)((IData)((0xffU 
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
                                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__wdata)))))))))));
        vlSelf->dm_req_wmask = vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte;
    }
    vlSelf->simtop__DOT__req_addr = (0x1fffffffU & vlSelf->dm_req_addr);
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
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdst1 
        = vlSelf->simtop__DOT__core__DOT__trace_wdst1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdst0 
        = vlSelf->simtop__DOT__core__DOT__trace_wdst0;
    vlSelf->simtop__DOT__core__DOT__trace_wen0 = vlSelf->simtop__DOT__trace_wen0;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_valid 
        = vlSelf->simtop__DOT__core__DOT__dm_req_valid;
    vlSelf->simtop__DOT__core__DOT__trace_wen1 = vlSelf->simtop__DOT__trace_wen1;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__reset_n 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__reset_n;
    vlSelf->simtop__DOT__pvr__DOT__pvr_din = (IData)(
                                                     (vlSelf->dm_req_wdata 
                                                      >> 0U));
    vlSelf->simtop__DOT__dm_req_wdata = vlSelf->dm_req_wdata;
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
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wen0 
        = vlSelf->simtop__DOT__core__DOT__trace_wen0;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wen1 
        = vlSelf->simtop__DOT__core__DOT__trace_wen1;
    vlSelf->simtop__DOT__core__DOT__dm_req_wdata = vlSelf->simtop__DOT__dm_req_wdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_addr 
        = vlSelf->simtop__DOT__core__DOT__dm_req_addr;
    vlSelf->simtop__DOT__dm_req_wmask = vlSelf->dm_req_wmask;
    vlSelf->simtop__DOT__pvr__DOT__ta_fifo_cs = vlSelf->simtop__DOT__ta_fifo_cs;
    vlSelf->simtop__DOT__pvr__DOT__ta_yuv_cs = vlSelf->simtop__DOT__ta_yuv_cs;
    vlSelf->simtop__DOT__pvr__DOT__ta_tex_cs = vlSelf->simtop__DOT__ta_tex_cs;
    vlSelf->simtop__DOT__pvr__DOT__pvr_reg_cs = vlSelf->simtop__DOT__pvr_reg_cs;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed_lsb 
        = (vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed 
           & (- vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__reversed));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_wdata 
        = vlSelf->simtop__DOT__core__DOT__dm_req_wdata;
    vlSelf->simtop__DOT__core__DOT__dm_req_wmask = vlSelf->simtop__DOT__dm_req_wmask;
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
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_wmask 
        = vlSelf->simtop__DOT__core__DOT__dm_req_wmask;
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
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_exp;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_zero 
        = ((~ (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_nan)) 
           & (((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_a_is_zero) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_b_is_zero)) 
              | (IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__frac_norm_is_zero)));
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_is_zero 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_is_zero;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__o_sign 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__adder_o_sign;
}

VL_INLINE_OPT void Vsimtop___024root___nba_comb__TOP__0(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___nba_comb__TOP__0\n"); );
    // Body
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
    vlSelf->simtop__DOT__pvr__DOT__pvr_dout = vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout;
    vlSelf->simtop__DOT__pvr_dout = (QData)((IData)(vlSelf->simtop__DOT____Vcellout__pvr__pvr_dout));
    vlSelf->simtop__DOT__sh4_dm_rdata = ((IData)(vlSelf->simtop__DOT__pvr_reg_cs)
                                          ? vlSelf->simtop__DOT__pvr_dout
                                          : vlSelf->dm_resp_rdata);
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
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_ws 
        = (((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_w) 
                              >> 0xfU)))) << 0x10U) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_w));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bs 
        = (((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_b) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_b));
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
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wdata1 
        = vlSelf->simtop__DOT__core__DOT__fprf_wdata1;
    vlSelf->trace_wdata1 = vlSelf->simtop__DOT__core__DOT__e2_p1_wdata;
    vlSelf->trace_wdata0 = vlSelf->simtop__DOT__core__DOT__e2_p0_wdata;
    vlSelf->simtop__DOT__core__DOT__rf_wdata1 = vlSelf->trace_wdata1;
    vlSelf->simtop__DOT__trace_wdata1 = vlSelf->trace_wdata1;
    vlSelf->simtop__DOT__core__DOT__rf_wdata0 = vlSelf->trace_wdata0;
    vlSelf->simtop__DOT__trace_wdata0 = vlSelf->trace_wdata0;
    vlSelf->simtop__DOT__core__DOT__trace_wdata1 = vlSelf->simtop__DOT__trace_wdata1;
    vlSelf->simtop__DOT__core__DOT__trace_wdata0 = vlSelf->simtop__DOT__trace_wdata0;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdata1 
        = vlSelf->simtop__DOT__core__DOT__trace_wdata1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdata0 
        = vlSelf->simtop__DOT__core__DOT__trace_wdata0;
}
