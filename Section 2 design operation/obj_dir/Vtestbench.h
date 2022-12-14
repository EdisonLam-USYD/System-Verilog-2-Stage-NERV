// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTESTBENCH_H_
#define _VTESTBENCH_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ testbench__DOT__dmem_valid;
    CData/*3:0*/ testbench__DOT__dmem_wstrb;
    CData/*0:0*/ testbench__DOT__out_valid;
    CData/*0:0*/ testbench__DOT__dut__DOT__mem_wr_enable;
    CData/*3:0*/ testbench__DOT__dut__DOT__mem_wr_strb;
    CData/*0:0*/ testbench__DOT__dut__DOT__mem_rd_enable;
    CData/*4:0*/ testbench__DOT__dut__DOT__mem_rd_reg;
    CData/*4:0*/ testbench__DOT__dut__DOT__mem_rd_func;
    CData/*0:0*/ testbench__DOT__dut__DOT__mem_rd_enable_q;
    CData/*4:0*/ testbench__DOT__dut__DOT__mem_rd_reg_q;
    CData/*4:0*/ testbench__DOT__dut__DOT__mem_rd_func_q;
    CData/*0:0*/ testbench__DOT__dut__DOT__read_en_rs1;
    CData/*0:0*/ testbench__DOT__dut__DOT__read_en_rs2;
    CData/*0:0*/ testbench__DOT__dut__DOT__next_wr;
    CData/*0:0*/ testbench__DOT__dut__DOT__illinsn;
    CData/*0:0*/ testbench__DOT__dut__DOT__trapped;
    CData/*0:0*/ testbench__DOT__dut__DOT__trapped_q;
    CData/*0:0*/ testbench__DOT__dut__DOT__j_b_check;
    CData/*0:0*/ testbench__DOT__dut__DOT__fw_rs1;
    CData/*0:0*/ testbench__DOT__dut__DOT__fw_rs2;
    CData/*0:0*/ testbench__DOT__dut__DOT__block_EX;
    CData/*0:0*/ testbench__DOT__dut__DOT__block_ID;
    CData/*0:0*/ testbench__DOT__dut__DOT__stall_ID;
    CData/*0:0*/ testbench__DOT__dut__DOT__stall_EX;
    CData/*0:0*/ testbench__DOT__dut__DOT__reset_q;
    SData/*11:0*/ testbench__DOT__dut__DOT__imm_s;
    SData/*12:0*/ testbench__DOT__dut__DOT__imm_b;
    IData/*31:0*/ testbench__DOT__x10;
    IData/*31:0*/ testbench__DOT__imem_addr;
    IData/*31:0*/ testbench__DOT__imem_data;
    IData/*31:0*/ testbench__DOT__dmem_addr;
    IData/*31:0*/ testbench__DOT__dmem_wdata;
    IData/*31:0*/ testbench__DOT__dmem_rdata;
    IData/*31:0*/ testbench__DOT__out;
    IData/*31:0*/ testbench__DOT__i;
    IData/*31:0*/ testbench__DOT__cycles;
    IData/*31:0*/ testbench__DOT__dut__DOT__mem_wr_addr;
    IData/*31:0*/ testbench__DOT__dut__DOT__mem_wr_data;
    IData/*31:0*/ testbench__DOT__dut__DOT__mem_rd_addr;
    IData/*31:0*/ testbench__DOT__dut__DOT__npc;
    IData/*31:0*/ testbench__DOT__dut__DOT__pc;
    IData/*31:0*/ testbench__DOT__dut__DOT__ppc;
    IData/*31:0*/ testbench__DOT__dut__DOT__insn_EX;
    IData/*31:0*/ testbench__DOT__dut__DOT__imem_addr_q;
    IData/*31:0*/ testbench__DOT__dut__DOT__rs1_value;
    IData/*31:0*/ testbench__DOT__dut__DOT__rs2_value;
    IData/*20:0*/ testbench__DOT__dut__DOT__imm_j;
    IData/*31:0*/ testbench__DOT__dut__DOT__imm_i_sext;
    IData/*31:0*/ testbench__DOT__dut__DOT__imm_s_sext;
    IData/*31:0*/ testbench__DOT__dut__DOT__imm_b_sext;
    IData/*31:0*/ testbench__DOT__dut__DOT__imm_j_sext;
    IData/*31:0*/ testbench__DOT__dut__DOT__next_rd;
    IData/*31:0*/ testbench__DOT__dut__DOT__mem_rdata;
    CData/*7:0*/ testbench__DOT__mem[65536];
    IData/*31:0*/ testbench__DOT__dut__DOT__regfile[32];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtestbench__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtestbench(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtestbench();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
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
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtestbench__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtestbench__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtestbench__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtestbench__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
