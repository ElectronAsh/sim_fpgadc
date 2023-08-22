// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimtop.h for the primary calling header

#include "verilated.h"

#include "Vsimtop__Syms.h"
#include "Vsimtop___024root.h"

VL_ATTR_COLD void Vsimtop___024root___stl_sequent__TOP__4(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___stl_sequent__TOP__4\n"); );
    // Body
    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = 0U;
    vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = 0U;
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
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((0x40U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 6U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 4U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x40U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 5U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x40U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 6U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 4U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x40U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                     >> 1U)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 6U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 4U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 7U)))) {
                                        if ((0x40U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 5U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 6U)))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 5U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 6U)))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 6U)))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 5U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                        }
                                    }
                                }
                            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 4U)))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 5U)))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 5U)))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 4U)))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 5U)))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 5U)))) {
                                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_fp_ls_use_rh = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                     >> 0xcU)))) {
                    if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 0xaU)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 9U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 8U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                         >> 0xaU)))) {
                        if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 8U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 0xcU)))) {
                        if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                            }
                        } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 8U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                            }
                        } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 8U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                 >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                              >> 0xcU)))) {
                    if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 0xaU)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 9U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 8U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                         >> 0xaU)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 9U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                          >> 0xeU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 0xcU)))) {
                        if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = 1U;
                                }
                            } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = 1U;
                                }
                            } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = 1U;
                            }
                        }
                    }
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_r0 = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_fpul = 1U;
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
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                  >> 0xcU)))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = 1U;
                                    }
                                }
                            }
                        }
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
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                        >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 3U)))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                }
                            }
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
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                            }
                                        }
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                                }
                                            }
                                        }
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                            }
                                        }
                                    }
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                            }
                                        }
                                    }
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
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
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                            }
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                    }
                                }
                            }
                        } else {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_csr = 1U;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = 1U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                            } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                        } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                     >> 0xcU)))) {
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
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 5U)))) {
                                                if (
                                                    (0x10U 
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
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
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec1_write_t = 1U;
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
                    if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 4U)))) {
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
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
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = 1U;
                                                    }
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
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
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
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = 1U;
                                                    }
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
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
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
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = 1U;
                                                    }
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
                                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
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
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = 1U;
                                                    }
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
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_t = 1U;
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
                                        if ((0x10U 
                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
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
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                    }
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 4U)))) {
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
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
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                    }
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 4U)))) {
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
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
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                    }
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 4U)))) {
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                            >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
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
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                         & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                    }
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 4U)))) {
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                    }
                                }
                            }
                        } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
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
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_use_csr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->simtop__DOT__core__DOT__replay_delayslot_miss 
        = ((IData)(vlSelf->simtop__DOT__core__DOT__replay_icache_miss) 
           & (IData)(vlSelf->simtop__DOT__core__DOT__id_is_delayslot));
    if (vlSelf->simtop__DOT__core__DOT__id_instr0_valid) {
        vlSelf->simtop__DOT__core__DOT__du0__DOT__in_valid = 1U;
        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 0U;
        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 1U;
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
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                                }
                                                            } else if (
                                                                       (1U 
                                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                            }
                                                        }
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                                 >> 1U)))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                                = 
                                                                ((1U 
                                                                  & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                                  ? 2U
                                                                  : 1U);
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                            = 
                                                            ((2U 
                                                              & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                              ? 
                                                             ((1U 
                                                               & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                               ? 3U
                                                               : 6U)
                                                              : 
                                                             ((1U 
                                                               & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                               ? 8U
                                                               : 0U));
                                                    }
                                                } else if (
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                            = 
                                                            ((1U 
                                                              & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                              ? 2U
                                                              : 1U);
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                        = 
                                                        ((2U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                           ? 3U
                                                           : 6U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                           ? 8U
                                                           : 0U));
                                                }
                                            } else if (
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                        }
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                            = 
                                                            ((1U 
                                                              & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                              ? 2U
                                                              : 1U);
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                        = 
                                                        ((2U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                           ? 3U
                                                           : 6U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                           ? 8U
                                                           : 0U));
                                                }
                                            } else if (
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 7U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 7U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 4U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
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
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                        }
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                             >> 1U)))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                            = 
                                                            ((1U 
                                                              & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                              ? 2U
                                                              : 1U);
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                        = 
                                                        ((2U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                           ? 3U
                                                           : 6U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                           ? 8U
                                                           : 0U));
                                                }
                                            } else if (
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 0xaU;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 0xbU;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 7U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 7U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 4U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 7U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 7U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 4U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
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
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                         >> 1U)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                          ? 2U
                                                          : 1U);
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 3U
                                                       : 6U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                       ? 8U
                                                       : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 0xaU;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 0xbU;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 7U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 7U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 4U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                        }
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 2U : 1U);
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                    = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                        ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 3U : 6U)
                                        : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 8U : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 7U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 7U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 4U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                        }
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 2U : 1U);
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                    = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                        ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 3U : 6U)
                                        : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 8U : 0U));
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
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                     >> 1U)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                      ? 2U
                                                      : 1U);
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 3U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                     ? 8U
                                                     : 0U));
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 0xaU;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 0xbU;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                        }
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 2U : 1U);
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                    = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                        ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 3U : 6U)
                                        : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 8U : 0U));
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
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 2U
                                                    : 1U);
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((2U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 3U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                    ? 8U
                                                    : 0U));
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 7U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                        }
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 2U : 1U);
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                    = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                        ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 3U : 6U)
                                        : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 8U : 0U));
                            }
                        } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                            }
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 7U;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                            = ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 2U
                                                : 1U);
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 3U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                                ? 8U
                                                : 0U));
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                        }
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 4U;
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 2U : 1U);
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                    = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                        ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 3U : 6U)
                                        : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 8U : 0U));
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                        }
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 1U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                        = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 2U : 1U);
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                    = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                        ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 3U : 6U)
                                        : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                            ? 8U : 0U));
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 5U;
                                    }
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                    = ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                        ? 2U : 1U);
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op 
                                = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                    ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                        ? 3U : 6U) : 
                                   ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                                     ? 8U : 0U));
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                 >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 0xcU)))) {
                    if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 8U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 8U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                    }
                }
            }
        } else if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                          >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 0xcU)))) {
                    if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                    >> 1U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 2U)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x2000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
            if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                 >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                             >> 0xcU)))) {
            if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 1U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                    }
                }
            } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 1U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                    }
                }
            } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 1U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                    }
                }
            } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 1U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 1U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                    }
                }
            } else if ((0x80U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 2U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 1U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                    }
                }
            } else if ((0x40U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                          >> 2U)))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 2U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                    }
                } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                    }
                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    } else {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                    vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                                }
                            } else if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                     >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 1U)))) {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                            }
                        } else {
                            vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                 >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 1U)))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 0U;
                    }
                }
            }
        }
    } else {
        vlSelf->simtop__DOT__core__DOT__du0__DOT__in_valid = 0U;
        vlSelf->simtop__DOT__core__DOT__id_dec0_fp_op = 0U;
        vlSelf->simtop__DOT__core__DOT__id_dec0_legal = 1U;
    }
}
