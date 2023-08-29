// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSIMTOP_H_
#define VERILATED_VSIMTOP_H_  // guard

#include "verilated.h"

class Vsimtop__Syms;
class Vsimtop___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vsimtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vsimtop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_OUT8(&im_req_valid,0,0);
    VL_IN8(&im_resp_valid,0,0);
    VL_OUT8(&dm_req_wmask,7,0);
    VL_OUT8(&dm_req_wen,0,0);
    VL_OUT8(&dm_req_valid,0,0);
    VL_IN8(&dm_resp_valid,0,0);
    VL_OUT8(&trace_valid0,0,0);
    VL_OUT8(&trace_wen0,0,0);
    VL_OUT8(&trace_wdst0,3,0);
    VL_OUT8(&trace_valid1,0,0);
    VL_OUT8(&trace_wen1,0,0);
    VL_OUT8(&trace_wdst1,3,0);
    VL_OUT8(&vram_rd,0,0);
    VL_OUT8(&vram_wr,0,0);
    VL_OUT16(&trace_instr0,15,0);
    VL_OUT16(&trace_instr1,15,0);
    VL_IN(&boot_vector,31,0);
    VL_OUT(&im_req_addr,31,0);
    VL_IN(&im_resp_rdata,31,0);
    VL_OUT(&dm_req_addr,31,0);
    VL_OUT(&trace_pc0,31,0);
    VL_OUT(&trace_wdata0,31,0);
    VL_OUT(&trace_pc1,31,0);
    VL_OUT(&trace_wdata1,31,0);
    VL_OUT(&vram_addr,23,0);
    VL_IN(&v1_x,31,0);
    VL_IN(&v1_y,31,0);
    VL_IN(&v2_x,31,0);
    VL_IN(&v2_y,31,0);
    VL_IN(&v3_x,31,0);
    VL_IN(&v3_y,31,0);
    VL_IN(&v1_a,31,0);
    VL_IN(&v2_a,31,0);
    VL_IN(&v3_a,31,0);
    VL_OUT(&Aa,31,0);
    VL_OUT(&Ba,31,0);
    VL_OUT(&C,31,0);
    VL_OUT(&c,31,0);
    VL_IN(&x,31,0);
    VL_IN(&y,31,0);
    VL_OUT(&interp,31,0);
    VL_IN(&FDY12,31,0);
    VL_IN(&FX1,31,0);
    VL_IN(&FDX12,31,0);
    VL_IN(&FY1,31,0);
    VL_IN(&FDY23,31,0);
    VL_IN(&FX2,31,0);
    VL_IN(&FDX23,31,0);
    VL_IN(&FY2,31,0);
    VL_IN(&FDY31,31,0);
    VL_IN(&FX3,31,0);
    VL_IN(&FDX31,31,0);
    VL_IN(&FY3,31,0);
    VL_IN(&minx,31,0);
    VL_IN(&miny,31,0);
    VL_IN(&spanx,31,0);
    VL_IN(&spany,31,0);
    VL_OUT64(&dm_req_wdata,63,0);
    VL_IN64(&dm_resp_rdata,63,0);
    VL_IN64(&vram_din,63,0);
    VL_OUT64(&vram_dout,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vsimtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vsimtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vsimtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vsimtop();
  private:
    VL_UNCOPYABLE(Vsimtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
};

#endif  // guard
