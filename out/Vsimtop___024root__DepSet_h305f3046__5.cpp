// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimtop.h for the primary calling header

#include "verilated.h"

#include "Vsimtop___024root.h"

VL_INLINE_OPT void Vsimtop___024root___sequent__TOP__4(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___sequent__TOP__4\n"); );
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
    vlSelf->simtop__DOT____Vcellinp__pvr__reset_n = 
        (1U & (~ (IData)(vlSelf->simtop__DOT__rst_reg)));
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
    vlSelf->simtop__DOT__pvr__DOT__pvr_addr = (0xffffU 
                                               & (vlSelf->dm_req_addr 
                                                  >> 0U));
    vlSelf->simtop__DOT__dm_req_addr = vlSelf->dm_req_addr;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte 
        = ((0xfcU & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte)) 
           | (((1U == (7U & vlSelf->dm_req_addr)) << 1U) 
              | (0U == (7U & vlSelf->dm_req_addr))));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte 
        = ((0xf3U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte)) 
           | (((3U == (7U & vlSelf->dm_req_addr)) << 3U) 
              | ((2U == (7U & vlSelf->dm_req_addr)) 
                 << 2U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte 
        = ((0xcfU & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte)) 
           | (((5U == (7U & vlSelf->dm_req_addr)) << 5U) 
              | ((4U == (7U & vlSelf->dm_req_addr)) 
                 << 4U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte 
        = ((0x3fU & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte)) 
           | (((7U == (7U & vlSelf->dm_req_addr)) << 7U) 
              | ((6U == (7U & vlSelf->dm_req_addr)) 
                 << 6U)));
    vlSelf->simtop__DOT__req_addr = (0x1fffffffU & vlSelf->dm_req_addr);
    vlSelf->simtop__DOT__core__DOT__dm_req_wdata = vlSelf->simtop__DOT__dm_req_wdata;
    vlSelf->simtop__DOT__core__DOT__dm_req_addr = vlSelf->simtop__DOT__dm_req_addr;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_long 
        = ((0xf0U & ((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte) 
                                       >> 4U)))) << 4U)) 
           | (0xfU & (- (IData)((1U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte))))));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_word 
        = ((0xf0U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_word)) 
           | ((0xcU & ((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte) 
                                         >> 2U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte)))))));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_word 
        = ((0xfU & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_word)) 
           | ((0xc0U & ((- (IData)((1U & ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte) 
                                          >> 6U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte) 
                                                           >> 4U)))) 
                                            << 4U))));
    vlSelf->dm_req_wmask = ((2U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))
                             ? ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))
                                 ? 0xffU : (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_long))
                             : ((1U & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__rwsize))
                                 ? (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_word)
                                 : (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_wmask_byte)));
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
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_wdata 
        = vlSelf->simtop__DOT__core__DOT__dm_req_wdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_addr 
        = vlSelf->simtop__DOT__core__DOT__dm_req_addr;
    vlSelf->simtop__DOT__pvr__DOT__ta_fifo_cs = vlSelf->simtop__DOT__ta_fifo_cs;
    vlSelf->simtop__DOT__pvr__DOT__ta_yuv_cs = vlSelf->simtop__DOT__ta_yuv_cs;
    vlSelf->simtop__DOT__pvr__DOT__ta_tex_cs = vlSelf->simtop__DOT__ta_tex_cs;
    vlSelf->simtop__DOT__pvr__DOT__pvr_reg_cs = vlSelf->simtop__DOT__pvr_reg_cs;
    vlSelf->simtop__DOT__dm_req_wmask = vlSelf->dm_req_wmask;
    vlSelf->simtop__DOT__core__DOT__dm_req_wmask = vlSelf->simtop__DOT__dm_req_wmask;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_req_wmask 
        = vlSelf->simtop__DOT__core__DOT__dm_req_wmask;
}

VL_INLINE_OPT void Vsimtop___024root___sequent__TOP__5(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___sequent__TOP__5\n"); );
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
}

