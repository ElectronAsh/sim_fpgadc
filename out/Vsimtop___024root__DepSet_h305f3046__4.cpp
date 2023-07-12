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
    // Init
    IData/*31:0*/ simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b;
    IData/*31:0*/ simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b;
    // Body
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e 
        = (0xffU & ((1U == (0x3fU & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                             >> 0x29U))))
                     ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e) 
                        - (IData)(5U)) : ((1U == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                                             >> 0x2aU))))
                                           ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e) 
                                              - (IData)(4U))
                                           : ((1U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                                           >> 0x2bU))))
                                               ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e) 
                                                  - (IData)(3U))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                                               >> 0x2cU))))
                                                   ? 
                                                  ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e) 
                                                   - (IData)(2U))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                                                >> 0x2dU))))
                                                    ? 
                                                   ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e) 
                                                    - (IData)(1U))
                                                    : (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e)))))));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__norm1__DOT__in_e 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D_out 
        = (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_mantissa)));
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
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__ra_vram_din;
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_din 
        = vlSelf->simtop__DOT__pvr__DOT__isp_vram_din;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__out 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__adder_out;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__out 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__multiplier_out;
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
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__out 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D_out;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0_in 
        = (((~ (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D_out 
                >> 0x1fU)) << 0x1fU) | (0x7fffffffU 
                                        & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D_out));
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
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0_in;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C1 
           >> 0x1fU);
    if ((0U == (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C1 
                         >> 0x17U)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C1);
    } else {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C1 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C1));
    }
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0_in 
           >> 0x1fU);
    if ((0U == (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0_in 
                         >> 0x17U)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0_in);
    } else {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0_in 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0_in));
    }
    if (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent) 
         == (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent;
        if (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign) 
             == (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign))) {
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
                                 + vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa));
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign 
                = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign;
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
                = (0x1000000U | vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa);
        } else if ((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
                    > vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa)) {
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
                                 - vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa));
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign 
                = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign;
        } else {
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa 
                                 - vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa));
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign 
                = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign;
        }
    } else if (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent) 
                > (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff 
            = (0xffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent) 
                        - (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff))
                ? (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa 
                                >> (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff)))
                : 0U);
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign) 
                              == (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign))
                              ? (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
                                 + vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa)
                              : (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
                                 - vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa)));
    } else if (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent) 
                < (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff 
            = (0xffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent) 
                        - (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff))
                ? (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
                                >> (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff)))
                : 0U);
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign) 
                              == (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign))
                              ? (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa 
                                 + vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa)
                              : (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa 
                                 - vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa)));
    }
    if ((0x1000000U & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa)) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
            = (0x1ffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
                             >> 1U));
    } else if (((~ (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
                    >> 0x17U)) & (0U != (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m;
    }
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
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
        = (0xffU & ((1U == (0x1fffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                         >> 3U))) ? 
                    ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                     - (IData)(0x14U)) : ((1U == (0xfffffU 
                                                  & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                     >> 4U)))
                                           ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                              - (IData)(0x13U))
                                           : ((1U == 
                                               (0x7ffffU 
                                                & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                   >> 5U)))
                                               ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                  - (IData)(0x12U))
                                               : ((1U 
                                                   == 
                                                   (0x3ffffU 
                                                    & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                       >> 6U)))
                                                   ? 
                                                  ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                   - (IData)(0x11U))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (0x1ffffU 
                                                     & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                        >> 7U)))
                                                    ? 
                                                   ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                    - (IData)(0x10U))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0xffffU 
                                                      & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                         >> 8U)))
                                                     ? 
                                                    ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                     - (IData)(0xfU))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x7fffU 
                                                       & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                          >> 9U)))
                                                      ? 
                                                     ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                      - (IData)(0xeU))
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (0x3fffU 
                                                        & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                           >> 0xaU)))
                                                       ? 
                                                      ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                       - (IData)(0xdU))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fffU 
                                                         & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                            >> 0xbU)))
                                                        ? 
                                                       ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                        - (IData)(0xcU))
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                             >> 0xcU)))
                                                         ? 
                                                        ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                         - (IData)(0xbU))
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0x7ffU 
                                                           & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                              >> 0xdU)))
                                                          ? 
                                                         ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                          - (IData)(0xaU))
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x3ffU 
                                                            & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                               >> 0xeU)))
                                                           ? 
                                                          ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                           - (IData)(9U))
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                                >> 0xfU)))
                                                            ? 
                                                           ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                            - (IData)(8U))
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                                 >> 0x10U)))
                                                             ? 
                                                            ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                             - (IData)(7U))
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x7fU 
                                                               & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                                  >> 0x11U)))
                                                              ? 
                                                             ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                              - (IData)(6U))
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                                   >> 0x12U)))
                                                               ? 
                                                              ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                               - (IData)(5U))
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                                    >> 0x13U)))
                                                                ? 
                                                               ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                                - (IData)(4U))
                                                                : 
                                                               ((1U 
                                                                 == 
                                                                 (0xfU 
                                                                  & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                                     >> 0x14U)))
                                                                 ? 
                                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                                 - (IData)(3U))
                                                                 : 
                                                                ((1U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                                      >> 0x15U)))
                                                                  ? 
                                                                 ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                                       >> 0x16U)))
                                                                   ? 
                                                                  ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                                                   - (IData)(1U))
                                                                   : (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e))))))))))))))))))))));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__in_e 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0 
        = (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa)));
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
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__out 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__D 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_sign 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_sign) 
           ^ (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_sign));
    if ((0U == (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__D 
                         >> 0x17U)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__D);
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__D);
    } else {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__D 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__D));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__D 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__D));
    }
    if ((0U == (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0 
                         >> 0x17U)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0);
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0);
    } else {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0));
    }
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent 
        = (0xffU & (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_exponent) 
                     + (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_exponent)) 
                    - (IData)(0x7fU)));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_mantissa)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_mantissa))));
    if ((1U & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
                       >> 0x2fU)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
            = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
                                    >> 1U));
    } else if (((~ (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
                            >> 0x2eU))) & (0U != (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m;
    }
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_mantissa 
        = (0xffffffU & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
                                >> 0x17U)));
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
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e 
        = (0xffU & ((1U == (0x3fU & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                             >> 0x29U))))
                     ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e) 
                        - (IData)(5U)) : ((1U == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                                             >> 0x2aU))))
                                           ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e) 
                                              - (IData)(4U))
                                           : ((1U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                                           >> 0x2bU))))
                                               ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e) 
                                                  - (IData)(3U))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                                               >> 0x2cU))))
                                                   ? 
                                                  ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e) 
                                                   - (IData)(2U))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                                                >> 0x2dU))))
                                                    ? 
                                                   ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e) 
                                                    - (IData)(1U))
                                                    : (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e)))))));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__norm1__DOT__in_e 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0_out 
        = (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_mantissa)));
    vlSelf->simtop__DOT__core__DOT__trace_wen1 = vlSelf->simtop__DOT__trace_wen1;
    vlSelf->simtop__DOT__core__DOT__trace_wen0 = vlSelf->simtop__DOT__trace_wen0;
    vlSelf->simtop__DOT__core__DOT__instr0_allow_issue 
        = (1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__p0_hazard)));
    vlSelf->simtop__DOT__core__DOT__instr1_allow_issue 
        = (1U & ((((IData)(vlSelf->simtop__DOT__core__DOT__dual_issue) 
                   & (~ (IData)(vlSelf->simtop__DOT__core__DOT__p0_hazard))) 
                  | (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_valid))) 
                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__p1_hazard))));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__out 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0_out;
    simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b 
        = (((~ (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0_out 
                >> 0x1fU)) << 0x1fU) | (0x7fffffffU 
                                        & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0_out));
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
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b 
        = simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C3 
           >> 0x1fU);
    if ((0U == (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C3 
                         >> 0x17U)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C3);
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C3);
    } else {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C3 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C3));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C3 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C3));
    }
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign 
        = (simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b 
           >> 0x1fU);
    if ((0U == (0xffU & (simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b 
                         >> 0x17U)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa 
            = (0x7fffffU & simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b);
    } else {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent 
            = (0xffU & (simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b));
    }
    if (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent) 
         == (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent;
        if (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign) 
             == (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign))) {
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
                                 + vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa));
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign 
                = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign;
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
                = (0x1000000U | vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa);
        } else if ((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
                    > vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa)) {
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
                                 - vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa));
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign 
                = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign;
        } else {
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa 
                                 - vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa));
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign 
                = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign;
        }
    } else if (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent) 
                > (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff 
            = (0xffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent) 
                        - (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff))
                ? (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa 
                                >> (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff)))
                : 0U);
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign) 
                              == (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign))
                              ? (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
                                 + vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa)
                              : (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
                                 - vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa)));
    } else if (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent) 
                < (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff 
            = (0xffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent) 
                        - (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff))
                ? (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
                                >> (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff)))
                : 0U);
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign) 
                              == (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign))
                              ? (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa 
                                 + vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa)
                              : (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa 
                                 - vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa)));
    }
    if ((0x1000000U & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa)) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
            = (0x1ffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
                             >> 1U));
    } else if (((~ (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
                    >> 0x17U)) & (0U != (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m;
    }
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
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
        = (0xffU & ((1U == (0x1fffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                         >> 3U))) ? 
                    ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                     - (IData)(0x14U)) : ((1U == (0xfffffU 
                                                  & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                     >> 4U)))
                                           ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                              - (IData)(0x13U))
                                           : ((1U == 
                                               (0x7ffffU 
                                                & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                   >> 5U)))
                                               ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                  - (IData)(0x12U))
                                               : ((1U 
                                                   == 
                                                   (0x3ffffU 
                                                    & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                       >> 6U)))
                                                   ? 
                                                  ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                   - (IData)(0x11U))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (0x1ffffU 
                                                     & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                        >> 7U)))
                                                    ? 
                                                   ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                    - (IData)(0x10U))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0xffffU 
                                                      & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                         >> 8U)))
                                                     ? 
                                                    ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                     - (IData)(0xfU))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x7fffU 
                                                       & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                          >> 9U)))
                                                      ? 
                                                     ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                      - (IData)(0xeU))
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (0x3fffU 
                                                        & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                           >> 0xaU)))
                                                       ? 
                                                      ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                       - (IData)(0xdU))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fffU 
                                                         & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                            >> 0xbU)))
                                                        ? 
                                                       ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                        - (IData)(0xcU))
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                             >> 0xcU)))
                                                         ? 
                                                        ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                         - (IData)(0xbU))
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0x7ffU 
                                                           & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                              >> 0xdU)))
                                                          ? 
                                                         ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                          - (IData)(0xaU))
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x3ffU 
                                                            & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                               >> 0xeU)))
                                                           ? 
                                                          ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                           - (IData)(9U))
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                                >> 0xfU)))
                                                            ? 
                                                           ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                            - (IData)(8U))
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                                 >> 0x10U)))
                                                             ? 
                                                            ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                             - (IData)(7U))
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x7fU 
                                                               & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                                  >> 0x11U)))
                                                              ? 
                                                             ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                              - (IData)(6U))
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                                   >> 0x12U)))
                                                               ? 
                                                              ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                               - (IData)(5U))
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                                    >> 0x13U)))
                                                                ? 
                                                               ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                                - (IData)(4U))
                                                                : 
                                                               ((1U 
                                                                 == 
                                                                 (0xfU 
                                                                  & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                                     >> 0x14U)))
                                                                 ? 
                                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                                 - (IData)(3U))
                                                                 : 
                                                                ((1U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                                      >> 0x15U)))
                                                                  ? 
                                                                 ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                                       >> 0x16U)))
                                                                   ? 
                                                                  ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                                                   - (IData)(1U))
                                                                   : (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e))))))))))))))))))))));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__in_e 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out 
        = (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa)));
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
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__out 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_sign 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_sign) 
           ^ (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_sign));
    if ((0U == (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out 
                         >> 0x17U)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out);
    } else {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out));
    }
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent 
        = (0xffU & (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_exponent) 
                     + (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_exponent)) 
                    - (IData)(0x7fU)));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_mantissa)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_mantissa))));
    if ((1U & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
                       >> 0x2fU)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
            = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
                                    >> 1U));
    } else if (((~ (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
                            >> 0x2eU))) & (0U != (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m;
    }
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_mantissa 
        = (0xffffffU & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
                                >> 0x17U)));
    vlSelf->simtop__DOT__core__DOT__if_pc_next = ((IData)(vlSelf->simtop__DOT__core__DOT__if_pc_redirect)
                                                   ? vlSelf->simtop__DOT__core__DOT__if_pc_redirect_target
                                                   : vlSelf->simtop__DOT__core__DOT__if_pc_plus4);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e 
        = (0xffU & ((1U == (0x3fU & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                             >> 0x29U))))
                     ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e) 
                        - (IData)(5U)) : ((1U == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                                             >> 0x2aU))))
                                           ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e) 
                                              - (IData)(4U))
                                           : ((1U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                                           >> 0x2bU))))
                                               ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e) 
                                                  - (IData)(3U))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                                               >> 0x2cU))))
                                                   ? 
                                                  ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e) 
                                                   - (IData)(2U))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                                                >> 0x2dU))))
                                                    ? 
                                                   ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e) 
                                                    - (IData)(1U))
                                                    : (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e)))))));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__norm1__DOT__in_e 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1 
        = (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_mantissa)));
    vlSelf->im_req_addr = vlSelf->simtop__DOT__core__DOT__if_pc_next;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__out 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__D 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_sign 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_sign) 
           ^ (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_sign));
    if ((0U == (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1 
                         >> 0x17U)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1);
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1);
    } else {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1));
    }
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent 
        = (0xffU & (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_exponent) 
                     + (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_exponent)) 
                    - (IData)(0x7fU)));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_mantissa)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_mantissa))));
    if ((1U & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
                       >> 0x2fU)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
            = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
                                    >> 1U));
    } else if (((~ (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
                            >> 0x2eU))) & (0U != (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m;
    }
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_mantissa 
        = (0xffffffU & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
                                >> 0x17U)));
    vlSelf->simtop__DOT__bios_cs = (0x1fffffU >= vlSelf->im_req_addr);
    vlSelf->simtop__DOT__im_req_addr = vlSelf->im_req_addr;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e 
        = (0xffU & ((1U == (0x3fU & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                             >> 0x29U))))
                     ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e) 
                        - (IData)(5U)) : ((1U == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                                             >> 0x2aU))))
                                           ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e) 
                                              - (IData)(4U))
                                           : ((1U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                                           >> 0x2bU))))
                                               ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e) 
                                                  - (IData)(3U))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                                               >> 0x2cU))))
                                                   ? 
                                                  ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e) 
                                                   - (IData)(2U))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                                                >> 0x2dU))))
                                                    ? 
                                                   ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e) 
                                                    - (IData)(1U))
                                                    : (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e)))))));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__norm1__DOT__in_e 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1_out 
        = (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_mantissa)));
    vlSelf->simtop__DOT__core__DOT__im_req_addr = vlSelf->simtop__DOT__im_req_addr;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__out 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1_out;
    simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b 
        = (((~ (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1_out 
                >> 0x1fU)) << 0x1fU) | (0x7fffffffU 
                                        & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1_out));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b 
        = simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C3 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign 
        = (simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b 
           >> 0x1fU);
    if ((0U == (0xffU & (simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b 
                         >> 0x17U)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa 
            = (0x7fffffU & simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b);
    } else {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent 
            = (0xffU & (simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b));
    }
    if (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent) 
         == (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent;
        if (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign) 
             == (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign))) {
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
                                 + vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa));
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign 
                = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign;
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
                = (0x1000000U | vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa);
        } else if ((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
                    > vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa)) {
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
                                 - vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa));
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign 
                = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign;
        } else {
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa 
                                 - vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa));
            vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign 
                = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign;
        }
    } else if (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent) 
                > (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff 
            = (0xffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent) 
                        - (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff))
                ? (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa 
                                >> (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff)))
                : 0U);
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign) 
                              == (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign))
                              ? (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
                                 + vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa)
                              : (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
                                 - vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa)));
    } else if (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent) 
                < (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff 
            = (0xffU & ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent) 
                        - (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff))
                ? (0xffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
                                >> (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff)))
                : 0U);
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign) 
                              == (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign))
                              ? (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa 
                                 + vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa)
                              : (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa 
                                 - vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa)));
    }
    if ((0x1000000U & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa)) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
            = (0x1ffffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
                             >> 1U));
    } else if (((~ (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
                    >> 0x17U)) & (0U != (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m;
    }
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
        = (0xffU & ((1U == (0x1fffffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                         >> 3U))) ? 
                    ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                     - (IData)(0x14U)) : ((1U == (0xfffffU 
                                                  & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                     >> 4U)))
                                           ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                              - (IData)(0x13U))
                                           : ((1U == 
                                               (0x7ffffU 
                                                & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                   >> 5U)))
                                               ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                  - (IData)(0x12U))
                                               : ((1U 
                                                   == 
                                                   (0x3ffffU 
                                                    & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                       >> 6U)))
                                                   ? 
                                                  ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                   - (IData)(0x11U))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (0x1ffffU 
                                                     & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                        >> 7U)))
                                                    ? 
                                                   ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                    - (IData)(0x10U))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0xffffU 
                                                      & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                         >> 8U)))
                                                     ? 
                                                    ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                     - (IData)(0xfU))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x7fffU 
                                                       & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                          >> 9U)))
                                                      ? 
                                                     ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                      - (IData)(0xeU))
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (0x3fffU 
                                                        & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                           >> 0xaU)))
                                                       ? 
                                                      ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                       - (IData)(0xdU))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fffU 
                                                         & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                            >> 0xbU)))
                                                        ? 
                                                       ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                        - (IData)(0xcU))
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                             >> 0xcU)))
                                                         ? 
                                                        ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                         - (IData)(0xbU))
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0x7ffU 
                                                           & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                              >> 0xdU)))
                                                          ? 
                                                         ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                          - (IData)(0xaU))
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x3ffU 
                                                            & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                               >> 0xeU)))
                                                           ? 
                                                          ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                           - (IData)(9U))
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                                >> 0xfU)))
                                                            ? 
                                                           ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                            - (IData)(8U))
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                                 >> 0x10U)))
                                                             ? 
                                                            ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                             - (IData)(7U))
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x7fU 
                                                               & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                                  >> 0x11U)))
                                                              ? 
                                                             ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                              - (IData)(6U))
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                                   >> 0x12U)))
                                                               ? 
                                                              ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                               - (IData)(5U))
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                                    >> 0x13U)))
                                                                ? 
                                                               ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                                - (IData)(4U))
                                                                : 
                                                               ((1U 
                                                                 == 
                                                                 (0xfU 
                                                                  & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                                     >> 0x14U)))
                                                                 ? 
                                                                ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                                 - (IData)(3U))
                                                                 : 
                                                                ((1U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                                      >> 0x15U)))
                                                                  ? 
                                                                 ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                                       >> 0x16U)))
                                                                   ? 
                                                                  ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                                                   - (IData)(1U))
                                                                   : (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e))))))))))))))))))))));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__in_e 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1_out 
        = (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa)));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__out 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1_out;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1_out;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1_out 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_sign 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_sign) 
           ^ (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_sign));
    if ((0U == (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1_out 
                         >> 0x17U)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1_out);
    } else {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1_out 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1_out));
    }
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent 
        = (0xffU & (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_exponent) 
                     + (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_exponent)) 
                    - (IData)(0x7fU)));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_mantissa)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_mantissa))));
    if ((1U & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
                       >> 0x2fU)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
            = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
                                    >> 1U));
    } else if (((~ (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
                            >> 0x2eU))) & (0U != (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m;
    }
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_mantissa 
        = (0xffffffU & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
                                >> 0x17U)));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e 
        = (0xffU & ((1U == (0x3fU & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                             >> 0x29U))))
                     ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e) 
                        - (IData)(5U)) : ((1U == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                                             >> 0x2aU))))
                                           ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e) 
                                              - (IData)(4U))
                                           : ((1U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                                           >> 0x2bU))))
                                               ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e) 
                                                  - (IData)(3U))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                                               >> 0x2cU))))
                                                   ? 
                                                  ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e) 
                                                   - (IData)(2U))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                                                >> 0x2dU))))
                                                    ? 
                                                   ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e) 
                                                    - (IData)(1U))
                                                    : (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e)))))));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__norm1__DOT__in_e 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N2 
        = (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_mantissa)));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__out 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N2;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__b_reciprocal 
        = ((0xff800000U & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__b_reciprocal) 
           | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N2));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__out 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__b_reciprocal;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__b 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__b_reciprocal;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__a_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__divider_a_in 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__b_sign 
        = (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__b_reciprocal 
           >> 0x1fU);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_sign 
        = ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__a_sign) 
           ^ (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__b_sign));
    if ((0U == (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__divider_a_in 
                         >> 0x17U)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__a_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__divider_a_in);
    } else {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__a_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__divider_a_in 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__divider_a_in));
    }
    if ((0U == (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__b_reciprocal 
                         >> 0x17U)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__b_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__b_reciprocal);
    } else {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__b_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__b_reciprocal 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__b_reciprocal));
    }
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_exponent 
        = (0xffU & (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__a_exponent) 
                     + (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__b_exponent)) 
                    - (IData)(0x7fU)));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__product 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__a_mantissa)) 
                                * (QData)((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__b_mantissa))));
    if ((1U & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__product 
                       >> 0x2fU)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_exponent)));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__product 
            = (0xffffffffffffULL & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__product 
                                    >> 1U));
    } else if (((~ (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__product 
                            >> 0x2eU))) & (0U != (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_exponent)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_e 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_exponent;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_m 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__product;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_exponent 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_e;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__product 
            = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_m;
    }
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_mantissa 
        = (0xffffffU & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__product 
                                >> 0x17U)));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_e 
        = (0xffU & ((1U == (0x3fU & (IData)((vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_m 
                                             >> 0x29U))))
                     ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_e) 
                        - (IData)(5U)) : ((1U == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_m 
                                                             >> 0x2aU))))
                                           ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_e) 
                                              - (IData)(4U))
                                           : ((1U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_m 
                                                           >> 0x2bU))))
                                               ? ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_e) 
                                                  - (IData)(3U))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_m 
                                                               >> 0x2cU))))
                                                   ? 
                                                  ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_e) 
                                                   - (IData)(2U))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_m 
                                                                >> 0x2dU))))
                                                    ? 
                                                   ((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_e) 
                                                    - (IData)(1U))
                                                    : (IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_e)))))));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__norm1__DOT__in_e 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_e;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__divider_out 
        = (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_mantissa)));
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__out 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__divider_out;
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__out 
        = vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__out;
}
