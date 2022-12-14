// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


//======================

void Vtestbench::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtestbench::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtestbench__Syms* __restrict vlSymsp = static_cast<Vtestbench__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtestbench::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtestbench::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtestbench__Syms* __restrict vlSymsp = static_cast<Vtestbench__Syms*>(userp);
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtestbench::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtestbench__Syms* __restrict vlSymsp = static_cast<Vtestbench__Syms*>(userp);
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+107,"clock", false,-1);
        tracep->declBit(c+108,"reset", false,-1);
        tracep->declBus(c+109,"testbench MEM_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+107,"testbench clock", false,-1);
        tracep->declBit(c+108,"testbench reset", false,-1);
        tracep->declBit(c+1,"testbench trap", false,-1);
        tracep->declBus(c+2,"testbench x10", false,-1, 31,0);
        tracep->declBus(c+83,"testbench imem_addr", false,-1, 31,0);
        tracep->declBus(c+3,"testbench imem_data", false,-1, 31,0);
        tracep->declBit(c+84,"testbench dmem_valid", false,-1);
        tracep->declBus(c+85,"testbench dmem_addr", false,-1, 31,0);
        tracep->declBus(c+86,"testbench dmem_wstrb", false,-1, 3,0);
        tracep->declBus(c+87,"testbench dmem_wdata", false,-1, 31,0);
        tracep->declBus(c+4,"testbench dmem_rdata", false,-1, 31,0);
        tracep->declBit(c+88,"testbench wr_in_mem_range", false,-1);
        tracep->declBit(c+89,"testbench wr_in_output", false,-1);
        tracep->declBus(c+5,"testbench out", false,-1, 31,0);
        tracep->declBit(c+6,"testbench out_valid", false,-1);
        tracep->declBus(c+7,"testbench i", false,-1, 31,0);
        tracep->declBus(c+8,"testbench cycles", false,-1, 31,0);
        tracep->declBus(c+110,"testbench dut RESET_ADDR", false,-1, 31,0);
        tracep->declBus(c+111,"testbench dut NUMREGS", false,-1, 31,0);
        tracep->declBit(c+107,"testbench dut clock", false,-1);
        tracep->declBit(c+108,"testbench dut reset", false,-1);
        tracep->declBit(c+1,"testbench dut trap", false,-1);
        tracep->declBus(c+2,"testbench dut x10", false,-1, 31,0);
        tracep->declBus(c+83,"testbench dut imem_addr", false,-1, 31,0);
        tracep->declBus(c+3,"testbench dut imem_data", false,-1, 31,0);
        tracep->declBit(c+84,"testbench dut dmem_valid", false,-1);
        tracep->declBus(c+85,"testbench dut dmem_addr", false,-1, 31,0);
        tracep->declBus(c+86,"testbench dut dmem_wstrb", false,-1, 3,0);
        tracep->declBus(c+87,"testbench dut dmem_wdata", false,-1, 31,0);
        tracep->declBus(c+4,"testbench dut dmem_rdata", false,-1, 31,0);
        tracep->declBit(c+90,"testbench dut mem_wr_enable", false,-1);
        tracep->declBus(c+91,"testbench dut mem_wr_addr", false,-1, 31,0);
        tracep->declBus(c+92,"testbench dut mem_wr_data", false,-1, 31,0);
        tracep->declBus(c+93,"testbench dut mem_wr_strb", false,-1, 3,0);
        tracep->declBit(c+94,"testbench dut mem_rd_enable", false,-1);
        tracep->declBus(c+95,"testbench dut mem_rd_addr", false,-1, 31,0);
        tracep->declBus(c+96,"testbench dut mem_rd_reg", false,-1, 4,0);
        tracep->declBus(c+97,"testbench dut mem_rd_func", false,-1, 4,0);
        tracep->declBit(c+9,"testbench dut mem_rd_enable_q", false,-1);
        tracep->declBus(c+10,"testbench dut mem_rd_reg_q", false,-1, 4,0);
        tracep->declBus(c+11,"testbench dut mem_rd_func_q", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+12+i*1,"testbench dut regfile", true,(i+0), 31,0);}}
        tracep->declBus(c+3,"testbench dut insn", false,-1, 31,0);
        tracep->declBus(c+98,"testbench dut npc", false,-1, 31,0);
        tracep->declBus(c+44,"testbench dut pc", false,-1, 31,0);
        tracep->declBus(c+45,"testbench dut ppc", false,-1, 31,0);
        tracep->declBus(c+46,"testbench dut insn_EX", false,-1, 31,0);
        tracep->declBus(c+47,"testbench dut imem_addr_q", false,-1, 31,0);
        tracep->declBus(c+48,"testbench dut rs1_value_ID", false,-1, 31,0);
        tracep->declBus(c+49,"testbench dut rs2_value_ID", false,-1, 31,0);
        tracep->declBus(c+50,"testbench dut rs1_value", false,-1, 31,0);
        tracep->declBus(c+51,"testbench dut rs2_value", false,-1, 31,0);
        tracep->declBus(c+52,"testbench dut insn_funct7", false,-1, 6,0);
        tracep->declBus(c+53,"testbench dut insn_rs2", false,-1, 4,0);
        tracep->declBus(c+54,"testbench dut insn_rs1", false,-1, 4,0);
        tracep->declBus(c+55,"testbench dut insn_funct3", false,-1, 2,0);
        tracep->declBus(c+56,"testbench dut insn_rd", false,-1, 4,0);
        tracep->declBus(c+57,"testbench dut insn_opcode", false,-1, 6,0);
        tracep->declBus(c+58,"testbench dut insn_funct7_EX", false,-1, 6,0);
        tracep->declBus(c+59,"testbench dut insn_rs2_EX", false,-1, 4,0);
        tracep->declBus(c+60,"testbench dut insn_rs1_EX", false,-1, 4,0);
        tracep->declBus(c+61,"testbench dut insn_funct3_EX", false,-1, 2,0);
        tracep->declBus(c+62,"testbench dut insn_rd_EX", false,-1, 4,0);
        tracep->declBus(c+63,"testbench dut insn_opcode_EX", false,-1, 6,0);
        tracep->declBit(c+99,"testbench dut read_en_rs1", false,-1);
        tracep->declBit(c+100,"testbench dut read_en_rs2", false,-1);
        tracep->declBus(c+64,"testbench dut imm_i", false,-1, 11,0);
        tracep->declBus(c+65,"testbench dut imm_s", false,-1, 11,0);
        tracep->declBus(c+66,"testbench dut imm_b", false,-1, 12,0);
        tracep->declBus(c+67,"testbench dut imm_j", false,-1, 20,0);
        tracep->declBus(c+68,"testbench dut imm_i_sext_ID", false,-1, 31,0);
        tracep->declBus(c+69,"testbench dut imm_s_sext_ID", false,-1, 31,0);
        tracep->declBus(c+70,"testbench dut imm_b_sext_ID", false,-1, 31,0);
        tracep->declBus(c+71,"testbench dut imm_j_sext_ID", false,-1, 31,0);
        tracep->declBus(c+72,"testbench dut imm_i_sext", false,-1, 31,0);
        tracep->declBus(c+73,"testbench dut imm_s_sext", false,-1, 31,0);
        tracep->declBus(c+74,"testbench dut imm_b_sext", false,-1, 31,0);
        tracep->declBus(c+75,"testbench dut imm_j_sext", false,-1, 31,0);
        tracep->declBus(c+112,"testbench dut OPCODE_LOAD", false,-1, 6,0);
        tracep->declBus(c+113,"testbench dut OPCODE_STORE", false,-1, 6,0);
        tracep->declBus(c+114,"testbench dut OPCODE_MADD", false,-1, 6,0);
        tracep->declBus(c+115,"testbench dut OPCODE_BRANCH", false,-1, 6,0);
        tracep->declBus(c+116,"testbench dut OPCODE_LOAD_FP", false,-1, 6,0);
        tracep->declBus(c+117,"testbench dut OPCODE_STORE_FP", false,-1, 6,0);
        tracep->declBus(c+118,"testbench dut OPCODE_MSUB", false,-1, 6,0);
        tracep->declBus(c+119,"testbench dut OPCODE_JALR", false,-1, 6,0);
        tracep->declBus(c+120,"testbench dut OPCODE_CUSTOM_0", false,-1, 6,0);
        tracep->declBus(c+121,"testbench dut OPCODE_CUSTOM_1", false,-1, 6,0);
        tracep->declBus(c+122,"testbench dut OPCODE_NMSUB", false,-1, 6,0);
        tracep->declBus(c+123,"testbench dut OPCODE_RESERVED_0", false,-1, 6,0);
        tracep->declBus(c+124,"testbench dut OPCODE_MISC_MEM", false,-1, 6,0);
        tracep->declBus(c+125,"testbench dut OPCODE_AMO", false,-1, 6,0);
        tracep->declBus(c+126,"testbench dut OPCODE_NMADD", false,-1, 6,0);
        tracep->declBus(c+127,"testbench dut OPCODE_JAL", false,-1, 6,0);
        tracep->declBus(c+128,"testbench dut OPCODE_OP_IMM", false,-1, 6,0);
        tracep->declBus(c+129,"testbench dut OPCODE_OP", false,-1, 6,0);
        tracep->declBus(c+130,"testbench dut OPCODE_OP_FP", false,-1, 6,0);
        tracep->declBus(c+131,"testbench dut OPCODE_SYSTEM", false,-1, 6,0);
        tracep->declBus(c+132,"testbench dut OPCODE_AUIPC", false,-1, 6,0);
        tracep->declBus(c+133,"testbench dut OPCODE_LUI", false,-1, 6,0);
        tracep->declBus(c+134,"testbench dut OPCODE_RESERVED_1", false,-1, 6,0);
        tracep->declBus(c+135,"testbench dut OPCODE_RESERVED_2", false,-1, 6,0);
        tracep->declBus(c+136,"testbench dut OPCODE_OP_IMM_32", false,-1, 6,0);
        tracep->declBus(c+137,"testbench dut OPCODE_OP_32", false,-1, 6,0);
        tracep->declBus(c+138,"testbench dut OPCODE_CUSTOM_2", false,-1, 6,0);
        tracep->declBus(c+139,"testbench dut OPCODE_CUSTOM_3", false,-1, 6,0);
        tracep->declBit(c+101,"testbench dut next_wr", false,-1);
        tracep->declBus(c+102,"testbench dut next_rd", false,-1, 31,0);
        tracep->declBit(c+103,"testbench dut illinsn", false,-1);
        tracep->declBit(c+1,"testbench dut trapped", false,-1);
        tracep->declBit(c+76,"testbench dut trapped_q", false,-1);
        tracep->declBit(c+104,"testbench dut j_b_check", false,-1);
        tracep->declBit(c+77,"testbench dut fw_rs1", false,-1);
        tracep->declBit(c+78,"testbench dut fw_rs2", false,-1);
        tracep->declBit(c+79,"testbench dut block_EX", false,-1);
        tracep->declBit(c+105,"testbench dut block_ID", false,-1);
        tracep->declBit(c+106,"testbench dut stall_ID", false,-1);
        tracep->declBit(c+80,"testbench dut stall_EX", false,-1);
        tracep->declBit(c+81,"testbench dut reset_q", false,-1);
        tracep->declBus(c+82,"testbench dut mem_rdata", false,-1, 31,0);
    }
}

