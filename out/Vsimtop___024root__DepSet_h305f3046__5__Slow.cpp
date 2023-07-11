// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimtop.h for the primary calling header

#include "verilated.h"

#include "Vsimtop___024root.h"

VL_ATTR_COLD void Vsimtop___024root___settle__TOP__9(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___settle__TOP__9\n"); );
    // Body
    vlSelf->simtop__DOT__core__DOT__id_dec0_opl = vlSelf->simtop__DOT__core__DOT__id_instr0_rl;
    if (vlSelf->simtop__DOT__core__DOT__id_instr0_valid) {
        if ((0x8000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
            if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
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
                vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                    = (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext12 
                       << 1U);
            } else if ((0x1000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                    = (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_zext 
                       << 1U);
            } else if ((0x800U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                            = (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext 
                               << 1U);
                    }
                } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                        vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                            = (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext 
                               << 1U);
                    }
                } else {
                    vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                        = ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))
                            ? (vlSelf->simtop__DOT__core__DOT__du0__DOT__imm_sext 
                               << 1U) : vlSelf->simtop__DOT__core__DOT__id_instr0_r0);
                }
            }
        } else if ((0x4000U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
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
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 4U)))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
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
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 3U)))) {
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
                } else if ((0x400U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
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
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 3U)))) {
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
                } else if ((0x200U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
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
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 3U)))) {
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
                } else if ((0x100U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
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
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                                 >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 3U)))) {
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
                } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                     >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                  >> 6U)))) {
                        if ((0x20U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
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
                        } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                             >> 4U)))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                        if ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec0_opl 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr0_npc;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->simtop__DOT__core__DOT__id_instr0_raw) 
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
    vlSelf->simtop__DOT__core__DOT__du1__DOT__in_r0 
        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
    vlSelf->simtop__DOT__core__DOT__id_dec1_oph = vlSelf->simtop__DOT__core__DOT__id_instr1_rh;
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
                            : vlSelf->simtop__DOT__core__DOT__id_instr1_r0);
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
                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                        }
                                                    } else {
                                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                    }
                                                } else {
                                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                                }
                                            } else {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                                vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
                                                    = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                            }
                                        } else {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                            vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                                = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                        }
                                    } else {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                            if ((4U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                if ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->simtop__DOT__core__DOT__id_instr1_raw)))) {
                                        vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                            = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
                                    }
                                } else {
                                    vlSelf->simtop__DOT__core__DOT__id_dec1_oph 
                                        = vlSelf->simtop__DOT__core__DOT__id_instr1_r0;
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
    vlSelf->simtop__DOT__core__DOT__im_req_addr = vlSelf->simtop__DOT__im_req_addr;
    vlSelf->simtop__DOT__core__DOT__trace_wdata1 = vlSelf->simtop__DOT__trace_wdata1;
    vlSelf->simtop__DOT__core__DOT__trace_wdata0 = vlSelf->simtop__DOT__trace_wdata0;
    vlSelf->simtop__DOT__core__DOT__id_instr0_oph = vlSelf->simtop__DOT__core__DOT__id_dec0_oph;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_oph 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_oph;
    vlSelf->simtop__DOT__core__DOT__id_instr0_opl = vlSelf->simtop__DOT__core__DOT__id_dec0_opl;
    vlSelf->simtop__DOT__core__DOT__du0__DOT__out_opl 
        = vlSelf->simtop__DOT__core__DOT__id_dec0_opl;
    vlSelf->simtop__DOT__core__DOT__id_instr1_oph = vlSelf->simtop__DOT__core__DOT__id_dec1_oph;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_oph 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_oph;
    vlSelf->simtop__DOT__core__DOT__id_instr1_opl = vlSelf->simtop__DOT__core__DOT__id_dec1_opl;
    vlSelf->simtop__DOT__core__DOT__du1__DOT__out_opl 
        = vlSelf->simtop__DOT__core__DOT__id_dec1_opl;
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
    if ((0U == (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1 
                         >> 0x17U)))) {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_exponent = 1U;
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1);
    } else {
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_exponent 
            = (0xffU & (vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1 
                        >> 0x17U));
        vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1));
    }
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

VL_ATTR_COLD void Vsimtop___024root___initial__TOP__0(Vsimtop___024root* vlSelf);

VL_ATTR_COLD void Vsimtop___024root___eval_initial(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_initial\n"); );
    // Body
    Vsimtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__simtop__DOT____Vcellinp__pvr__reset_n 
        = vlSelf->__VinpClk__TOP__simtop__DOT____Vcellinp__pvr__reset_n;
}

VL_ATTR_COLD void Vsimtop___024root___settle__TOP__0(Vsimtop___024root* vlSelf);
VL_ATTR_COLD void Vsimtop___024root___settle__TOP__1(Vsimtop___024root* vlSelf);
VL_ATTR_COLD void Vsimtop___024root___settle__TOP__2(Vsimtop___024root* vlSelf);
VL_ATTR_COLD void Vsimtop___024root___settle__TOP__3(Vsimtop___024root* vlSelf);
VL_ATTR_COLD void Vsimtop___024root___settle__TOP__4(Vsimtop___024root* vlSelf);
VL_ATTR_COLD void Vsimtop___024root___settle__TOP__5(Vsimtop___024root* vlSelf);
VL_ATTR_COLD void Vsimtop___024root___settle__TOP__6(Vsimtop___024root* vlSelf);
VL_ATTR_COLD void Vsimtop___024root___settle__TOP__7(Vsimtop___024root* vlSelf);
VL_ATTR_COLD void Vsimtop___024root___settle__TOP__8(Vsimtop___024root* vlSelf);

