// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimtop.h for the primary calling header

#include "verilated.h"

#include "Vsimtop__Syms.h"
#include "Vsimtop___024root.h"

VL_ATTR_COLD void Vsimtop___024root___eval_static__TOP(Vsimtop___024root* vlSelf);

VL_ATTR_COLD void Vsimtop___024root___eval_static(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_static\n"); );
    // Body
    Vsimtop___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vsimtop___024root___eval_static__TOP(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full 
        = ((0x80000U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                        << 0xaU)) | ((0x40000U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                  << 9U)) 
                                     | ((0x20000U & 
                                         ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                          << 9U)) | 
                                        ((0x10000U 
                                          & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                             << 8U)) 
                                         | ((0x8000U 
                                             & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                << 8U)) 
                                            | ((0x4000U 
                                                & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                   << 7U)) 
                                               | ((0x2000U 
                                                   & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                      << 7U)) 
                                                  | ((0x1000U 
                                                      & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                         << 6U)) 
                                                     | ((0x800U 
                                                         & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                            << 6U)) 
                                                        | ((0x400U 
                                                            & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                               << 5U)) 
                                                           | ((0x200U 
                                                               & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                                  << 5U)) 
                                                              | ((0x100U 
                                                                  & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                                     << 4U)) 
                                                                 | ((0x80U 
                                                                     & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                                        << 4U)) 
                                                                    | ((0x40U 
                                                                        & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                                           << 3U)) 
                                                                       | ((0x20U 
                                                                           & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                                              << 3U)) 
                                                                          | ((0x10U 
                                                                              & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                                                << 2U)) 
                                                                             | ((8U 
                                                                                & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi)))))))))))))))))))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX3_sub_FX1 
        = (VL_EXTENDS_QI(64,32, vlSelf->FX3) - VL_EXTENDS_QI(64,32, vlSelf->FX1));
}

VL_ATTR_COLD void Vsimtop___024root___eval_initial__TOP(Vsimtop___024root* vlSelf);

VL_ATTR_COLD void Vsimtop___024root___eval_initial(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_initial\n"); );
    // Body
    Vsimtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__simtop__DOT____Vcellinp__pvr__reset_n__0 
        = vlSelf->simtop__DOT____Vcellinp__pvr__reset_n;
    vlSelf->__Vtrigprevexpr___TOP__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps__0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps;
    vlSelf->__Vtrigprevexpr___TOP__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps__0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps;
}

