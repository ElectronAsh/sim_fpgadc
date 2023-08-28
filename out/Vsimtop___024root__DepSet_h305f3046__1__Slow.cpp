// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimtop.h for the primary calling header

#include "verilated.h"

#include "Vsimtop__Syms.h"
#include "Vsimtop___024root.h"

extern const VlUnpacked<CData/*0:0*/, 256> Vsimtop__ConstPool__TABLE_hba7c879b_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsimtop__ConstPool__TABLE_hff42c4ae_0;

VL_ATTR_COLD void Vsimtop___024root___stl_sequent__TOP__1(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___stl_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    vlSelf->simtop__DOT__core__DOT__mtu0__DOT__lt = 
        (((IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT____VdfgTmp_h9fa499bc__0) 
          ^ (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu0_oph 
             >> 0x1fU)) ? (IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT____VdfgTmp_h9fa499bc__0)
          : (IData)(vlSelf->simtop__DOT__core__DOT__mtu0__DOT__ltu));
    vlSelf->simtop__DOT__core__DOT__mtu1__DOT__lt = 
        (((IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT____VdfgTmp_h9fa499bc__0) 
          ^ (vlSelf->simtop__DOT__core__DOT__e1_reg_mtu1_oph 
             >> 0x1fU)) ? (IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT____VdfgTmp_h9fa499bc__0)
          : (IData)(vlSelf->simtop__DOT__core__DOT__mtu1__DOT__ltu));
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
        vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal8_byte 
            = (0xffU & ((0U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                         ? (IData)(vlSelf->simtop__DOT__pvr__DOT__isp_vram_din)
                         : ((1U == (7U & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pix_addr_mux))
                             ? (IData)((vlSelf->simtop__DOT__pvr__DOT__isp_vram_din 
                                        >> 8U)) : (
                                                   (2U 
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
            = ((0xf0000000U & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                               << 0x10U)) | ((0xf000000U 
                                              & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                 << 0xcU)) 
                                             | ((0xf00000U 
                                                 & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                    << 0xcU)) 
                                                | ((0xf0000U 
                                                    & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                       << 8U)) 
                                                   | ((0xf000U 
                                                       & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                          << 8U)) 
                                                      | ((0xf00U 
                                                          & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                             << 4U)) 
                                                         | ((0xf0U 
                                                             & (vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw 
                                                                << 4U)) 
                                                            | (0xfU 
                                                               & vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_raw))))))));
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
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fmul__DOT__b_exp 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__b_exp;
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
    vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter 
        = ((0x10U & vlSelf->simtop__DOT__core__DOT__e1_reg_exu_opl)
            ? (vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_8 
               << 0x10U) : vlSelf->simtop__DOT__core__DOT__exu__DOT__lshifter_8);
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__shifted 
        = vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_shifted;
    vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__bb_frac_norm 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__swap_operand)
            ? vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__a_frac_shifted
            : vlSelf->simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__b_frac_shifted);
    vlSelf->simtop__DOT__core__DOT__trace_wdst1 = vlSelf->simtop__DOT__trace_wdst1;
    vlSelf->simtop__DOT__core__DOT__trace_wdst0 = vlSelf->simtop__DOT__trace_wdst0;
    vlSelf->simtop__DOT__core__DOT__trace_valid0 = vlSelf->simtop__DOT__trace_valid0;
    vlSelf->simtop__DOT__core__DOT__rf_wen0 = vlSelf->trace_wen0;
    vlSelf->simtop__DOT__trace_wen0 = vlSelf->trace_wen0;
    vlSelf->simtop__DOT__core__DOT__dm_req_valid = vlSelf->simtop__DOT__dm_req_valid;
    vlSelf->simtop__DOT__pvr__DOT__pvr_rd = vlSelf->simtop__DOT__pvr_rd;
    vlSelf->simtop__DOT__pvr__DOT__pvr_wr = vlSelf->simtop__DOT__pvr_wr;
    vlSelf->simtop__DOT__core__DOT__rf_wen1 = vlSelf->trace_wen1;
    vlSelf->simtop__DOT__trace_wen1 = vlSelf->trace_wen1;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_wen 
        = vlSelf->simtop__DOT__core__DOT__dm_req_wen;
    vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_4 
        = ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__shamt_right))
            ? (((- (IData)((IData)(vlSelf->simtop__DOT__core__DOT__exu__DOT__rsh_sign))) 
                << 0x1cU) | (vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_2 
                             >> 4U)) : vlSelf->simtop__DOT__core__DOT__exu__DOT__rshifter_2);
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
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h30afbd87__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wpending));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h2883dc79__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wpending));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h299a5b06__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h297f0f65__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h29ae45fa__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h29b8f1bc__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsl));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6cdcc83b__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h7333f59e__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6ce33f07__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh));
    vlSelf->simtop__DOT__core__DOT____VdfgTmp_h6cfdb3c1__0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
           == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsl));
    if (vlSelf->simtop__DOT__core__DOT__id_instr1_valid) {
        vlSelf->simtop__DOT__core__DOT__du1__DOT__in_valid = 1U;
        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 0U;
        vlSelf->simtop__DOT__core__DOT__id_dec1_write_r0 = 0U;
        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 0U;
        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 1U;
        vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 0U;
        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 0U;
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
    } else {
        vlSelf->simtop__DOT__core__DOT__du1__DOT__in_valid = 0U;
        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_op = 0U;
        vlSelf->simtop__DOT__core__DOT__id_dec1_write_r0 = 0U;
        vlSelf->simtop__DOT__core__DOT__id_dec1_write_rn = 0U;
        vlSelf->simtop__DOT__core__DOT__id_dec1_legal = 1U;
        vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt = 0U;
        vlSelf->simtop__DOT__core__DOT__id_dec1_complex = 0U;
    }
}
