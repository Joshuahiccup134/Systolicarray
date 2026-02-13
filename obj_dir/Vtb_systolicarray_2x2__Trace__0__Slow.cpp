// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_systolicarray_2x2__Syms.h"


VL_ATTR_COLD void Vtb_systolicarray_2x2___024root__trace_init_sub__TOP__0(Vtb_systolicarray_2x2___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root__trace_init_sub__TOP__0\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_systolicarray_2x2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+89,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"N_Elements",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+4,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+6,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("B_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+8,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+10,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+78,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+80,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+12,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+13,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+89,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+14,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+16,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("B_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+18,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+20,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+82,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+84,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+34,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"N_Elements",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("A_bus", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+38,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+40,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+41,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("B_bus", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+44,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+46,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+48,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C_bus", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+50,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+52,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("B_in_staggered", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+22,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+23,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+24,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("enable_bus", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+26,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+28,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+35,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+36,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+37,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+87,0,"clkcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+88,0,"running",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("row_loop[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col_loop[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+54,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+93,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+94,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+58,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"Acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+61,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+63,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+95,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+96,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+61,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+63,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+64,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"Acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row_loop[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col_loop[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+66,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+67,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+97,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+94,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+67,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+70,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"Acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+72,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+73,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+74,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+75,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+98,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+96,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+73,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+74,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+75,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"Acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root__trace_init_top(Vtb_systolicarray_2x2___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root__trace_init_top\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_systolicarray_2x2___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_systolicarray_2x2___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_systolicarray_2x2___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_systolicarray_2x2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root__trace_register(Vtb_systolicarray_2x2___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root__trace_register\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_systolicarray_2x2___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_systolicarray_2x2___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_systolicarray_2x2___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_systolicarray_2x2___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root__trace_const_0_sub_0(Vtb_systolicarray_2x2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root__trace_const_0\n"); );
    // Init
    Vtb_systolicarray_2x2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_systolicarray_2x2___024root*>(voidSelf);
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_systolicarray_2x2___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root__trace_const_0_sub_0(Vtb_systolicarray_2x2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root__trace_const_0_sub_0\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+89,(2U),32);
    bufp->fullIData(oldp+90,(0x10U),32);
    bufp->fullIData(oldp+91,(0x20U),32);
    bufp->fullIData(oldp+92,(4U),32);
    bufp->fullIData(oldp+93,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire),32);
    bufp->fullCData(oldp+94,(0U),3);
    bufp->fullIData(oldp+95,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire),32);
    bufp->fullCData(oldp+96,(1U),3);
    bufp->fullIData(oldp+97,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire),32);
    bufp->fullIData(oldp+98,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire),32);
}

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root__trace_full_0_sub_0(Vtb_systolicarray_2x2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root__trace_full_0\n"); );
    // Init
    Vtb_systolicarray_2x2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_systolicarray_2x2___024root*>(voidSelf);
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_systolicarray_2x2___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root__trace_full_0_sub_0(Vtb_systolicarray_2x2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root__trace_full_0_sub_0\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_systolicarray_2x2__DOT__reset));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_systolicarray_2x2__DOT__enable));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_systolicarray_2x2__DOT__start));
    bufp->fullSData(oldp+4,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in
                            [0U][0U]),16);
    bufp->fullSData(oldp+5,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in
                            [0U][1U]),16);
    bufp->fullSData(oldp+6,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in
                            [1U][0U]),16);
    bufp->fullSData(oldp+7,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in
                            [1U][1U]),16);
    bufp->fullSData(oldp+8,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in
                            [0U][0U]),16);
    bufp->fullSData(oldp+9,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in
                            [0U][1U]),16);
    bufp->fullSData(oldp+10,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in
                             [1U][0U]),16);
    bufp->fullSData(oldp+11,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in
                             [1U][1U]),16);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_systolicarray_2x2__DOT__i),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_systolicarray_2x2__DOT__j),32);
    bufp->fullSData(oldp+14,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in
                             [0U][0U]),16);
    bufp->fullSData(oldp+15,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in
                             [0U][1U]),16);
    bufp->fullSData(oldp+16,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in
                             [1U][0U]),16);
    bufp->fullSData(oldp+17,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in
                             [1U][1U]),16);
    bufp->fullSData(oldp+18,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in
                             [0U][0U]),16);
    bufp->fullSData(oldp+19,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in
                             [0U][1U]),16);
    bufp->fullSData(oldp+20,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in
                             [1U][0U]),16);
    bufp->fullSData(oldp+21,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in
                             [1U][1U]),16);
    bufp->fullSData(oldp+22,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in_staggered
                             [0U][0U]),16);
    bufp->fullSData(oldp+23,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in_staggered
                             [0U][1U]),16);
    bufp->fullSData(oldp+24,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in_staggered
                             [1U][0U]),16);
    bufp->fullSData(oldp+25,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in_staggered
                             [1U][1U]),16);
    bufp->fullBit(oldp+26,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][0U]));
    bufp->fullBit(oldp+27,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][1U]));
    bufp->fullBit(oldp+28,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][0U]));
    bufp->fullBit(oldp+29,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][1U]));
    bufp->fullBit(oldp+30,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][0U]));
    bufp->fullBit(oldp+31,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][1U]));
    bufp->fullBit(oldp+32,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][0U]));
    bufp->fullBit(oldp+33,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][1U]));
    bufp->fullBit(oldp+34,(vlSelfRef.tb_systolicarray_2x2__DOT__done));
    bufp->fullIData(oldp+35,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__i),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__j),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__k),32);
    bufp->fullSData(oldp+38,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [0U][0U]),16);
    bufp->fullSData(oldp+39,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [0U][1U]),16);
    bufp->fullSData(oldp+40,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [0U][2U]),16);
    bufp->fullSData(oldp+41,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [1U][0U]),16);
    bufp->fullSData(oldp+42,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [1U][1U]),16);
    bufp->fullSData(oldp+43,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [1U][2U]),16);
    bufp->fullSData(oldp+44,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [0U][0U]),16);
    bufp->fullSData(oldp+45,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [0U][1U]),16);
    bufp->fullSData(oldp+46,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [1U][0U]),16);
    bufp->fullSData(oldp+47,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [1U][1U]),16);
    bufp->fullSData(oldp+48,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [2U][0U]),16);
    bufp->fullSData(oldp+49,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [2U][1U]),16);
    bufp->fullIData(oldp+50,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [0U][0U]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [0U][1U]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][0U]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][1U]),32);
    bufp->fullSData(oldp+54,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [0U][0U]),16);
    bufp->fullSData(oldp+55,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [0U][0U]),16);
    bufp->fullSData(oldp+56,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+57,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+58,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Acc_reg),32);
    bufp->fullIData(oldp+59,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                           [0U]
                                                           [0U]), 
                                         VL_EXTENDS_II(32,16, 
                                                       vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                       [0U]
                                                       [0U]))),32);
    bufp->fullSData(oldp+60,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [0U][1U]),16);
    bufp->fullSData(oldp+61,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [0U][1U]),16);
    bufp->fullSData(oldp+62,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+63,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+64,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Acc_reg),32);
    bufp->fullIData(oldp+65,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                           [0U]
                                                           [1U]), 
                                         VL_EXTENDS_II(32,16, 
                                                       vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                       [0U]
                                                       [1U]))),32);
    bufp->fullSData(oldp+66,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [1U][0U]),16);
    bufp->fullSData(oldp+67,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [1U][0U]),16);
    bufp->fullSData(oldp+68,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+69,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+70,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Acc_reg),32);
    bufp->fullIData(oldp+71,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                           [1U]
                                                           [0U]), 
                                         VL_EXTENDS_II(32,16, 
                                                       vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                       [1U]
                                                       [0U]))),32);
    bufp->fullSData(oldp+72,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [1U][1U]),16);
    bufp->fullSData(oldp+73,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [1U][1U]),16);
    bufp->fullSData(oldp+74,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+75,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+76,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Acc_reg),32);
    bufp->fullIData(oldp+77,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                           [1U]
                                                           [1U]), 
                                         VL_EXTENDS_II(32,16, 
                                                       vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                       [1U]
                                                       [1U]))),32);
    bufp->fullIData(oldp+78,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [0U][0U]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [0U][1U]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [1U][0U]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [1U][1U]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                             [0U][0U]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                             [0U][1U]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                             [1U][0U]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                             [1U][1U]),32);
    bufp->fullBit(oldp+86,(vlSelfRef.tb_systolicarray_2x2__DOT__clk));
    bufp->fullCData(oldp+87,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount),3);
    bufp->fullBit(oldp+88,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running));
}