VL_ATTR_COLD void Vsimtop___024root___eval_settle(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval_settle\n"); );
    // Body
    Vsimtop___024root___settle__TOP__0(vlSelf);
    Vsimtop___024root___settle__TOP__1(vlSelf);
    Vsimtop___024root___settle__TOP__2(vlSelf);
    Vsimtop___024root___settle__TOP__3(vlSelf);
    Vsimtop___024root___settle__TOP__4(vlSelf);
    Vsimtop___024root___settle__TOP__5(vlSelf);
    Vsimtop___024root___settle__TOP__6(vlSelf);
    Vsimtop___024root___settle__TOP__7(vlSelf);
    Vsimtop___024root___settle__TOP__8(vlSelf);
    Vsimtop___024root___settle__TOP__9(vlSelf);
}

VL_ATTR_COLD void Vsimtop___024root___final(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___final\n"); );
}

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
    vlSelf->simtop__DOT____Vcellinp__pvr__reset_n = VL_RAND_RESET_I(1);
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
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__rf_rsrc[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
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
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
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
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
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
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_array_b0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
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
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_wl[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
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
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
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
    vlSelf->simtop__DOT__pvr__DOT__ol_vram_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ol_vram_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ol_vram_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__ol_vram_din = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ol_control = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__isp_vram_din = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__fpu_a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__fpu_b = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__fpu_op = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__fpu_res = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v1_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v2_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v3_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v4_x = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__x1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__x2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__x3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v1_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v2_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v3_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__v4_y = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__y1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__y2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__y3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__x1_sub_x3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__y2_sub_y3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__y1_sub_y3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__x2_sub_x3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__x1x3_mul_y2y3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__y1y3_mul_x2x3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__area = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__trig_calcs = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__calc_state = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__delay = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__sgn = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_trig = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__FPU_PARAM_CFG = VL_RAND_RESET_I(32);
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
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_opaque = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_opaque_mod = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_trans = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_trans_mod = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_puncht = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ra_cont_last = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ra_cont_zclear = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ra_cont_flush = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ra_cont_tiley = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ra_cont_tilex = VL_RAND_RESET_I(6);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ra_opaque = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ra_opaque_mod = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ra_trans = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ra_trans_mod = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ra_puncht = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ra_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ol_vram_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ol_vram_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ol_vram_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ol_vram_din = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ol_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ol_control = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ol_type = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__ol_parser_inst__DOT__ol_state = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_trig = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_rd = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_wr = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_din = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_entry_valid = VL_RAND_RESET_I(1);
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_cont = VL_RAND_RESET_I(32);
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
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt = VL_RAND_RESET_I(4);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__op = VL_RAND_RESET_I(2);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__O = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__o_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__o_mantissa = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__adder_a_in = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__adder_b_in = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__adder_out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__multiplier_a_in = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__multiplier_b_in = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__multiplier_out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__divider_a_in = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__divider_b_in = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__divider_out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__ADD = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__SUB = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__DIV = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__MUL = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__a_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__b_is_nan = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__a_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__b_is_zero = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__a_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__b_is_inf = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__o_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__o_mantissa = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__diff = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__tmp_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__tmp_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__i_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__i_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__o_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__norm1__DOT__in_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__norm1__DOT__in_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__norm1__DOT__out_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__norm1__DOT__out_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__o_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__o_mantissa = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__product = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__i_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__o_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__norm1__DOT__in_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__norm1__DOT__in_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__norm1__DOT__out_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__norm1__DOT__out_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__b_reciprocal = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__in = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__D = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__C3 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N0 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N1 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__N2 = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D_out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0_out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1_out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1_out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0_in = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_mantissa = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__product = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__norm1__DOT__in_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__norm1__DOT__in_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__norm1__DOT__out_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__norm1__DOT__out_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__in_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__in_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__out_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__out_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_mantissa = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__norm1__DOT__in_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__norm1__DOT__in_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__norm1__DOT__out_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__norm1__DOT__out_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__in_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__in_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__out_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__out_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_mantissa = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__norm1__DOT__in_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__norm1__DOT__in_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__norm1__DOT__out_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__norm1__DOT__out_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_mantissa = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__norm1__DOT__in_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__norm1__DOT__in_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__norm1__DOT__out_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__norm1__DOT__out_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__in_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__in_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__out_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__out_m = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_mantissa = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__norm1__DOT__in_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__norm1__DOT__in_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__norm1__DOT__out_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__norm1__DOT__out_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_sign = VL_RAND_RESET_I(1);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_exponent = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_mantissa = VL_RAND_RESET_I(25);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__product = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__norm1__DOT__in_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__norm1__DOT__in_m = VL_RAND_RESET_Q(48);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__norm1__DOT__out_e = VL_RAND_RESET_I(8);
    vlSelf->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__norm1__DOT__out_m = VL_RAND_RESET_Q(48);
    vlSelf->__Vdly__simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simtop__DOT__pvr__DOT__ra_vram_addr = VL_RAND_RESET_I(24);
    vlSelf->__VinpClk__TOP__simtop__DOT____Vcellinp__pvr__reset_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__simtop__DOT____Vcellinp__pvr__reset_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__i_m = VL_RAND_RESET_I(25);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__M1__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m = VL_RAND_RESET_I(25);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m = VL_RAND_RESET_I(25);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m = VL_RAND_RESET_I(25);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__i_m = VL_RAND_RESET_Q(48);
    vlSelf->__Vchglast__TOP__simtop__DOT__pvr__DOT__my_fpu_inst__DOT__D1__DOT__mult__DOT__o_e = VL_RAND_RESET_I(8);
}
