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
    vlSelf->simtop__DOT__boot_vector = vlSelf->boot_vector;
    vlSelf->simtop__DOT__im_resp_rdata = vlSelf->im_resp_rdata;
    vlSelf->simtop__DOT__im_resp_valid = vlSelf->im_resp_valid;
    vlSelf->simtop__DOT__dm_resp_rdata = vlSelf->dm_resp_rdata;
    vlSelf->simtop__DOT__dm_resp_valid = vlSelf->dm_resp_valid;
    vlSelf->simtop__DOT__sh4_dm_rdata = ((IData)(vlSelf->simtop__DOT__pvr_reg_cs)
                                          ? (QData)((IData)(vlSelf->simtop__DOT__pvr_dout))
                                          : vlSelf->dm_resp_rdata);
    vlSelf->simtop__DOT__vram_din = vlSelf->vram_din;
    vlSelf->simtop__DOT__pvr__DOT__ra_vram_din = (IData)(vlSelf->vram_din);
    vlSelf->simtop__DOT__clk = vlSelf->clk;
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_din = vlSelf->vram_din;
    vlSelf->simtop__DOT__pvr__DOT__vram_din = vlSelf->simtop__DOT__vram_din;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
    vlSelf->simtop__DOT__pvr__DOT__clock = vlSelf->simtop__DOT__clk;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_din;
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
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__clock;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__clock;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_din;
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__clock;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__clock 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__clock;
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