VL_ATTR_COLD void Vsimtop___024root___eval_initial__TOP(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__two_volume = 0U;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__test_float = 0x4212c0e0U;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__FPU_PARAM_CFG = 0x27df77U;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FRAC_BITS = 0xeU;
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
    // Body
    vlSelf->simtop__DOT__rst = vlSelf->rst;
    vlSelf->simtop__DOT__boot_vector = vlSelf->boot_vector;
    vlSelf->simtop__DOT__im_req_addr = vlSelf->im_req_addr;
    vlSelf->simtop__DOT__im_req_valid = vlSelf->im_req_valid;
    vlSelf->simtop__DOT__im_resp_rdata = vlSelf->im_resp_rdata;
    vlSelf->simtop__DOT__im_resp_valid = vlSelf->im_resp_valid;
    vlSelf->simtop__DOT__dm_req_addr = vlSelf->dm_req_addr;
    vlSelf->simtop__DOT__dm_req_wdata = vlSelf->dm_req_wdata;
    vlSelf->simtop__DOT__dm_req_wmask = vlSelf->dm_req_wmask;
    vlSelf->simtop__DOT__dm_req_wen = vlSelf->dm_req_wen;
    vlSelf->simtop__DOT__dm_req_valid = vlSelf->dm_req_valid;
    vlSelf->simtop__DOT__dm_resp_rdata = vlSelf->dm_resp_rdata;
    vlSelf->simtop__DOT__dm_resp_valid = vlSelf->dm_resp_valid;
    vlSelf->simtop__DOT__trace_valid0 = vlSelf->trace_valid0;
    vlSelf->simtop__DOT__trace_pc0 = vlSelf->trace_pc0;
    vlSelf->simtop__DOT__trace_instr0 = vlSelf->trace_instr0;
    vlSelf->simtop__DOT__trace_wen0 = vlSelf->trace_wen0;
    vlSelf->simtop__DOT__trace_wdst0 = vlSelf->trace_wdst0;
    vlSelf->simtop__DOT__trace_wdata0 = vlSelf->trace_wdata0;
    vlSelf->simtop__DOT__trace_valid1 = vlSelf->trace_valid1;
    vlSelf->simtop__DOT__trace_pc1 = vlSelf->trace_pc1;
    vlSelf->simtop__DOT__trace_instr1 = vlSelf->trace_instr1;
    vlSelf->simtop__DOT__trace_wen1 = vlSelf->trace_wen1;
    vlSelf->simtop__DOT__trace_wdst1 = vlSelf->trace_wdst1;
    vlSelf->simtop__DOT__trace_wdata1 = vlSelf->trace_wdata1;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_trig 
        = vlSelf->simtop__DOT__pvr__DOT__ra_trig;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__PARAM_BASE 
        = vlSelf->simtop__DOT__pvr__DOT__PARAM_BASE;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__REGION_BASE 
        = vlSelf->simtop__DOT__pvr__DOT__REGION_BASE;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__TA_ALLOC_CTRL 
        = vlSelf->simtop__DOT__pvr__DOT__TA_ALLOC_CTRL;
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_drawn 
        = vlSelf->simtop__DOT__pvr__DOT__poly_drawn;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__isp_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tsp_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tcw_word 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__read_codebook 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_wait 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__base_argb 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offs_argb 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_off_col;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__x_ps 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__y_ps 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__interp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT____Vcellout__interp_inst_0__interp;
    vlSelf->simtop__DOT__bios_cs = (0x1fffffU >= vlSelf->im_req_addr);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_strip 
        = (1U & (~ (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                    >> 0x1fU)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_array 
        = (4U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                  >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book_endian 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL 
                 >> 0x11U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__index_endian 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL 
                 >> 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__bank_bit 
        = (0x1fU & (vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL 
                    >> 8U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__stride 
        = (0x1fU & vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__o_opb 
        = (3U & vlSelf->simtop__DOT__pvr__DOT__TA_ALLOC_CTRL);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__om_opb 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__TA_ALLOC_CTRL 
                 >> 4U));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__t_opb 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__TA_ALLOC_CTRL 
                 >> 8U));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__tm_opb 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__TA_ALLOC_CTRL 
                 >> 0xcU));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__pt_opb 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__TA_ALLOC_CTRL 
                 >> 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__opb_mode 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__TA_ALLOC_CTRL 
                 >> 0x14U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__IP_Z 
        = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT____Vcellout__interp_inst_0__interp);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__neg_z 
        = ((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z 
            | (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z 
               | vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z)) 
           >> 0x1fU);
    vlSelf->simtop__DOT__vram_rd = vlSelf->vram_rd;
    vlSelf->simtop__DOT__vram_din = vlSelf->vram_din;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_entry_valid 
        = vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__TEXT_CONTROL 
        = vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__PAL_RAM_CTRL 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__PAL_RAM_CTRL 
                 >> 0U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_dout 
        = vlSelf->simtop__DOT__pvr__DOT__pal_dout;
    vlSelf->simtop__DOT__pvr__DOT__ra_vram_din = (IData)(vlSelf->vram_din);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__num_prims 
        = (0xfU & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                   >> 0x19U));
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_last = (vlSelf->simtop__DOT__pvr__DOT__ra_control 
                                                   >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_zclear = 
        (1U & (vlSelf->simtop__DOT__pvr__DOT__ra_control 
               >> 0x1eU));
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_flush = 
        (1U & (vlSelf->simtop__DOT__pvr__DOT__ra_control 
               >> 0x1cU));
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__stride_flag 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x19U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__exp 
        = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__test_float 
                    >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__man 
        = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__test_float);
    vlSelf->simtop__DOT__FDY12 = vlSelf->FDY12;
    vlSelf->simtop__DOT__FDX12 = vlSelf->FDX12;
    vlSelf->simtop__DOT__FDY23 = vlSelf->FDY23;
    vlSelf->simtop__DOT__FDX23 = vlSelf->FDX23;
    vlSelf->simtop__DOT__FDY31 = vlSelf->FDY31;
    vlSelf->simtop__DOT__FDX31 = vlSelf->FDX31;
    vlSelf->simtop__DOT__FDY41 = vlSelf->FDY41;
    vlSelf->simtop__DOT__FX4 = vlSelf->FX4;
    vlSelf->simtop__DOT__FDX41 = vlSelf->FDX41;
    vlSelf->simtop__DOT__FY4 = vlSelf->FY4;
    vlSelf->simtop__DOT__pvr__DOT__pvr_addr = (0xffffU 
                                               & (vlSelf->dm_req_addr 
                                                  >> 0U));
    vlSelf->simtop__DOT__pvr__DOT__pvr_din = (IData)(
                                                     (vlSelf->dm_req_wdata 
                                                      >> 0U));
    vlSelf->vram_wr = vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__neg_xy 
        = ((vlSelf->FX1 | (vlSelf->FX2 | (vlSelf->FX3 
                                          | (vlSelf->FY1 
                                             | (vlSelf->FY2 
                                                | (vlSelf->FY3 
                                                   | vlSelf->FY4)))))) 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_tiley = 
        (0x3fU & (vlSelf->simtop__DOT__pvr__DOT__ra_control 
                  >> 8U));
    vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex = 
        (0x3fU & (vlSelf->simtop__DOT__pvr__DOT__ra_control 
                  >> 2U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__ovr_xy 
        = (VL_GTS_III(32, 0xfa0U, (vlSelf->FX1 >> 0xeU)) 
           | (VL_GTS_III(32, 0xfa0U, (vlSelf->FX2 >> 0xeU)) 
              | (VL_GTS_III(32, 0xfa0U, (vlSelf->FX3 
                                         >> 0xeU)) 
                 | (VL_GTS_III(32, 0xfa0U, (vlSelf->FX4 
                                            >> 0xeU)) 
                    | (VL_GTS_III(32, 0xfa0U, (vlSelf->FY1 
                                               >> 0xeU)) 
                       | (VL_GTS_III(32, 0xfa0U, (vlSelf->FY2 
                                                  >> 0xeU)) 
                          | (VL_GTS_III(32, 0xfa0U, 
                                        (vlSelf->FY3 
                                         >> 0xeU)) 
                             | (VL_GTS_III(32, 0xfa0U, 
                                           (vlSelf->FY4 
                                            >> 0xeU)) 
                                | (VL_GTS_III(32, 0xfffff060U, 
                                              (vlSelf->FX1 
                                               >> 0xeU)) 
                                   | (VL_GTS_III(32, 0xfffff060U, 
                                                 (vlSelf->FX2 
                                                  >> 0xeU)) 
                                      | (VL_GTS_III(32, 0xfffff060U, 
                                                    (vlSelf->FX3 
                                                     >> 0xeU)) 
                                         | (VL_GTS_III(32, 0xfffff060U, 
                                                       (vlSelf->FX4 
                                                        >> 0xeU)) 
                                            | (VL_GTS_III(32, 0xfffff060U, 
                                                          (vlSelf->FY1 
                                                           >> 0xeU)) 
                                               | (VL_GTS_III(32, 0xfffff060U, 
                                                             (vlSelf->FY2 
                                                              >> 0xeU)) 
                                                  | (VL_GTS_III(32, 0xfffff060U, 
                                                                (vlSelf->FY3 
                                                                 >> 0xeU)) 
                                                     | VL_GTS_III(32, 0xfffff060U, 
                                                                  (vlSelf->FY4 
                                                                   >> 0xeU)))))))))))))))));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__shadow 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                 >> 0x18U));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__skip 
        = (7U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                 >> 0x15U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__f_area 
        = (0xffffffffffffULL & (VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                 & (VL_EXTENDS_QI(48,32, vlSelf->FX1) 
                                                    - 
                                                    VL_EXTENDS_QI(48,32, vlSelf->FX3))), 
                                            (0xffffffffffffULL 
                                             & (VL_EXTENDS_QI(48,32, vlSelf->FY2) 
                                                - VL_EXTENDS_QI(48,32, vlSelf->FY3)))) 
                                - VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                   & (VL_EXTENDS_QI(48,32, vlSelf->FY1) 
                                                      - 
                                                      VL_EXTENDS_QI(48,32, vlSelf->FY3))), 
                                              (0xffffffffffffULL 
                                               & (VL_EXTENDS_QI(48,32, vlSelf->FX2) 
                                                  - 
                                                  VL_EXTENDS_QI(48,32, vlSelf->FX3))))));
    vlSelf->simtop__DOT__FX1 = vlSelf->FX1;
    vlSelf->simtop__DOT__FY1 = vlSelf->FY1;
    vlSelf->simtop__DOT__FX2 = vlSelf->FX2;
    vlSelf->simtop__DOT__FY2 = vlSelf->FY2;
    vlSelf->simtop__DOT__FX3 = vlSelf->FX3;
    vlSelf->simtop__DOT__FY3 = vlSelf->FY3;
    vlSelf->simtop__DOT__FZ1 = vlSelf->FZ1;
    vlSelf->simtop__DOT__FZ2 = vlSelf->FZ2;
    vlSelf->simtop__DOT__FZ3 = vlSelf->FZ3;
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_dout = (IData)(vlSelf->simtop__DOT__pvr__DOT____Vcellout__isp_parser_inst__isp_vram_dout);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
           >> 0x1dU);
    vlSelf->simtop__DOT__pvr_rd = ((~ (IData)(vlSelf->dm_req_wen)) 
                                   & (IData)(vlSelf->dm_req_valid));
    vlSelf->simtop__DOT__pvr_wr = ((IData)(vlSelf->dm_req_valid) 
                                   & (IData)(vlSelf->dm_req_wen));
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__eol 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                 >> 0x1cU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
                 >> 0x19U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C1 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult1) 
           - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult2));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C2 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult3) 
           - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult4));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C3 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult5) 
           - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult6));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult9 
        = ((QData)((IData)(vlSelf->FDX12)) * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult10 
        = ((QData)((IData)(vlSelf->FDY12)) * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult11 
        = ((QData)((IData)(vlSelf->FDX23)) * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult12 
        = ((QData)((IData)(vlSelf->FDY23)) * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult13 
        = ((QData)((IData)(vlSelf->FDX31)) * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult14 
        = ((QData)((IData)(vlSelf->FDY31)) * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult15 
        = ((QData)((IData)(vlSelf->FDX41)) * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult16 
        = ((QData)((IData)(vlSelf->FDY41)) * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)));
    vlSelf->simtop__DOT____Vcellinp__pvr__reset_n = 
        (1U & (~ (IData)(vlSelf->simtop__DOT__rst_reg)));
    vlSelf->simtop__DOT__clk = vlSelf->clk;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_quad_array 
        = (5U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                  >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ3_sub_FZ1 
        = (VL_EXTENDS_QI(64,32, vlSelf->FZ3) - VL_EXTENDS_QI(64,32, vlSelf->FZ1));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY2_sub_FY1 
        = (VL_EXTENDS_QI(64,32, vlSelf->FY2) - VL_EXTENDS_QI(64,32, vlSelf->FY1));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_mult_1 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ3_sub_FZ1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY2_sub_FY1) 
           >> 0xeU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ2_sub_FZ1 
        = (VL_EXTENDS_QI(64,32, vlSelf->FZ2) - VL_EXTENDS_QI(64,32, vlSelf->FZ1));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY3_sub_FY1 
        = (VL_EXTENDS_QI(64,32, vlSelf->FY3) - VL_EXTENDS_QI(64,32, vlSelf->FY1));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_mult_2 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ2_sub_FZ1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY3_sub_FY1) 
           >> 0xeU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_mult_1 
           - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_mult_2);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX3_sub_FX1 
        = (VL_EXTENDS_QI(64,32, vlSelf->FX3) - VL_EXTENDS_QI(64,32, vlSelf->FX1));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_mult_1 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX3_sub_FX1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ2_sub_FZ1) 
           >> 0xeU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX2_sub_FX1 
        = (VL_EXTENDS_QI(64,32, vlSelf->FX2) - VL_EXTENDS_QI(64,32, vlSelf->FX1));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_mult_2 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX2_sub_FX1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ3_sub_FZ1) 
           >> 0xeU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_mult_1 
           - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_mult_2);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C_mult_1 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX2_sub_FX1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY3_sub_FY1) 
           >> 0xeU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C_mult_2 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX3_sub_FX1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY2_sub_FY1) 
           >> 0xeU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C_mult_1 
           - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C_mult_2);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_shifted 
        = ((- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa) 
           << 0x1aU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDX 
        = VL_DIVS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_shifted, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_shifted 
        = ((- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba) 
           << 0x1aU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDY 
        = VL_DIVS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_shifted, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDX_mult_FX1 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDX, 
                       VL_EXTENDS_QI(64,32, vlSelf->FX1)) 
           >> 0x1aU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDY_mult_FY1 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDY, 
                       VL_EXTENDS_QI(64,32, vlSelf->FY1)) 
           >> 0x1aU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__c 
        = ((VL_EXTENDS_QI(64,32, vlSelf->FZ1) - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDX_mult_FX1) 
           - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDY_mult_FY1);
    vlSelf->simtop__DOT__req_addr = (0x1fffffffU & vlSelf->dm_req_addr);
    if ((1U & (~ (vlSelf->dm_req_addr >> 0xfU)))) {
        if ((1U & (~ (vlSelf->dm_req_addr >> 0xeU)))) {
            if ((1U & (~ (vlSelf->dm_req_addr >> 0xdU)))) {
                if ((0x1000U & vlSelf->dm_req_addr)) {
                    vlSelf->simtop__DOT__pvr_dout = vlSelf->simtop__DOT__pvr__DOT__pal_dout;
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
                                                                vlSelf->simtop__DOT__pvr_dout 
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
                                                            vlSelf->simtop__DOT__pvr_dout 
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
                                                        vlSelf->simtop__DOT__pvr_dout 
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
                                                    vlSelf->simtop__DOT__pvr_dout 
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
                                                    vlSelf->simtop__DOT__pvr_dout 
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
                                                vlSelf->simtop__DOT__pvr_dout 
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
                                                vlSelf->simtop__DOT__pvr_dout 
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
                                            vlSelf->simtop__DOT__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__TA_YUV_TEX_CTRL;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__TA_YUV_TEX_BASE;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__TA_LIST_INIT;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT__pvr_dout 
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
                                                vlSelf->simtop__DOT__pvr_dout 
                                                    = vlSelf->simtop__DOT__pvr__DOT__TA_GLOB_TILE_CLIP;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__TA_ISP_CURRENT;
                                        }
                                    }
                                } else if ((4U & vlSelf->dm_req_addr)) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__TA_NEXT_OPB;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__TA_ISP_LIMIT;
                                    }
                                }
                            } else if ((8U & vlSelf->dm_req_addr)) {
                                if ((4U & vlSelf->dm_req_addr)) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__TA_OL_LIMIT;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__TA_ISP_BASE;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
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
                                            vlSelf->simtop__DOT__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__PT_ALPHA_REF;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__Y_COEFF;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FB_C_SOF;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__FB_BURSTCTRL;
                                }
                            }
                        } else if ((8U & vlSelf->dm_req_addr)) {
                            if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__SPG_STATUS;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT__pvr_dout 
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
                                                vlSelf->simtop__DOT__pvr_dout 
                                                    = vlSelf->simtop__DOT__pvr__DOT__SCALER_CTL;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->dm_req_addr 
                                                    >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__VO_STARTY;
                                        }
                                    }
                                }
                            } else if ((8U & vlSelf->dm_req_addr)) {
                                if ((4U & vlSelf->dm_req_addr)) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__VO_STARTX;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__VO_CONTROL;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__SPG_WIDTH;
                                }
                            }
                        } else if ((0x10U & vlSelf->dm_req_addr)) {
                            if ((8U & vlSelf->dm_req_addr)) {
                                if ((4U & vlSelf->dm_req_addr)) {
                                    if ((1U & (~ (vlSelf->dm_req_addr 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->dm_req_addr))) {
                                            vlSelf->simtop__DOT__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__SPG_VBLANK;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__SPG_LOAD;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__SPG_HBLANK;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__SPG_CONTROL;
                                }
                            }
                        } else if ((8U & vlSelf->dm_req_addr)) {
                            if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__SPG_VBLANK_INT;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__SPG_HBLANK_INT;
                                }
                            }
                        } else if ((4U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__SPG_TRIGGER_POS;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->dm_req_addr 
                                             >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT__pvr_dout 
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
                                            vlSelf->simtop__DOT__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__FOG_CLAMP_MAX;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FOG_DENSITY;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FOG_COL_VERT;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__FOG_COL_RAM;
                                }
                            }
                        } else if ((8U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 2U)))) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__SDRAM_CFG;
                                    }
                                }
                            }
                        } else if ((4U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__SDRAM_ARB_CFG;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->dm_req_addr 
                                             >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT__pvr_dout 
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
                                        vlSelf->simtop__DOT__pvr_dout 
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
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__ISP_BACKGND_T;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->dm_req_addr 
                                             >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__ISP_BACKGND_D;
                            }
                        }
                    } else if ((4U & vlSelf->dm_req_addr)) {
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__FPU_PERP_VAL;
                            }
                        }
                    } else if ((1U & (~ (vlSelf->dm_req_addr 
                                         >> 1U)))) {
                        if ((1U & (~ vlSelf->dm_req_addr))) {
                            vlSelf->simtop__DOT__pvr_dout 
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
                                            vlSelf->simtop__DOT__pvr_dout 
                                                = vlSelf->simtop__DOT__pvr__DOT__FPU_PARAM_CFG;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->dm_req_addr 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FPU_CULL_VAL;
                                    }
                                }
                            } else if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FPU_SHAD_SCALE;
                                    }
                                }
                            }
                        } else if ((8U & vlSelf->dm_req_addr)) {
                            if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FB_Y_CLIP;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->dm_req_addr 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__FB_X_CLIP;
                                }
                            }
                        } else if ((4U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__FB_W_SOF2;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->dm_req_addr 
                                             >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__FB_W_SOF1;
                            }
                        }
                    } else if ((0x10U & vlSelf->dm_req_addr)) {
                        if ((8U & vlSelf->dm_req_addr)) {
                            if ((4U & vlSelf->dm_req_addr)) {
                                if ((1U & (~ (vlSelf->dm_req_addr 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->dm_req_addr))) {
                                        vlSelf->simtop__DOT__pvr_dout 
                                            = vlSelf->simtop__DOT__pvr__DOT__FB_R_SIZE;
                                    }
                                }
                            }
                        } else if ((4U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__FB_R_SOF2;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->dm_req_addr 
                                             >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__FB_R_SOF1;
                            }
                        }
                    } else if ((8U & vlSelf->dm_req_addr)) {
                        if ((4U & vlSelf->dm_req_addr)) {
                            if ((1U & (~ (vlSelf->dm_req_addr 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->dm_req_addr))) {
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__FB_W_LINESTRIDE;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->dm_req_addr 
                                             >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__FB_W_CTRL;
                            }
                        }
                    } else if ((4U & vlSelf->dm_req_addr)) {
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__FB_R_CTRL;
                            }
                        }
                    } else if ((1U & (~ (vlSelf->dm_req_addr 
                                         >> 1U)))) {
                        if ((1U & (~ vlSelf->dm_req_addr))) {
                            vlSelf->simtop__DOT__pvr_dout 
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
                                        vlSelf->simtop__DOT__pvr_dout 
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
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__REGION_BASE;
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelf->dm_req_addr 
                                         >> 2U)))) {
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT__pvr_dout 
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
                                    vlSelf->simtop__DOT__pvr_dout 
                                        = vlSelf->simtop__DOT__pvr__DOT__TEST_SELECT;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->dm_req_addr)) {
                        if ((1U & (~ (vlSelf->dm_req_addr 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelf->dm_req_addr))) {
                                vlSelf->simtop__DOT__pvr_dout 
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
                                vlSelf->simtop__DOT__pvr_dout 
                                    = vlSelf->simtop__DOT__pvr__DOT__SOFTRESET;
                            }
                        }
                    }
                } else if ((4U & vlSelf->dm_req_addr)) {
                    if ((1U & (~ (vlSelf->dm_req_addr 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelf->dm_req_addr))) {
                            vlSelf->simtop__DOT__pvr_dout 
                                = vlSelf->simtop__DOT__pvr__DOT__REVISION;
                        }
                    }
                } else if ((1U & (~ (vlSelf->dm_req_addr 
                                     >> 1U)))) {
                    if ((1U & (~ vlSelf->dm_req_addr))) {
                        vlSelf->simtop__DOT__pvr_dout 
                            = vlSelf->simtop__DOT__pvr__DOT__ID;
                    }
                }
            }
        }
    }
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_word_addr 
        = (0x1fffffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_selector 
        = (0x3fU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                    >> 0x15U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__shade_inst 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
                 >> 6U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x1eU));
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_din = vlSelf->vram_din;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt 
        = (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x1bU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__scan_order 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x1aU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size 
        = (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size 
        = (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
                 >> 3U));
    vlSelf->simtop__DOT__pvr__DOT__vram_rd = vlSelf->simtop__DOT__vram_rd;
    vlSelf->simtop__DOT__pvr__DOT__vram_din = vlSelf->simtop__DOT__vram_din;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__setup 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_entry_valid;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__TEXT_CONTROL 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__TEXT_CONTROL;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__PAL_RAM_CTRL 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__PAL_RAM_CTRL;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_dout 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_dout;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__num_prims 
        = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__num_prims;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_last 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_last;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_zclear 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_zclear;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_cont_flush 
        = vlSelf->simtop__DOT__pvr__DOT__ra_cont_flush;
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__stride_flag 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__stride_flag;
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
    vlSelf->simtop__DOT__pvr__DOT__FDY12 = vlSelf->simtop__DOT__FDY12;
    vlSelf->simtop__DOT__pvr__DOT__FDX12 = vlSelf->simtop__DOT__FDX12;
    vlSelf->simtop__DOT__pvr__DOT__FDY23 = vlSelf->simtop__DOT__FDY23;
    vlSelf->simtop__DOT__pvr__DOT__FDX23 = vlSelf->simtop__DOT__FDX23;
    vlSelf->simtop__DOT__pvr__DOT__FDY31 = vlSelf->simtop__DOT__FDY31;
    vlSelf->simtop__DOT__pvr__DOT__FDX31 = vlSelf->simtop__DOT__FDX31;
    vlSelf->simtop__DOT__pvr__DOT__FDY41 = vlSelf->simtop__DOT__FDY41;
    vlSelf->simtop__DOT__pvr__DOT__FX4 = vlSelf->simtop__DOT__FX4;
    vlSelf->simtop__DOT__pvr__DOT__FDX41 = vlSelf->simtop__DOT__FDX41;
    vlSelf->simtop__DOT__pvr__DOT__FY4 = vlSelf->simtop__DOT__FY4;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_addr 
        = vlSelf->simtop__DOT__pvr__DOT__pvr_addr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_din 
        = vlSelf->simtop__DOT__pvr__DOT__pvr_din;
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__sgn 
        = VL_GTES_IQQ(48, 0ULL, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__f_area);
    vlSelf->simtop__DOT__pvr__DOT__FX1 = vlSelf->simtop__DOT__FX1;
    vlSelf->simtop__DOT__pvr__DOT__FY1 = vlSelf->simtop__DOT__FY1;
    vlSelf->simtop__DOT__pvr__DOT__FX2 = vlSelf->simtop__DOT__FX2;
    vlSelf->simtop__DOT__pvr__DOT__FY2 = vlSelf->simtop__DOT__FY2;
    vlSelf->simtop__DOT__pvr__DOT__FX3 = vlSelf->simtop__DOT__FX3;
    vlSelf->simtop__DOT__pvr__DOT__FY3 = vlSelf->simtop__DOT__FY3;
    vlSelf->simtop__DOT__pvr__DOT__FZ1 = vlSelf->simtop__DOT__FZ1;
    vlSelf->simtop__DOT__pvr__DOT__FZ2 = vlSelf->simtop__DOT__FZ2;
    vlSelf->simtop__DOT__pvr__DOT__FZ3 = vlSelf->simtop__DOT__FZ3;
    vlSelf->vram_dout = (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_dout));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__volume_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__depth_comp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__volume_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp;
    vlSelf->simtop__DOT__pvr__DOT__pvr_rd = vlSelf->simtop__DOT__pvr_rd;
    vlSelf->simtop__DOT__pvr__DOT__pvr_wr = vlSelf->simtop__DOT__pvr_wr;
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__texture 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs12 
        = ((IData)(VL_EXTENDS_QI(64,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C1)) 
           + ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult9) 
              - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult10)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs23 
        = ((IData)(VL_EXTENDS_QI(64,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C2)) 
           + ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult11) 
              - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult12)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs31 
        = ((IData)(VL_EXTENDS_QI(64,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C3)) 
           + ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult13) 
              - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult14)));
    vlSelf->simtop__DOT__pvr__DOT__reset_n = vlSelf->simtop__DOT____Vcellinp__pvr__reset_n;
    vlSelf->simtop__DOT__pvr__DOT__clock = vlSelf->simtop__DOT__clk;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C4 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_quad_array)
            ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult7) 
               - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult8))
            : 1U);
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
    vlSelf->simtop__DOT__pvr__DOT__pvr_dout = vlSelf->simtop__DOT__pvr_dout;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vq_comp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_din;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mip_map 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_fmt 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal4 
        = (5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal8 
        = (6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__scan_order 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__scan_order;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_twid 
        = (1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__scan_order)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_v_size 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
           & (((IData)(8U) << (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size)) 
              - (IData)(1U)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_u_size 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
           & (((IData)(8U) << (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)) 
              - (IData)(1U)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY12 
        = vlSelf->simtop__DOT__pvr__DOT__FDY12;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX12 
        = vlSelf->simtop__DOT__pvr__DOT__FDX12;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY23 
        = vlSelf->simtop__DOT__pvr__DOT__FDY23;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX23 
        = vlSelf->simtop__DOT__pvr__DOT__FDX23;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY31 
        = vlSelf->simtop__DOT__pvr__DOT__FDY31;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX31 
        = vlSelf->simtop__DOT__pvr__DOT__FDX31;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY41 
        = vlSelf->simtop__DOT__pvr__DOT__FDY41;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX4 
        = vlSelf->simtop__DOT__pvr__DOT__FX4;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX41 
        = vlSelf->simtop__DOT__pvr__DOT__FDX41;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY4 
        = vlSelf->simtop__DOT__pvr__DOT__FY4;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_addr 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_addr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_din 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_din;
    vlSelf->simtop__DOT__pvr__DOT__vram_wr = vlSelf->simtop__DOT__vram_wr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1 
        = vlSelf->simtop__DOT__pvr__DOT__FX1;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1 
        = vlSelf->simtop__DOT__pvr__DOT__FY1;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2 
        = vlSelf->simtop__DOT__pvr__DOT__FX2;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2 
        = vlSelf->simtop__DOT__pvr__DOT__FY2;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3 
        = vlSelf->simtop__DOT__pvr__DOT__FX3;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3 
        = vlSelf->simtop__DOT__pvr__DOT__FY3;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ1 
        = vlSelf->simtop__DOT__pvr__DOT__FZ1;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ2 
        = vlSelf->simtop__DOT__pvr__DOT__FZ2;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ3 
        = vlSelf->simtop__DOT__pvr__DOT__FZ3;
    vlSelf->simtop__DOT__vram_dout = vlSelf->vram_dout;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_rd 
        = vlSelf->simtop__DOT__pvr__DOT__pvr_rd;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_wr 
        = vlSelf->simtop__DOT__pvr__DOT__pvr_wr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_mask 
        = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__reset_n 
        = vlSelf->simtop__DOT__pvr__DOT__reset_n;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__reset_n 
        = vlSelf->simtop__DOT__pvr__DOT__reset_n;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__clock;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__clock;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs41 
        = ((IData)(VL_EXTENDS_QI(64,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C4)) 
           + ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult15) 
              - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult16)));
    vlSelf->simtop__DOT__pvr__DOT__ta_fifo_cs = vlSelf->simtop__DOT__ta_fifo_cs;
    vlSelf->simtop__DOT__pvr__DOT__ta_yuv_cs = vlSelf->simtop__DOT__ta_yuv_cs;
    vlSelf->simtop__DOT__pvr__DOT__ta_tex_cs = vlSelf->simtop__DOT__ta_tex_cs;
    if (vlSelf->simtop__DOT__pvr_reg_cs) {
        vlSelf->simtop__DOT__pvr__DOT__pvr_reg_cs = 1U;
        vlSelf->simtop__DOT__sh4_dm_rdata = (QData)((IData)(vlSelf->simtop__DOT__pvr_dout));
    } else {
        vlSelf->simtop__DOT__pvr__DOT__pvr_reg_cs = 0U;
        vlSelf->simtop__DOT__sh4_dm_rdata = vlSelf->dm_resp_rdata;
    }
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_din;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_mipmap 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_twid) 
           & (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__non_twid_addr 
        = (0xfffffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked) 
                       + ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked) 
                          * ((IData)(8U) << (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX1 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY1 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX2 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY2 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX3 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY3 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ1 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ1;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ2 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ2;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ3 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ3;
    vlSelf->simtop__DOT__pvr__DOT__vram_dout = vlSelf->simtop__DOT__vram_dout;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_rd 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_rd;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_wr 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_wr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__reset_n 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__reset_n;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__clock;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__clock;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__inTriangle 
        = (1U & (~ ((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs12 
                     | (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs23 
                        | (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs31 
                           | vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs41))) 
                    >> 0x1fU)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full 
        = ((0x80000U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                        << 0xaU)) | ((0x40000U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                  << 9U)) 
                                     | ((0x20000U & 
                                         ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                          << 9U)) | 
                                        ((0x10000U 
                                          & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                             << 8U)) 
                                         | ((0x8000U 
                                             & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                << 8U)) 
                                            | ((0x4000U 
                                                & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                   << 7U)) 
                                               | ((0x2000U 
                                                   & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                      << 7U)) 
                                                  | ((0x1000U 
                                                      & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                         << 6U)) 
                                                     | ((0x800U 
                                                         & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                            << 6U)) 
                                                        | ((0x400U 
                                                            & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                               << 5U)) 
                                                           | ((0x200U 
                                                               & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                                  << 5U)) 
                                                              | ((0x100U 
                                                                  & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                                     << 4U)) 
                                                                 | ((0x80U 
                                                                     & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                                        << 4U)) 
                                                                    | ((0x40U 
                                                                        & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                                           << 3U)) 
                                                                       | ((0x20U 
                                                                           & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                                              << 3U)) 
                                                                          | ((0x10U 
                                                                              & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                                                << 2U)) 
                                                                             | ((8U 
                                                                                & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi)))))))))))))))))))));
    if ((((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size) 
          == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size)) 
         | (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_mipmap))) {
        if (((((((((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)) 
                   | (1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                  | (2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                 | (3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
                | (4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
               | (5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
              | (6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))) 
             | (7U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))) {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop 
                = ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                    ? (0x3fU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                    : ((1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                        ? (0xffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                        : ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                            ? (0x3ffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                            : ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                ? (0xfffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                                : ((4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                    ? (0x3fffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                                    : ((5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                        ? (0xffffU 
                                           & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                                        : ((6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                            ? (0x3ffffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)
                                            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)))))));
        }
    } else if (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size) 
                > (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) {
        if (((((((((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size)) 
                   | (1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) 
                  | (2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) 
                 | (3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) 
                | (4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) 
               | (5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) 
              | (6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))) 
             | (7U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size)))) {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop 
                = ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                    ? ((0x1fc0U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked) 
                                   << 3U)) | (0x3fU 
                                              & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                    : ((1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                        ? ((0x3f00U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked) 
                                       << 4U)) | (0xffU 
                                                  & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                        : ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                            ? ((0x7c00U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked) 
                                           << 5U)) 
                               | (0x3ffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                            : ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                                ? ((0xf000U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked) 
                                               << 6U)) 
                                   | (0xfffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                : ((4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                                    ? ((0x1c000U & 
                                        ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked) 
                                         << 7U)) | 
                                       (0x3fffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                    : ((5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                                        ? ((0x30000U 
                                            & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked) 
                                               << 8U)) 
                                           | (0xffffU 
                                              & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                        : ((6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size))
                                            ? ((0x40000U 
                                                & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked) 
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
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop 
                = ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                    ? ((0x1fc0U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked) 
                                   << 3U)) | (0x3fU 
                                              & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                    : ((1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                        ? ((0x3f00U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked) 
                                       << 4U)) | (0xffU 
                                                  & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                        : ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                            ? ((0x7c00U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked) 
                                           << 5U)) 
                               | (0x3ffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                            : ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                ? ((0xf000U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked) 
                                               << 6U)) 
                                   | (0xfffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                : ((4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                    ? ((0x1c000U & 
                                        ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked) 
                                         << 7U)) | 
                                       (0x3fffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                    : ((5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                        ? ((0x30000U 
                                            & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked) 
                                               << 8U)) 
                                           | (0xffffU 
                                              & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                        : ((6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size))
                                            ? ((0x40000U 
                                                & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked) 
                                                   << 9U)) 
                                               | (0x3ffffU 
                                                  & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full))
                                            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full)))))));
        }
    }
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
    if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
            = (0xfffffU & ((((IData)(0x800U) + vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs) 
                            << 2U) + vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__texel_word_offs 
            = (0xfffffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                           >> 5U));
    } else {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
            = (0xfffffU & ((((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal4) 
                             | (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal8)) 
                            | (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_twid))
                            ? ((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs 
                                >> 1U) + vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop)
                            : (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs 
                               + vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__non_twid_addr)));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__texel_word_offs 
            = (0xfffffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal4)
                            ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                               >> 4U) : ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal8)
                                          ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                                             >> 3U)
                                          : (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                                             >> 2U))));
    }
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vram_word_addr 
        = (0x1fffffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_word_addr 
                        + ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait)
                            ? (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cb_word_index)
                            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__texel_word_offs)));
    if (((((((((0U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not)) 
               | (1U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
              | (2U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
             | (3U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
            | (4U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
           | (5U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
          | (6U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
         | (7U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not)))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal4_nib 
            = (0xfU & ((0U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                        ? (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din)
                        : ((1U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                            ? (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                       >> 4U)) : ((2U 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                   ? (IData)(
                                                             (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                              >> 8U))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0xfU 
                                                     & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                    ? (IData)(
                                                              (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                               >> 0xcU))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                     ? (IData)(
                                                               (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                >> 0x10U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                      ? (IData)(
                                                                (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                 >> 0x14U))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (0xfU 
                                                        & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                       ? (IData)(
                                                                 (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                  >> 0x18U))
                                                       : (IData)(
                                                                 (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                  >> 0x1cU))))))))));
    } else if (((((((((8U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not)) 
                      | (9U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
                     | (0xaU == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
                    | (0xbU == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
                   | (0xcU == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
                  | (0xdU == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
                 | (0xeU == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
                | (0xfU == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not)))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal4_nib 
            = (0xfU & ((8U == (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                        ? (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                   >> 0x20U)) : ((9U 
                                                  == 
                                                  (0xfU 
                                                   & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                  ? (IData)(
                                                            (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                             >> 0x24U))
                                                  : 
                                                 ((0xaU 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                   ? (IData)(
                                                             (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                              >> 0x28U))
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0xfU 
                                                     & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                    ? (IData)(
                                                              (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                               >> 0x2cU))
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                     ? (IData)(
                                                               (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                >> 0x30U))
                                                     : 
                                                    ((0xdU 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                      ? (IData)(
                                                                (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                 >> 0x34U))
                                                      : 
                                                     ((0xeU 
                                                       == 
                                                       (0xfU 
                                                        & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                       ? (IData)(
                                                                 (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                  >> 0x38U))
                                                       : (IData)(
                                                                 (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                  >> 0x3cU))))))))));
    }
    if (((((((((0U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not)) 
               | (1U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
              | (2U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
             | (3U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
            | (4U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
           | (5U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
          | (6U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) 
         | (7U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not)))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal8_byte 
            = (0xffU & ((0U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                         ? (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din)
                         : ((1U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                             ? (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                        >> 8U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                    ? (IData)(
                                                              (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                               >> 0x10U))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                     ? (IData)(
                                                               (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                >> 0x18U))
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                      ? (IData)(
                                                                (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                 >> 0x20U))
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                       ? (IData)(
                                                                 (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                  >> 0x28U))
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))
                                                        ? (IData)(
                                                                  (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                   >> 0x30U))
                                                        : (IData)(
                                                                  (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                                   >> 0x38U))))))))));
    }
    if (((((((((0U == (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                             >> 2U))) | (1U == (7U 
                                                & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                                                   >> 2U)))) 
              | (2U == (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                              >> 2U)))) | (3U == (7U 
                                                  & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                                                     >> 2U)))) 
            | (4U == (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                            >> 2U)))) | (5U == (7U 
                                                & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                                                   >> 2U)))) 
          | (6U == (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                          >> 2U)))) | (7U == (7U & 
                                              (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                                               >> 2U))))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vq_index 
            = (0xffU & ((0U == (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                                      >> 2U))) ? (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din)
                         : ((1U == (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                                          >> 2U))) ? (IData)(
                                                             (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                              >> 8U))
                             : ((2U == (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                                              >> 2U)))
                                 ? (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                            >> 0x10U))
                                 : ((3U == (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                                                  >> 2U)))
                                     ? (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                >> 0x18U))
                                     : ((4U == (7U 
                                                & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                                                   >> 2U)))
                                         ? (IData)(
                                                   (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                    >> 0x20U))
                                         : ((5U == 
                                             (7U & 
                                              (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                                               >> 2U)))
                                             ? (IData)(
                                                       (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                        >> 0x28U))
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not 
                                                     >> 2U)))
                                                 ? (IData)(
                                                           (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                            >> 0x30U))
                                                 : (IData)(
                                                           (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                            >> 0x38U))))))))));
    }
    if ((0U == (3U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16 
            = (0xffffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp)
                           ? (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book
                                     [vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vq_index])
                           : (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din)));
    } else if ((1U == (3U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16 
            = (0xffffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp)
                           ? (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book
                                      [vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vq_index] 
                                      >> 0x10U)) : (IData)(
                                                           (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                            >> 0x10U))));
    } else if ((2U == (3U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16 
            = (0xffffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp)
                           ? (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book
                                      [vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vq_index] 
                                      >> 0x20U)) : (IData)(
                                                           (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                            >> 0x20U))));
    } else if ((3U == (3U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16 
            = (0xffffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp)
                           ? (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book
                                      [vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vq_index] 
                                      >> 0x30U)) : (IData)(
                                                           (vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                                            >> 0x30U))));
    }
    if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal4) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
            = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram
            [(((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_selector) 
               << 4U) | (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal4_nib))];
    }
    if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal8) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
            = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram
            [((0x300U & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_selector) 
                         << 4U)) | (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal8_byte))];
    }
    if ((0U == (3U & vlSelf->simtop__DOT__pvr__DOT__PAL_RAM_CTRL))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_final 
            = (((- (IData)((1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                  >> 0xfU)))) << 0x18U) 
               | ((0xf80000U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                << 9U)) | ((0x70000U 
                                            & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                               << 4U)) 
                                           | ((0xf800U 
                                               & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                  << 6U)) 
                                              | ((0x700U 
                                                  & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                     << 1U)) 
                                                 | ((0xf8U 
                                                     & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                        << 3U)) 
                                                    | (7U 
                                                       & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                          >> 2U))))))));
    } else if ((1U == (3U & vlSelf->simtop__DOT__pvr__DOT__PAL_RAM_CTRL))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_final 
            = (0xff000000U | ((0xf80000U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                            << 8U)) 
                              | ((0x70000U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                              << 3U)) 
                                 | ((0xfc00U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                << 5U)) 
                                    | ((0x300U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                  >> 1U)) 
                                       | ((0xf8U & 
                                           (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                            << 3U)) 
                                          | (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                   >> 2U))))))));
    } else if ((2U == (3U & vlSelf->simtop__DOT__pvr__DOT__PAL_RAM_CTRL))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_final 
            = ((0xff000000U & ((0xf0000000U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                               << 0x10U)) 
                               | (0xf000000U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                << 0xcU)))) 
               | ((0xff0000U & ((0xf00000U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                              << 0xcU)) 
                                | (0xf0000U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                               << 8U)))) 
                  | ((0xff00U & ((0xf000U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                             << 8U)) 
                                 | (0xf00U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                              << 4U)))) 
                     | (0xffU & ((0xf0U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                           << 4U)) 
                                 | (0xfU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw))))));
    } else if ((3U == (3U & vlSelf->simtop__DOT__pvr__DOT__PAL_RAM_CTRL))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_final 
            = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw;
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
                    ? (0xff000000U | ((0xf80000U & 
                                       ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                        << 8U)) | (
                                                   (0x70000U 
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
                                                                  >> 2U))))))))
                    : ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))
                        ? ((0xff000000U & ((0xf0000000U 
                                            & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                               << 0x10U)) 
                                           | (0xf000000U 
                                              & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                 << 0xcU)))) 
                           | ((0xff0000U & ((0xf00000U 
                                             & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                << 0xcU)) 
                                            | (0xf0000U 
                                               & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                  << 8U)))) 
                              | ((0xff00U & ((0xf000U 
                                              & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                 << 8U)) 
                                             | (0xf00U 
                                                & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                   << 4U)))) 
                                 | (0xffU & ((0xf0U 
                                              & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16) 
                                                 << 4U)) 
                                             | (0xfU 
                                                & (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16)))))))
                        : ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))
                            ? (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16)
                            : ((4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))
                                ? (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16)
                                : ((5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))
                                    ? vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_final
                                    : ((6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt))
                                        ? vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_final
                                        : (((- (IData)(
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
    if ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__shade_inst))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
            = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb;
    } else if ((1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__shade_inst))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
            = ((0xffffffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
               | (0xff000000U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
            = ((0xff00ffffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
               | (0xff0000U & (((0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
                                          >> 0x10U)) 
                                * (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 
                                            >> 0x10U))) 
                               << 8U)));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
            = ((0xffff00ffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
               | (0xff00U & ((0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
                                       >> 8U)) * (0xffU 
                                                  & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 
                                                     >> 8U)))));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
            = ((0xffffff00U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
               | (0xffU & (((0xffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb) 
                            * (0xffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0)) 
                           >> 8U)));
    } else if ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__shade_inst))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
            = ((0xffffffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
               | (0xff000000U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
            = ((0xff00ffffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
               | (0xff0000U & (((((0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
                                            >> 0x10U)) 
                                  * (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
                                     >> 0x18U)) >> 8U) 
                                + (((0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 
                                              >> 0x10U)) 
                                    * ((IData)(0xffU) 
                                       - (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
                                          >> 0x18U))) 
                                   >> 8U)) << 0x10U)));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
            = ((0xffff00ffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
               | (0xff00U & (((((0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
                                          >> 8U)) * 
                                (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
                                 >> 0x18U)) >> 8U) 
                              + (((0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 
                                            >> 8U)) 
                                  * ((IData)(0xffU) 
                                     - (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
                                        >> 0x18U))) 
                                 >> 8U)) << 8U)));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
            = ((0xffffff00U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
               | (0xffU & ((((0xffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb) 
                             * (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
                                >> 0x18U)) >> 8U) + 
                           (((0xffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0) 
                             * ((IData)(0xffU) - (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
                                                  >> 0x18U))) 
                            >> 8U))));
    } else if ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__shade_inst))) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
            = ((0xffffffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
               | (0xff000000U & (((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
                                   >> 0x18U) * (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 
                                                >> 0x18U)) 
                                 << 0x10U)));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
            = ((0xff00ffffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
               | (0xff0000U & (((0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
                                          >> 0x10U)) 
                                * (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 
                                            >> 0x10U))) 
                               << 8U)));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
            = ((0xffff00ffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
               | (0xff00U & ((0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb 
                                       >> 8U)) * (0xffU 
                                                  & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 
                                                     >> 8U)))));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
            = ((0xffffff00U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
               | (0xffU & (((0xffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb) 
                            * (0xffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0)) 
                           >> 8U)));
    }
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__texel_argb 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vram_word_addr 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vram_word_addr;
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr_out 
        = (0xffffffU & (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait) 
                         | (0x32U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))
                         ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vram_word_addr 
                            << 2U) : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_plus_offs_r 
        = (0xffffU & ((0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
                                >> 0x10U)) + (0xffU 
                                              & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_off_col 
                                                 >> 0x10U))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_plus_offs_g 
        = (0xffffU & ((0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb 
                                >> 8U)) + (0xffU & 
                                           (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_off_col 
                                            >> 8U))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_plus_offs_b 
        = (0xffffU & ((0xffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
                      + (0xffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_off_col)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_out 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr_out;
    vlSelf->vram_addr = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_switch)
                          ? vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr_out
                          : vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offs_r_clamped 
        = ((0xffU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_plus_offs_r))
            ? 0xffU : (0xffU & (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_plus_offs_r)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offs_g_clamped 
        = ((0xffU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_plus_offs_g))
            ? 0xffU : (0xffU & (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_plus_offs_g)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offs_b_clamped 
        = ((0xffU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_plus_offs_b))
            ? 0xffU : (0xffU & (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_plus_offs_b)));
    vlSelf->simtop__DOT__vram_addr = vlSelf->vram_addr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_offs_argb 
        = ((0xff000000U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb) 
           | (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offs_r_clamped) 
               << 0x10U) | (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offs_g_clamped) 
                             << 8U) | (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offs_b_clamped))));
    vlSelf->simtop__DOT__pvr__DOT__vram_addr = vlSelf->simtop__DOT__vram_addr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__final_argb 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture)
            ? vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_offs_argb
            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__final_argb 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__final_argb;
}

