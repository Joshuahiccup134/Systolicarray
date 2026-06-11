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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_systolicarray_2x2__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_systolicarray_2x2__DOT__start));
        bufp->chgSData(oldp+2,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in
                               [0U][0U]),16);
        bufp->chgSData(oldp+3,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in
                               [0U][1U]),16);
        bufp->chgSData(oldp+4,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in
                               [1U][0U]),16);
        bufp->chgSData(oldp+5,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in
                               [1U][1U]),16);
        bufp->chgSData(oldp+6,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in
                               [0U][0U]),16);
        bufp->chgSData(oldp+7,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in
                               [0U][1U]),16);
        bufp->chgSData(oldp+8,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in
                               [1U][0U]),16);
        bufp->chgSData(oldp+9,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in
                               [1U][1U]),16);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_systolicarray_2x2__DOT__i),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_systolicarray_2x2__DOT__j),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgSData(oldp+12,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in
                                [0U][0U]),16);
        bufp->chgSData(oldp+13,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in
                                [0U][1U]),16);
        bufp->chgSData(oldp+14,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in
                                [1U][0U]),16);
        bufp->chgSData(oldp+15,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in
                                [1U][1U]),16);
        bufp->chgSData(oldp+16,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in
                                [0U][0U]),16);
        bufp->chgSData(oldp+17,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in
                                [0U][1U]),16);
        bufp->chgSData(oldp+18,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in
                                [1U][0U]),16);
        bufp->chgSData(oldp+19,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in
                                [1U][1U]),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+20,(vlSelfRef.tb_systolicarray_2x2__DOT__done));
        bufp->chgIData(oldp+21,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [0U][0U]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [0U][1U]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [1U][0U]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [1U][1U]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                [0U][0U]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                [0U][1U]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                [1U][0U]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                [1U][1U]),32);
        bufp->chgSData(oldp+29,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [0U][0U]),16);
        bufp->chgSData(oldp+30,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [0U][1U]),16);
        bufp->chgSData(oldp+31,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [0U][2U]),16);
        bufp->chgSData(oldp+32,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [1U][0U]),16);
        bufp->chgSData(oldp+33,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [1U][1U]),16);
        bufp->chgSData(oldp+34,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [1U][2U]),16);
        bufp->chgSData(oldp+35,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [0U][0U]),16);
        bufp->chgSData(oldp+36,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [0U][1U]),16);
        bufp->chgSData(oldp+37,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [1U][0U]),16);
        bufp->chgSData(oldp+38,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [1U][1U]),16);
        bufp->chgSData(oldp+39,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [2U][0U]),16);
        bufp->chgSData(oldp+40,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [2U][1U]),16);
        bufp->chgBit(oldp+41,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][0U]));
        bufp->chgBit(oldp+42,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][1U]));
        bufp->chgBit(oldp+43,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][0U]));
        bufp->chgBit(oldp+44,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][1U]));
        bufp->chgIData(oldp+45,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__i),32);
        bufp->chgIData(oldp+46,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__j),32);
        bufp->chgCData(oldp+47,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount),4);
        bufp->chgBit(oldp+48,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running));
        bufp->chgBit(oldp+49,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__reset_reg));
        bufp->chgBit(oldp+50,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][0U]));
        bufp->chgSData(oldp+51,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [0U][0U]),16);
        bufp->chgSData(oldp+52,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [0U][0U]),16);
        bufp->chgSData(oldp+53,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out),16);
        bufp->chgSData(oldp+54,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__B_out),16);
        bufp->chgIData(oldp+55,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Acc_reg),32);
        bufp->chgSData(oldp+56,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__A_in_reg),16);
        bufp->chgSData(oldp+57,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__B_in_reg),16);
        bufp->chgIData(oldp+58,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Hi_reg),24);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Low_reg),25);
        bufp->chgIData(oldp+60,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Product),32);
        bufp->chgBit(oldp+61,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][1U]));
        bufp->chgSData(oldp+62,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [0U][1U]),16);
        bufp->chgSData(oldp+63,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [0U][1U]),16);
        bufp->chgSData(oldp+64,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out),16);
        bufp->chgSData(oldp+65,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__B_out),16);
        bufp->chgIData(oldp+66,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Acc_reg),32);
        bufp->chgSData(oldp+67,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__A_in_reg),16);
        bufp->chgSData(oldp+68,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__B_in_reg),16);
        bufp->chgIData(oldp+69,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Hi_reg),24);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Low_reg),25);
        bufp->chgIData(oldp+71,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Product),32);
        bufp->chgBit(oldp+72,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][0U]));
        bufp->chgSData(oldp+73,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [1U][0U]),16);
        bufp->chgSData(oldp+74,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [1U][0U]),16);
        bufp->chgSData(oldp+75,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out),16);
        bufp->chgSData(oldp+76,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__B_out),16);
        bufp->chgIData(oldp+77,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Acc_reg),32);
        bufp->chgSData(oldp+78,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__A_in_reg),16);
        bufp->chgSData(oldp+79,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__B_in_reg),16);
        bufp->chgIData(oldp+80,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Hi_reg),24);
        bufp->chgIData(oldp+81,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Low_reg),25);
        bufp->chgIData(oldp+82,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Product),32);
        bufp->chgBit(oldp+83,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][1U]));
        bufp->chgSData(oldp+84,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                [1U][1U]),16);
        bufp->chgSData(oldp+85,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                [1U][1U]),16);
        bufp->chgSData(oldp+86,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out),16);
        bufp->chgSData(oldp+87,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__B_out),16);
        bufp->chgIData(oldp+88,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Acc_reg),32);
        bufp->chgSData(oldp+89,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__A_in_reg),16);
        bufp->chgSData(oldp+90,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__B_in_reg),16);
        bufp->chgIData(oldp+91,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Hi_reg),24);
        bufp->chgIData(oldp+92,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Low_reg),25);
        bufp->chgIData(oldp+93,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Product),32);
        bufp->chgIData(oldp+94,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__unnamedblk1__DOT__row_i),32);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__col_j),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__unnamedblk3__DOT__row_i),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__unnamedblk4__DOT__col_j),32);
    }
    bufp->chgBit(oldp+98,(vlSelfRef.tb_systolicarray_2x2__DOT__clk));
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
}
