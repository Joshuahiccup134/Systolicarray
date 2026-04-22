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
    tracep->declBit(c+88,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"preload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+41,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+43,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+12,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+13,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+89,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+45,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+47,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+40,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"N_Elements",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("A_bus", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+30,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+33,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+35,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("B_bus", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+49,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+51,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+52,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C_bus", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+78,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+80,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+82,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+53,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+55,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+57,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("enable_bus", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+59,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+61,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+94,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+95,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+63,0,"row_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+64,0,"col_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+65,0,"clkcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+66,0,"running",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("C_bottom", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+67+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+69,0,"collection_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("row_loop[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col_loop[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+96,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+97,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+98,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+99,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+100,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+71,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+84,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+23,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"Acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+104,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+105,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+106,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+107,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+73,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+85,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"Acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row_loop[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col_loop[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+110,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+111,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+112,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+113,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+114,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+75,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"Acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+117,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+118,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+119,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+120,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+121,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+77,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"Acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullBit(oldp+93,(vlSelfRef.tb_systolicarray_2x2__DOT__enable));
    bufp->fullIData(oldp+94,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__i),32);
    bufp->fullIData(oldp+95,(2U),32);
    bufp->fullSData(oldp+96,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__A_in_wire),16);
    bufp->fullSData(oldp+97,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__B_in_wire),16);
    bufp->fullSData(oldp+98,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+99,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+100,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire),32);
    bufp->fullIData(oldp+101,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Product),32);
    bufp->fullIData(oldp+102,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Acc_reg),32);
    bufp->fullSData(oldp+103,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__A_in_wire),16);
    bufp->fullSData(oldp+104,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__B_in_wire),16);
    bufp->fullSData(oldp+105,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+106,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+107,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire),32);
    bufp->fullIData(oldp+108,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Product),32);
    bufp->fullIData(oldp+109,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Acc_reg),32);
    bufp->fullSData(oldp+110,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_in_wire),16);
    bufp->fullSData(oldp+111,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_in_wire),16);
    bufp->fullSData(oldp+112,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+113,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+114,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire),32);
    bufp->fullIData(oldp+115,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Product),32);
    bufp->fullIData(oldp+116,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Acc_reg),32);
    bufp->fullSData(oldp+117,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_in_wire),16);
    bufp->fullSData(oldp+118,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_in_wire),16);
    bufp->fullSData(oldp+119,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+120,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+121,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire),32);
    bufp->fullIData(oldp+122,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Product),32);
    bufp->fullIData(oldp+123,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Acc_reg),32);
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
    bufp->fullBit(oldp+2,(vlSelfRef.tb_systolicarray_2x2__DOT__start));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_systolicarray_2x2__DOT__preload));
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
    bufp->fullSData(oldp+22,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out),16);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out),32);
    bufp->fullSData(oldp+24,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out),16);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out),32);
    bufp->fullSData(oldp+26,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out),16);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out),32);
    bufp->fullSData(oldp+28,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out),16);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out),32);
    bufp->fullSData(oldp+30,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [0U][0U]),16);
    bufp->fullSData(oldp+31,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [0U][1U]),16);
    bufp->fullSData(oldp+32,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [0U][2U]),16);
    bufp->fullSData(oldp+33,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [1U][0U]),16);
    bufp->fullSData(oldp+34,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [1U][1U]),16);
    bufp->fullSData(oldp+35,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [1U][2U]),16);
    bufp->fullSData(oldp+36,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [0U][0U]),16);
    bufp->fullSData(oldp+37,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [0U][1U]),16);
    bufp->fullSData(oldp+38,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [1U][0U]),16);
    bufp->fullSData(oldp+39,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                             [1U][1U]),16);
    bufp->fullBit(oldp+40,(vlSelfRef.tb_systolicarray_2x2__DOT__done));
    bufp->fullIData(oldp+41,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [0U][0U]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [0U][1U]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [1U][0U]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [1U][1U]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                             [0U][0U]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                             [0U][1U]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                             [1U][0U]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                             [1U][1U]),32);
    bufp->fullSData(oldp+49,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [0U][0U]),16);
    bufp->fullSData(oldp+50,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [0U][1U]),16);
    bufp->fullSData(oldp+51,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [1U][0U]),16);
    bufp->fullSData(oldp+52,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [1U][1U]),16);
    bufp->fullIData(oldp+53,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_acc
                             [0U][0U]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_acc
                             [0U][1U]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_acc
                             [1U][0U]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_acc
                             [1U][1U]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_acc
                             [2U][0U]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_acc
                             [2U][1U]),32);
    bufp->fullBit(oldp+59,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][0U]));
    bufp->fullBit(oldp+60,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][1U]));
    bufp->fullBit(oldp+61,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][0U]));
    bufp->fullBit(oldp+62,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][1U]));
    bufp->fullIData(oldp+63,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_i),32);
    bufp->fullIData(oldp+64,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__col_j),32);
    bufp->fullIData(oldp+65,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount),32);
    bufp->fullBit(oldp+66,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running));
    bufp->fullIData(oldp+67,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bottom[0]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bottom[1]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__collection_phase),32);
    bufp->fullBit(oldp+70,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][0U]));
    bufp->fullSData(oldp+71,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [0U][0U]),16);
    bufp->fullBit(oldp+72,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][1U]));
    bufp->fullSData(oldp+73,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [0U][1U]),16);
    bufp->fullBit(oldp+74,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][0U]));
    bufp->fullSData(oldp+75,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [1U][0U]),16);
    bufp->fullBit(oldp+76,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][1U]));
    bufp->fullSData(oldp+77,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                             [1U][1U]),16);
    bufp->fullIData(oldp+78,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [0U][0U]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [0U][1U]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][0U]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][1U]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [2U][0U]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [2U][1U]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][0U]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][1U]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [2U][0U]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [2U][1U]),32);
    bufp->fullBit(oldp+88,(vlSelfRef.tb_systolicarray_2x2__DOT__clk));
}
