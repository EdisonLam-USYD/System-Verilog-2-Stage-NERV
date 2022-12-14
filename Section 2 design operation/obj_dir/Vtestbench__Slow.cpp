// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench) {
    Vtestbench__Syms* __restrict vlSymsp = __VlSymsp = new Vtestbench__Syms(this, name());
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtestbench::~Vtestbench() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtestbench::_initial__TOP__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_initial__TOP__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp5[3];
    // Body
    vlTOPp->testbench__DOT__cycles = 0U;
    __Vtemp5[0U] = 0x2e686578U;
    __Vtemp5[1U] = 0x77617265U;
    __Vtemp5[2U] = 0x6669726dU;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp5)
                 , vlTOPp->testbench__DOT__mem, 0, ~0ULL);
}

void Vtestbench::_settle__TOP__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_settle__TOP__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->testbench__DOT__dut__DOT__imm_b = (0x1ffeU 
                                               & (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = (0x1ffffeU 
                                               & vlTOPp->testbench__DOT__dut__DOT__imm_j);
    vlTOPp->testbench__DOT__dut__DOT__imm_s = ((0xfe0U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 7U)));
    vlTOPp->testbench__DOT__dut__DOT__mem_rdata = (
                                                   (0x1fU 
                                                    >= 
                                                    (0x18U 
                                                     & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))
                                                    ? 
                                                   (vlTOPp->testbench__DOT__dmem_rdata 
                                                    >> 
                                                    (0x18U 
                                                     & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))
                                                    : 0U);
    if ((0U == (7U & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))) {
        vlTOPp->testbench__DOT__dut__DOT__mem_rdata 
            = VL_EXTENDS_II(32,8, (0xffU & vlTOPp->testbench__DOT__dut__DOT__mem_rdata));
    } else {
        if ((1U == (7U & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))) {
            vlTOPp->testbench__DOT__dut__DOT__mem_rdata 
                = VL_EXTENDS_II(32,16, (0xffffU & vlTOPp->testbench__DOT__dut__DOT__mem_rdata));
        } else {
            if ((4U == (7U & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))) {
                vlTOPp->testbench__DOT__dut__DOT__mem_rdata 
                    = (0xffU & vlTOPp->testbench__DOT__dut__DOT__mem_rdata);
            } else {
                if ((5U == (7U & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))) {
                    vlTOPp->testbench__DOT__dut__DOT__mem_rdata 
                        = (0xffffU & vlTOPp->testbench__DOT__dut__DOT__mem_rdata);
                }
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__fw_rs1 = 0U;
    if ((1U & (~ (IData)(vlTOPp->testbench__DOT__dut__DOT__block_EX)))) {
        if (((0x1fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                       >> 7U)) == (0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                            >> 0xfU)))) {
            vlTOPp->testbench__DOT__dut__DOT__fw_rs1 = 1U;
        } else {
            if (((0x1fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                           >> 7U)) != (0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0x14U)))) {
                vlTOPp->testbench__DOT__dut__DOT__fw_rs1 = 0U;
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__fw_rs2 = 0U;
    if ((1U & (~ (IData)(vlTOPp->testbench__DOT__dut__DOT__block_EX)))) {
        if (((0x1fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                       >> 7U)) != (0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                            >> 0xfU)))) {
            vlTOPp->testbench__DOT__dut__DOT__fw_rs2 
                = ((0x1fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                             >> 7U)) == (0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x14U)));
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__imm_b = ((0xfffU 
                                                & (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)) 
                                               | (0x1000U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x13U)));
    vlTOPp->testbench__DOT__dut__DOT__imm_b = ((0x1801U 
                                                & (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)) 
                                               | ((0x7e0U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 7U))));
    vlTOPp->testbench__DOT__dut__DOT__imm_b = ((0x17ffU 
                                                & (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)) 
                                               | (0x800U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     << 4U)));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = ((0xfffffU 
                                                & vlTOPp->testbench__DOT__dut__DOT__imm_j) 
                                               | (0x100000U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xbU)));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = ((0x1ff801U 
                                                & vlTOPp->testbench__DOT__dut__DOT__imm_j) 
                                               | (0x7feU 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x14U)));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = ((0x1ff7ffU 
                                                & vlTOPp->testbench__DOT__dut__DOT__imm_j) 
                                               | (0x800U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 9U)));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = ((0x100fffU 
                                                & vlTOPp->testbench__DOT__dut__DOT__imm_j) 
                                               | (0xff000U 
                                                  & vlTOPp->testbench__DOT__imem_data));
    vlTOPp->testbench__DOT__dut__DOT__npc = ((IData)(4U) 
                                             + vlTOPp->testbench__DOT__dut__DOT__pc);
    vlTOPp->testbench__DOT__dut__DOT__next_wr = 0U;
    vlTOPp->testbench__DOT__dut__DOT__next_rd = 0U;
    vlTOPp->testbench__DOT__dut__DOT__illinsn = 0U;
    vlTOPp->testbench__DOT__dut__DOT__j_b_check = 0U;
    vlTOPp->testbench__DOT__dut__DOT__block_ID = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_wr_data = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_func = 0U;
    vlTOPp->testbench__DOT__dut__DOT__stall_ID = 0U;
    vlTOPp->testbench__DOT__dut__DOT__read_en_rs1 = 0U;
    vlTOPp->testbench__DOT__dut__DOT__read_en_rs2 = 0U;
    if ((0U != (0x1fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                         >> 7U)))) {
        if ((0x67U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
            vlTOPp->testbench__DOT__dut__DOT__read_en_rs1 = 1U;
        } else {
            if ((3U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                vlTOPp->testbench__DOT__dut__DOT__read_en_rs1 = 1U;
            }
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->testbench__DOT__dut__DOT__block_EX)) 
               & (~ (IData)(vlTOPp->testbench__DOT__dut__DOT__stall_EX))))) {
        if ((0x40U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
            if ((0x20U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                if ((0x10U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                } else {
                    if ((8U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                        if ((4U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                            if ((2U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                if ((1U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                    vlTOPp->testbench__DOT__dut__DOT__j_b_check = 1U;
                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                        = vlTOPp->testbench__DOT__dut__DOT__pc;
                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                        = (vlTOPp->testbench__DOT__dut__DOT__ppc 
                                           + vlTOPp->testbench__DOT__dut__DOT__imm_j_sext);
                                    if ((0U != (3U 
                                                & vlTOPp->testbench__DOT__dut__DOT__npc))) {
                                        vlTOPp->testbench__DOT__dut__DOT__npc 
                                            = (0xfffffffcU 
                                               & vlTOPp->testbench__DOT__dut__DOT__npc);
                                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                    }
                                } else {
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    } else {
                        if ((4U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                            if ((2U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                if ((1U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                    if ((0U == (7U 
                                                & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                   >> 0xcU)))) {
                                        vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                        vlTOPp->testbench__DOT__dut__DOT__j_b_check = 1U;
                                        vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                            = vlTOPp->testbench__DOT__dut__DOT__pc;
                                        vlTOPp->testbench__DOT__dut__DOT__npc 
                                            = (0xfffffffeU 
                                               & (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                  + vlTOPp->testbench__DOT__dut__DOT__imm_i_sext));
                                    } else {
                                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                    }
                                    if ((0U != (3U 
                                                & vlTOPp->testbench__DOT__dut__DOT__npc))) {
                                        vlTOPp->testbench__DOT__dut__DOT__npc 
                                            = (0xfffffffcU 
                                               & vlTOPp->testbench__DOT__dut__DOT__npc);
                                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                    }
                                } else {
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            if ((2U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                if ((1U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                    if ((0x4000U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                        if ((0x2000U 
                                             & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                            if ((0x1000U 
                                                 & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                                if (
                                                    (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                     >= vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__ppc 
                                                         + vlTOPp->testbench__DOT__dut__DOT__imm_b_sext);
                                                    vlTOPp->testbench__DOT__dut__DOT__j_b_check = 1U;
                                                }
                                            } else {
                                                if (
                                                    (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                     < vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__ppc 
                                                         + vlTOPp->testbench__DOT__dut__DOT__imm_b_sext);
                                                    vlTOPp->testbench__DOT__dut__DOT__j_b_check = 1U;
                                                }
                                            }
                                        } else {
                                            if ((0x1000U 
                                                 & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                                if (
                                                    VL_GTES_III(1,32,32, vlTOPp->testbench__DOT__dut__DOT__rs1_value, vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__ppc 
                                                         + vlTOPp->testbench__DOT__dut__DOT__imm_b_sext);
                                                    vlTOPp->testbench__DOT__dut__DOT__j_b_check = 1U;
                                                }
                                            } else {
                                                if (
                                                    VL_LTS_III(1,32,32, vlTOPp->testbench__DOT__dut__DOT__rs1_value, vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__ppc 
                                                         + vlTOPp->testbench__DOT__dut__DOT__imm_b_sext);
                                                    vlTOPp->testbench__DOT__dut__DOT__j_b_check = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                                if (
                                                    (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                     != vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__ppc 
                                                         + vlTOPp->testbench__DOT__dut__DOT__imm_b_sext);
                                                    vlTOPp->testbench__DOT__dut__DOT__j_b_check = 1U;
                                                }
                                            } else {
                                                if (
                                                    (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                     == vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__ppc 
                                                         + vlTOPp->testbench__DOT__dut__DOT__imm_b_sext);
                                                    vlTOPp->testbench__DOT__dut__DOT__j_b_check = 1U;
                                                }
                                            }
                                        }
                                    }
                                    if ((0U != (3U 
                                                & vlTOPp->testbench__DOT__dut__DOT__npc))) {
                                        vlTOPp->testbench__DOT__dut__DOT__npc 
                                            = (0xfffffffcU 
                                               & vlTOPp->testbench__DOT__dut__DOT__npc);
                                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                    }
                                } else {
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        }
                    }
                }
            } else {
                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
            }
        } else {
            if ((0x20U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                if ((0x10U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                    if ((8U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                    } else {
                        if ((4U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                            if ((2U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                if ((1U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                        = (0xfffff000U 
                                           & vlTOPp->testbench__DOT__dut__DOT__insn_EX);
                                } else {
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            if ((2U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                if ((1U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                    if (((((((((0U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                       >> 0xcU)))) 
                                               | (0x100U 
                                                  == 
                                                  ((0x3f8U 
                                                    & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                         >> 0xcU))))) 
                                              | (1U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                        >> 0xcU))))) 
                                             | (2U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                       >> 0xcU))))) 
                                            | (3U == 
                                               ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                      >> 0xcU))))) 
                                           | (4U == 
                                              ((0x3f8U 
                                                & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                     >> 0xcU))))) 
                                          | (5U == 
                                             ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                    >> 0xcU))))) 
                                         | (0x105U 
                                            == ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                      >> 0xcU)))))) {
                                        if ((0U == 
                                             ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                    >> 0xcU))))) {
                                            vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                            vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                = (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                   + vlTOPp->testbench__DOT__dut__DOT__rs2_value);
                                        } else {
                                            if ((0x100U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                        >> 0xcU))))) {
                                                vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                     - vlTOPp->testbench__DOT__dut__DOT__rs2_value);
                                            } else {
                                                if (
                                                    (1U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                            >> 0xcU))))) {
                                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                         << 
                                                         (0x1fU 
                                                          & vlTOPp->testbench__DOT__dut__DOT__rs2_value));
                                                } else {
                                                    if (
                                                        (2U 
                                                         == 
                                                         ((0x3f8U 
                                                           & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                              >> 0x16U)) 
                                                          | (7U 
                                                             & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                >> 0xcU))))) {
                                                        vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                        vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                            = 
                                                            VL_LTS_III(32,32,32, vlTOPp->testbench__DOT__dut__DOT__rs1_value, vlTOPp->testbench__DOT__dut__DOT__rs2_value);
                                                    } else {
                                                        if (
                                                            (3U 
                                                             == 
                                                             ((0x3f8U 
                                                               & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                  >> 0x16U)) 
                                                              | (7U 
                                                                 & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                    >> 0xcU))))) {
                                                            vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                            vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                                = 
                                                                (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                                 < vlTOPp->testbench__DOT__dut__DOT__rs2_value);
                                                        } else {
                                                            if (
                                                                (4U 
                                                                 == 
                                                                 ((0x3f8U 
                                                                   & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                      >> 0x16U)) 
                                                                  | (7U 
                                                                     & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                        >> 0xcU))))) {
                                                                vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                                vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                                    = 
                                                                    (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                                     ^ vlTOPp->testbench__DOT__dut__DOT__rs2_value);
                                                            } else {
                                                                if (
                                                                    (5U 
                                                                     == 
                                                                     ((0x3f8U 
                                                                       & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                          >> 0x16U)) 
                                                                      | (7U 
                                                                         & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                            >> 0xcU))))) {
                                                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                                        = 
                                                                        (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & vlTOPp->testbench__DOT__dut__DOT__rs2_value));
                                                                } else {
                                                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                                        = 
                                                                        VL_SHIFTRS_III(32,32,5, vlTOPp->testbench__DOT__dut__DOT__rs1_value, 
                                                                                (0x1fU 
                                                                                & vlTOPp->testbench__DOT__dut__DOT__rs2_value));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((6U == 
                                             ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                    >> 0xcU))))) {
                                            vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                            vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                = (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                   | vlTOPp->testbench__DOT__dut__DOT__rs2_value);
                                        } else {
                                            if ((7U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                        >> 0xcU))))) {
                                                vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                     & vlTOPp->testbench__DOT__dut__DOT__rs2_value);
                                            } else {
                                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                    } else {
                        if ((4U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        } else {
                            if ((2U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                if ((1U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr 
                                        = (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                           + vlTOPp->testbench__DOT__dut__DOT__imm_s_sext);
                                    if ((((0U == (0x1cU 
                                                  & ((0x1cU 
                                                      & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                         >> 0xaU)) 
                                                     | (3U 
                                                        & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr)))) 
                                          | (4U == 
                                             (0x1dU 
                                              & ((0x1cU 
                                                  & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                     >> 0xaU)) 
                                                 | (3U 
                                                    & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr))))) 
                                         | (8U == (
                                                   (0x1cU 
                                                    & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                       >> 0xaU)) 
                                                   | (3U 
                                                      & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr))))) {
                                        vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable = 1U;
                                        vlTOPp->testbench__DOT__dut__DOT__mem_wr_data 
                                            = vlTOPp->testbench__DOT__dut__DOT__rs2_value;
                                        vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 0xfU;
                                        if ((0U == 
                                             (7U & 
                                              (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                               >> 0xcU)))) {
                                            vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 1U;
                                        } else {
                                            if ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                     >> 0xcU)))) {
                                                vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 3U;
                                            } else {
                                                if (
                                                    (2U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                         >> 0xcU)))) {
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 0xfU;
                                                }
                                            }
                                        }
                                        vlTOPp->testbench__DOT__dut__DOT__mem_wr_data 
                                            = ((0x1fU 
                                                >= 
                                                (0x18U 
                                                 & (vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr 
                                                    << 3U)))
                                                ? (vlTOPp->testbench__DOT__dut__DOT__mem_wr_data 
                                                   << 
                                                   (0x18U 
                                                    & (vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr 
                                                       << 3U)))
                                                : 0U);
                                        vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb 
                                            = (0xfU 
                                               & ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb) 
                                                  << 
                                                  (3U 
                                                   & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr)));
                                        vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr 
                                            = (0xfffffffcU 
                                               & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr);
                                    } else {
                                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                    }
                                } else {
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                    if ((8U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                    } else {
                        if ((4U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                            if ((2U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                if ((1U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                        = ((0xfffff000U 
                                            & vlTOPp->testbench__DOT__dut__DOT__insn_EX) 
                                           + (vlTOPp->testbench__DOT__dut__DOT__pc 
                                              - (IData)(4U)));
                                } else {
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            if ((2U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                if ((1U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                    if (((((((((0U 
                                                == 
                                                (7U 
                                                 & ((0x3f8U 
                                                     & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                          >> 0xcU))))) 
                                               | (2U 
                                                  == 
                                                  (7U 
                                                   & ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                            >> 0xcU)))))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & ((0x3f8U 
                                                      & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                           >> 0xcU)))))) 
                                             | (4U 
                                                == 
                                                (7U 
                                                 & ((0x3f8U 
                                                     & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                          >> 0xcU)))))) 
                                            | (6U == 
                                               (7U 
                                                & ((0x3f8U 
                                                    & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                         >> 0xcU)))))) 
                                           | (7U == 
                                              (7U & 
                                               ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                      >> 0xcU)))))) 
                                          | (1U == 
                                             ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                    >> 0xcU))))) 
                                         | (5U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                         >> 0xcU)))))) {
                                        if ((0U == 
                                             (7U & 
                                              ((0x3f8U 
                                                & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                     >> 0xcU)))))) {
                                            vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                            vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                = (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                   + vlTOPp->testbench__DOT__dut__DOT__imm_i_sext);
                                        } else {
                                            if ((2U 
                                                 == 
                                                 (7U 
                                                  & ((0x3f8U 
                                                      & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                           >> 0xcU)))))) {
                                                vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                    = 
                                                    VL_LTS_III(32,32,32, vlTOPp->testbench__DOT__dut__DOT__rs1_value, vlTOPp->testbench__DOT__dut__DOT__imm_i_sext);
                                            } else {
                                                if (
                                                    (3U 
                                                     == 
                                                     (7U 
                                                      & ((0x3f8U 
                                                          & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                               >> 0xcU)))))) {
                                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                         < vlTOPp->testbench__DOT__dut__DOT__imm_i_sext);
                                                } else {
                                                    if (
                                                        (4U 
                                                         == 
                                                         (7U 
                                                          & ((0x3f8U 
                                                              & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                 >> 0x16U)) 
                                                             | (7U 
                                                                & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                   >> 0xcU)))))) {
                                                        vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                        vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                            = 
                                                            (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                             ^ vlTOPp->testbench__DOT__dut__DOT__imm_i_sext);
                                                    } else {
                                                        if (
                                                            (6U 
                                                             == 
                                                             (7U 
                                                              & ((0x3f8U 
                                                                  & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                     >> 0x16U)) 
                                                                 | (7U 
                                                                    & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                       >> 0xcU)))))) {
                                                            vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                            vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                                = 
                                                                (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                                 | vlTOPp->testbench__DOT__dut__DOT__imm_i_sext);
                                                        } else {
                                                            if (
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((0x3f8U 
                                                                      & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                         >> 0x16U)) 
                                                                     | (7U 
                                                                        & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                           >> 0xcU)))))) {
                                                                vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                                vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                                    = 
                                                                    (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                                     & vlTOPp->testbench__DOT__dut__DOT__imm_i_sext);
                                                            } else {
                                                                if (
                                                                    (1U 
                                                                     == 
                                                                     ((0x3f8U 
                                                                       & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                          >> 0x16U)) 
                                                                      | (7U 
                                                                         & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                            >> 0xcU))))) {
                                                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                                        = 
                                                                        (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                                         << 
                                                                         (0x1fU 
                                                                          & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                             >> 0x14U)));
                                                                } else {
                                                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                                        = 
                                                                        (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                             >> 0x14U)));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x105U 
                                             == ((0x3f8U 
                                                  & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                       >> 0xcU))))) {
                                            vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                            vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                = VL_SHIFTRS_III(32,32,5, vlTOPp->testbench__DOT__dut__DOT__rs1_value, 
                                                                 (0x1fU 
                                                                  & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                     >> 0x14U)));
                                        } else {
                                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                    } else {
                        if ((4U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        } else {
                            if ((2U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                if ((1U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                        = (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                           + vlTOPp->testbench__DOT__dut__DOT__imm_i_sext);
                                    if ((0x4000U & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                        if ((0x2000U 
                                             & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                                if (
                                                    (1U 
                                                     & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr)) {
                                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                                } else {
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                        = 
                                                        (0x1fU 
                                                         & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                            >> 7U));
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                        = 
                                                        ((0x18U 
                                                          & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                             << 3U)) 
                                                         | (7U 
                                                            & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                               >> 0xcU)));
                                                    vlTOPp->testbench__DOT__dut__DOT__stall_ID = 1U;
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                        = 
                                                        (0xfffffffcU 
                                                         & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                                }
                                            } else {
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                        >> 7U));
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                    = 
                                                    ((0x18U 
                                                      & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                           >> 0xcU)));
                                                vlTOPp->testbench__DOT__dut__DOT__stall_ID = 1U;
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                            if ((0x1000U 
                                                 & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                            } else {
                                                if (
                                                    (2U 
                                                     & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr)) {
                                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                                } else {
                                                    if (
                                                        (1U 
                                                         & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr)) {
                                                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                                    } else {
                                                        vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                                        vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                            = 
                                                            (0x1fU 
                                                             & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                >> 7U));
                                                        vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                            = 
                                                            ((0x18U 
                                                              & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                                 << 3U)) 
                                                             | (7U 
                                                                & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                                   >> 0xcU)));
                                                        vlTOPp->testbench__DOT__dut__DOT__stall_ID = 1U;
                                                        vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                            = 
                                                            (0xfffffffcU 
                                                             & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x1000U 
                                                 & vlTOPp->testbench__DOT__dut__DOT__insn_EX)) {
                                                if (
                                                    (1U 
                                                     & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr)) {
                                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                                } else {
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                        = 
                                                        (0x1fU 
                                                         & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                            >> 7U));
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                        = 
                                                        ((0x18U 
                                                          & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                             << 3U)) 
                                                         | (7U 
                                                            & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                               >> 0xcU)));
                                                    vlTOPp->testbench__DOT__dut__DOT__stall_ID = 1U;
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                        = 
                                                        (0xfffffffcU 
                                                         & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                                }
                                            } else {
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                        >> 7U));
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                    = 
                                                    ((0x18U 
                                                      & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                           >> 0xcU)));
                                                vlTOPp->testbench__DOT__dut__DOT__stall_ID = 1U;
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                            }
                                        }
                                    }
                                } else {
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (VL_UNLIKELY((0x13U == vlTOPp->testbench__DOT__dut__DOT__insn_EX))) {
        }
    }
    if (vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q) {
        vlTOPp->testbench__DOT__dut__DOT__next_wr = 0U;
        vlTOPp->testbench__DOT__dut__DOT__illinsn = 0U;
        vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 0U;
        vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable = 0U;
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->testbench__DOT__dut__DOT__reset_q))) {
        vlTOPp->testbench__DOT__dut__DOT__npc = 0U;
        vlTOPp->testbench__DOT__dut__DOT__next_wr = 0U;
        vlTOPp->testbench__DOT__dut__DOT__illinsn = 0U;
        vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 0U;
        vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->testbench__DOT__dut__DOT__stall_ID)))) {
        vlTOPp->testbench__DOT__dut__DOT__stall_ID 
            = (((((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                            >> 0xfU)) == (0x1fU & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                   >> 7U))) 
                 & ((IData)(vlTOPp->testbench__DOT__dut__DOT__next_wr) 
                    | (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q))) 
                & (IData)(vlTOPp->testbench__DOT__dut__DOT__read_en_rs1)) 
               | ((((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                              >> 0x14U)) == (0x1fU 
                                             & (vlTOPp->testbench__DOT__dut__DOT__insn_EX 
                                                >> 7U))) 
                   & ((IData)(vlTOPp->testbench__DOT__dut__DOT__next_wr) 
                      | (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q))) 
                  & (IData)(vlTOPp->testbench__DOT__dut__DOT__read_en_rs2)));
    }
    if (vlTOPp->testbench__DOT__dut__DOT__j_b_check) {
        vlTOPp->testbench__DOT__dut__DOT__block_ID = 1U;
    }
    vlTOPp->testbench__DOT__imem_addr = (((IData)(vlTOPp->testbench__DOT__dut__DOT__trapped) 
                                          | (IData)(vlTOPp->testbench__DOT__dut__DOT__stall_ID))
                                          ? vlTOPp->testbench__DOT__dut__DOT__imem_addr_q
                                          : vlTOPp->testbench__DOT__dut__DOT__npc);
    vlTOPp->testbench__DOT__dmem_valid = ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable) 
                                          | (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable));
    if (vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable) {
        vlTOPp->testbench__DOT__dmem_wstrb = vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb;
        vlTOPp->testbench__DOT__dmem_wdata = vlTOPp->testbench__DOT__dut__DOT__mem_wr_data;
        vlTOPp->testbench__DOT__dmem_addr = vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr;
    } else {
        vlTOPp->testbench__DOT__dmem_wstrb = 0U;
        vlTOPp->testbench__DOT__dmem_wdata = 0U;
        vlTOPp->testbench__DOT__dmem_addr = ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable)
                                              ? vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr
                                              : 0U);
    }
}