VL_INLINE_OPT void Vsimtop___024root___combo__TOP__9(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___combo__TOP__9\n"); );
    // Body
    vlSelf->simtop__DOT__sh4_dm_rdata = ((IData)(vlSelf->simtop__DOT__pvr_reg_cs)
                                          ? vlSelf->simtop__DOT__pvr_dout
                                          : vlSelf->dm_resp_rdata);
    vlSelf->simtop__DOT__core__DOT__dm_resp_rdata = vlSelf->simtop__DOT__sh4_dm_rdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd 
        = vlSelf->simtop__DOT__sh4_dm_rdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__dm_resp_rdata 
        = vlSelf->simtop__DOT__core__DOT__dm_resp_rdata;
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_ll[0U] 
        = (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd);
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_ll[1U] 
        = (IData)((vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd 
                   >> 0x20U));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_wl[0U] 
        = (0xffffU & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_wl[1U] 
        = (0xffffU & (IData)((vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd 
                              >> 0x10U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_wl[2U] 
        = (0xffffU & (IData)((vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd 
                              >> 0x20U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_wl[3U] 
        = (0xffffU & (IData)((vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd 
                              >> 0x30U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[0U] 
        = (0xffU & (IData)(vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[1U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd 
                            >> 8U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[2U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd 
                            >> 0x10U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[3U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd 
                            >> 0x18U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[4U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd 
                            >> 0x20U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[5U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd 
                            >> 0x28U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[6U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd 
                            >> 0x30U)));
    vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd_bl[7U] 
        = (0xffU & (IData)((vlSelf->simtop__DOT__core__DOT__lsu__DOT__mem_rd 
                            >> 0x38U)));
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
    vlSelf->simtop__DOT__core__DOT__e2_flags_wb = (
                                                   (0xcU 
                                                    & (vlSelf->simtop__DOT__core__DOT__e2_csr_wdata 
                                                       >> 6U)) 
                                                   | (3U 
                                                      & vlSelf->simtop__DOT__core__DOT__e2_csr_wdata));
    vlSelf->simtop__DOT__core__DOT__fprf__DOT__rf_wdata1 
        = vlSelf->simtop__DOT__core__DOT__fprf_wdata1;
    vlSelf->simtop__DOT__core__DOT__rf_wdata1 = vlSelf->simtop__DOT__core__DOT__e2_p1_wdata;
    vlSelf->simtop__DOT__core__DOT__rf_wdata0 = vlSelf->simtop__DOT__core__DOT__e2_p0_wdata;
    vlSelf->simtop__DOT__core__DOT__id_instr_rs[0U] 
        = (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
            & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
               == vlSelf->simtop__DOT__core__DOT__rf_rsrc
               [0U])) ? vlSelf->simtop__DOT__core__DOT__e1_p1_wdata
            : (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
                   == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                   [0U])) ? vlSelf->simtop__DOT__core__DOT__e1_p0_wdata
                : (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wen) 
                    & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wdst) 
                       == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                       [0U])) ? vlSelf->simtop__DOT__core__DOT__e2_p1_wdata
                    : (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wen) 
                        & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wdst) 
                           == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                           [0U])) ? vlSelf->simtop__DOT__core__DOT__e2_p0_wdata
                        : vlSelf->simtop__DOT__core__DOT__rf_rdata
                       [0U]))));
    vlSelf->simtop__DOT__core__DOT__id_instr_rs[1U] 
        = (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
            & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
               == vlSelf->simtop__DOT__core__DOT__rf_rsrc
               [1U])) ? vlSelf->simtop__DOT__core__DOT__e1_p1_wdata
            : (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
                   == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                   [1U])) ? vlSelf->simtop__DOT__core__DOT__e1_p0_wdata
                : (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wen) 
                    & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wdst) 
                       == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                       [1U])) ? vlSelf->simtop__DOT__core__DOT__e2_p1_wdata
                    : (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wen) 
                        & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wdst) 
                           == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                           [1U])) ? vlSelf->simtop__DOT__core__DOT__e2_p0_wdata
                        : vlSelf->simtop__DOT__core__DOT__rf_rdata
                       [1U]))));
    vlSelf->simtop__DOT__core__DOT__id_instr_rs[2U] 
        = (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
            & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
               == vlSelf->simtop__DOT__core__DOT__rf_rsrc
               [2U])) ? vlSelf->simtop__DOT__core__DOT__e1_p1_wdata
            : (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
                   == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                   [2U])) ? vlSelf->simtop__DOT__core__DOT__e1_p0_wdata
                : (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wen) 
                    & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wdst) 
                       == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                       [2U])) ? vlSelf->simtop__DOT__core__DOT__e2_p1_wdata
                    : (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wen) 
                        & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wdst) 
                           == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                           [2U])) ? vlSelf->simtop__DOT__core__DOT__e2_p0_wdata
                        : vlSelf->simtop__DOT__core__DOT__rf_rdata
                       [2U]))));
    vlSelf->simtop__DOT__core__DOT__id_instr_rs[3U] 
        = (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
            & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
               == vlSelf->simtop__DOT__core__DOT__rf_rsrc
               [3U])) ? vlSelf->simtop__DOT__core__DOT__e1_p1_wdata
            : (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
                   == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                   [3U])) ? vlSelf->simtop__DOT__core__DOT__e1_p0_wdata
                : (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wen) 
                    & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wdst) 
                       == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                       [3U])) ? vlSelf->simtop__DOT__core__DOT__e2_p1_wdata
                    : (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wen) 
                        & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wdst) 
                           == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                           [3U])) ? vlSelf->simtop__DOT__core__DOT__e2_p0_wdata
                        : vlSelf->simtop__DOT__core__DOT__rf_rdata
                       [3U]))));
    vlSelf->simtop__DOT__core__DOT__id_instr_rs[4U] 
        = (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wen) 
            & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p1_wdst) 
               == vlSelf->simtop__DOT__core__DOT__rf_rsrc
               [4U])) ? vlSelf->simtop__DOT__core__DOT__e1_p1_wdata
            : (((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wen) 
                & ((IData)(vlSelf->simtop__DOT__core__DOT__e1_p0_wdst) 
                   == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                   [4U])) ? vlSelf->simtop__DOT__core__DOT__e1_p0_wdata
                : (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wen) 
                    & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p1_wdst) 
                       == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                       [4U])) ? vlSelf->simtop__DOT__core__DOT__e2_p1_wdata
                    : (((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wen) 
                        & ((IData)(vlSelf->simtop__DOT__core__DOT__e2_p0_wdst) 
                           == vlSelf->simtop__DOT__core__DOT__rf_rsrc
                           [4U])) ? vlSelf->simtop__DOT__core__DOT__e2_p0_wdata
                        : vlSelf->simtop__DOT__core__DOT__rf_rdata
                       [4U]))));
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdata1 
        = vlSelf->simtop__DOT__core__DOT__rf_wdata1;
    vlSelf->trace_wdata1 = vlSelf->simtop__DOT__core__DOT__rf_wdata1;
    vlSelf->simtop__DOT__core__DOT__rf__DOT__rf_wdata0 
        = vlSelf->simtop__DOT__core__DOT__rf_wdata0;
    vlSelf->trace_wdata0 = vlSelf->simtop__DOT__core__DOT__rf_wdata0;
    vlSelf->simtop__DOT__core__DOT__id_instr0_rh = 
        vlSelf->simtop__DOT__core__DOT__id_instr_rs
        [1U];
    vlSelf->simtop__DOT__core__DOT__id_instr1_rh = 
        vlSelf->simtop__DOT__core__DOT__id_instr_rs
        [3U];
    vlSelf->simtop__DOT__core__DOT__id_instr0_rl = 
        vlSelf->simtop__DOT__core__DOT__id_instr_rs
        [0U];
    vlSelf->simtop__DOT__core__DOT__id_instr1_rl = 
        vlSelf->simtop__DOT__core__DOT__id_instr_rs
        [2U];
    vlSelf->simtop__DOT__core__DOT__id_instr0_r0 = 
        vlSelf->simtop__DOT__core__DOT__id_instr_rs
        [4U];
    vlSelf->simtop__DOT__core__DOT__id_instr1_r0 = 
        vlSelf->simtop__DOT__core__DOT__id_instr_rs
        [4U];
    vlSelf->simtop__DOT__trace_wdata1 = vlSelf->trace_wdata1;
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
    vlSelf->simtop__DOT__core__DOT__id_dec0_oph = vlSelf->simtop__DOT__core__DOT__id_instr0_rh;
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
}