void Vtestbench::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtestbench::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtestbench__Syms* __restrict vlSymsp = static_cast<Vtestbench__Syms*>(userp);
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtestbench::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtestbench__Syms* __restrict vlSymsp = static_cast<Vtestbench__Syms*>(userp);
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->testbench__DOT__dut__DOT__trapped));
        tracep->fullIData(oldp+2,(vlTOPp->testbench__DOT__x10),32);
        tracep->fullIData(oldp+3,(vlTOPp->testbench__DOT__imem_data),32);
        tracep->fullIData(oldp+4,(vlTOPp->testbench__DOT__dmem_rdata),32);
        tracep->fullIData(oldp+5,(vlTOPp->testbench__DOT__out),32);
        tracep->fullBit(oldp+6,(vlTOPp->testbench__DOT__out_valid));
        tracep->fullIData(oldp+7,(vlTOPp->testbench__DOT__i),32);
        tracep->fullIData(oldp+8,(vlTOPp->testbench__DOT__cycles),32);
        tracep->fullBit(oldp+9,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q));
        tracep->fullCData(oldp+10,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg_q),5);
        tracep->fullCData(oldp+11,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q),5);
        tracep->fullIData(oldp+12,(vlTOPp->testbench__DOT__dut__DOT__regfile[0]),32);
        tracep->fullIData(oldp+13,(vlTOPp->testbench__DOT__dut__DOT__regfile[1]),32);
        tracep->fullIData(oldp+14,(vlTOPp->testbench__DOT__dut__DOT__regfile[2]),32);
        tracep->fullIData(oldp+15,(vlTOPp->testbench__DOT__dut__DOT__regfile[3]),32);
        tracep->fullIData(oldp+16,(vlTOPp->testbench__DOT__dut__DOT__regfile[4]),32);
        tracep->fullIData(oldp+17,(vlTOPp->testbench__DOT__dut__DOT__regfile[5]),32);
        tracep->fullIData(oldp+18,(vlTOPp->testbench__DOT__dut__DOT__regfile[6]),32);
        tracep->fullIData(oldp+19,(vlTOPp->testbench__DOT__dut__DOT__regfile[7]),32);
        tracep->fullIData(oldp+20,(vlTOPp->testbench__DOT__dut__DOT__regfile[8]),32);
        tracep->fullIData(oldp+21,(vlTOPp->testbench__DOT__dut__DOT__regfile[9]),32);
        tracep->fullIData(oldp+22,(vlTOPp->testbench__DOT__dut__DOT__regfile[10]),32);
        tracep->fullIData(oldp+23,(vlTOPp->testbench__DOT__dut__DOT__regfile[11]),32);
        tracep->fullIData(oldp+24,(vlTOPp->testbench__DOT__dut__DOT__regfile[12]),32);
        tracep->fullIData(oldp+25,(vlTOPp->testbench__DOT__dut__DOT__regfile[13]),32);
        tracep->fullIData(oldp+26,(vlTOPp->testbench__DOT__dut__DOT__regfile[14]),32);
        tracep->fullIData(oldp+27,(vlTOPp->testbench__DOT__dut__DOT__regfile[15]),32);
        tracep->fullIData(oldp+28,(vlTOPp->testbench__DOT__dut__DOT__regfile[16]),32);
        tracep->fullIData(oldp+29,(vlTOPp->testbench__DOT__dut__DOT__regfile[17]),32);
        tracep->fullIData(oldp+30,(vlTOPp->testbench__DOT__dut__DOT__regfile[18]),32);
        tracep->fullIData(oldp+31,(vlTOPp->testbench__DOT__dut__DOT__regfile[19]),32);
        tracep->fullIData(oldp+32,(vlTOPp->testbench__DOT__dut__DOT__regfile[20]),32);
        tracep->fullIData(oldp+33,(vlTOPp->testbench__DOT__dut__DOT__regfile[21]),32);
        tracep->fullIData(oldp+34,(vlTOPp->testbench__DOT__dut__DOT__regfile[22]),32);
        tracep->fullIData(oldp+35,(vlTOPp->testbench__DOT__dut__DOT__regfile[23]),32);
        tracep->fullIData(oldp+36,(vlTOPp->testbench__DOT__dut__DOT__regfile[24]),32);
        tracep->fullIData(oldp+37,(vlTOPp->testbench__DOT__dut__DOT__regfile[25]),32);
        tracep->fullIData(oldp+38,(vlTOPp->testbench__DOT__dut__DOT__regfile[26]),32);
        tracep->fullIData(oldp+39,(vlTOPp->testbench__DOT__dut__DOT__regfile[27]),32);
        tracep->fullIData(oldp+40,(vlTOPp->testbench__DOT__dut__DOT__regfile[28]),32);
        tracep->fullIData(oldp+41,(vlTOPp->testbench__DOT__dut__DOT__regfile[29]),32);
        tracep->fullIData(oldp+42,(vlTOPp->testbench__DOT__dut__DOT__regfile[30]),32);
        tracep->fullIData(oldp+43,(vlTOPp->testbench__DOT__dut__DOT__regfile[31]),32);
        tracep->fullIData(oldp+44,(vlTOPp->testbench__DOT__dut__DOT__pc),32);
        tracep->fullIData(oldp+45,(vlTOPp->testbench__DOT__dut__DOT__ppc),32);
        tracep->fullIData(oldp+46,(vlTOPp->testbench__DOT__dut__DOT__insn_EX),32);
        tracep->fullIData(oldp+47,(vlTOPp->testbench__DOT__dut__DOT__imem_addr_q),32);
        tracep->fullIData(oldp+48,(((0U != (0x1fU & 
                                            (vlTOPp->testbench__DOT__imem_data 
                                             >> 0xfU)))
                                     ? vlTOPp->testbench__DOT__dut__DOT__regfile
                                    [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                               >> 0xfU))]
                                     : 0U)),32);
        tracep->fullIData(oldp+49,(((0U != (0x1fU & 
                                            (vlTOPp->testbench__DOT__imem_data 
                                             >> 0x14U)))
                                     ? vlTOPp->testbench__DOT__dut__DOT__regfile
                                    [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                               >> 0x14U))]
                                     : 0U)),32);
        tracep->fullIData(oldp+50,(vlTOPp->testbench__DOT__dut__DOT__rs1_value),32);
        tracep->fullIData(oldp+51,(vlTOPp->testbench__DOT__dut__DOT__rs2_value),32);
        tracep->fullCData(oldp+52,((0x7fU & (vlTOPp->testbench__DOT__imem_data 
                                             >> 0x19U))),7);
        tracep->fullCData(oldp+53,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+54,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+55,((7U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+56,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                             >> 7U))),5);
        tracep->fullCData(oldp+57,((0x7fU & vlTOPp->testbench__DOT__imem_data)),7);
        tracep->fullCData(oldp+58,((0x7fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                             >> 0x19U))),7);
        tracep->fullCData(oldp+59,((0x1fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+60,((0x1fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+61,((7U & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+62,((0x1fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                             >> 7U))),5);
        tracep->fullCData(oldp+63,((0x7fU & vlTOPp->testbench__DOT__dut__DOT__insn_EX)),7);
        tracep->fullSData(oldp+64,((0xfffU & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0x14U))),12);
        tracep->fullSData(oldp+65,(vlTOPp->testbench__DOT__dut__DOT__imm_s),12);
        tracep->fullSData(oldp+66,(vlTOPp->testbench__DOT__dut__DOT__imm_b),13);
        tracep->fullIData(oldp+67,(vlTOPp->testbench__DOT__dut__DOT__imm_j),21);
        tracep->fullIData(oldp+68,(VL_EXTENDS_II(32,12, 
                                                 (0xfffU 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x14U)))),32);
        tracep->fullIData(oldp+69,(VL_EXTENDS_II(32,12, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_s))),32);
        tracep->fullIData(oldp+70,(VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b))),32);
        tracep->fullIData(oldp+71,(VL_EXTENDS_II(32,21, vlTOPp->testbench__DOT__dut__DOT__imm_j)),32);
        tracep->fullIData(oldp+72,(vlTOPp->testbench__DOT__dut__DOT__imm_i_sext),32);
        tracep->fullIData(oldp+73,(vlTOPp->testbench__DOT__dut__DOT__imm_s_sext),32);
        tracep->fullIData(oldp+74,(vlTOPp->testbench__DOT__dut__DOT__imm_b_sext),32);
        tracep->fullIData(oldp+75,(vlTOPp->testbench__DOT__dut__DOT__imm_j_sext),32);
        tracep->fullBit(oldp+76,(vlTOPp->testbench__DOT__dut__DOT__trapped_q));
        tracep->fullBit(oldp+77,(vlTOPp->testbench__DOT__dut__DOT__fw_rs1));
        tracep->fullBit(oldp+78,(vlTOPp->testbench__DOT__dut__DOT__fw_rs2));
        tracep->fullBit(oldp+79,(vlTOPp->testbench__DOT__dut__DOT__block_EX));
        tracep->fullBit(oldp+80,(vlTOPp->testbench__DOT__dut__DOT__stall_EX));
        tracep->fullBit(oldp+81,(vlTOPp->testbench__DOT__dut__DOT__reset_q));
        tracep->fullIData(oldp+82,(vlTOPp->testbench__DOT__dut__DOT__mem_rdata),32);
        tracep->fullIData(oldp+83,(vlTOPp->testbench__DOT__imem_addr),32);
        tracep->fullBit(oldp+84,(vlTOPp->testbench__DOT__dmem_valid));
        tracep->fullIData(oldp+85,(vlTOPp->testbench__DOT__dmem_addr),32);
        tracep->fullCData(oldp+86,(vlTOPp->testbench__DOT__dmem_wstrb),4);
        tracep->fullIData(oldp+87,(vlTOPp->testbench__DOT__dmem_wdata),32);
        tracep->fullBit(oldp+88,((0x10000U > (0x3fffffffU 
                                              & (vlTOPp->testbench__DOT__dmem_addr 
                                                 >> 2U)))));
        tracep->fullBit(oldp+89,((0x2000000U == vlTOPp->testbench__DOT__dmem_addr)));
        tracep->fullBit(oldp+90,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable));
        tracep->fullIData(oldp+91,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr),32);
        tracep->fullIData(oldp+92,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_data),32);
        tracep->fullCData(oldp+93,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb),4);
        tracep->fullBit(oldp+94,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable));
        tracep->fullIData(oldp+95,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr),32);
        tracep->fullCData(oldp+96,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg),5);
        tracep->fullCData(oldp+97,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func),5);
        tracep->fullIData(oldp+98,(vlTOPp->testbench__DOT__dut__DOT__npc),32);
        tracep->fullBit(oldp+99,(vlTOPp->testbench__DOT__dut__DOT__read_en_rs1));
        tracep->fullBit(oldp+100,(vlTOPp->testbench__DOT__dut__DOT__read_en_rs2));
        tracep->fullBit(oldp+101,(vlTOPp->testbench__DOT__dut__DOT__next_wr));
        tracep->fullIData(oldp+102,(vlTOPp->testbench__DOT__dut__DOT__next_rd),32);
        tracep->fullBit(oldp+103,(vlTOPp->testbench__DOT__dut__DOT__illinsn));
        tracep->fullBit(oldp+104,(vlTOPp->testbench__DOT__dut__DOT__j_b_check));
        tracep->fullBit(oldp+105,(vlTOPp->testbench__DOT__dut__DOT__block_ID));
        tracep->fullBit(oldp+106,(vlTOPp->testbench__DOT__dut__DOT__stall_ID));
        tracep->fullBit(oldp+107,(vlTOPp->clock));
        tracep->fullBit(oldp+108,(vlTOPp->reset));
        tracep->fullIData(oldp+109,(0x10U),32);
        tracep->fullIData(oldp+110,(0U),32);
        tracep->fullIData(oldp+111,(0x20U),32);
        tracep->fullCData(oldp+112,(3U),7);
        tracep->fullCData(oldp+113,(0x23U),7);
        tracep->fullCData(oldp+114,(0x43U),7);
        tracep->fullCData(oldp+115,(0x63U),7);
        tracep->fullCData(oldp+116,(7U),7);
        tracep->fullCData(oldp+117,(0x27U),7);
        tracep->fullCData(oldp+118,(0x47U),7);
        tracep->fullCData(oldp+119,(0x67U),7);
        tracep->fullCData(oldp+120,(0xbU),7);
        tracep->fullCData(oldp+121,(0x2bU),7);
        tracep->fullCData(oldp+122,(0x4bU),7);
        tracep->fullCData(oldp+123,(0x6bU),7);
        tracep->fullCData(oldp+124,(0xfU),7);
        tracep->fullCData(oldp+125,(0x2fU),7);
        tracep->fullCData(oldp+126,(0x4fU),7);
        tracep->fullCData(oldp+127,(0x6fU),7);
        tracep->fullCData(oldp+128,(0x13U),7);
        tracep->fullCData(oldp+129,(0x33U),7);
        tracep->fullCData(oldp+130,(0x53U),7);
        tracep->fullCData(oldp+131,(0x73U),7);
        tracep->fullCData(oldp+132,(0x17U),7);
        tracep->fullCData(oldp+133,(0x37U),7);
        tracep->fullCData(oldp+134,(0x57U),7);
        tracep->fullCData(oldp+135,(0x77U),7);
        tracep->fullCData(oldp+136,(0x1bU),7);
        tracep->fullCData(oldp+137,(0x3bU),7);
        tracep->fullCData(oldp+138,(0x5bU),7);
        tracep->fullCData(oldp+139,(0x7bU),7);
    }
}
