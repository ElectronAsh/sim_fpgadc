// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimtop.h for the primary calling header

#include "verilated.h"

#include "Vsimtop___024root.h"

VL_INLINE_OPT void Vsimtop___024root___combo__TOP__7(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___combo__TOP__7\n"); );
    // Body
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 0U;
    if (vlSelf->simtop__DOT__core__DOT__id_instr0_valid) {
        if ((0x8000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((0x40U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (8U 
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
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                                }
                                                            } else if (
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (8U 
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
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                                }
                                                            } else if (
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (0x20U 
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x40U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        } else {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 6U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 4U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 4U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x40U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 5U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                        >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((0x40U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (8U 
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
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                                }
                                                            } else if (
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (8U 
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
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                                }
                                                            } else if (
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 6U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 4U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x40U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (8U 
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
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                                }
                                                            } else if (
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (8U 
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
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                                }
                                                            } else {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            }
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        } else {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        } else {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (0x10U 
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 6U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 4U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 4U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 7U)))) {
                                        if ((0x40U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 5U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                        >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((0x20U 
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x20U 
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 6U)))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 5U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 6U)))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (8U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                            }
                                                        } else {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        }
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 6U)))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 5U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                            }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                            }
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        }
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                    }
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        }
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                        }
                                    }
                                }
                            } else {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        }
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                    }
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        }
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 5U)))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                   >> 5U)))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    }
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                }
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0 = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                        }
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                            }
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 5U)))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                   >> 5U)))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh = 1U;
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
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 0xcU)))) {
                        if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 0xaU)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 9U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 8U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                    } else if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 8U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 8U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 0xcU)))) {
                        if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
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
                                      >> 0xaU)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 9U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 8U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                }
                            }
                        }
                    }
                }
                if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                     >> 0xbU)))) {
                    if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 9U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 9U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                          >> 0xeU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 0xcU)))) {
                        if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = 1U;
                                }
                            } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = 1U;
                                }
                            } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 0xcU)))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = 1U;
                                    }
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 0xcU)))) {
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
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                            >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                        >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                   >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                    } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 0xcU)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                    }
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
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
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr = 1U;
                            }
                        }
                    }
                }
            } else if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                        } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                    } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                    }
                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 0xcU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 0xbU)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 0xaU)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 9U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 8U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 5U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_write_t = 1U;
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
                    if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 4U)))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = 1U;
                                                    }
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
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = 1U;
                                                    }
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
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = 1U;
                                                    }
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
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = 1U;
                                                    }
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
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_use_t = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                } else if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    }
                } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    }
                } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    }
                } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    }
                } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                    }
                } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    }
                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    }
                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                        }
                    } else {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                          >> 0xeU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 0xcU)))) {
                        if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                        }
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
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                        }
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
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                        }
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
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 7U)))) {
                            if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul = 1U;
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

VL_INLINE_OPT void Vsimtop___024root___combo__TOP__8(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___combo__TOP__8\n"); );
    // Body
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_wen 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_wen;
    vlSelf->simtop__DOT__core__DOT__e2_p0_waltbank = 0U;
    vlSelf->simtop__DOT__core__DOT__e2_p1_waltbank = 0U;
    vlSelf->simtop__DOT__core__DOT__e2_p1_wdst = vlSelf->simtop__DOT__core__DOT__e2_reg_p1_wdst;
    vlSelf->simtop__DOT__core__DOT__e2_p0_wdst = vlSelf->simtop__DOT__core__DOT__e2_reg_p0_wdst;
    vlSelf->simtop__DOT__core__DOT__e1_flags_restore_en 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_nack;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__e2_nack 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_nack;
    vlSelf->simtop__DOT__core__DOT__replay_dcache_miss 
        = vlSelf->simtop__DOT__core__DOT__e2_lsu_nack;
    vlSelf->simtop__DOT__core__DOT__e2_flush1 = vlSelf->simtop__DOT__core__DOT__e2_lsu_nack;
    vlSelf->simtop__DOT__core__DOT__e2_flush0 = ((IData)(vlSelf->simtop__DOT__core__DOT__e2_lsu_nack) 
                                                 & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                                                    | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen)));
    vlSelf->simtop__DOT__core__DOT__e1_flush = vlSelf->simtop__DOT__core__DOT__e2_lsu_nack;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_din;
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
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_csr_id 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_csr_id;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext12 
        = (((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__core__DOT__du1__DOT__imm) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__du1__DOT__imm));
    vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_sext 
        = (((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__core__DOT__du1__DOT__imm) 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__du1__DOT__imm)));
    vlSelf->simtop__DOT__core__DOT__du1__DOT__imm_zext 
        = (0xffU & (IData)(vlSelf->simtop__DOT__core__DOT__du1__DOT__imm));
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_raltbank 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_raltbank;
    vlSelf->simtop__DOT__core__DOT__rf_rbank_p1 = ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_md) 
                                                   & ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_rb) 
                                                      ^ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_raltbank)));
    vlSelf->simtop__DOT__core__DOT__rf_rsrc[2U] = vlSelf->simtop__DOT__core__DOT__id_instr1_rsl;
    vlSelf->simtop__DOT__core__DOT__fpsb_set_p1 = (
                                                   (((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
                                                     ^ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_write_altbank)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh));
    vlSelf->simtop__DOT__core__DOT__rf_rsrc[3U] = vlSelf->simtop__DOT__core__DOT__id_instr1_rsh;
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
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_rh 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_use_rh;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_rl 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_use_rl;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_r0 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_write_t 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_write_t;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_ls_use_freg 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_freg;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_use_rh 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rh;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_use_rl 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rl;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_write_csr 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_csr 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_use_r0 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_r0;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_fpul 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul;
    vlSelf->simtop__DOT__core__DOT__p1_fpul_hazard 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__fpul_busy) 
           & ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul) 
              | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_write_fpul)));
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_use_t 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_use_t;
    vlSelf->simtop__DOT__core__DOT__p1_t_hazard = ((IData)(vlSelf->simtop__DOT__core__DOT__t_busy) 
                                                   & ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_t) 
                                                      | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_write_t)));
    vlSelf->simtop__DOT__core__DOT__p1_csr_hazard = 
        ((IData)(vlSelf->simtop__DOT__core__DOT__csr_busy) 
         & ((((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr) 
              | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr)) 
             | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul)) 
            | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_t)));
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_fp_ls_use_rh 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_csr_id 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_csr_id;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext12 
        = (((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__core__DOT__du0__DOT__imm) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__du0__DOT__imm));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext 
        = (((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__core__DOT__du0__DOT__imm) 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__du0__DOT__imm)));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext 
        = (0xffU & (IData)(vlSelf->simtop__DOT__core__DOT__du0__DOT__imm));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_raltbank 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_raltbank;
    vlSelf->simtop__DOT__core__DOT__rf_rbank_p0 = ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_md) 
                                                   & ((IData)(vlSelf->simtop__DOT__core__DOT__csr_sr_rb) 
                                                      ^ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_raltbank)));
    vlSelf->simtop__DOT__core__DOT__rf_rsrc[0U] = vlSelf->simtop__DOT__core__DOT__id_instr0_rsl;
    vlSelf->simtop__DOT__core__DOT__fpsb_set_p0 = (
                                                   (((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
                                                     ^ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_altbank)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh));
    vlSelf->simtop__DOT__core__DOT__rf_rsrc[1U] = vlSelf->simtop__DOT__core__DOT__id_instr0_rsh;
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
        = (1U & ((((((~ (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rl) 
                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_rn)) 
                         & ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl) 
                            == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh)))) 
                     & (~ (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rh) 
                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_rn)) 
                           & ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh) 
                              == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh))))) 
                    & (~ (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rl) 
                           & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_r0)) 
                          & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl))))) 
                   & (~ (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rh) 
                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_r0)) 
                         & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh))))) 
                  & (~ (((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0) 
                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_rn)) 
                        & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh))))) 
                 & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0) 
                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_r0)))));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_br 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_is_br;
    vlSelf->simtop__DOT__core__DOT__id_bru_sel = (1U 
                                                  & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_br)));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_ex 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_is_ex;
    vlSelf->simtop__DOT__core__DOT__id_exu_sel = (1U 
                                                  & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_ex)));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_csr 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_use_csr;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_rh 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_use_rh;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_rl 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_use_rl;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_use_r0 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_use_r0;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_ls_use_freg 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_freg;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_use_rh 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rh;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_use_rl 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_use_r0 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_write_rn 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn;
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
         & ((((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_csr) 
              | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr)) 
             | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_fpul)) 
            | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_t)));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_fp_ls_use_rh 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_fp 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp;
    vlSelf->simtop__DOT__core__DOT__id_fpu_sel = (1U 
                                                  & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp)));
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_is_ls 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls;
    vlSelf->simtop__DOT__core__DOT__dual_issue_no_res_conflict 
        = (1U & (((((((~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_fpul) 
                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul))) 
                      & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_t) 
                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_t)))) 
                     & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_write_csr) 
                           & ((((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr) 
                                | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr)) 
                               | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_t)) 
                              | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_write_t))))) 
                    & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_ex) 
                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_ex)))) 
                   & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_br) 
                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_br)))) 
                  & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls) 
                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_ls)))) 
                 & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_fp) 
                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_fp)))));
    vlSelf->simtop__DOT__core__DOT__id_lsu_sel = (1U 
                                                  & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_is_ls)));
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
        vlSelf->simtop__DOT__core__DOT__rf_wdst1 = vlSelf->simtop__DOT__core__DOT__e2_p1_wdst;
        if ((1U & ((~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_sel)) 
                   | (IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_lsu_alt_wen)))) {
            vlSelf->simtop__DOT__core__DOT__e2_p0_wdst 
                = vlSelf->simtop__DOT__core__DOT__e2_lsu_wdst;
        }
    } else {
        vlSelf->simtop__DOT__core__DOT__rf_wdst1 = vlSelf->simtop__DOT__core__DOT__e2_p1_wdst;
    }
    vlSelf->simtop__DOT__core__DOT__rf_wdst0 = vlSelf->simtop__DOT__core__DOT__e2_p0_wdst;
    vlSelf->trace_valid1 = ((IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_instr1_valid) 
                            & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_flush1)));
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
    if (vlSelf->simtop__DOT__core__DOT__e2_flush1) {
        vlSelf->simtop__DOT__core__DOT__e2_p1_wen = 0U;
    }
    vlSelf->trace_valid0 = ((IData)(vlSelf->simtop__DOT__core__DOT__e2_reg_instr0_valid) 
                            & (~ (IData)(vlSelf->simtop__DOT__core__DOT__e2_flush0)));
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
        = vlSelf->simtop__DOT__core__DOT__e1_flush;
    vlSelf->dm_req_valid = 0U;
    if (vlSelf->simtop__DOT__core__DOT__e1_reg_lsu_valid) {
        if (((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_load) 
             | (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__is_store))) {
            vlSelf->dm_req_valid = 1U;
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
    if (vlSelf->simtop__DOT__core__DOT__e1_flush) {
        vlSelf->dm_req_valid = 0U;
        vlSelf->simtop__DOT__core__DOT__e1_p1_wen = 0U;
        vlSelf->simtop__DOT__core__DOT__e1_p0_wen = 0U;
    }
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__inTriangle 
        = ((VL_LTES_III(32, 0U, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs12) 
            & VL_LTES_III(32, 0U, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs23)) 
           & VL_LTES_III(32, 0U, vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__Xhs31));
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank2 
        = vlSelf->simtop__DOT__core__DOT__rf_rbank_p1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank3 
        = vlSelf->simtop__DOT__core__DOT__rf_rbank_p1;
    vlSelf->simtop__DOT__core__DOT__fp_p1_waw_busy 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                 >> (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p1)));
    if (vlSelf->simtop__DOT__core__DOT__rf_rbank_p0) {
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank0 = 1U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank1 = 1U;
        vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rd_r0 
            = vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1
            [0U];
    } else {
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank0 = 0U;
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rbank1 = 0U;
        vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rd_r0 
            = vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0
            [0U];
    }
    vlSelf->simtop__DOT__core__DOT__fp_p0_waw_busy 
        = (1U & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                 >> (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p0)));
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc0 
        = vlSelf->simtop__DOT__core__DOT__rf_rsrc[0U];
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc1 
        = vlSelf->simtop__DOT__core__DOT__rf_rsrc[1U];
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc2 
        = vlSelf->simtop__DOT__core__DOT__rf_rsrc[2U];
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rsrc3 
        = vlSelf->simtop__DOT__core__DOT__rf_rsrc[3U];
    vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata0 
        = (((~ (vlSelf->simtop__DOT__core__DOT__rf_rsrc
                [0U] >> 3U)) & (IData)(vlSelf->simtop__DOT__core__DOT__rf_rbank_p0))
            ? vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1
           [(7U & vlSelf->simtop__DOT__core__DOT__rf_rsrc
             [0U])] : vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0
           [vlSelf->simtop__DOT__core__DOT__rf_rsrc
           [0U]]);
    vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata3 
        = (((~ (vlSelf->simtop__DOT__core__DOT__rf_rsrc
                [3U] >> 3U)) & (IData)(vlSelf->simtop__DOT__core__DOT__rf_rbank_p1))
            ? vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1
           [(7U & vlSelf->simtop__DOT__core__DOT__rf_rsrc
             [3U])] : vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0
           [vlSelf->simtop__DOT__core__DOT__rf_rsrc
           [3U]]);
    vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata1 
        = (((~ (vlSelf->simtop__DOT__core__DOT__rf_rsrc
                [1U] >> 3U)) & (IData)(vlSelf->simtop__DOT__core__DOT__rf_rbank_p0))
            ? vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1
           [(7U & vlSelf->simtop__DOT__core__DOT__rf_rsrc
             [1U])] : vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0
           [vlSelf->simtop__DOT__core__DOT__rf_rsrc
           [1U]]);
    vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata2 
        = (((~ (vlSelf->simtop__DOT__core__DOT__rf_rsrc
                [2U] >> 3U)) & (IData)(vlSelf->simtop__DOT__core__DOT__rf_rbank_p1))
            ? vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b1
           [(7U & vlSelf->simtop__DOT__core__DOT__rf_rsrc
             [2U])] : vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0
           [vlSelf->simtop__DOT__core__DOT__rf_rsrc
           [2U]]);
    if (vlSelf->simtop__DOT__core__DOT__id_fpu_sel) {
        vlSelf->simtop__DOT__core__DOT__fprf_rsrc1 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_rsl;
        vlSelf->simtop__DOT__core__DOT__fprf_rsrc2 
            = vlSelf->simtop__DOT__core__DOT__id_instr1_rsh;
    } else {
        vlSelf->simtop__DOT__core__DOT__fprf_rsrc1 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_rsl;
        vlSelf->simtop__DOT__core__DOT__fprf_rsrc2 
            = vlSelf->simtop__DOT__core__DOT__id_instr0_rsh;
    }
    vlSelf->simtop__DOT__core__DOT__fprf_rbank0 = ((IData)(vlSelf->simtop__DOT__core__DOT__csr_fpscr_fr) 
                                                   ^ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_lsu_sel)
                                                     ? (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_altbank)
                                                     : (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_altbank)));
    vlSelf->simtop__DOT__core__DOT__fprf_rsrc0 = ((IData)(vlSelf->simtop__DOT__core__DOT__id_lsu_sel)
                                                   ? 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh)
                                                    ? (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsh)
                                                    : (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_rsl))
                                                   : 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_rh)
                                                    ? (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsh)
                                                    : (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_rsl)));
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wbank0 
        = vlSelf->simtop__DOT__core__DOT__rf_wbank_p0;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wbank1 
        = vlSelf->simtop__DOT__core__DOT__rf_wbank_p1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdst1 
        = vlSelf->simtop__DOT__core__DOT__rf_wdst1;
    vlSelf->trace_wdst1 = vlSelf->simtop__DOT__core__DOT__rf_wdst1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdst0 
        = vlSelf->simtop__DOT__core__DOT__rf_wdst0;
    vlSelf->trace_wdst0 = vlSelf->simtop__DOT__core__DOT__rf_wdst0;
    vlSelf->simtop__DOT__trace_valid1 = vlSelf->trace_valid1;
    vlSelf->simtop__DOT__core__DOT__rf_wen1 = vlSelf->simtop__DOT__core__DOT__e2_p1_wen;
    vlSelf->simtop__DOT__trace_valid0 = vlSelf->trace_valid0;
    vlSelf->simtop__DOT__core__DOT__rf_wen0 = vlSelf->simtop__DOT__core__DOT__e2_p0_wen;
    vlSelf->simtop__DOT__pvr_rd = ((IData)(vlSelf->dm_req_valid) 
                                   & (~ (IData)(vlSelf->dm_req_wen)));
    vlSelf->simtop__DOT__pvr_wr = ((IData)(vlSelf->dm_req_valid) 
                                   & (IData)(vlSelf->dm_req_wen));
    vlSelf->simtop__DOT__dm_req_valid = vlSelf->dm_req_valid;
    vlSelf->simtop__DOT__core__DOT__p1_int_hazard = 
        (((((((((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wpending)) 
               & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
                  == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                  [2U])) & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rl)) 
             | ((((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wpending)) 
                 & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
                    == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                    [3U])) & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rh))) 
            | ((((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wpending)) 
                & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst))) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0))) 
           | ((((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wpending)) 
               & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
                  == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                  [2U])) & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rl))) 
          | ((((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wpending)) 
              & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
                 == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                 [3U])) & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_rh))) 
         | ((((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wpending)) 
             & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst))) 
            & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0)));
    vlSelf->simtop__DOT__core__DOT__p0_int_hazard = 
        (((((((((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wpending)) 
               & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
                  == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                  [0U])) & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_rl)) 
             | ((((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                  & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wpending)) 
                 & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
                    == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                    [1U])) & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_rh))) 
            | ((((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                 & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wpending)) 
                & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst))) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_r0))) 
           | ((((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
                & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wpending)) 
               & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
                  == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                  [0U])) & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_rl))) 
          | ((((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wpending)) 
              & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
                 == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                 [1U])) & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_rh))) 
         | ((((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
              & (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wpending)) 
             & (0U == (IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst))) 
            & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_use_r0)));
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rd_r0 
        = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rd_r0;
    vlSelf->simtop__DOT__core__DOT__rf_rdata[4U] = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rd_r0;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rdata0 
        = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata0;
    vlSelf->simtop__DOT__core__DOT__rf_rdata[0U] = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata0;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rdata3 
        = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata3;
    vlSelf->simtop__DOT__core__DOT__rf_rdata[3U] = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata3;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rdata1 
        = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata1;
    vlSelf->simtop__DOT__core__DOT__rf_rdata[1U] = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_rdata2 
        = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata2;
    vlSelf->simtop__DOT__core__DOT__rf_rdata[2U] = vlSelf->simtop__DOT__core__DOT____Vcellout__rf__rf_rdata2;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rsrc1 
        = vlSelf->simtop__DOT__core__DOT__fprf_rsrc1;
    vlSelf->simtop__DOT__core__DOT__fprf_rdata1 = ((IData)(vlSelf->simtop__DOT__core__DOT__fprf_rbank1)
                                                    ? 
                                                   vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b1
                                                   [vlSelf->simtop__DOT__core__DOT__fprf_rsrc1]
                                                    : 
                                                   vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b0
                                                   [vlSelf->simtop__DOT__core__DOT__fprf_rsrc1]);
    vlSelf->simtop__DOT__core__DOT__fp_rs1_busy = (1U 
                                                   & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                                                      >> 
                                                      (((IData)(vlSelf->simtop__DOT__core__DOT__fprf_rbank1) 
                                                        << 4U) 
                                                       | (IData)(vlSelf->simtop__DOT__core__DOT__fprf_rsrc1))));
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rsrc2 
        = vlSelf->simtop__DOT__core__DOT__fprf_rsrc2;
    vlSelf->simtop__DOT__core__DOT__fprf_rdata2 = ((IData)(vlSelf->simtop__DOT__core__DOT__fprf_rbank2)
                                                    ? 
                                                   vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b1
                                                   [vlSelf->simtop__DOT__core__DOT__fprf_rsrc2]
                                                    : 
                                                   vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b0
                                                   [vlSelf->simtop__DOT__core__DOT__fprf_rsrc2]);
    vlSelf->simtop__DOT__core__DOT__fp_rs2_busy = (1U 
                                                   & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                                                      >> 
                                                      (((IData)(vlSelf->simtop__DOT__core__DOT__fprf_rbank1) 
                                                        << 4U) 
                                                       | (IData)(vlSelf->simtop__DOT__core__DOT__fprf_rsrc2))));
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
    vlSelf->simtop__DOT__core__DOT__dual_issue_fp_no_interdep 
        = (1U & ((((~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_freg) 
                       & ((((IData)(vlSelf->simtop__DOT__core__DOT__fprf_rbank0) 
                            << 4U) | (IData)(vlSelf->simtop__DOT__core__DOT__fprf_rsrc0)) 
                          == (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p0)))) 
                   & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rl) 
                         & ((((IData)(vlSelf->simtop__DOT__core__DOT__fprf_rbank1) 
                              << 4U) | (IData)(vlSelf->simtop__DOT__core__DOT__fprf_rsrc1)) 
                            == (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p0))))) 
                  & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rh) 
                        & ((((IData)(vlSelf->simtop__DOT__core__DOT__fprf_rbank2) 
                             << 4U) | (IData)(vlSelf->simtop__DOT__core__DOT__fprf_rsrc2)) 
                           == (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p0))))) 
                 & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_r0) 
                       & ((((IData)(vlSelf->simtop__DOT__core__DOT__fprf_rbank2) 
                            << 4U) | (IData)(vlSelf->simtop__DOT__core__DOT__fprf_rsrc2)) 
                          == (IData)(vlSelf->simtop__DOT__core__DOT__fpsb_set_p0))))));
    vlSelf->simtop__DOT__core__DOT__fp_rs0_busy = (1U 
                                                   & (vlSelf->simtop__DOT__core__DOT__fp_scoreboard 
                                                      >> 
                                                      (((IData)(vlSelf->simtop__DOT__core__DOT__fprf_rbank0) 
                                                        << 4U) 
                                                       | (IData)(vlSelf->simtop__DOT__core__DOT__fprf_rsrc0))));
    vlSelf->simtop__DOT__trace_wdst1 = vlSelf->trace_wdst1;
    vlSelf->simtop__DOT__trace_wdst0 = vlSelf->trace_wdst0;
    vlSelf->simtop__DOT__core__DOT__trace_valid1 = vlSelf->simtop__DOT__trace_valid1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wen1 
        = vlSelf->simtop__DOT__core__DOT__rf_wen1;
    vlSelf->trace_wen1 = vlSelf->simtop__DOT__core__DOT__rf_wen1;
    vlSelf->simtop__DOT__core__DOT__trace_valid0 = vlSelf->simtop__DOT__trace_valid0;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wen0 
        = vlSelf->simtop__DOT__core__DOT__rf_wen0;
    vlSelf->trace_wen0 = vlSelf->simtop__DOT__core__DOT__rf_wen0;
    vlSelf->simtop__DOT__pvr__DOT__pvr_rd = vlSelf->simtop__DOT__pvr_rd;
    vlSelf->simtop__DOT__pvr__DOT__pvr_wr = vlSelf->simtop__DOT__pvr_wr;
    vlSelf->simtop__DOT__core__DOT__dm_req_valid = vlSelf->simtop__DOT__dm_req_valid;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rdata1 
        = vlSelf->simtop__DOT__core__DOT__fprf_rdata1;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rdata2 
        = vlSelf->simtop__DOT__core__DOT__fprf_rdata2;
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_rdata0 
        = vlSelf->simtop__DOT__core__DOT__fprf_rdata0;
    vlSelf->simtop__DOT__core__DOT__dual_issue = ((
                                                   (((~ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_complex)) 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_complex))) 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__dual_issue_int_no_interdep)) 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__dual_issue_fp_no_interdep)) 
                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__dual_issue_no_res_conflict));
    vlSelf->simtop__DOT__core__DOT__p1_fp_hazard = 
        ((((((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_freg) 
             & (IData)(vlSelf->simtop__DOT__core__DOT__fp_rs0_busy)) 
            | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rl) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__fp_rs1_busy))) 
           | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_rh) 
              & (IData)(vlSelf->simtop__DOT__core__DOT__fp_rs2_busy))) 
          | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_use_r0) 
             & (IData)(vlSelf->simtop__DOT__core__DOT__fp_r0_busy))) 
         | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_write_rn) 
            & (IData)(vlSelf->simtop__DOT__core__DOT__fp_p1_waw_busy)));
    vlSelf->simtop__DOT__core__DOT__p0_fp_hazard = 
        ((((((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_ls_use_freg) 
             & (IData)(vlSelf->simtop__DOT__core__DOT__fp_rs0_busy)) 
            | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rl) 
               & (IData)(vlSelf->simtop__DOT__core__DOT__fp_rs1_busy))) 
           | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_rh) 
              & (IData)(vlSelf->simtop__DOT__core__DOT__fp_rs2_busy))) 
          | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_use_r0) 
             & (IData)(vlSelf->simtop__DOT__core__DOT__fp_r0_busy))) 
         | ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn) 
            & (IData)(vlSelf->simtop__DOT__core__DOT__fp_p0_waw_busy)));
    vlSelf->simtop__DOT__core__DOT__trace_wdst1 = vlSelf->simtop__DOT__trace_wdst1;
    vlSelf->simtop__DOT__core__DOT__trace_wdst0 = vlSelf->simtop__DOT__trace_wdst0;
    vlSelf->simtop__DOT__trace_wen1 = vlSelf->trace_wen1;
    vlSelf->simtop__DOT__trace_wen0 = vlSelf->trace_wen0;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_valid 
        = vlSelf->simtop__DOT__core__DOT__dm_req_valid;
    vlSelf->simtop__DOT__core__DOT__p1_hazard = (((
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__p1_int_hazard) 
                                                    | (IData)(vlSelf->simtop__DOT__core__DOT__p1_fp_hazard)) 
                                                   | (IData)(vlSelf->simtop__DOT__core__DOT__p1_t_hazard)) 
                                                  | (IData)(vlSelf->simtop__DOT__core__DOT__p1_fpul_hazard)) 
                                                 | (IData)(vlSelf->simtop__DOT__core__DOT__p1_csr_hazard));
    vlSelf->simtop__DOT__core__DOT__p0_hazard = (((
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__p0_int_hazard) 
                                                    | (IData)(vlSelf->simtop__DOT__core__DOT__p0_fp_hazard)) 
                                                   | (IData)(vlSelf->simtop__DOT__core__DOT__p0_t_hazard)) 
                                                  | (IData)(vlSelf->simtop__DOT__core__DOT__p0_fpul_hazard)) 
                                                 | (IData)(vlSelf->simtop__DOT__core__DOT__p0_csr_hazard));
    vlSelf->simtop__DOT__core__DOT__trace_wen1 = vlSelf->simtop__DOT__trace_wen1;
    vlSelf->simtop__DOT__core__DOT__trace_wen0 = vlSelf->simtop__DOT__trace_wen0;
    vlSelf->simtop__DOT__core__DOT__instr0_allow_issue 
        = (1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__p0_hazard)));
    vlSelf->simtop__DOT__core__DOT__instr1_allow_issue 
        = (1U & ((((IData)(vlSelf->simtop__DOT__core__DOT__dual_issue) 
                   & (~ (IData)(vlSelf->simtop__DOT__core__DOT__p0_hazard))) 
                  | (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_valid))) 
                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__p1_hazard))));
    vlSelf->simtop__DOT__core__DOT__instr0_issue = 
        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__instr0_allow_issue));
    vlSelf->simtop__DOT__core__DOT__instr0_issued = 
        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__instr0_allow_issue));
    vlSelf->simtop__DOT__core__DOT__instr1_issue = 
        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_valid) 
         & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_allow_issue));
    vlSelf->simtop__DOT__core__DOT__instr1_issued = 
        (((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_valid) 
          & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_allow_issue)) 
         & ((((((IData)(vlSelf->simtop__DOT__core__DOT__id_exu_sel) 
                & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_ex)) 
               | ((IData)(vlSelf->simtop__DOT__core__DOT__id_bru_sel) 
                  & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_br))) 
              | ((IData)(vlSelf->simtop__DOT__core__DOT__id_lsu_sel) 
                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_ls))) 
             | ((IData)(vlSelf->simtop__DOT__core__DOT__id_fpu_sel) 
                & (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_fp))) 
            | (IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_is_mt)));
    vlSelf->simtop__DOT__core__DOT__fpsb_set_en_p0 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec0_fp_write_rn) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__instr0_issued));
    vlSelf->simtop__DOT__core__DOT__replay_stalled 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_valid) 
           & (~ (IData)(vlSelf->simtop__DOT__core__DOT__instr0_issued)));
    vlSelf->simtop__DOT__core__DOT__fpsb_set_en_p1 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__id_dec1_fp_write_rn) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issued));
    vlSelf->simtop__DOT__core__DOT__replay_nodi = ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_valid) 
                                                   & (~ (IData)(vlSelf->simtop__DOT__core__DOT__instr1_issued)));
    vlSelf->simtop__DOT__core__DOT__if_pc_redirect 
        = ((((IData)(vlSelf->simtop__DOT__core__DOT__replay_icache_miss) 
             | (IData)(vlSelf->simtop__DOT__core__DOT__replay_delayslot_miss)) 
            | (IData)(vlSelf->simtop__DOT__core__DOT__replay_nodi)) 
           | (IData)(vlSelf->simtop__DOT__core__DOT__replay_mispredict));
    vlSelf->simtop__DOT__core__DOT__if_pc_redirect_target 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__replay_dcache_miss)
            ? vlSelf->simtop__DOT__core__DOT__replay_dcache_miss_pc
            : ((IData)(vlSelf->simtop__DOT__core__DOT__replay_delayslot_miss)
                ? vlSelf->simtop__DOT__core__DOT__replay_delayslot_miss_pc
                : ((IData)(vlSelf->simtop__DOT__core__DOT__replay_mispredict)
                    ? vlSelf->simtop__DOT__core__DOT__replay_mispredict_pc
                    : ((IData)(vlSelf->simtop__DOT__core__DOT__replay_icache_miss)
                        ? vlSelf->simtop__DOT__core__DOT__replay_icache_miss_pc
                        : ((IData)(vlSelf->simtop__DOT__core__DOT__replay_stalled)
                            ? vlSelf->simtop__DOT__core__DOT__replay_stalled_pc
                            : ((IData)(vlSelf->simtop__DOT__core__DOT__replay_nodi)
                                ? vlSelf->simtop__DOT__core__DOT__replay_nodi_pc
                                : 0U))))));
    vlSelf->simtop__DOT__core__DOT__if_pc_next = ((IData)(vlSelf->simtop__DOT__core__DOT__if_pc_redirect)
                                                   ? vlSelf->simtop__DOT__core__DOT__if_pc_redirect_target
                                                   : vlSelf->simtop__DOT__core__DOT__if_pc_plus4);
    vlSelf->im_req_addr = vlSelf->simtop__DOT__core__DOT__if_pc_next;
    vlSelf->simtop__DOT__bios_cs = (0x1fffffU >= vlSelf->im_req_addr);
    vlSelf->simtop__DOT__im_req_addr = vlSelf->im_req_addr;
    vlSelf->simtop__DOT__core__DOT__im_req_addr = vlSelf->simtop__DOT__im_req_addr;
}
