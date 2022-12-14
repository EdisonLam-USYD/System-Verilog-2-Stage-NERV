#include <cstddef>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtestbench.h"
    
// pyverilator defined values
// first declare variables as extern
extern const char* _pyverilator_module_name;
extern const uint32_t _pyverilator_num_inputs;
extern const char* _pyverilator_inputs[];
extern const uint32_t _pyverilator_input_widths[];
extern const uint32_t _pyverilator_num_outputs;
extern const char* _pyverilator_outputs[];
extern const uint32_t _pyverilator_output_widths[];
extern const uint32_t _pyverilator_num_internal_signals;
extern const char* _pyverilator_internal_signals[];
extern const uint32_t _pyverilator_internal_signal_widths[];
extern const uint32_t _pyverilator_num_rules;
extern const char* _pyverilator_rules[];
extern const char* _pyverilator_json_data;
// now initialize the variables
const char* _pyverilator_module_name = "testbench";
const uint32_t _pyverilator_num_inputs = 2;
const char* _pyverilator_inputs[] = {"clock","reset"};
const uint32_t _pyverilator_input_widths[] = {1,1};

const uint32_t _pyverilator_num_outputs = 0;
const char* _pyverilator_outputs[] = {};
const uint32_t _pyverilator_output_widths[] = {};

const uint32_t _pyverilator_num_internal_signals = 53;
const char* _pyverilator_internal_signals[] = {"testbench__DOT__dmem_valid","testbench__DOT__dmem_wstrb","testbench__DOT__out_valid","testbench__DOT__dut__DOT__mem_wr_enable","testbench__DOT__dut__DOT__mem_wr_strb","testbench__DOT__dut__DOT__mem_rd_enable","testbench__DOT__dut__DOT__mem_rd_reg","testbench__DOT__dut__DOT__mem_rd_func","testbench__DOT__dut__DOT__mem_rd_enable_q","testbench__DOT__dut__DOT__mem_rd_reg_q","testbench__DOT__dut__DOT__mem_rd_func_q","testbench__DOT__dut__DOT__read_en_rs1","testbench__DOT__dut__DOT__read_en_rs2","testbench__DOT__dut__DOT__next_wr","testbench__DOT__dut__DOT__illinsn","testbench__DOT__dut__DOT__trapped","testbench__DOT__dut__DOT__trapped_q","testbench__DOT__dut__DOT__j_b_check","testbench__DOT__dut__DOT__fw_rs1","testbench__DOT__dut__DOT__fw_rs2","testbench__DOT__dut__DOT__block_EX","testbench__DOT__dut__DOT__block_ID","testbench__DOT__dut__DOT__stall_ID","testbench__DOT__dut__DOT__stall_EX","testbench__DOT__dut__DOT__reset_q","testbench__DOT__dut__DOT__imm_s","testbench__DOT__dut__DOT__imm_b","testbench__DOT__x10","testbench__DOT__imem_addr","testbench__DOT__imem_data","testbench__DOT__dmem_addr","testbench__DOT__dmem_wdata","testbench__DOT__dmem_rdata","testbench__DOT__out","testbench__DOT__i","testbench__DOT__cycles","testbench__DOT__dut__DOT__mem_wr_addr","testbench__DOT__dut__DOT__mem_wr_data","testbench__DOT__dut__DOT__mem_rd_addr","testbench__DOT__dut__DOT__npc","testbench__DOT__dut__DOT__pc","testbench__DOT__dut__DOT__ppc","testbench__DOT__dut__DOT__insn_EX","testbench__DOT__dut__DOT__imem_addr_q","testbench__DOT__dut__DOT__rs1_value","testbench__DOT__dut__DOT__rs2_value","testbench__DOT__dut__DOT__imm_j","testbench__DOT__dut__DOT__imm_i_sext","testbench__DOT__dut__DOT__imm_s_sext","testbench__DOT__dut__DOT__imm_b_sext","testbench__DOT__dut__DOT__imm_j_sext","testbench__DOT__dut__DOT__next_rd","testbench__DOT__dut__DOT__mem_rdata"};
const uint32_t _pyverilator_internal_signal_widths[] = {1,4,1,1,4,1,5,5,1,5,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,12,13,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,21,32,32,32,32,32,32};

const char* _pyverilator_json_data = "null";

// this is required by verilator for verilog designs using $time
// main_time is incremented in eval
double main_time = 0;

// What to call when $finish is called
typedef void (*vl_finish_callback)(const char* filename, int line, const char* hier);
vl_finish_callback vl_user_finish = NULL;
    