void Vsimtop___024root___combo__TOP__0(Vsimtop___024root* vlSelf);
void Vsimtop___024root___sequent__TOP__0(Vsimtop___024root* vlSelf);
void Vsimtop___024root___sequent__TOP__1(Vsimtop___024root* vlSelf);
void Vsimtop___024root___sequent__TOP__2(Vsimtop___024root* vlSelf);
void Vsimtop___024root___sequent__TOP__3(Vsimtop___024root* vlSelf);
void Vsimtop___024root___combo__TOP__1(Vsimtop___024root* vlSelf);
void Vsimtop___024root___combo__TOP__2(Vsimtop___024root* vlSelf);
void Vsimtop___024root___combo__TOP__3(Vsimtop___024root* vlSelf);
void Vsimtop___024root___combo__TOP__4(Vsimtop___024root* vlSelf);
void Vsimtop___024root___combo__TOP__5(Vsimtop___024root* vlSelf);
void Vsimtop___024root___combo__TOP__6(Vsimtop___024root* vlSelf);
void Vsimtop___024root___combo__TOP__7(Vsimtop___024root* vlSelf);
void Vsimtop___024root___combo__TOP__8(Vsimtop___024root* vlSelf);

void Vsimtop___024root___eval(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___eval\n"); );
    // Body
    Vsimtop___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsimtop___024root___sequent__TOP__0(vlSelf);
        Vsimtop___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__simtop__DOT____Vcellinp__pvr__reset_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__simtop__DOT____Vcellinp__pvr__reset_n)))) {
        Vsimtop___024root___sequent__TOP__2(vlSelf);
        Vsimtop___024root___sequent__TOP__3(vlSelf);
    }
    Vsimtop___024root___combo__TOP__1(vlSelf);
    Vsimtop___024root___combo__TOP__2(vlSelf);
    Vsimtop___024root___combo__TOP__3(vlSelf);
    Vsimtop___024root___combo__TOP__4(vlSelf);
    Vsimtop___024root___combo__TOP__5(vlSelf);
    Vsimtop___024root___combo__TOP__6(vlSelf);
    Vsimtop___024root___combo__TOP__7(vlSelf);
    Vsimtop___024root___combo__TOP__8(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsimtop___024root___sequent__TOP__4(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__simtop__DOT____Vcellinp__pvr__reset_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__simtop__DOT____Vcellinp__pvr__reset_n)))) {
        Vsimtop___024root___sequent__TOP__5(vlSelf);
    }
    Vsimtop___024root___combo__TOP__9(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__simtop__DOT____Vcellinp__pvr__reset_n 
        = vlSelf->__VinpClk__TOP__simtop__DOT____Vcellinp__pvr__reset_n;
    vlSelf->__VinpClk__TOP__simtop__DOT____Vcellinp__pvr__reset_n 
        = vlSelf->simtop__DOT____Vcellinp__pvr__reset_n;
}

QData Vsimtop___024root___change_request_1(Vsimtop___024root* vlSelf);

VL_INLINE_OPT QData Vsimtop___024root___change_request(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___change_request\n"); );
    // Body
    return (Vsimtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vsimtop___024root___change_request_1(Vsimtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->simtop__DOT____Vcellinp__pvr__reset_n ^ vlSelf->__Vchglast__TOP__simtop__DOT____Vcellinp__pvr__reset_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->simtop__DOT____Vcellinp__pvr__reset_n ^ vlSelf->__Vchglast__TOP__simtop__DOT____Vcellinp__pvr__reset_n))) VL_DBG_MSGF("        CHANGE: genrtl/pvr/pvr.v:6: simtop.__Vcellinp__pvr__reset_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__simtop__DOT____Vcellinp__pvr__reset_n 
        = vlSelf->simtop__DOT____Vcellinp__pvr__reset_n;
    return __req;
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
