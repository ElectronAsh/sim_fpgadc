// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimtop.h for the primary calling header

#include "verilated.h"

#include "Vsimtop__Syms.h"
#include "Vsimtop___024root.h"

// Parameter definitions for Vsimtop___024root
constexpr CData/*1:0*/ Vsimtop___024root::simtop__DOT__core__DOT__lsu__DOT__SZ_BYTE;
constexpr CData/*1:0*/ Vsimtop___024root::simtop__DOT__core__DOT__lsu__DOT__SZ_WORD;
constexpr CData/*1:0*/ Vsimtop___024root::simtop__DOT__core__DOT__lsu__DOT__SZ_LONG;
constexpr CData/*1:0*/ Vsimtop___024root::simtop__DOT__core__DOT__lsu__DOT__SZ_DOUBLE;
constexpr CData/*0:0*/ Vsimtop___024root::simtop__DOT__core__DOT__lsu__DOT__AMO_READ;
constexpr CData/*0:0*/ Vsimtop___024root::simtop__DOT__core__DOT__lsu__DOT__AMO_WRITE;
constexpr CData/*1:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FPU_ADD;
constexpr CData/*1:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FPU_SUB;
constexpr CData/*1:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FPU_DIV;
constexpr CData/*1:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FPU_MUL;
constexpr CData/*7:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__delay_amt;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__ID_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__REVISION_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SOFTRESET_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__STARTRENDER_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TEST_SELECT_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__PARAM_BASE_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__REGION_BASE_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SPAN_SORT_CFG_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__VO_BORDER_COL_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FB_R_CTRL_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FB_W_CTRL_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FB_W_LINESTRIDE_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FB_R_SOF1_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FB_R_SOF2_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FB_R_SIZE_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FB_W_SOF1_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FB_W_SOF2_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FB_X_CLIP_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FB_Y_CLIP_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FPU_SHAD_SCALE_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FPU_CULL_VAL_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FPU_PARAM_CFG_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__HALF_OFFSET_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FPU_PERP_VAL_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__ISP_BACKGND_D_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__ISP_BACKGND_T_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__ISP_FEED_CFG_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SDRAM_REFRESH_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SDRAM_ARB_CFG_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SDRAM_CFG_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FOG_COL_RAM_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FOG_COL_VERT_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FOG_DENSITY_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FOG_CLAMP_MAX_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FOG_CLAMP_MIN_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SPG_TRIGGER_POS_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SPG_HBLANK_INT_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SPG_VBLANK_INT_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SPG_CONTROL_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SPG_HBLANK_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SPG_LOAD_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SPG_VBLANK_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SPG_WIDTH_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TEXT_CONTROL_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__VO_CONTROL_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__VO_STARTX_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__VO_STARTY_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SCALER_CTL_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__PAL_RAM_CTRL_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__SPG_STATUS_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FB_BURSTCTRL_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FB_C_SOF_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__Y_COEFF_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__PT_ALPHA_REF_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_OL_BASE_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_ISP_BASE_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_OL_LIMIT_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_ISP_LIMIT_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_NEXT_OPB_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_ISP_CURRENT_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_GLOB_TILE_CLIP_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_ALLOC_CTRL_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_LIST_INIT_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_YUV_TEX_BASE_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_YUV_TEX_CTRL_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_YUV_TEX_CNT_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_LIST_CONT_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_NEXT_OPB_INIT_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FOG_TABLE_START_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__FOG_TABLE_END_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_OL_POINTERS_START_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__TA_OL_POINTERS_END_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__PALETTE_RAM_START_addr;
constexpr SData/*15:0*/ Vsimtop___024root::simtop__DOT__pvr__DOT__PALETTE_RAM_END_addr;
constexpr IData/*31:0*/ Vsimtop___024root::simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__WIDTH;
constexpr IData/*31:0*/ Vsimtop___024root::simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__SWIDTH;
constexpr IData/*31:0*/ Vsimtop___024root::simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_a__DOT__SWIDTH_BOUNDED;
constexpr IData/*31:0*/ Vsimtop___024root::simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__WIDTH;
constexpr IData/*31:0*/ Vsimtop___024root::simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__SWIDTH;
constexpr IData/*31:0*/ Vsimtop___024root::simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__rsh_b__DOT__SWIDTH_BOUNDED;
constexpr IData/*31:0*/ Vsimtop___024root::simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__WIDTH;
constexpr IData/*31:0*/ Vsimtop___024root::simtop__DOT__core__DOT__fpu__DOT__fpu_fma__DOT__fadd__DOT__clz__DOT__SWIDTH;


void Vsimtop___024root___ctor_var_reset(Vsimtop___024root* vlSelf);

Vsimtop___024root::Vsimtop___024root(Vsimtop__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsimtop___024root___ctor_var_reset(this);
}

void Vsimtop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsimtop___024root::~Vsimtop___024root() {
}
