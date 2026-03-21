// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_systolicarray_2x2__Syms.h"


void Vtb_systolicarray_2x2___024root__trace_chg_0_sub_0(Vtb_systolicarray_2x2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_systolicarray_2x2___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root__trace_chg_0\n"); );
    // Init
    Vtb_systolicarray_2x2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_systolicarray_2x2___024root*>(voidSelf);
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_systolicarray_2x2___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_systolicarray_2x2___024root__trace_chg_0_sub_0(Vtb_systolicarray_2x2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root__trace_chg_0_sub_0\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                               [0U][0U]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                               [0U][1U]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                               [1U][0U]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                               [1U][1U]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                               [0U][0U]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                               [0U][1U]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                               [1U][0U]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                               [1U][1U]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+8,(vlSelfRef.tb_systolicarray_2x2__DOT__reset));
        bufp->chgBit(oldp+9,(vlSelfRef.tb_systolicarray_2x2__DOT__start));
        bufp->chgBit(oldp+10,(vlSelfRef.tb_systolicarray_2x2__DOT__preload));
        bufp->chgSData(oldp+11,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in
                                [0U][0U]),16);
        bufp->chgSData(oldp+12,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in
                                [0U][1U]),16);
        bufp->chgSData(oldp+13,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in
                                [1U][0U]),16);
        bufp->chgSData(oldp+14,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in
                                [1U][1U]),16);
        bufp->chgSData(oldp+15,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in
                                [0U][0U]),16);
        bufp->chgSData(oldp+16,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in
                                [0U][1U]),16);
        bufp->chgSData(oldp+17,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in
                                [1U][0U]),16);
        bufp->chgSData(oldp+18,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in
                                [1U][1U]),16);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_systolicarray_2x2__DOT__i),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_systolicarray_2x2__DOT__j),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgSData(oldp+21,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in
                                [0U][0U]),16);
        bufp->chgSData(oldp+22,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in
                                [0U][1U]),16);
        bufp->chgSData(oldp+23,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in
                                [1U][0U]),16);
        bufp->chgSData(oldp+24,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in
                                [1U][1U]),16);
        bufp->chgSData(oldp+25,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in
                                [0U][0U]),16);
        bufp->chgSData(oldp+26,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in
                                [0U][1U]),16);
        bufp->chgSData(oldp+27,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in
                                [1U][0U]),16);
        bufp->chgSData(oldp+28,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in
                                [1U][1U]),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+29,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [0U][0U]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [0U][1U]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [1U][0U]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [1U][1U]),32);
        bufp->chgSData(oldp+33,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out),16);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out),32);
        bufp->chgSData(oldp+35,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out),16);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [0U][0U]),32);
        bufp->chgSData(oldp+38,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out),16);
        bufp->chgIData(oldp+39,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [0U][1U]),32);
        bufp->chgSData(oldp+41,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out),16);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgSData(oldp+43,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [0U][0U]),16);
        bufp->chgSData(oldp+44,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [0U][1U]),16);
        bufp->chgSData(oldp+45,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [0U][2U]),16);
        bufp->chgSData(oldp+46,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [1U][0U]),16);
        bufp->chgSData(oldp+47,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [1U][1U]),16);
        bufp->chgSData(oldp+48,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [1U][2U]),16);
        bufp->chgSData(oldp+49,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [0U][0U]),16);
        bufp->chgIData(oldp+50,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                              vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                              [0U]
                                                              [0U]), 
                                            VL_EXTENDS_II(32,16, 
                                                          vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                          [0U]
                                                          [0U]))),32);
        bufp->chgSData(oldp+51,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [0U][1U]),16);
        bufp->chgIData(oldp+52,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                              vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                              [0U]
                                                              [1U]), 
                                            VL_EXTENDS_II(32,16, 
                                                          vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                          [0U]
                                                          [1U]))),32);
        bufp->chgSData(oldp+53,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [1U][0U]),16);
        bufp->chgIData(oldp+54,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                              vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                              [1U]
                                                              [0U]), 
                                            VL_EXTENDS_II(32,16, 
                                                          vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                          [1U]
                                                          [0U]))),32);
        bufp->chgSData(oldp+55,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [1U][1U]),16);
        bufp->chgIData(oldp+56,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                              vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                              [1U]
                                                              [1U]), 
                                            VL_EXTENDS_II(32,16, 
                                                          vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                          [1U]
                                                          [1U]))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+57,(vlSelfRef.tb_systolicarray_2x2__DOT__done));
        bufp->chgSData(oldp+58,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [0U][0U]),16);
        bufp->chgSData(oldp+59,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [0U][1U]),16);
        bufp->chgSData(oldp+60,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [1U][0U]),16);
        bufp->chgSData(oldp+61,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [1U][1U]),16);
        bufp->chgBit(oldp+62,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][0U]));
        bufp->chgBit(oldp+63,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][1U]));
        bufp->chgBit(oldp+64,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][0U]));
        bufp->chgBit(oldp+65,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][1U]));
        bufp->chgIData(oldp+66,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_i),32);
        bufp->chgIData(oldp+67,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__col_j),32);
        bufp->chgIData(oldp+68,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount),32);
        bufp->chgBit(oldp+69,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running));
        bufp->chgBit(oldp+70,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][0U]));
        bufp->chgSData(oldp+71,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [0U][0U]),16);
        bufp->chgBit(oldp+72,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][1U]));
        bufp->chgSData(oldp+73,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [0U][1U]),16);
        bufp->chgBit(oldp+74,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][0U]));
        bufp->chgSData(oldp+75,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [1U][0U]),16);
        bufp->chgBit(oldp+76,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][1U]));
        bufp->chgSData(oldp+77,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [1U][1U]),16);
    }
    bufp->chgBit(oldp+78,(vlSelfRef.tb_systolicarray_2x2__DOT__clk));
}

void Vtb_systolicarray_2x2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root__trace_cleanup\n"); );
    // Init
    Vtb_systolicarray_2x2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_systolicarray_2x2___024root*>(voidSelf);
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
