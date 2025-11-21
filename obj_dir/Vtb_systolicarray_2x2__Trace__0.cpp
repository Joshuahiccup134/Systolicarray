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
        bufp->chgBit(oldp+1,(vlSelfRef.tb_systolicarray_2x2__DOT__enable));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_systolicarray_2x2__DOT__start));
        bufp->chgSData(oldp+3,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in[0]),16);
        bufp->chgSData(oldp+4,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in[1]),16);
        bufp->chgSData(oldp+5,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in[2]),16);
        bufp->chgSData(oldp+6,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in[3]),16);
        bufp->chgSData(oldp+7,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in[0]),16);
        bufp->chgSData(oldp+8,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in[1]),16);
        bufp->chgSData(oldp+9,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in[2]),16);
        bufp->chgSData(oldp+10,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in[3]),16);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_systolicarray_2x2__DOT__i),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_systolicarray_2x2__DOT__j),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgSData(oldp+13,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[0]),16);
        bufp->chgSData(oldp+14,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[1]),16);
        bufp->chgSData(oldp+15,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[2]),16);
        bufp->chgSData(oldp+16,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[3]),16);
        bufp->chgSData(oldp+17,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[0]),16);
        bufp->chgSData(oldp+18,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[1]),16);
        bufp->chgSData(oldp+19,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[2]),16);
        bufp->chgSData(oldp+20,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[3]),16);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [3U] | vlSelfRef.__Vm_traceActivity
                       [7U]) | vlSelfRef.__Vm_traceActivity
                      [8U])))) {
        bufp->chgBit(oldp+21,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][0U]));
        bufp->chgBit(oldp+22,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][1U]));
        bufp->chgBit(oldp+23,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][2U]));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][3U]));
        bufp->chgBit(oldp+25,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][0U]));
        bufp->chgBit(oldp+26,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][1U]));
        bufp->chgBit(oldp+27,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][2U]));
        bufp->chgBit(oldp+28,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][3U]));
        bufp->chgBit(oldp+29,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [2U][0U]));
        bufp->chgBit(oldp+30,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [2U][1U]));
        bufp->chgBit(oldp+31,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [2U][2U]));
        bufp->chgBit(oldp+32,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [2U][3U]));
        bufp->chgBit(oldp+33,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [3U][0U]));
        bufp->chgBit(oldp+34,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [3U][1U]));
        bufp->chgBit(oldp+35,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [3U][2U]));
        bufp->chgBit(oldp+36,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [3U][3U]));
        bufp->chgBit(oldp+37,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][0U]));
        bufp->chgBit(oldp+38,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][1U]));
        bufp->chgBit(oldp+39,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][2U]));
        bufp->chgBit(oldp+40,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [0U][3U]));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][0U]));
        bufp->chgBit(oldp+42,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][1U]));
        bufp->chgBit(oldp+43,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][2U]));
        bufp->chgBit(oldp+44,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [1U][3U]));
        bufp->chgBit(oldp+45,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [2U][0U]));
        bufp->chgBit(oldp+46,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [2U][1U]));
        bufp->chgBit(oldp+47,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [2U][2U]));
        bufp->chgBit(oldp+48,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [2U][3U]));
        bufp->chgBit(oldp+49,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [3U][0U]));
        bufp->chgBit(oldp+50,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [3U][1U]));
        bufp->chgBit(oldp+51,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [3U][2U]));
        bufp->chgBit(oldp+52,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                              [3U][3U]));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [3U] | vlSelfRef.__Vm_traceActivity
                       [7U]) | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgIData(oldp+53,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [0U][0U]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [0U][1U]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [0U][2U]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [0U][3U]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [1U][0U]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [1U][1U]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [1U][2U]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [1U][3U]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [2U][0U]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [2U][1U]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [2U][2U]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [2U][3U]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [3U][0U]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [3U][1U]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [3U][2U]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [3U][3U]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [0U][0U]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [0U][1U]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [0U][2U]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [0U][3U]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [1U][0U]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [1U][1U]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [1U][2U]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [1U][3U]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [2U][0U]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [2U][1U]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [2U][2U]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [2U][3U]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [3U][0U]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [3U][1U]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [3U][2U]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                                [3U][3U]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+85,(vlSelfRef.tb_systolicarray_2x2__DOT__done));
        bufp->chgIData(oldp+86,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [0U][0U]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [0U][1U]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [0U][2U]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [0U][3U]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [1U][0U]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [1U][1U]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [1U][2U]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [1U][3U]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [2U][0U]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [2U][1U]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [2U][2U]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [2U][3U]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [3U][0U]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                [3U][1U]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                 [3U][2U]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                                 [3U][3U]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [0U][0U]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [0U][1U]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [0U][2U]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [0U][3U]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [1U][0U]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [1U][1U]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [1U][2U]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [1U][3U]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [2U][0U]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [2U][1U]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [2U][2U]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [2U][3U]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [3U][0U]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [3U][1U]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [3U][2U]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                                 [3U][3U]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__i),32);
        bufp->chgIData(oldp+119,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__j),32);
        bufp->chgCData(oldp+120,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount),4);
        bufp->chgBit(oldp+121,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgSData(oldp+122,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+123,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+124,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+125,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+126,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+127,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+128,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+129,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+130,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+131,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+132,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+133,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+134,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+135,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+136,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+137,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+138,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+139,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+140,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+141,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+142,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+143,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+144,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+145,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+146,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+147,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+148,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+149,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+150,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+151,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+152,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+153,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+154,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+155,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+156,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+157,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+158,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+159,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+160,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+161,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+162,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+163,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+164,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+165,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+166,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire),32);
        bufp->chgSData(oldp+167,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire),16);
        bufp->chgSData(oldp+168,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire),16);
        bufp->chgIData(oldp+169,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[6U] 
                      | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgSData(oldp+170,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [0U][0U]),16);
        bufp->chgSData(oldp+171,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [0U][1U]),16);
        bufp->chgSData(oldp+172,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [0U][2U]),16);
        bufp->chgSData(oldp+173,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [0U][3U]),16);
        bufp->chgSData(oldp+174,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [0U][4U]),16);
        bufp->chgSData(oldp+175,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [1U][0U]),16);
        bufp->chgSData(oldp+176,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [1U][1U]),16);
        bufp->chgSData(oldp+177,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [1U][2U]),16);
        bufp->chgSData(oldp+178,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [1U][3U]),16);
        bufp->chgSData(oldp+179,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [1U][4U]),16);
        bufp->chgSData(oldp+180,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [2U][0U]),16);
        bufp->chgSData(oldp+181,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [2U][1U]),16);
        bufp->chgSData(oldp+182,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [2U][2U]),16);
        bufp->chgSData(oldp+183,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [2U][3U]),16);
        bufp->chgSData(oldp+184,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [2U][4U]),16);
        bufp->chgSData(oldp+185,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [3U][0U]),16);
        bufp->chgSData(oldp+186,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [3U][1U]),16);
        bufp->chgSData(oldp+187,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [3U][2U]),16);
        bufp->chgSData(oldp+188,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [3U][3U]),16);
        bufp->chgSData(oldp+189,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [3U][4U]),16);
        bufp->chgSData(oldp+190,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [0U][0U]),16);
        bufp->chgSData(oldp+191,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [0U][1U]),16);
        bufp->chgSData(oldp+192,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [0U][2U]),16);
        bufp->chgSData(oldp+193,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [0U][3U]),16);
        bufp->chgSData(oldp+194,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [1U][0U]),16);
        bufp->chgSData(oldp+195,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [1U][1U]),16);
        bufp->chgSData(oldp+196,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [1U][2U]),16);
        bufp->chgSData(oldp+197,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [1U][3U]),16);
        bufp->chgSData(oldp+198,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [2U][0U]),16);
        bufp->chgSData(oldp+199,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [2U][1U]),16);
        bufp->chgSData(oldp+200,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [2U][2U]),16);
        bufp->chgSData(oldp+201,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [2U][3U]),16);
        bufp->chgSData(oldp+202,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [3U][0U]),16);
        bufp->chgSData(oldp+203,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [3U][1U]),16);
        bufp->chgSData(oldp+204,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [3U][2U]),16);
        bufp->chgSData(oldp+205,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [3U][3U]),16);
        bufp->chgSData(oldp+206,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [4U][0U]),16);
        bufp->chgSData(oldp+207,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [4U][1U]),16);
        bufp->chgSData(oldp+208,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [4U][2U]),16);
        bufp->chgSData(oldp+209,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [4U][3U]),16);
        bufp->chgSData(oldp+210,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [0U][0U]),16);
        bufp->chgSData(oldp+211,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [0U][0U]),16);
        bufp->chgIData(oldp+212,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [0U]
                                                               [0U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [0U]
                                                           [0U]))),32);
        bufp->chgSData(oldp+213,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [0U][1U]),16);
        bufp->chgSData(oldp+214,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [0U][1U]),16);
        bufp->chgIData(oldp+215,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [0U]
                                                               [1U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [0U]
                                                           [1U]))),32);
        bufp->chgSData(oldp+216,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [0U][2U]),16);
        bufp->chgSData(oldp+217,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [0U][2U]),16);
        bufp->chgIData(oldp+218,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [0U]
                                                               [2U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [0U]
                                                           [2U]))),32);
        bufp->chgSData(oldp+219,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [0U][3U]),16);
        bufp->chgSData(oldp+220,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [0U][3U]),16);
        bufp->chgIData(oldp+221,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [0U]
                                                               [3U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [0U]
                                                           [3U]))),32);
        bufp->chgSData(oldp+222,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [1U][0U]),16);
        bufp->chgSData(oldp+223,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [1U][0U]),16);
        bufp->chgIData(oldp+224,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [1U]
                                                               [0U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [1U]
                                                           [0U]))),32);
        bufp->chgSData(oldp+225,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [1U][1U]),16);
        bufp->chgSData(oldp+226,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [1U][1U]),16);
        bufp->chgIData(oldp+227,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [1U]
                                                               [1U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [1U]
                                                           [1U]))),32);
        bufp->chgSData(oldp+228,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [1U][2U]),16);
        bufp->chgSData(oldp+229,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [1U][2U]),16);
        bufp->chgIData(oldp+230,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [1U]
                                                               [2U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [1U]
                                                           [2U]))),32);
        bufp->chgSData(oldp+231,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [1U][3U]),16);
        bufp->chgSData(oldp+232,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [1U][3U]),16);
        bufp->chgIData(oldp+233,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [1U]
                                                               [3U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [1U]
                                                           [3U]))),32);
        bufp->chgSData(oldp+234,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [2U][0U]),16);
        bufp->chgSData(oldp+235,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [2U][0U]),16);
        bufp->chgIData(oldp+236,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [2U]
                                                               [0U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [2U]
                                                           [0U]))),32);
        bufp->chgSData(oldp+237,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [2U][1U]),16);
        bufp->chgSData(oldp+238,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [2U][1U]),16);
        bufp->chgIData(oldp+239,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [2U]
                                                               [1U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [2U]
                                                           [1U]))),32);
        bufp->chgSData(oldp+240,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [2U][2U]),16);
        bufp->chgSData(oldp+241,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [2U][2U]),16);
        bufp->chgIData(oldp+242,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [2U]
                                                               [2U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [2U]
                                                           [2U]))),32);
        bufp->chgSData(oldp+243,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [2U][3U]),16);
        bufp->chgSData(oldp+244,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [2U][3U]),16);
        bufp->chgIData(oldp+245,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [2U]
                                                               [3U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [2U]
                                                           [3U]))),32);
        bufp->chgSData(oldp+246,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [3U][0U]),16);
        bufp->chgSData(oldp+247,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [3U][0U]),16);
        bufp->chgIData(oldp+248,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [3U]
                                                               [0U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [3U]
                                                           [0U]))),32);
        bufp->chgSData(oldp+249,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [3U][1U]),16);
        bufp->chgSData(oldp+250,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [3U][1U]),16);
        bufp->chgIData(oldp+251,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [3U]
                                                               [1U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [3U]
                                                           [1U]))),32);
        bufp->chgSData(oldp+252,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [3U][2U]),16);
        bufp->chgSData(oldp+253,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [3U][2U]),16);
        bufp->chgIData(oldp+254,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [3U]
                                                               [2U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [3U]
                                                           [2U]))),32);
        bufp->chgSData(oldp+255,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                 [3U][3U]),16);
        bufp->chgSData(oldp+256,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                 [3U][3U]),16);
        bufp->chgIData(oldp+257,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                               [3U]
                                                               [3U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                           [3U]
                                                           [3U]))),32);
    }
    bufp->chgBit(oldp+258,(vlSelfRef.tb_systolicarray_2x2__DOT__clk));
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
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
