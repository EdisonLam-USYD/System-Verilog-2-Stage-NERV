// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtestbench__Syms* __restrict vlSymsp = static_cast<Vtestbench__Syms*>(userp);
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtestbench::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtestbench__Syms* __restrict vlSymsp = static_cast<Vtestbench__Syms*>(userp);
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->testbench__DOT__dut__DOT__trapped));
            tracep->chgIData(oldp+1,(vlTOPp->testbench__DOT__x10),32);
            tracep->chgIData(oldp+2,(vlTOPp->testbench__DOT__imem_data),32);
            tracep->chgIData(oldp+3,(vlTOPp->testbench__DOT__dmem_rdata),32);
            tracep->chgIData(oldp+4,(vlTOPp->testbench__DOT__out),32);
            tracep->chgBit(oldp+5,(vlTOPp->testbench__DOT__out_valid));
            tracep->chgIData(oldp+6,(vlTOPp->testbench__DOT__i),32);
            tracep->chgIData(oldp+7,(vlTOPp->testbench__DOT__cycles),32);
            tracep->chgBit(oldp+8,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q));
            tracep->chgCData(oldp+9,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg_q),5);
            tracep->chgCData(oldp+10,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q),5);
            tracep->chgIData(oldp+11,(vlTOPp->testbench__DOT__dut__DOT__regfile[0]),32);
            tracep->chgIData(oldp+12,(vlTOPp->testbench__DOT__dut__DOT__regfile[1]),32);
            tracep->chgIData(oldp+13,(vlTOPp->testbench__DOT__dut__DOT__regfile[2]),32);
            tracep->chgIData(oldp+14,(vlTOPp->testbench__DOT__dut__DOT__regfile[3]),32);
            tracep->chgIData(oldp+15,(vlTOPp->testbench__DOT__dut__DOT__regfile[4]),32);
            tracep->chgIData(oldp+16,(vlTOPp->testbench__DOT__dut__DOT__regfile[5]),32);
            tracep->chgIData(oldp+17,(vlTOPp->testbench__DOT__dut__DOT__regfile[6]),32);
            tracep->chgIData(oldp+18,(vlTOPp->testbench__DOT__dut__DOT__regfile[7]),32);
            tracep->chgIData(oldp+19,(vlTOPp->testbench__DOT__dut__DOT__regfile[8]),32);
            tracep->chgIData(oldp+20,(vlTOPp->testbench__DOT__dut__DOT__regfile[9]),32);
            tracep->chgIData(oldp+21,(vlTOPp->testbench__DOT__dut__DOT__regfile[10]),32);
            tracep->chgIData(oldp+22,(vlTOPp->testbench__DOT__dut__DOT__regfile[11]),32);
            tracep->chgIData(oldp+23,(vlTOPp->testbench__DOT__dut__DOT__regfile[12]),32);
            tracep->chgIData(oldp+24,(vlTOPp->testbench__DOT__dut__DOT__regfile[13]),32);
            tracep->chgIData(oldp+25,(vlTOPp->testbench__DOT__dut__DOT__regfile[14]),32);
            tracep->chgIData(oldp+26,(vlTOPp->testbench__DOT__dut__DOT__regfile[15]),32);
            tracep->chgIData(oldp+27,(vlTOPp->testbench__DOT__dut__DOT__regfile[16]),32);
            tracep->chgIData(oldp+28,(vlTOPp->testbench__DOT__dut__DOT__regfile[17]),32);
            tracep->chgIData(oldp+29,(vlTOPp->testbench__DOT__dut__DOT__regfile[18]),32);
            tracep->chgIData(oldp+30,(vlTOPp->testbench__DOT__dut__DOT__regfile[19]),32);
            tracep->chgIData(oldp+31,(vlTOPp->testbench__DOT__dut__DOT__regfile[20]),32);
            tracep->chgIData(oldp+32,(vlTOPp->testbench__DOT__dut__DOT__regfile[21]),32);
            tracep->chgIData(oldp+33,(vlTOPp->testbench__DOT__dut__DOT__regfile[22]),32);
            tracep->chgIData(oldp+34,(vlTOPp->testbench__DOT__dut__DOT__regfile[23]),32);
            tracep->chgIData(oldp+35,(vlTOPp->testbench__DOT__dut__DOT__regfile[24]),32);
            tracep->chgIData(oldp+36,(vlTOPp->testbench__DOT__dut__DOT__regfile[25]),32);
            tracep->chgIData(oldp+37,(vlTOPp->testbench__DOT__dut__DOT__regfile[26]),32);
            tracep->chgIData(oldp+38,(vlTOPp->testbench__DOT__dut__DOT__regfile[27]),32);
            tracep->chgIData(oldp+39,(vlTOPp->testbench__DOT__dut__DOT__regfile[28]),32);
            tracep->chgIData(oldp+40,(vlTOPp->testbench__DOT__dut__DOT__regfile[29]),32);
            tracep->chgIData(oldp+41,(vlTOPp->testbench__DOT__dut__DOT__regfile[30]),32);
            tracep->chgIData(oldp+42,(vlTOPp->testbench__DOT__dut__DOT__regfile[31]),32);
            tracep->chgIData(oldp+43,(vlTOPp->testbench__DOT__dut__DOT__pc),32);
            tracep->chgIData(oldp+44,(vlTOPp->testbench__DOT__dut__DOT__ppc),32);
            tracep->chgIData(oldp+45,(vlTOPp->testbench__DOT__dut__DOT__insn_EX),32);
            tracep->chgIData(oldp+46,(vlTOPp->testbench__DOT__dut__DOT__imem_addr_q),32);
            tracep->chgIData(oldp+47,(((0U != (0x1fU 
                                               & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xfU)))
                                        ? vlTOPp->testbench__DOT__dut__DOT__regfile
                                       [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xfU))]
                                        : 0U)),32);
            tracep->chgIData(oldp+48,(((0U != (0x1fU 
                                               & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x14U)))
                                        ? vlTOPp->testbench__DOT__dut__DOT__regfile
                                       [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x14U))]
                                        : 0U)),32);
            tracep->chgIData(oldp+49,(vlTOPp->testbench__DOT__dut__DOT__rs1_value),32);
            tracep->chgIData(oldp+50,(vlTOPp->testbench__DOT__dut__DOT__rs2_value),32);
            tracep->chgCData(oldp+51,((0x7fU & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0x19U))),7);
            tracep->chgCData(oldp+52,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+53,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+54,((7U & (vlTOPp->testbench__DOT__imem_data 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+55,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                                >> 7U))),5);
            tracep->chgCData(oldp+56,((0x7fU & vlTOPp->testbench__DOT__imem_data)),7);
            tracep->chgCData(oldp+57,((0x7fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                >> 0x19U))),7);
            tracep->chgCData(oldp+58,((0x1fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+59,((0x1fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+60,((7U & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+61,((0x1fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                >> 7U))),5);
            tracep->chgCData(oldp+62,((0x7fU & vlTOPp->testbench__DOT__dut__DOT__insn_EX)),7);
            tracep->chgSData(oldp+63,((0xfffU & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0x14U))),12);
            tracep->chgSData(oldp+64,(vlTOPp->testbench__DOT__dut__DOT__imm_s),12);
            tracep->chgSData(oldp+65,(vlTOPp->testbench__DOT__dut__DOT__imm_b),13);
            tracep->chgIData(oldp+66,(vlTOPp->testbench__DOT__dut__DOT__imm_j),21);
            tracep->chgIData(oldp+67,(VL_EXTENDS_II(32,12, 
                                                    (0xfffU 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0x14U)))),32);
            tracep->chgIData(oldp+68,(VL_EXTENDS_II(32,12, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_s))),32);
            tracep->chgIData(oldp+69,(VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b))),32);
            tracep->chgIData(oldp+70,(VL_EXTENDS_II(32,21, vlTOPp->testbench__DOT__dut__DOT__imm_j)),32);
            tracep->chgIData(oldp+71,(vlTOPp->testbench__DOT__dut__DOT__imm_i_sext),32);
            tracep->chgIData(oldp+72,(vlTOPp->testbench__DOT__dut__DOT__imm_s_sext),32);
            tracep->chgIData(oldp+73,(vlTOPp->testbench__DOT__dut__DOT__imm_b_sext),32);
            tracep->chgIData(oldp+74,(vlTOPp->testbench__DOT__dut__DOT__imm_j_sext),32);
            tracep->chgBit(oldp+75,(vlTOPp->testbench__DOT__dut__DOT__trapped_q));
            tracep->chgBit(oldp+76,(vlTOPp->testbench__DOT__dut__DOT__fw_rs1));
            tracep->chgBit(oldp+77,(vlTOPp->testbench__DOT__dut__DOT__fw_rs2));
            tracep->chgBit(oldp+78,(vlTOPp->testbench__DOT__dut__DOT__block_EX));
            tracep->chgBit(oldp+79,(vlTOPp->testbench__DOT__dut__DOT__stall_EX));
            tracep->chgBit(oldp+80,(vlTOPp->testbench__DOT__dut__DOT__reset_q));
            tracep->chgIData(oldp+81,(vlTOPp->testbench__DOT__dut__DOT__mem_rdata),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+82,(vlTOPp->testbench__DOT__imem_addr),32);
            tracep->chgBit(oldp+83,(vlTOPp->testbench__DOT__dmem_valid));
            tracep->chgIData(oldp+84,(vlTOPp->testbench__DOT__dmem_addr),32);
            tracep->chgCData(oldp+85,(vlTOPp->testbench__DOT__dmem_wstrb),4);
            tracep->chgIData(oldp+86,(vlTOPp->testbench__DOT__dmem_wdata),32);
            tracep->chgBit(oldp+87,((0x10000U > (0x3fffffffU 
                                                 & (vlTOPp->testbench__DOT__dmem_addr 
                                                    >> 2U)))));
            tracep->chgBit(oldp+88,((0x2000000U == vlTOPp->testbench__DOT__dmem_addr)));
            tracep->chgBit(oldp+89,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable));
            tracep->chgIData(oldp+90,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr),32);
            tracep->chgIData(oldp+91,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_data),32);
            tracep->chgCData(oldp+92,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb),4);
            tracep->chgBit(oldp+93,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable));
            tracep->chgIData(oldp+94,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr),32);
            tracep->chgCData(oldp+95,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg),5);
            tracep->chgCData(oldp+96,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func),5);
            tracep->chgIData(oldp+97,(vlTOPp->testbench__DOT__dut__DOT__npc),32);
            tracep->chgBit(oldp+98,(vlTOPp->testbench__DOT__dut__DOT__read_en_rs1));
            tracep->chgBit(oldp+99,(vlTOPp->testbench__DOT__dut__DOT__read_en_rs2));
            tracep->chgBit(oldp+100,(vlTOPp->testbench__DOT__dut__DOT__next_wr));
            tracep->chgIData(oldp+101,(vlTOPp->testbench__DOT__dut__DOT__next_rd),32);
            tracep->chgBit(oldp+102,(vlTOPp->testbench__DOT__dut__DOT__illinsn));
            tracep->chgBit(oldp+103,(vlTOPp->testbench__DOT__dut__DOT__j_b_check));
            tracep->chgBit(oldp+104,(vlTOPp->testbench__DOT__dut__DOT__block_ID));
            tracep->chgBit(oldp+105,(vlTOPp->testbench__DOT__dut__DOT__stall_ID));
        }
        tracep->chgBit(oldp+106,(vlTOPp->clock));
        tracep->chgBit(oldp+107,(vlTOPp->reset));
    }
}

void Vtestbench::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtestbench__Syms* __restrict vlSymsp = static_cast<Vtestbench__Syms*>(userp);
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