VL_ATTR_COLD void Vsimtop___024root___eval_stl(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsimtop___024root___stl_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge simtop.__Vcellinp__pvr__reset_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] simtop.pvr.isp_parser_inst.x_ps or [changed] simtop.pvr.isp_parser_inst.y_ps)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge simtop.__Vcellinp__pvr__reset_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] simtop.pvr.isp_parser_inst.x_ps or [changed] simtop.pvr.isp_parser_inst.y_ps)\n");
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
    vlSelf->vram_addr = VL_RAND_RESET_I(24);
    vlSelf->vram_din = VL_RAND_RESET_Q(64);
    vlSelf->vram_dout = VL_RAND_RESET_Q(64);
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
    vlSelf->FDY41 = VL_RAND_RESET_I(32);
    vlSelf->FX4 = VL_RAND_RESET_I(32);
    vlSelf->FDX41 = VL_RAND_RESET_I(32);
    vlSelf->FY4 = VL_RAND_RESET_I(32);
    vlSelf->FZ1 = VL_RAND_RESET_I(32);
    vlSelf->FZ2 = VL_RAND_RESET_I(32);
    vlSelf->FZ3 = VL_RAND_RESET_I(32);
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
    vlSelf->simtop__DOT__vram_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__vram_din = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__vram_dout = VL_RAND_RESET_Q(64);
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
    vlSelf->simtop__DOT__FDY41 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FX4 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FDX41 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FY4 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FZ1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FZ2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__FZ3 = VL_RAND_RESET_I(32);
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
    vlSelf->simtop__DOT__pvr_dout = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT____Vcellinp__pvr__reset_n = VL_RAND_RESET_I(1);
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
    vlSelf->simtop__DOT__pvr__DOT__vram_din = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__vram_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__vram_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__vram_dout = VL_RAND_RESET_Q(64);
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
    vlSelf->simtop__DOT__pvr__DOT__FDY41 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FX4 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FDX41 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FY4 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FZ1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FZ2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__FZ3 = VL_RAND_RESET_I(32);
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
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_word_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_din = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_dout = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_switch = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr_out = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT____Vcellout__isp_parser_inst__isp_vram_dout = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__pal_dout = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_trig = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__PARAM_BASE = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__REGION_BASE = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__FPU_PARAM_CFG = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__TA_ALLOC_CTRL = VL_RAND_RESET_I(32);
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_out = VL_RAND_RESET_I(24);
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY41 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX4 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX41 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY4 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__TEXT_CONTROL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__PAL_RAM_CTRL = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_addr = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_din = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pal_dout = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr = VL_RAND_RESET_I(24);
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__stride_flag = VL_RAND_RESET_I(1);
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_temp_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_temp_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_temp_z = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_temp_u0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_temp_v0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_temp_base_col_0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_temp_base_col_1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_temp_off_col = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_strip = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_array = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_quad_array = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_words = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__neg_xy = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__neg_z = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__ovr_xy = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__f_area = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__sgn = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__test_float = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__exp = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__man = VL_RAND_RESET_I(23);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__fixed = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps = VL_RAND_RESET_I(12);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps = VL_RAND_RESET_I(12);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult1 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult2 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult3 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult4 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult5 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult6 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult7 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult8 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C4 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult9 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult10 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs12 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult11 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult12 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs23 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult13 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult14 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs31 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult15 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult16 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs41 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__inTriangle = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vram_word_addr = VL_RAND_RESET_I(21);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texel_argb = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__final_argb = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT____Vcellout__interp_inst_0__interp = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__IP_Z = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__isp_inst = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tsp_inst = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tcw_word = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__PAL_RAM_CTRL = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__TEXT_CONTROL = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_addr = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_din = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_dout = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__read_codebook = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_wait = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vram_word_addr = VL_RAND_RESET_I(21);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vram_din = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__base_argb = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offs_argb = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__texel_argb = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__final_argb = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi = VL_RAND_RESET_I(10);
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__shade_inst = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_u_size = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_v_size = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mip_map = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vq_comp = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_fmt = VL_RAND_RESET_I(3);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__scan_order = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__stride_flag = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_selector = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_word_addr = VL_RAND_RESET_I(21);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book_endian = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__index_endian = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__bank_bit = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__stride = VL_RAND_RESET_I(5);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked = VL_RAND_RESET_I(10);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__non_twid_addr = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal4_nib = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal8_byte = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vq_index = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix16 = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal4 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_pal8 = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_twid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_mipmap = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_or_not = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__texel_word_offs = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_vq = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs_norm = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs = VL_RAND_RESET_I(20);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_argb = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_plus_offs_r = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_plus_offs_g = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_plus_offs_b = VL_RAND_RESET_I(16);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offs_r_clamped = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offs_g_clamped = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offs_b_clamped = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__blend_offs_argb = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_final = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cb_word_index = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__setup = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FRAC_BITS = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__x_ps = VL_RAND_RESET_I(12);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__y_ps = VL_RAND_RESET_I(12);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__interp = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ3_sub_FZ1 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY2_sub_FY1 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_mult_1 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ2_sub_FZ1 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY3_sub_FY1 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_mult_2 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX3_sub_FX1 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_mult_1 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX2_sub_FX1 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_mult_2 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C_mult_1 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C_mult_2 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_shifted = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_shifted = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDX = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDY = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDX_mult_FX1 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDY_mult_FY1 = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__c = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__x_mult_FDDX = VL_RAND_RESET_Q(64);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__y_mult_FDDY = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps = VL_RAND_RESET_I(12);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__simtop__DOT____Vcellinp__pvr__reset_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps__0 = VL_RAND_RESET_I(12);
    vlSelf->__Vtrigprevexpr___TOP__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps__0 = VL_RAND_RESET_I(12);
    vlSelf->__VactDidInit = 0;
}