double sc_time_stamp() {
return main_time;
}
void vl_finish (const char* filename, int linenum, const char* hier) VL_MT_UNSAFE {
    if (vl_user_finish) {
       (*vl_user_finish)(filename, linenum, hier);
    } else {
        // Default implementation
        VL_PRINTF("- %s:%d: Verilog $finish\n", filename, linenum);  // Not VL_PRINTF_MT, already on main thread
        if (Verilated::gotFinish()) {
            VL_PRINTF("- %s:%d: Second verilog $finish, exiting\n", filename, linenum);  // Not VL_PRINTF_MT, already on main thread
            // Verilated::flushCall();
            exit(0);
        }
        Verilated::gotFinish(true);
    }
}
// function definitions
// helper functions for basic verilator tasks
extern "C" { //Open an extern C closed in the footer
Vtestbench* construct() {
    Verilated::traceEverOn(true);
    Vtestbench* top = new Vtestbench();
    return top;
}
int eval(Vtestbench* top) {
    top->eval();
    main_time++;
    return 0;
}
int destruct(Vtestbench* top) {
    if (top != nullptr) {
        delete top;
        top = nullptr;
    }
    return 0;
}
VerilatedVcdC* start_vcd_trace(Vtestbench* top, const char* filename) {
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open(filename);
    return tfp;
}
int add_to_vcd_trace(VerilatedVcdC* tfp, int time) {
    tfp->dump(time);
    return 0;
}
int flush_vcd_trace(VerilatedVcdC* tfp) {
    tfp->flush();
    return 0;
}
int stop_vcd_trace(VerilatedVcdC* tfp) {
    tfp->close();
    return 0;
}
bool get_finished() {
    return Verilated::gotFinish();
}
void set_finished(bool b) {
    Verilated::gotFinish(b);
}
void set_vl_finish_callback(vl_finish_callback callback) {
    vl_user_finish = callback;
}
void set_command_args(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
}

uint32_t get_clock(Vtestbench* top){return top->clock;}
uint32_t get_reset(Vtestbench* top){return top->reset;}
uint32_t get_testbench__DOT__dmem_valid(Vtestbench* top){return top->testbench__DOT__dmem_valid;}
uint32_t get_testbench__DOT__dmem_wstrb(Vtestbench* top){return top->testbench__DOT__dmem_wstrb;}
uint32_t get_testbench__DOT__out_valid(Vtestbench* top){return top->testbench__DOT__out_valid;}
uint32_t get_testbench__DOT__dut__DOT__mem_wr_enable(Vtestbench* top){return top->testbench__DOT__dut__DOT__mem_wr_enable;}
uint32_t get_testbench__DOT__dut__DOT__mem_wr_strb(Vtestbench* top){return top->testbench__DOT__dut__DOT__mem_wr_strb;}
uint32_t get_testbench__DOT__dut__DOT__mem_rd_enable(Vtestbench* top){return top->testbench__DOT__dut__DOT__mem_rd_enable;}
uint32_t get_testbench__DOT__dut__DOT__mem_rd_reg(Vtestbench* top){return top->testbench__DOT__dut__DOT__mem_rd_reg;}
uint32_t get_testbench__DOT__dut__DOT__mem_rd_func(Vtestbench* top){return top->testbench__DOT__dut__DOT__mem_rd_func;}
uint32_t get_testbench__DOT__dut__DOT__mem_rd_enable_q(Vtestbench* top){return top->testbench__DOT__dut__DOT__mem_rd_enable_q;}
uint32_t get_testbench__DOT__dut__DOT__mem_rd_reg_q(Vtestbench* top){return top->testbench__DOT__dut__DOT__mem_rd_reg_q;}
uint32_t get_testbench__DOT__dut__DOT__mem_rd_func_q(Vtestbench* top){return top->testbench__DOT__dut__DOT__mem_rd_func_q;}
uint32_t get_testbench__DOT__dut__DOT__read_en_rs1(Vtestbench* top){return top->testbench__DOT__dut__DOT__read_en_rs1;}
uint32_t get_testbench__DOT__dut__DOT__read_en_rs2(Vtestbench* top){return top->testbench__DOT__dut__DOT__read_en_rs2;}
uint32_t get_testbench__DOT__dut__DOT__next_wr(Vtestbench* top){return top->testbench__DOT__dut__DOT__next_wr;}
uint32_t get_testbench__DOT__dut__DOT__illinsn(Vtestbench* top){return top->testbench__DOT__dut__DOT__illinsn;}
uint32_t get_testbench__DOT__dut__DOT__trapped(Vtestbench* top){return top->testbench__DOT__dut__DOT__trapped;}
uint32_t get_testbench__DOT__dut__DOT__trapped_q(Vtestbench* top){return top->testbench__DOT__dut__DOT__trapped_q;}
uint32_t get_testbench__DOT__dut__DOT__j_b_check(Vtestbench* top){return top->testbench__DOT__dut__DOT__j_b_check;}
uint32_t get_testbench__DOT__dut__DOT__fw_rs1(Vtestbench* top){return top->testbench__DOT__dut__DOT__fw_rs1;}
uint32_t get_testbench__DOT__dut__DOT__fw_rs2(Vtestbench* top){return top->testbench__DOT__dut__DOT__fw_rs2;}
uint32_t get_testbench__DOT__dut__DOT__block_EX(Vtestbench* top){return top->testbench__DOT__dut__DOT__block_EX;}
uint32_t get_testbench__DOT__dut__DOT__block_ID(Vtestbench* top){return top->testbench__DOT__dut__DOT__block_ID;}
uint32_t get_testbench__DOT__dut__DOT__stall_ID(Vtestbench* top){return top->testbench__DOT__dut__DOT__stall_ID;}
uint32_t get_testbench__DOT__dut__DOT__stall_EX(Vtestbench* top){return top->testbench__DOT__dut__DOT__stall_EX;}
uint32_t get_testbench__DOT__dut__DOT__reset_q(Vtestbench* top){return top->testbench__DOT__dut__DOT__reset_q;}
uint32_t get_testbench__DOT__dut__DOT__imm_s(Vtestbench* top){return top->testbench__DOT__dut__DOT__imm_s;}
uint32_t get_testbench__DOT__dut__DOT__imm_b(Vtestbench* top){return top->testbench__DOT__dut__DOT__imm_b;}
uint32_t get_testbench__DOT__x10(Vtestbench* top){return top->testbench__DOT__x10;}
uint32_t get_testbench__DOT__imem_addr(Vtestbench* top){return top->testbench__DOT__imem_addr;}
uint32_t get_testbench__DOT__imem_data(Vtestbench* top){return top->testbench__DOT__imem_data;}
uint32_t get_testbench__DOT__dmem_addr(Vtestbench* top){return top->testbench__DOT__dmem_addr;}
uint32_t get_testbench__DOT__dmem_wdata(Vtestbench* top){return top->testbench__DOT__dmem_wdata;}
uint32_t get_testbench__DOT__dmem_rdata(Vtestbench* top){return top->testbench__DOT__dmem_rdata;}
uint32_t get_testbench__DOT__out(Vtestbench* top){return top->testbench__DOT__out;}
uint32_t get_testbench__DOT__i(Vtestbench* top){return top->testbench__DOT__i;}
uint32_t get_testbench__DOT__cycles(Vtestbench* top){return top->testbench__DOT__cycles;}
uint32_t get_testbench__DOT__dut__DOT__mem_wr_addr(Vtestbench* top){return top->testbench__DOT__dut__DOT__mem_wr_addr;}
uint32_t get_testbench__DOT__dut__DOT__mem_wr_data(Vtestbench* top){return top->testbench__DOT__dut__DOT__mem_wr_data;}
uint32_t get_testbench__DOT__dut__DOT__mem_rd_addr(Vtestbench* top){return top->testbench__DOT__dut__DOT__mem_rd_addr;}
uint32_t get_testbench__DOT__dut__DOT__npc(Vtestbench* top){return top->testbench__DOT__dut__DOT__npc;}
uint32_t get_testbench__DOT__dut__DOT__pc(Vtestbench* top){return top->testbench__DOT__dut__DOT__pc;}
uint32_t get_testbench__DOT__dut__DOT__ppc(Vtestbench* top){return top->testbench__DOT__dut__DOT__ppc;}
uint32_t get_testbench__DOT__dut__DOT__insn_EX(Vtestbench* top){return top->testbench__DOT__dut__DOT__insn_EX;}
uint32_t get_testbench__DOT__dut__DOT__imem_addr_q(Vtestbench* top){return top->testbench__DOT__dut__DOT__imem_addr_q;}
uint32_t get_testbench__DOT__dut__DOT__rs1_value(Vtestbench* top){return top->testbench__DOT__dut__DOT__rs1_value;}
uint32_t get_testbench__DOT__dut__DOT__rs2_value(Vtestbench* top){return top->testbench__DOT__dut__DOT__rs2_value;}
uint32_t get_testbench__DOT__dut__DOT__imm_j(Vtestbench* top){return top->testbench__DOT__dut__DOT__imm_j;}
uint32_t get_testbench__DOT__dut__DOT__imm_i_sext(Vtestbench* top){return top->testbench__DOT__dut__DOT__imm_i_sext;}
uint32_t get_testbench__DOT__dut__DOT__imm_s_sext(Vtestbench* top){return top->testbench__DOT__dut__DOT__imm_s_sext;}
uint32_t get_testbench__DOT__dut__DOT__imm_b_sext(Vtestbench* top){return top->testbench__DOT__dut__DOT__imm_b_sext;}
uint32_t get_testbench__DOT__dut__DOT__imm_j_sext(Vtestbench* top){return top->testbench__DOT__dut__DOT__imm_j_sext;}
uint32_t get_testbench__DOT__dut__DOT__next_rd(Vtestbench* top){return top->testbench__DOT__dut__DOT__next_rd;}
uint32_t get_testbench__DOT__dut__DOT__mem_rdata(Vtestbench* top){return top->testbench__DOT__dut__DOT__mem_rdata;}
int set_clock(Vtestbench* top, uint32_t new_value){ top->clock = new_value; return 0;}
int set_reset(Vtestbench* top, uint32_t new_value){ top->reset = new_value; return 0;}
}