void Vtestbench::_eval_initial(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_eval_initial\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtestbench::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::final\n"); );
    // Variables
    Vtestbench__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtestbench::_eval_settle(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_eval_settle\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtestbench::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    testbench__DOT__x10 = VL_RAND_RESET_I(32);
    testbench__DOT__imem_addr = VL_RAND_RESET_I(32);
    testbench__DOT__imem_data = VL_RAND_RESET_I(32);
    testbench__DOT__dmem_valid = VL_RAND_RESET_I(1);
    testbench__DOT__dmem_addr = VL_RAND_RESET_I(32);
    testbench__DOT__dmem_wstrb = VL_RAND_RESET_I(4);
    testbench__DOT__dmem_wdata = VL_RAND_RESET_I(32);
    testbench__DOT__dmem_rdata = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<65536; ++__Vi0) {
            testbench__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    testbench__DOT__out = VL_RAND_RESET_I(32);
    testbench__DOT__out_valid = VL_RAND_RESET_I(1);
    testbench__DOT__i = VL_RAND_RESET_I(32);
    testbench__DOT__cycles = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__mem_wr_enable = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__mem_wr_addr = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__mem_wr_data = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__mem_wr_strb = VL_RAND_RESET_I(4);
    testbench__DOT__dut__DOT__mem_rd_enable = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__mem_rd_addr = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__mem_rd_reg = VL_RAND_RESET_I(5);
    testbench__DOT__dut__DOT__mem_rd_func = VL_RAND_RESET_I(5);
    testbench__DOT__dut__DOT__mem_rd_enable_q = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__mem_rd_reg_q = VL_RAND_RESET_I(5);
    testbench__DOT__dut__DOT__mem_rd_func_q = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            testbench__DOT__dut__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }}
    testbench__DOT__dut__DOT__npc = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__pc = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__ppc = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__insn_EX = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__imem_addr_q = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__rs1_value = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__rs2_value = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__read_en_rs1 = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__read_en_rs2 = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__imm_s = VL_RAND_RESET_I(12);
    testbench__DOT__dut__DOT__imm_b = VL_RAND_RESET_I(13);
    testbench__DOT__dut__DOT__imm_j = VL_RAND_RESET_I(21);
    testbench__DOT__dut__DOT__imm_i_sext = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__imm_s_sext = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__imm_b_sext = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__imm_j_sext = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__next_wr = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__next_rd = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__illinsn = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__trapped = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__trapped_q = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__j_b_check = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__fw_rs1 = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__fw_rs2 = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__block_EX = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__block_ID = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__stall_ID = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__stall_EX = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__reset_q = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__mem_rdata = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