void Vsimtop___024root___eval_ico(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vsimtop___024root___ico_sequent__TOP__0(vlSelf);
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
    QData/*47:0*/ simtop__DOT__pvr__DOT__isp_parser_inst__DOT____Vcellout__float_x1__fixed;
    simtop__DOT__pvr__DOT__isp_parser_inst__DOT____Vcellout__float_x1__fixed = 0;
    QData/*63:0*/ simtop__DOT__pvr__DOT__isp_parser_inst__DOT____Vcellout__interp_inst_0__interp;
    simtop__DOT__pvr__DOT__isp_parser_inst__DOT____Vcellout__interp_inst_0__interp = 0;
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
    CData/*0:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook = 0;
    CData/*7:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0;
    IData/*23:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr = 0;
    CData/*2:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt = 0;
    CData/*3:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y = 0;
    CData/*0:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done = 0;
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
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_0 = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_off_col;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_off_col = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0 = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0 = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_0 = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_off_col;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_off_col = 0;
    IData/*31:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0 = 0;
    IData/*23:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last = 0;
    SData/*11:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps = 0;
    SData/*11:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps = 0;
    SData/*9:0*/ __Vdlyvdim0__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram__v0;
    __Vdlyvdim0__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram__v0;
    __Vdlyvval__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram__v0;
    __Vdlyvset__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram__v0 = 0;
    CData/*0:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait = 0;
    CData/*7:0*/ __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cb_word_index;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cb_word_index = 0;
    CData/*7:0*/ __Vdlyvdim0__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book__v0;
    __Vdlyvdim0__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book__v0 = 0;
    QData/*63:0*/ __Vdlyvval__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book__v0;
    __Vdlyvval__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book__v0;
    __Vdlyvset__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book__v0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_h4af28404__0;
    VlWide<4>/*127:0*/ __Vtemp_h98b2370f__0;
    VlWide<4>/*127:0*/ __Vtemp_h4c31b4c2__0;
    VlWide<4>/*127:0*/ __Vtemp_hb33acd46__0;
    VlWide<4>/*127:0*/ __Vtemp_h7dd3db3f__0;
    VlWide<4>/*127:0*/ __Vtemp_h43752726__0;
    VlWide<4>/*127:0*/ __Vtemp_hcafc4ed7__0;
    VlWide<4>/*127:0*/ __Vtemp_h2d04d7f5__0;
    VlWide<4>/*127:0*/ __Vtemp_h7dd3db3f__1;
    VlWide<4>/*127:0*/ __Vtemp_hc2a8d068__0;
    VlWide<4>/*127:0*/ __Vtemp_h6d5335c5__0;
    VlWide<4>/*127:0*/ __Vtemp_h98b2370f__1;
    VlWide<4>/*127:0*/ __Vtemp_h8b402262__0;
    VlWide<4>/*127:0*/ __Vtemp_h9595b6da__0;
    VlWide<4>/*127:0*/ __Vtemp_h73a0be20__0;
    VlWide<4>/*127:0*/ __Vtemp_hd56fa4c8__0;
    // Body
    __Vdlyvset__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram__v0 = 0U;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cb_word_index 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cb_word_index;
    __Vdlyvset__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book__v0 = 0U;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait;
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
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_off_col 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_off_col;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_off_col 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_off_col;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook;
    __Vdly__simtop__DOT__pvr__DOT__poly_drawn = vlSelf->simtop__DOT__pvr__DOT__poly_drawn;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y;
    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x;
    if ((1U & (~ (IData)(vlSelf->simtop__DOT____Vcellinp__pvr__reset_n)))) {
        vlSelf->simtop__DOT__pvr__DOT__REVISION = 0x11U;
        vlSelf->simtop__DOT__pvr__DOT__ID = 0x17fd11dbU;
    }
    if (vlSelf->simtop__DOT____Vcellinp__pvr__reset_n) {
        if ((IData)(((0x1000U == (0xf000U & vlSelf->dm_req_addr)) 
                     & (IData)(vlSelf->simtop__DOT__pvr_wr)))) {
            __Vdlyvval__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram__v0 
                = (IData)(vlSelf->dm_req_wdata);
            __Vdlyvset__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram__v0 = 1U;
            __Vdlyvdim0__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram__v0 
                = (0x3ffU & (vlSelf->dm_req_addr >> 2U));
        }
    }
    if (__Vdlyvset__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram__v0) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram[__Vdlyvdim0__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram__v0] 
            = __Vdlyvval__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_ram__v0;
    }
    if (vlSelf->simtop__DOT____Vcellinp__pvr__reset_n) {
        if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook) {
            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait = 1U;
            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cb_word_index = 0U;
        } else if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait) {
            __Vdlyvval__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book__v0 
                = vlSelf->simtop__DOT__pvr__DOT__isp_vram_din;
            __Vdlyvset__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book__v0 = 1U;
            __Vdlyvdim0__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book__v0 
                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cb_word_index;
            if ((0xffU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cb_word_index))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait = 0U;
            } else {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cb_word_index 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cb_word_index)));
            }
        }
    } else {
        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait = 0U;
    }
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cb_word_index 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__cb_word_index;
    if (__Vdlyvset__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book__v0) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book[__Vdlyvdim0__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book__v0] 
            = __Vdlyvval__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__code_book__v0;
    }
    if (vlSelf->simtop__DOT____Vcellinp__pvr__reset_n) {
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
        if (vlSelf->simtop__DOT__pvr__DOT__render_poly) {
            vlSelf->simtop__DOT__pvr__DOT__isp_switch = 1U;
        }
        if (vlSelf->simtop__DOT__pvr__DOT__poly_drawn) {
            vlSelf->simtop__DOT__pvr__DOT__isp_switch = 0U;
        }
        vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr = 0U;
        vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid = 0U;
        __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 0U;
        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook = 0U;
        if ((1U < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
            if (((((~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait)) 
                   & (0x2fU > (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                  & (4U != (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                 & (5U != (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)));
            }
            if ((((((~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait)) 
                    & (1U < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                   & (4U != (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                  & (5U != (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                 & (0x30U > (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr 
                    = (0xffffffU & ((IData)(4U) + vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr));
            }
        }
        if (((((((((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)) 
                   | (1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                  | (2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                 | (3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                | (4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
               | (5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
              | (7U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
             | (8U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
            if ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                if (vlSelf->simtop__DOT__pvr__DOT__render_poly) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr 
                        = vlSelf->simtop__DOT__pvr__DOT__poly_addr;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt = 0U;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt = 0U;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x = 0U;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y = 0U;
                    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_z = 0U;
                    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0 = 0U;
                    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0 = 0U;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 1U;
                }
            } else if ((1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_strip) {
                    if ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask))) {
                        __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 1U;
                        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0U;
                    } else if ((6U > (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt))) {
                        if (((5U >= (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt)) 
                             & ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask) 
                                >> (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt)))) {
                            vlSelf->simtop__DOT__pvr__DOT__isp_vram_rd = 1U;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr 
                                = vlSelf->simtop__DOT__pvr__DOT__poly_addr;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 2U;
                        } else {
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt)));
                        }
                    } else {
                        __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 1U;
                        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0U;
                    }
                } else if (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_array) 
                            | (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_quad_array))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done = 0U;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt 
                        = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__num_prims;
                    vlSelf->simtop__DOT__pvr__DOT__isp_vram_rd = 1U;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 2U;
                } else {
                    __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 1U;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0U;
                }
            } else if ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((1U & (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                   >> 0x1eU)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook = 1U;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 5U;
                } else {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr 
                        = (0xffffffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_strip)
                                         ? ((IData)(0xcU) 
                                            + (vlSelf->simtop__DOT__pvr__DOT__poly_addr 
                                               + (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_words) 
                                                   * (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt)) 
                                                  << 2U)))
                                         : ((IData)(4U) 
                                            + vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr)));
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 7U;
                }
            } else if ((5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                if ((1U & ((~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook)) 
                           & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait))))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr 
                        = (0xffffffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_strip)
                                         ? ((IData)(0xcU) 
                                            + (vlSelf->simtop__DOT__pvr__DOT__poly_addr 
                                               + (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_words) 
                                                   * (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt)) 
                                                  << 2U)))
                                         : ((IData)(4U) 
                                            + vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr)));
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 7U;
                }
            } else if ((7U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            }
        } else if (((((((((9U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)) 
                          | (0xaU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                         | (0xbU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                        | (0xcU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                       | (0xdU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                      | (0xeU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                     | (0xfU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                    | (0x10U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
            if ((9U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__skip))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x11U;
                } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0xcU;
                }
            } else if ((0xaU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0 
                        = ((IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                    >> 0x10U)) << 0x10U);
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0 
                        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din) 
                           << 0x10U);
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0xcU;
                } else {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0 
                        = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                }
            } else if ((0xbU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0xcU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__two_volume)
                        ? 0xdU : ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)
                                   ? 0x10U : 0x11U));
            } else if ((0xdU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0xeU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0xfU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x11U;
                }
            } else {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_off_col 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            }
        } else if (((((((((0x11U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)) 
                          | (0x12U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                         | (0x13U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                        | (0x14U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                       | (0x15U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                      | (0x16U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                     | (0x17U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                    | (0x18U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
            if ((0x11U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x12U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x13U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__skip))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x1bU;
                } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x16U;
                }
            } else if ((0x14U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0 
                        = ((IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                    >> 0x10U)) << 0x10U);
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0 
                        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din) 
                           << 0x10U);
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x16U;
                } else {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0 
                        = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                }
            } else if ((0x15U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x16U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__two_volume)
                        ? 0x17U : ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)
                                    ? 0x1aU : 0x1bU));
            } else if ((0x17U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            }
        } else if (((((((((0x19U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)) 
                          | (0x1aU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                         | (0x1bU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                        | (0x1cU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                       | (0x1dU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                      | (0x1eU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                     | (0x1fU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                    | (0x20U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
            if ((0x19U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x1bU;
                }
            } else if ((0x1aU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_off_col 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x1bU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x1cU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x1dU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__skip))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_quad_array)
                            ? 0x25U : 0x2fU);
                } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x20U;
                }
            } else if ((0x1eU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit) {
                    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0 
                        = ((IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                    >> 0x10U)) << 0x10U);
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0 
                        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din) 
                           << 0x10U);
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x20U;
                } else {
                    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0 
                        = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                }
            } else if ((0x1fU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__two_volume)
                        ? 0x21U : ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)
                                    ? 0x24U : ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_quad_array)
                                                ? 0x25U
                                                : 0x2fU)));
            }
        } else if (((((((((0x21U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)) 
                          | (0x22U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                         | (0x23U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                        | (0x24U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                       | (0x25U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                      | (0x26U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                     | (0x27U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                    | (0x28U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
            if ((0x21U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x22U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x23U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)
                        ? 0x24U : 0x2fU);
            } else if ((0x24U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_off_col 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_quad_array)
                        ? 0x25U : 0x2fU);
            } else if ((0x25U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x26U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x27U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_z 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x2aU;
                }
            } else if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0 
                    = ((IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                >> 0x10U)) << 0x10U);
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0 
                    = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din) 
                       << 0x10U);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x2aU;
            } else {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            }
        } else if (((((((((0x29U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)) 
                          | (0x2aU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                         | (0x2bU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                        | (0x2cU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                       | (0x2dU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                      | (0x2eU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                     | (0x2fU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) 
                    | (0x30U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)))) {
            if ((0x29U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x2aU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_base_col_0 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                    = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__two_volume)
                        ? 0x2bU : ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)
                                    ? 0x2eU : 0x2fU));
            } else if ((0x2bU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x2cU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x2dU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_base_col_1 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
                if ((1U & (~ (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x2fU;
                }
            } else if ((0x2eU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_off_col 
                    = (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din);
            } else if ((0x2fU == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
                if (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_strip) 
                     & (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_0 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_0;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_off_col 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_off_col;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_0 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_0;
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_off_col 
                        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_off_col;
                }
                vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid = 1U;
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x31U;
            } else if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_strip) {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt)));
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 1U;
            } else if (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_array) 
                        | (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_quad_array))) {
                if ((0U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt))) {
                    if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_quad_array) {
                        if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done) {
                            __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 1U;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0U;
                        } else {
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0 
                                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x2fU;
                            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done = 1U;
                        }
                    } else {
                        __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 1U;
                        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0U;
                    }
                } else {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt 
                        = (0xfU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt) 
                                   - (IData)(1U)));
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr 
                        = (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr 
                                        - (IData)(4U)));
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 2U;
                }
            } else {
                __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 1U;
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0U;
            }
        } else if ((0x31U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state)));
            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last 
                = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr;
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult1 
                = (VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY12_FIXED), 
                               VL_EXTENDS_QI(64,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1_FIXED)) 
                   >> 0xaU);
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult2 
                = (VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX12_FIXED), 
                               VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED)) 
                   >> 0xaU);
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult3 
                = (VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY23_FIXED), 
                               VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2_FIXED)) 
                   >> 0xaU);
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult4 
                = (VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX23_FIXED), 
                               VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2_FIXED)) 
                   >> 0xaU);
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult5 
                = (VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY31_FIXED), 
                               VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3_FIXED)) 
                   >> 0xaU);
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult6 
                = (VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX31_FIXED), 
                               VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3_FIXED)) 
                   >> 0xaU);
            if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_quad_array) {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult7 
                    = (VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY41_FIXED), 
                                   VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX4_FIXED)) 
                       >> 0xaU);
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult8 
                    = (VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX41_FIXED), 
                                   VL_EXTENDS_QQ(64,48, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY4_FIXED)) 
                       >> 0xaU);
            } else {
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult7 = 0x400ULL;
                vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult8 = 0x400ULL;
            }
            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps 
                = (0xfffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex) 
                             << 5U));
            __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps 
                = (0xfffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_cont_tiley) 
                             << 5U));
        } else if ((0x32U == (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state))) {
            if (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps) 
                 < ((IData)(0x20U) + ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_cont_tiley) 
                                      << 5U)))) {
                if (((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps) 
                     == ((IData)(0x20U) + ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex) 
                                           << 5U)))) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps 
                        = (0xfffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)));
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps 
                        = (0xfffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__ra_cont_tilex) 
                                     << 5U));
                } else {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps 
                        = (0xfffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)));
                }
                if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__inTriangle) {
                    __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr 
                        = (0xffffffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps) 
                                        + ((IData)(0x280U) 
                                           * (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps))));
                    vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr = 1U;
                    vlSelf->simtop__DOT__pvr__DOT____Vcellout__isp_parser_inst__isp_vram_dout 
                        = (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__final_argb));
                }
            } else {
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr 
                    = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last;
                __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0x30U;
            }
        }
    } else {
        vlSelf->simtop__DOT__pvr__DOT__isp_switch = 0U;
        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook = 0U;
        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = 0U;
        vlSelf->simtop__DOT__pvr__DOT__isp_vram_rd = 0U;
        vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr = 0U;
        vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid = 0U;
        __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done = 1U;
        __Vdly__simtop__DOT__pvr__DOT__poly_drawn = 0U;
    }
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__quad_done;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_off_col 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_off_col;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_off_col 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_off_col;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x 
        = __Vdly__simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x;
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__TEXT_CONTROL 
        = vlSelf->simtop__DOT__pvr__DOT__TEXT_CONTROL;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__TA_ALLOC_CTRL 
        = vlSelf->simtop__DOT__pvr__DOT__TA_ALLOC_CTRL;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__opb_mode 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__TA_ALLOC_CTRL 
                 >> 0x14U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__PAL_RAM_CTRL 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__PAL_RAM_CTRL 
                 >> 0U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_rd 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_rd;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__read_codebook 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__read_codebook;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_entry_valid 
        = vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_wr 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr;
    vlSelf->vram_wr = vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C1 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult1) 
           - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult2));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C2 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult3) 
           - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult4));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C3 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult5) 
           - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult6));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_dout 
        = vlSelf->simtop__DOT__pvr__DOT____Vcellout__isp_parser_inst__isp_vram_dout;
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_dout = (IData)(vlSelf->simtop__DOT__pvr__DOT____Vcellout__isp_parser_inst__isp_vram_dout);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__offs_argb 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_off_col;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__isp_inst 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst;
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst 
                 >> 0x19U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__x_ps 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__y_ps 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__base_argb 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_wait 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_wait;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__float_in 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__float_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__exp 
        = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x 
                    >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__man 
        = (0x8000000000ULL | ((QData)((IData)((0x7fffffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x))) 
                              << 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__float_in 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__float_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__exp 
        = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y 
                    >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__man 
        = (0x8000000000ULL | ((QData)((IData)((0x7fffffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y))) 
                              << 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__float_in 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__float_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__exp 
        = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z 
                    >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__man 
        = (0x8000000000ULL | ((QData)((IData)((0x7fffffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z))) 
                              << 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__float_in 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__float_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__exp 
        = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z 
                    >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__man 
        = (0x8000000000ULL | ((QData)((IData)((0x7fffffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z))) 
                              << 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__float_in 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__float_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__exp 
        = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z 
                    >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__man 
        = (0x8000000000ULL | ((QData)((IData)((0x7fffffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z))) 
                              << 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__float_in 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__float_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__exp 
        = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x 
                    >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__man 
        = (0x8000000000ULL | ((QData)((IData)((0x7fffffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x))) 
                              << 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__float_in 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__float_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__exp 
        = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y 
                    >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__man 
        = (0x8000000000ULL | ((QData)((IData)((0x7fffffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y))) 
                              << 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__float_in 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__float_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__exp 
        = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x 
                    >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__man 
        = (0x8000000000ULL | ((QData)((IData)((0x7fffffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x))) 
                              << 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__float_in 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__float_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__exp 
        = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y 
                    >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__man 
        = (0x8000000000ULL | ((QData)((IData)((0x7fffffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y))) 
                              << 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__float_in 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__float_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__exp 
        = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y 
                    >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__man 
        = (0x8000000000ULL | ((QData)((IData)((0x7fffffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y))) 
                              << 0x10U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__float_in 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__float_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__exp 
        = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x 
                    >> 0x17U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__man 
        = (0x8000000000ULL | ((QData)((IData)((0x7fffffU 
                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x))) 
                              << 0x10U));
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__shade_inst 
        = (3U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
                 >> 6U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size 
        = (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size 
        = (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst 
                 >> 3U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tcw_word 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__stride_flag 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x19U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_word_addr 
        = (0x1fffffU & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_selector 
        = (0x3fU & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                    >> 0x15U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x1eU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt 
        = (7U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x1bU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__scan_order 
        = (1U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word 
                 >> 0x1aU));
    if (vlSelf->simtop__DOT____Vcellinp__pvr__reset_n) {
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
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = (0xffffffU & vlSelf->simtop__DOT__pvr__DOT__REGION_BASE);
                vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
            } else if ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = (0xffffffU & ((IData)(4U) + vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr));
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                vlSelf->simtop__DOT__pvr__DOT__ra_control 
                    = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
                vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
            } else if ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = (0xffffffU & ((IData)(4U) + vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr));
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                __Vdly__simtop__DOT__pvr__DOT__ra_opaque 
                    = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
                vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
            } else if ((4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = (0xffffffU & ((IData)(4U) + vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr));
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                __Vdly__simtop__DOT__pvr__DOT__ra_opaque_mod 
                    = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
                vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
            } else if ((5U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = (0xffffffU & ((IData)(4U) + vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr));
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                __Vdly__simtop__DOT__pvr__DOT__ra_trans 
                    = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
                vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
            } else if ((6U == (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state))) {
                __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                    = (0xffffffU & ((IData)(4U) + vlSelf->simtop__DOT__pvr__DOT__ra_vram_addr));
                __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = 7U;
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
                    if (((~ (vlSelf->simtop__DOT__pvr__DOT__ra_opaque 
                             >> 0x1fU)) & (0U < (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__o_opb)))) {
                        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                        __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                            = (0xffffffU & vlSelf->simtop__DOT__pvr__DOT__ra_opaque);
                        vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ol_jump_bytes 
                            = (0xffU & VL_MULS_III(32, (IData)(4U), 
                                                   ((IData)(4U) 
                                                    << (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__o_opb))));
                        vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                    }
                } else if ((1U == (IData)(vlSelf->simtop__DOT__pvr__DOT__type_cnt))) {
                    if (((~ (vlSelf->simtop__DOT__pvr__DOT__ra_opaque_mod 
                             >> 0x1fU)) & (0U < (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__o_opb)))) {
                        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                        __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                            = (0xffffffU & vlSelf->simtop__DOT__pvr__DOT__ra_opaque_mod);
                        vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ol_jump_bytes 
                            = (0xffU & VL_MULS_III(32, (IData)(4U), 
                                                   ((IData)(4U) 
                                                    << (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__om_opb))));
                        vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                    }
                } else if ((2U == (IData)(vlSelf->simtop__DOT__pvr__DOT__type_cnt))) {
                    if (((~ (vlSelf->simtop__DOT__pvr__DOT__ra_trans 
                             >> 0x1fU)) & (0U < (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__t_opb)))) {
                        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                        __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                            = (0xffffffU & vlSelf->simtop__DOT__pvr__DOT__ra_trans);
                        vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ol_jump_bytes 
                            = (0xffU & VL_MULS_III(32, (IData)(4U), 
                                                   ((IData)(4U) 
                                                    << (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__t_opb))));
                        vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                    }
                } else if ((3U == (IData)(vlSelf->simtop__DOT__pvr__DOT__type_cnt))) {
                    if (((~ (vlSelf->simtop__DOT__pvr__DOT__ra_trans_mod 
                             >> 0x1fU)) & (0U < (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__tm_opb)))) {
                        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = 0xfU;
                        __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                            = (0xffffffU & vlSelf->simtop__DOT__pvr__DOT__ra_trans_mod);
                        vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ol_jump_bytes 
                            = (0xffU & VL_MULS_III(32, (IData)(4U), 
                                                   ((IData)(4U) 
                                                    << (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__tm_opb))));
                        vlSelf->simtop__DOT__pvr__DOT__ra_vram_rd = 1U;
                    }
                } else if ((4U == (IData)(vlSelf->simtop__DOT__pvr__DOT__type_cnt))) {
                    if (((~ (vlSelf->simtop__DOT__pvr__DOT__ra_puncht 
                             >> 0x1fU)) & (0U < (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__pt_opb)))) {
                        __Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state)));
                        __Vdly__simtop__DOT__pvr__DOT__ra_vram_addr 
                            = (0xffffffU & vlSelf->simtop__DOT__pvr__DOT__ra_puncht);
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
                                             & vlSelf->simtop__DOT__pvr__DOT__PARAM_BASE) 
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
                                             & vlSelf->simtop__DOT__pvr__DOT__PARAM_BASE) 
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
                                         & vlSelf->simtop__DOT__pvr__DOT__PARAM_BASE) 
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
    if (vlSelf->simtop__DOT____Vcellinp__pvr__reset_n) {
        if (((IData)(vlSelf->simtop__DOT__pvr_reg_cs) 
             & (IData)(vlSelf->simtop__DOT__pvr_wr))) {
            if ((1U & (~ (vlSelf->dm_req_addr >> 0xfU)))) {
                if ((1U & (~ (vlSelf->dm_req_addr >> 0xeU)))) {
                    if ((1U & (~ (vlSelf->dm_req_addr 
                                  >> 0xdU)))) {
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
                                                        (0x20U 
                                                         & vlSelf->dm_req_addr)) {
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
                                                                            vlSelf->simtop__DOT__pvr__DOT__REGION_BASE 
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__TEXT_CONTROL 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__TEXT_CONTROL;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__PAL_RAM_CTRL 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__PAL_RAM_CTRL;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__setup 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_entry_valid;
    vlSelf->simtop__DOT__vram_wr = vlSelf->vram_wr;
    vlSelf->vram_dout = (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_dout));
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__texture 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__float_shifted 
        = ((0x7fU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__exp))
            ? ((0x3fU >= ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__exp) 
                          - (IData)(0x7fU))) ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__man 
                                                << 
                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__exp) 
                                                 - (IData)(0x7fU)))
                : 0ULL) : ((0x3fU >= ((IData)(0x7fU) 
                                      - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__exp)))
                            ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__man 
                               >> ((IData)(0x7fU) - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__exp)))
                            : 0ULL));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__float_shifted 
        = ((0x7fU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__exp))
            ? ((0x3fU >= ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__exp) 
                          - (IData)(0x7fU))) ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__man 
                                                << 
                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__exp) 
                                                 - (IData)(0x7fU)))
                : 0ULL) : ((0x3fU >= ((IData)(0x7fU) 
                                      - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__exp)))
                            ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__man 
                               >> ((IData)(0x7fU) - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__exp)))
                            : 0ULL));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__float_shifted 
        = ((0x7fU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__exp))
            ? ((0x3fU >= ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__exp) 
                          - (IData)(0x7fU))) ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__man 
                                                << 
                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__exp) 
                                                 - (IData)(0x7fU)))
                : 0ULL) : ((0x3fU >= ((IData)(0x7fU) 
                                      - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__exp)))
                            ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__man 
                               >> ((IData)(0x7fU) - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__exp)))
                            : 0ULL));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__float_shifted 
        = ((0x7fU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__exp))
            ? ((0x3fU >= ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__exp) 
                          - (IData)(0x7fU))) ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__man 
                                                << 
                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__exp) 
                                                 - (IData)(0x7fU)))
                : 0ULL) : ((0x3fU >= ((IData)(0x7fU) 
                                      - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__exp)))
                            ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__man 
                               >> ((IData)(0x7fU) - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__exp)))
                            : 0ULL));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__float_shifted 
        = ((0x7fU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__exp))
            ? ((0x3fU >= ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__exp) 
                          - (IData)(0x7fU))) ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__man 
                                                << 
                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__exp) 
                                                 - (IData)(0x7fU)))
                : 0ULL) : ((0x3fU >= ((IData)(0x7fU) 
                                      - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__exp)))
                            ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__man 
                               >> ((IData)(0x7fU) - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__exp)))
                            : 0ULL));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__float_shifted 
        = ((0x7fU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__exp))
            ? ((0x3fU >= ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__exp) 
                          - (IData)(0x7fU))) ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__man 
                                                << 
                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__exp) 
                                                 - (IData)(0x7fU)))
                : 0ULL) : ((0x3fU >= ((IData)(0x7fU) 
                                      - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__exp)))
                            ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__man 
                               >> ((IData)(0x7fU) - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__exp)))
                            : 0ULL));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__float_shifted 
        = ((0x7fU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__exp))
            ? ((0x3fU >= ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__exp) 
                          - (IData)(0x7fU))) ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__man 
                                                << 
                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__exp) 
                                                 - (IData)(0x7fU)))
                : 0ULL) : ((0x3fU >= ((IData)(0x7fU) 
                                      - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__exp)))
                            ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__man 
                               >> ((IData)(0x7fU) - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__exp)))
                            : 0ULL));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__float_shifted 
        = ((0x7fU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__exp))
            ? ((0x3fU >= ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__exp) 
                          - (IData)(0x7fU))) ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__man 
                                                << 
                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__exp) 
                                                 - (IData)(0x7fU)))
                : 0ULL) : ((0x3fU >= ((IData)(0x7fU) 
                                      - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__exp)))
                            ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__man 
                               >> ((IData)(0x7fU) - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__exp)))
                            : 0ULL));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__float_shifted 
        = ((0x7fU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__exp))
            ? ((0x3fU >= ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__exp) 
                          - (IData)(0x7fU))) ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__man 
                                                << 
                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__exp) 
                                                 - (IData)(0x7fU)))
                : 0ULL) : ((0x3fU >= ((IData)(0x7fU) 
                                      - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__exp)))
                            ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__man 
                               >> ((IData)(0x7fU) - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__exp)))
                            : 0ULL));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__float_shifted 
        = ((0x7fU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__exp))
            ? ((0x3fU >= ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__exp) 
                          - (IData)(0x7fU))) ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__man 
                                                << 
                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__exp) 
                                                 - (IData)(0x7fU)))
                : 0ULL) : ((0x3fU >= ((IData)(0x7fU) 
                                      - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__exp)))
                            ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__man 
                               >> ((IData)(0x7fU) - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__exp)))
                            : 0ULL));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__float_shifted 
        = ((0x7fU < (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__exp))
            ? ((0x3fU >= ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__exp) 
                          - (IData)(0x7fU))) ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__man 
                                                << 
                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__exp) 
                                                 - (IData)(0x7fU)))
                : 0ULL) : ((0x3fU >= ((IData)(0x7fU) 
                                      - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__exp)))
                            ? (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__man 
                               >> ((IData)(0x7fU) - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__exp)))
                            : 0ULL));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_u_flip 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_flip;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_v_flip 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_flip;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_u_clamp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_clamp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_v_clamp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_clamp;
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__stride_flag 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__stride_flag;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vq_comp 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp;
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
    vlSelf->simtop__DOT__pvr__DOT__vram_wr = vlSelf->simtop__DOT__vram_wr;
    vlSelf->simtop__DOT__vram_dout = vlSelf->vram_dout;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__new_fixed 
        = (0x7fffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__float_shifted 
                                >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__new_fixed 
        = (0x7fffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__float_shifted 
                                >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__new_fixed 
        = (0x7fffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__float_shifted 
                                >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__new_fixed 
        = (0x7fffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__float_shifted 
                                >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__new_fixed 
        = (0x7fffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__float_shifted 
                                >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__new_fixed 
        = (0x7fffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__float_shifted 
                                >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__new_fixed 
        = (0x7fffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__float_shifted 
                                >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__new_fixed 
        = (0x7fffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__float_shifted 
                                >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__new_fixed 
        = (0x7fffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__float_shifted 
                                >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__new_fixed 
        = (0x7fffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__float_shifted 
                                >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__new_fixed 
        = (0x7fffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__float_shifted 
                                >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__non_twid_addr 
        = (0xfffffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui_masked) 
                       + ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi_masked) 
                          * ((IData)(8U) << (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size)))));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_mipmap 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__is_twid) 
           & (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map));
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_strip 
        = (1U & (~ (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                    >> 0x1fU)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_tri_array 
        = (4U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                  >> 0x1dU));
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_quad_array 
        = (5U == (vlSelf->simtop__DOT__pvr__DOT__opb_word 
                  >> 0x1dU));
    vlSelf->simtop__DOT__pvr__DOT__vram_dout = vlSelf->simtop__DOT__vram_dout;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX4_FIXED 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__float_sign)
            ? (0x800000000000ULL | (0x7fffffffffffULL 
                                    & (- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__new_fixed)))
            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__new_fixed);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY4_FIXED 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__float_sign)
            ? (0x800000000000ULL | (0x7fffffffffffULL 
                                    & (- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__new_fixed)))
            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__new_fixed);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ1_FIXED 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__float_sign)
            ? (0x800000000000ULL | (0x7fffffffffffULL 
                                    & (- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__new_fixed)))
            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__new_fixed);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ2_FIXED 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__float_sign)
            ? (0x800000000000ULL | (0x7fffffffffffULL 
                                    & (- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__new_fixed)))
            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__new_fixed);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ3_FIXED 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__float_sign)
            ? (0x800000000000ULL | (0x7fffffffffffULL 
                                    & (- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__new_fixed)))
            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__new_fixed);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2_FIXED 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__float_sign)
            ? (0x800000000000ULL | (0x7fffffffffffULL 
                                    & (- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__new_fixed)))
            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__new_fixed);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2_FIXED 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__float_sign)
            ? (0x800000000000ULL | (0x7fffffffffffULL 
                                    & (- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__new_fixed)))
            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__new_fixed);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3_FIXED 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__float_sign)
            ? (0x800000000000ULL | (0x7fffffffffffULL 
                                    & (- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__new_fixed)))
            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__new_fixed);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3_FIXED 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__float_sign)
            ? (0x800000000000ULL | (0x7fffffffffffULL 
                                    & (- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__new_fixed)))
            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__new_fixed);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__float_sign)
            ? (0x800000000000ULL | (0x7fffffffffffULL 
                                    & (- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__new_fixed)))
            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__new_fixed);
    simtop__DOT__pvr__DOT__isp_parser_inst__DOT____Vcellout__float_x1__fixed 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__float_sign)
            ? (0x800000000000ULL | (0x7fffffffffffULL 
                                    & (- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__new_fixed)))
            : vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__new_fixed);
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x4__DOT__fixed 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX4_FIXED;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y4__DOT__fixed 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY4_FIXED;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z1__DOT__fixed 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ1_FIXED;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ1 
        = (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ1_FIXED 
                   >> 0U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z2__DOT__fixed 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ2_FIXED;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ2 
        = (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ2_FIXED 
                   >> 0U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_z3__DOT__fixed 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ3_FIXED;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ3 
        = (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ3_FIXED 
                   >> 0U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x2__DOT__fixed 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2_FIXED;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX2 
        = (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2_FIXED 
                   >> 0U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y2__DOT__fixed 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2_FIXED;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY2 
        = (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2_FIXED 
                   >> 0U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x3__DOT__fixed 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3_FIXED;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX3 
        = (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3_FIXED 
                   >> 0U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y3__DOT__fixed 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3_FIXED;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY3 
        = (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3_FIXED 
                   >> 0U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_y1__DOT__fixed 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY1 
        = (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED 
                   >> 0U));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__float_x1__DOT__fixed 
        = simtop__DOT__pvr__DOT__isp_parser_inst__DOT____Vcellout__float_x1__fixed;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1_FIXED 
        = (IData)(simtop__DOT__pvr__DOT__isp_parser_inst__DOT____Vcellout__float_x1__fixed);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_mask 
        = vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__REGION_BASE 
        = vlSelf->simtop__DOT__pvr__DOT__REGION_BASE;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__PARAM_BASE 
        = vlSelf->simtop__DOT__pvr__DOT__PARAM_BASE;
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX1 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1_FIXED;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ3_sub_FZ1 
        = (VL_EXTENDS_QI(64,32, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ3_FIXED)) 
           - VL_EXTENDS_QI(64,32, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ1_FIXED)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY2_sub_FY1 
        = (VL_EXTENDS_QI(64,32, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2_FIXED)) 
           - VL_EXTENDS_QI(64,32, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_mult_1 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ3_sub_FZ1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY2_sub_FY1) 
           >> 0xaU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ2_sub_FZ1 
        = (VL_EXTENDS_QI(64,32, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ2_FIXED)) 
           - VL_EXTENDS_QI(64,32, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ1_FIXED)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY3_sub_FY1 
        = (VL_EXTENDS_QI(64,32, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3_FIXED)) 
           - VL_EXTENDS_QI(64,32, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_mult_2 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ2_sub_FZ1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY3_sub_FY1) 
           >> 0xaU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_mult_1 
           - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_mult_2);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX3_sub_FX1 
        = (VL_EXTENDS_QI(64,32, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3_FIXED)) 
           - VL_EXTENDS_QI(64,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1_FIXED));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_mult_1 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX3_sub_FX1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ2_sub_FZ1) 
           >> 0xaU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX2_sub_FX1 
        = (VL_EXTENDS_QI(64,32, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2_FIXED)) 
           - VL_EXTENDS_QI(64,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1_FIXED));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_mult_2 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX2_sub_FX1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FZ3_sub_FZ1) 
           >> 0xaU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_mult_1 
           - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_mult_2);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C_mult_1 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX2_sub_FX1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY3_sub_FY1) 
           >> 0xaU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C_mult_2 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FX3_sub_FX1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FY2_sub_FY1) 
           >> 0xaU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C_mult_1 
           - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C_mult_2);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_shifted 
        = ((- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa) 
           << 0x16U);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDX 
        = VL_DIVS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Aa_shifted, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_shifted 
        = ((- vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba) 
           << 0x16U);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDY 
        = VL_DIVS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__Ba_shifted, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__C);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDX_mult_FX1 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDX, 
                       VL_EXTENDS_QI(64,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1_FIXED)) 
           >> 0x16U);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDY_mult_FY1 
        = (VL_MULS_QQQ(64, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDY, 
                       VL_EXTENDS_QI(64,32, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED))) 
           >> 0x16U);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__c 
        = ((VL_EXTENDS_QI(64,32, (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FZ1_FIXED)) 
            - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDX_mult_FX1) 
           - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDY_mult_FY1);
    VL_EXTENDS_WI(128,32, __Vtemp_h4af28404__0, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1_FIXED);
    VL_EXTENDS_WQ(128,48, __Vtemp_h98b2370f__0, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3_FIXED);
    VL_SUB_W(4, __Vtemp_h4c31b4c2__0, __Vtemp_h4af28404__0, __Vtemp_h98b2370f__0);
    VL_EXTENDS_WQ(128,48, __Vtemp_hb33acd46__0, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2_FIXED);
    VL_EXTENDS_WQ(128,48, __Vtemp_h7dd3db3f__0, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3_FIXED);
    VL_SUB_W(4, __Vtemp_h43752726__0, __Vtemp_hb33acd46__0, __Vtemp_h7dd3db3f__0);
    VL_MULS_WWW(128, __Vtemp_hcafc4ed7__0, __Vtemp_h4c31b4c2__0, __Vtemp_h43752726__0);
    VL_EXTENDS_WQ(128,48, __Vtemp_h2d04d7f5__0, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED);
    VL_EXTENDS_WQ(128,48, __Vtemp_h7dd3db3f__1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3_FIXED);
    VL_SUB_W(4, __Vtemp_hc2a8d068__0, __Vtemp_h2d04d7f5__0, __Vtemp_h7dd3db3f__1);
    VL_EXTENDS_WQ(128,48, __Vtemp_h6d5335c5__0, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2_FIXED);
    VL_EXTENDS_WQ(128,48, __Vtemp_h98b2370f__1, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3_FIXED);
    VL_SUB_W(4, __Vtemp_h8b402262__0, __Vtemp_h6d5335c5__0, __Vtemp_h98b2370f__1);
    VL_MULS_WWW(128, __Vtemp_h9595b6da__0, __Vtemp_hc2a8d068__0, __Vtemp_h8b402262__0);
    VL_SUB_W(4, __Vtemp_h73a0be20__0, __Vtemp_hcafc4ed7__0, __Vtemp_h9595b6da__0);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__f_area[0U] 
        = __Vtemp_h73a0be20__0[0U];
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__f_area[1U] 
        = __Vtemp_h73a0be20__0[1U];
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__f_area[2U] 
        = __Vtemp_h73a0be20__0[2U];
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__f_area[3U] 
        = __Vtemp_h73a0be20__0[3U];
    vlSelf->simtop__DOT__pvr__DOT__pvr_dout = vlSelf->simtop__DOT__pvr_dout;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__x_mult_FDDX 
        = (((QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)) 
            * vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDX) 
           >> 0xcU);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__y_mult_FDDY 
        = (((QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)) 
            * vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__FDDY) 
           >> 0xcU);
    simtop__DOT__pvr__DOT__isp_parser_inst__DOT____Vcellout__interp_inst_0__interp 
        = ((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__x_mult_FDDX 
            + vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__y_mult_FDDY) 
           + vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__c);
    __Vtemp_hd56fa4c8__0[0U] = 0U;
    __Vtemp_hd56fa4c8__0[1U] = 0U;
    __Vtemp_hd56fa4c8__0[2U] = 0U;
    __Vtemp_hd56fa4c8__0[3U] = 0U;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__sgn 
        = VL_GTES_IWW(128, __Vtemp_hd56fa4c8__0, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__f_area);
    if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__is_quad_array) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C4 
            = ((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult7) 
               - (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult8));
        if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__sgn) {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY41_FIXED 
                = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY4_FIXED 
                                        - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED));
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX41_FIXED 
                = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX4_FIXED 
                                        - VL_EXTENDS_QI(48,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1_FIXED)));
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY31_FIXED 
                = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3_FIXED 
                                        - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY4_FIXED));
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX31_FIXED 
                = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3_FIXED 
                                        - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX4_FIXED));
        } else {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY41_FIXED 
                = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED 
                                        - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY4_FIXED));
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX41_FIXED 
                = (0xffffffffffffULL & (VL_EXTENDS_QI(48,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1_FIXED) 
                                        - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX4_FIXED));
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY31_FIXED 
                = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY4_FIXED 
                                        - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3_FIXED));
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX31_FIXED 
                = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX4_FIXED 
                                        - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3_FIXED));
        }
    } else {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C4 = 1U;
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY41_FIXED = 0ULL;
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX41_FIXED = 0ULL;
        if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__sgn) {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY31_FIXED 
                = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3_FIXED 
                                        - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED));
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX31_FIXED 
                = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3_FIXED 
                                        - VL_EXTENDS_QI(48,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1_FIXED)));
        } else {
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY31_FIXED 
                = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED 
                                        - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3_FIXED));
            vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX31_FIXED 
                = (0xffffffffffffULL & (VL_EXTENDS_QI(48,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1_FIXED) 
                                        - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3_FIXED));
        }
    }
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__interp_inst_0__DOT__interp 
        = simtop__DOT__pvr__DOT__isp_parser_inst__DOT____Vcellout__interp_inst_0__interp;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__IP_Z 
        = (IData)(simtop__DOT__pvr__DOT__isp_parser_inst__DOT____Vcellout__interp_inst_0__interp);
    if (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__sgn) {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY12_FIXED 
            = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED 
                                    - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2_FIXED));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX12_FIXED 
            = (0xffffffffffffULL & (VL_EXTENDS_QI(48,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1_FIXED) 
                                    - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2_FIXED));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY23_FIXED 
            = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2_FIXED 
                                    - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3_FIXED));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX23_FIXED 
            = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2_FIXED 
                                    - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3_FIXED));
    } else {
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY12_FIXED 
            = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2_FIXED 
                                    - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY1_FIXED));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX12_FIXED 
            = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2_FIXED 
                                    - VL_EXTENDS_QI(48,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX1_FIXED)));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY23_FIXED 
            = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY3_FIXED 
                                    - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FY2_FIXED));
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX23_FIXED 
            = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX3_FIXED 
                                    - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FX2_FIXED));
    }
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult10 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY12_FIXED 
           * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult9 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX12_FIXED 
           * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult12 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY23_FIXED 
           * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult11 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX23_FIXED 
           * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult16 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY41_FIXED 
           * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult15 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX41_FIXED 
           * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult14 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDY31_FIXED 
           * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult13 
        = (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__FDX31_FIXED 
           * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs12 
        = (0xffffffffffffULL & (VL_EXTENDS_QI(48,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C1) 
                                + (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult9 
                                   - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult10)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs23 
        = (0xffffffffffffULL & (VL_EXTENDS_QI(48,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C2) 
                                + (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult11 
                                   - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult12)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs41 
        = (0xffffffffffffULL & (VL_EXTENDS_QI(48,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C4) 
                                + (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult15 
                                   - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult16)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs31 
        = (0xffffffffffffULL & (VL_EXTENDS_QI(48,32, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__C3) 
                                + (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult13 
                                   - vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mult14)));
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__inTriangle 
        = (1U & (~ ((IData)((vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs12 
                             >> 0x2fU)) | ((IData)(
                                                   (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs23 
                                                    >> 0x2fU)) 
                                           | ((IData)(
                                                      (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs31 
                                                       >> 0x2fU)) 
                                              | (IData)(
                                                        (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs41 
                                                         >> 0x2fU)))))));
}

VL_INLINE_OPT void Vsimtop___024root___nba_sequent__TOP__1(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->simtop__DOT__rst_reg = vlSelf->rst;
    vlSelf->simtop__DOT____Vcellinp__pvr__reset_n = 
        (1U & (~ (IData)(vlSelf->simtop__DOT__rst_reg)));
    vlSelf->simtop__DOT__pvr__DOT__reset_n = vlSelf->simtop__DOT____Vcellinp__pvr__reset_n;
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__reset_n 
        = vlSelf->simtop__DOT__pvr__DOT__reset_n;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__reset_n 
        = vlSelf->simtop__DOT__pvr__DOT__reset_n;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__reset_n 
        = vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__reset_n;
}

VL_INLINE_OPT void Vsimtop___024root___nba_sequent__TOP__2(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___nba_sequent__TOP__2\n"); );
    // Body
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
    vlSelf->simtop__DOT__sh4_dm_rdata = ((IData)(vlSelf->simtop__DOT__pvr_reg_cs)
                                          ? (QData)((IData)(vlSelf->simtop__DOT__pvr_dout))
                                          : vlSelf->dm_resp_rdata);
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

void Vsimtop___024root___eval_nba(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimtop___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vsimtop___024root___eval_triggers__ico(Vsimtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimtop___024root___dump_triggers__ico(Vsimtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimtop___024root___eval_triggers__act(Vsimtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimtop___024root___dump_triggers__act(Vsimtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimtop___024root___dump_triggers__nba(Vsimtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimtop___024root___eval(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vsimtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x7d0U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vsimtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("genrtl/simtop.v", 27, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vsimtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vsimtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x7d0U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vsimtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("genrtl/simtop.v", 27, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vsimtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x7d0U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vsimtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("genrtl/simtop.v", 27, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsimtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vsimtop___024root___eval_debug_assertions(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->im_resp_valid & 0xfeU))) {
        Verilated::overWidthError("im_resp_valid");}
    if (VL_UNLIKELY((vlSelf->dm_resp_valid & 0xfeU))) {
        Verilated::overWidthError("dm_resp_valid");}
}
#endif  // VL_DEBUG
