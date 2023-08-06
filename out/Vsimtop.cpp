// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsimtop.h"
#include "Vsimtop__Syms.h"

//============================================================
// Constructors

Vsimtop::Vsimtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vsimtop__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , im_req_valid{vlSymsp->TOP.im_req_valid}
    , im_resp_valid{vlSymsp->TOP.im_resp_valid}
    , dm_req_wmask{vlSymsp->TOP.dm_req_wmask}
    , dm_req_wen{vlSymsp->TOP.dm_req_wen}
    , dm_req_valid{vlSymsp->TOP.dm_req_valid}
    , dm_resp_valid{vlSymsp->TOP.dm_resp_valid}
    , trace_valid0{vlSymsp->TOP.trace_valid0}
    , trace_wen0{vlSymsp->TOP.trace_wen0}
    , trace_wdst0{vlSymsp->TOP.trace_wdst0}
    , trace_valid1{vlSymsp->TOP.trace_valid1}
    , trace_wen1{vlSymsp->TOP.trace_wen1}
    , trace_wdst1{vlSymsp->TOP.trace_wdst1}
    , vram_rd{vlSymsp->TOP.vram_rd}
    , vram_wr{vlSymsp->TOP.vram_wr}
    , trace_instr0{vlSymsp->TOP.trace_instr0}
    , trace_instr1{vlSymsp->TOP.trace_instr1}
    , boot_vector{vlSymsp->TOP.boot_vector}
    , im_req_addr{vlSymsp->TOP.im_req_addr}
    , im_resp_rdata{vlSymsp->TOP.im_resp_rdata}
    , dm_req_addr{vlSymsp->TOP.dm_req_addr}
    , trace_pc0{vlSymsp->TOP.trace_pc0}
    , trace_wdata0{vlSymsp->TOP.trace_wdata0}
    , trace_pc1{vlSymsp->TOP.trace_pc1}
    , trace_wdata1{vlSymsp->TOP.trace_wdata1}
    , vram_addr{vlSymsp->TOP.vram_addr}
    , vram_din{vlSymsp->TOP.vram_din}
    , vram_dout{vlSymsp->TOP.vram_dout}
    , v1_x{vlSymsp->TOP.v1_x}
    , v1_y{vlSymsp->TOP.v1_y}
    , v2_x{vlSymsp->TOP.v2_x}
    , v2_y{vlSymsp->TOP.v2_y}
    , v3_x{vlSymsp->TOP.v3_x}
    , v3_y{vlSymsp->TOP.v3_y}
    , v1_a{vlSymsp->TOP.v1_a}
    , v2_a{vlSymsp->TOP.v2_a}
    , v3_a{vlSymsp->TOP.v3_a}
    , Aa{vlSymsp->TOP.Aa}
    , Ba{vlSymsp->TOP.Ba}
    , C{vlSymsp->TOP.C}
    , c{vlSymsp->TOP.c}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , interp{vlSymsp->TOP.interp}
    , FDY12{vlSymsp->TOP.FDY12}
    , FX1{vlSymsp->TOP.FX1}
    , FDX12{vlSymsp->TOP.FDX12}
    , FY1{vlSymsp->TOP.FY1}
    , FDY23{vlSymsp->TOP.FDY23}
    , FX2{vlSymsp->TOP.FX2}
    , FDX23{vlSymsp->TOP.FDX23}
    , FY2{vlSymsp->TOP.FY2}
    , FDY31{vlSymsp->TOP.FDY31}
    , FX3{vlSymsp->TOP.FX3}
    , FDX31{vlSymsp->TOP.FDX31}
    , FY3{vlSymsp->TOP.FY3}
    , minx{vlSymsp->TOP.minx}
    , miny{vlSymsp->TOP.miny}
    , spanx{vlSymsp->TOP.spanx}
    , spany{vlSymsp->TOP.spany}
    , dm_req_wdata{vlSymsp->TOP.dm_req_wdata}
    , dm_resp_rdata{vlSymsp->TOP.dm_resp_rdata}
    , rootp{&(vlSymsp->TOP)}
{
}

Vsimtop::Vsimtop(const char* _vcname__)
    : Vsimtop(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vsimtop::~Vsimtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsimtop___024root___eval_initial(Vsimtop___024root* vlSelf);
void Vsimtop___024root___eval_settle(Vsimtop___024root* vlSelf);
void Vsimtop___024root___eval(Vsimtop___024root* vlSelf);
QData Vsimtop___024root___change_request(Vsimtop___024root* vlSelf);
#ifdef VL_DEBUG
void Vsimtop___024root___eval_debug_assertions(Vsimtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimtop___024root___final(Vsimtop___024root* vlSelf);

static void _eval_initial_loop(Vsimtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsimtop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsimtop___024root___eval_settle(&(vlSymsp->TOP));
        Vsimtop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 2000)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsimtop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("genrtl/simtop.v", 27, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsimtop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsimtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsimtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsimtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsimtop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 2000)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsimtop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("genrtl/simtop.v", 27, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsimtop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vsimtop::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vsimtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsimtop::final() {
    Vsimtop___024root___final(&(vlSymsp->TOP));
}
