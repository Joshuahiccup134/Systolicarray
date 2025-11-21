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
    tracep->declBus(c+260,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("B_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("C_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+87,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+91,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+95,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+99,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+12,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+13,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+260,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+14+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("B_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+18+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("C_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+103,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+107,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+111,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+115,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+86,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A_bus", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+171,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+172,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+173,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+174,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+175,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+176,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+177,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+178,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+179,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+180,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+181,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+182,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+183,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+184,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+185,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+186,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+187,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+188,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+189,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+190,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("B_bus", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+191,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+192,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+193,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+194,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+195,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+196,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+197,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+198,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+199,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+200,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+201,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+202,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+203,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+204,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+205,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+206,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+207,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+208,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+209,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+210,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C_bus", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+54,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+58,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+62,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+66,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("enable_bus", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+22,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+26,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+30,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+34,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+119,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+120,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+121,0,"clkcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+122,0,"running",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("row_loop[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col_loop[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+212,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+123,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+124,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+125,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+212,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+70,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+124,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+125,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+214,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+126,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+127,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+128,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+71,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+127,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+128,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+217,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+218,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+129,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+130,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+131,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+218,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+72,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+130,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+131,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+220,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+221,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+132,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+133,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+134,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+221,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+73,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+133,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+134,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row_loop[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col_loop[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+224,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+135,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+136,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+137,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+224,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+74,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+136,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+137,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+226,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+227,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+138,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+139,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+140,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+227,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+75,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+139,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+140,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+230,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+141,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+142,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+143,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+230,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+142,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+143,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+232,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+233,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+144,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+145,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+146,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+233,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+77,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+145,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+146,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row_loop[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col_loop[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+236,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+147,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+148,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+149,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+236,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+148,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+149,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+239,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+150,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+151,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+152,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+239,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+79,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+151,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+152,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+241,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+242,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+153,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+154,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+155,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+242,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+154,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+155,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+244,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+245,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+156,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+157,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+158,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+245,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+157,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+158,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row_loop[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col_loop[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+247,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+248,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+159,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+160,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+161,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+248,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+82,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+160,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+161,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+251,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+162,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+163,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+164,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+251,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+83,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+163,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+164,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+253,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+254,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+165,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+166,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+167,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+254,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+84,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+166,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+167,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col_loop[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+256,0,"A_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+257,0,"B_in_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+168,0,"A_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+169,0,"B_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+170,0,"C_out_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"A_Input_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"C_Output_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"A_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+257,0,"B_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+85,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+169,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+170,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"Acc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"Prod_Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"Product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullIData(oldp+260,(4U),32);
    bufp->fullIData(oldp+261,(0x10U),32);
    bufp->fullIData(oldp+262,(0x20U),32);
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
    bufp->fullSData(oldp+4,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in[0]),16);
    bufp->fullSData(oldp+5,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in[1]),16);
    bufp->fullSData(oldp+6,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in[2]),16);
    bufp->fullSData(oldp+7,(vlSelfRef.tb_systolicarray_2x2__DOT__A_in[3]),16);
    bufp->fullSData(oldp+8,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in[0]),16);
    bufp->fullSData(oldp+9,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in[1]),16);
    bufp->fullSData(oldp+10,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in[2]),16);
    bufp->fullSData(oldp+11,(vlSelfRef.tb_systolicarray_2x2__DOT__B_in[3]),16);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_systolicarray_2x2__DOT__i),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_systolicarray_2x2__DOT__j),32);
    bufp->fullSData(oldp+14,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[0]),16);
    bufp->fullSData(oldp+15,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[1]),16);
    bufp->fullSData(oldp+16,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[2]),16);
    bufp->fullSData(oldp+17,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[3]),16);
    bufp->fullSData(oldp+18,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[0]),16);
    bufp->fullSData(oldp+19,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[1]),16);
    bufp->fullSData(oldp+20,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[2]),16);
    bufp->fullSData(oldp+21,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[3]),16);
    bufp->fullBit(oldp+22,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][0U]));
    bufp->fullBit(oldp+23,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][1U]));
    bufp->fullBit(oldp+24,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][2U]));
    bufp->fullBit(oldp+25,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][3U]));
    bufp->fullBit(oldp+26,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][0U]));
    bufp->fullBit(oldp+27,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][1U]));
    bufp->fullBit(oldp+28,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][2U]));
    bufp->fullBit(oldp+29,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][3U]));
    bufp->fullBit(oldp+30,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [2U][0U]));
    bufp->fullBit(oldp+31,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [2U][1U]));
    bufp->fullBit(oldp+32,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [2U][2U]));
    bufp->fullBit(oldp+33,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [2U][3U]));
    bufp->fullBit(oldp+34,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [3U][0U]));
    bufp->fullBit(oldp+35,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [3U][1U]));
    bufp->fullBit(oldp+36,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [3U][2U]));
    bufp->fullBit(oldp+37,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [3U][3U]));
    bufp->fullBit(oldp+38,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][0U]));
    bufp->fullBit(oldp+39,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][1U]));
    bufp->fullBit(oldp+40,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][2U]));
    bufp->fullBit(oldp+41,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [0U][3U]));
    bufp->fullBit(oldp+42,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][0U]));
    bufp->fullBit(oldp+43,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][1U]));
    bufp->fullBit(oldp+44,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][2U]));
    bufp->fullBit(oldp+45,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [1U][3U]));
    bufp->fullBit(oldp+46,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [2U][0U]));
    bufp->fullBit(oldp+47,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [2U][1U]));
    bufp->fullBit(oldp+48,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [2U][2U]));
    bufp->fullBit(oldp+49,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [2U][3U]));
    bufp->fullBit(oldp+50,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [3U][0U]));
    bufp->fullBit(oldp+51,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [3U][1U]));
    bufp->fullBit(oldp+52,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [3U][2U]));
    bufp->fullBit(oldp+53,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
                           [3U][3U]));
    bufp->fullIData(oldp+54,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [0U][0U]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [0U][1U]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [0U][2U]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [0U][3U]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][0U]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][1U]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][2U]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][3U]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [2U][0U]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [2U][1U]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [2U][2U]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [2U][3U]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [3U][0U]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [3U][1U]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [3U][2U]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [3U][3U]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [0U][0U]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [0U][1U]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [0U][2U]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [0U][3U]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][0U]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][1U]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][2U]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [1U][3U]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [2U][0U]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [2U][1U]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [2U][2U]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [2U][3U]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [3U][0U]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [3U][1U]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [3U][2U]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                             [3U][3U]),32);
    bufp->fullBit(oldp+86,(vlSelfRef.tb_systolicarray_2x2__DOT__done));
    bufp->fullIData(oldp+87,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [0U][0U]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [0U][1U]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [0U][2U]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [0U][3U]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [1U][0U]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [1U][1U]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [1U][2U]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [1U][3U]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [2U][0U]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [2U][1U]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [2U][2U]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [2U][3U]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                             [3U][0U]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                              [3U][1U]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                              [3U][2U]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                              [3U][3U]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [0U][0U]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [0U][1U]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [0U][2U]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [0U][3U]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [1U][0U]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [1U][1U]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [1U][2U]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [1U][3U]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [2U][0U]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [2U][1U]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [2U][2U]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [2U][3U]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [3U][0U]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [3U][1U]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [3U][2U]),32);
    bufp->fullIData(oldp+118,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out
                              [3U][3U]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__i),32);
    bufp->fullIData(oldp+120,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__j),32);
    bufp->fullCData(oldp+121,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount),4);
    bufp->fullBit(oldp+122,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running));
    bufp->fullSData(oldp+123,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+124,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+125,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+126,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+127,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+128,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+129,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+130,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+131,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+132,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+133,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+134,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+135,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+136,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+137,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+138,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+139,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+140,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+141,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+142,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+143,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+144,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+145,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+146,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+147,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+148,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+149,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+150,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+151,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+152,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+153,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+154,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+155,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+156,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+157,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+158,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+159,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+160,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+161,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+162,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+163,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+164,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+165,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+166,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+167,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+168,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire),16);
    bufp->fullSData(oldp+169,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire),16);
    bufp->fullIData(oldp+170,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire),32);
    bufp->fullSData(oldp+171,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [0U][0U]),16);
    bufp->fullSData(oldp+172,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [0U][1U]),16);
    bufp->fullSData(oldp+173,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [0U][2U]),16);
    bufp->fullSData(oldp+174,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [0U][3U]),16);
    bufp->fullSData(oldp+175,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [0U][4U]),16);
    bufp->fullSData(oldp+176,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [1U][0U]),16);
    bufp->fullSData(oldp+177,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [1U][1U]),16);
    bufp->fullSData(oldp+178,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [1U][2U]),16);
    bufp->fullSData(oldp+179,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [1U][3U]),16);
    bufp->fullSData(oldp+180,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [1U][4U]),16);
    bufp->fullSData(oldp+181,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [2U][0U]),16);
    bufp->fullSData(oldp+182,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [2U][1U]),16);
    bufp->fullSData(oldp+183,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [2U][2U]),16);
    bufp->fullSData(oldp+184,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [2U][3U]),16);
    bufp->fullSData(oldp+185,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [2U][4U]),16);
    bufp->fullSData(oldp+186,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [3U][0U]),16);
    bufp->fullSData(oldp+187,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [3U][1U]),16);
    bufp->fullSData(oldp+188,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [3U][2U]),16);
    bufp->fullSData(oldp+189,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [3U][3U]),16);
    bufp->fullSData(oldp+190,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [3U][4U]),16);
    bufp->fullSData(oldp+191,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [0U][0U]),16);
    bufp->fullSData(oldp+192,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [0U][1U]),16);
    bufp->fullSData(oldp+193,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [0U][2U]),16);
    bufp->fullSData(oldp+194,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [0U][3U]),16);
    bufp->fullSData(oldp+195,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [1U][0U]),16);
    bufp->fullSData(oldp+196,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [1U][1U]),16);
    bufp->fullSData(oldp+197,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [1U][2U]),16);
    bufp->fullSData(oldp+198,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [1U][3U]),16);
    bufp->fullSData(oldp+199,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [2U][0U]),16);
    bufp->fullSData(oldp+200,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [2U][1U]),16);
    bufp->fullSData(oldp+201,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [2U][2U]),16);
    bufp->fullSData(oldp+202,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [2U][3U]),16);
    bufp->fullSData(oldp+203,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [3U][0U]),16);
    bufp->fullSData(oldp+204,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [3U][1U]),16);
    bufp->fullSData(oldp+205,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [3U][2U]),16);
    bufp->fullSData(oldp+206,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [3U][3U]),16);
    bufp->fullSData(oldp+207,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [4U][0U]),16);
    bufp->fullSData(oldp+208,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [4U][1U]),16);
    bufp->fullSData(oldp+209,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [4U][2U]),16);
    bufp->fullSData(oldp+210,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [4U][3U]),16);
    bufp->fullSData(oldp+211,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [0U][0U]),16);
    bufp->fullSData(oldp+212,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [0U][0U]),16);
    bufp->fullIData(oldp+213,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [0U]
                                                            [0U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [0U]
                                                        [0U]))),32);
    bufp->fullSData(oldp+214,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [0U][1U]),16);
    bufp->fullSData(oldp+215,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [0U][1U]),16);
    bufp->fullIData(oldp+216,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [0U]
                                                            [1U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [0U]
                                                        [1U]))),32);
    bufp->fullSData(oldp+217,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [0U][2U]),16);
    bufp->fullSData(oldp+218,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [0U][2U]),16);
    bufp->fullIData(oldp+219,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [0U]
                                                            [2U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [0U]
                                                        [2U]))),32);
    bufp->fullSData(oldp+220,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [0U][3U]),16);
    bufp->fullSData(oldp+221,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [0U][3U]),16);
    bufp->fullIData(oldp+222,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [0U]
                                                            [3U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [0U]
                                                        [3U]))),32);
    bufp->fullSData(oldp+223,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [1U][0U]),16);
    bufp->fullSData(oldp+224,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [1U][0U]),16);
    bufp->fullIData(oldp+225,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [1U]
                                                            [0U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [1U]
                                                        [0U]))),32);
    bufp->fullSData(oldp+226,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [1U][1U]),16);
    bufp->fullSData(oldp+227,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [1U][1U]),16);
    bufp->fullIData(oldp+228,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [1U]
                                                            [1U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [1U]
                                                        [1U]))),32);
    bufp->fullSData(oldp+229,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [1U][2U]),16);
    bufp->fullSData(oldp+230,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [1U][2U]),16);
    bufp->fullIData(oldp+231,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [1U]
                                                            [2U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [1U]
                                                        [2U]))),32);
    bufp->fullSData(oldp+232,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [1U][3U]),16);
    bufp->fullSData(oldp+233,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [1U][3U]),16);
    bufp->fullIData(oldp+234,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [1U]
                                                            [3U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [1U]
                                                        [3U]))),32);
    bufp->fullSData(oldp+235,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [2U][0U]),16);
    bufp->fullSData(oldp+236,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [2U][0U]),16);
    bufp->fullIData(oldp+237,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [2U]
                                                            [0U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [2U]
                                                        [0U]))),32);
    bufp->fullSData(oldp+238,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [2U][1U]),16);
    bufp->fullSData(oldp+239,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [2U][1U]),16);
    bufp->fullIData(oldp+240,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [2U]
                                                            [1U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [2U]
                                                        [1U]))),32);
    bufp->fullSData(oldp+241,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [2U][2U]),16);
    bufp->fullSData(oldp+242,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [2U][2U]),16);
    bufp->fullIData(oldp+243,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [2U]
                                                            [2U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [2U]
                                                        [2U]))),32);
    bufp->fullSData(oldp+244,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [2U][3U]),16);
    bufp->fullSData(oldp+245,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [2U][3U]),16);
    bufp->fullIData(oldp+246,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [2U]
                                                            [3U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [2U]
                                                        [3U]))),32);
    bufp->fullSData(oldp+247,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [3U][0U]),16);
    bufp->fullSData(oldp+248,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [3U][0U]),16);
    bufp->fullIData(oldp+249,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [3U]
                                                            [0U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [3U]
                                                        [0U]))),32);
    bufp->fullSData(oldp+250,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [3U][1U]),16);
    bufp->fullSData(oldp+251,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [3U][1U]),16);
    bufp->fullIData(oldp+252,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [3U]
                                                            [1U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [3U]
                                                        [1U]))),32);
    bufp->fullSData(oldp+253,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [3U][2U]),16);
    bufp->fullSData(oldp+254,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [3U][2U]),16);
    bufp->fullIData(oldp+255,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [3U]
                                                            [2U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [3U]
                                                        [2U]))),32);
    bufp->fullSData(oldp+256,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                              [3U][3U]),16);
    bufp->fullSData(oldp+257,(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                              [3U][3U]),16);
    bufp->fullIData(oldp+258,(VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [3U]
                                                            [3U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [3U]
                                                        [3U]))),32);
    bufp->fullBit(oldp+259,(vlSelfRef.tb_systolicarray_2x2__DOT__clk));
}
