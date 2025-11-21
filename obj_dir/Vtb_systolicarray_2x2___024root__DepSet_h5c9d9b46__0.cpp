// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_systolicarray_2x2.h for the primary calling header

#include "Vtb_systolicarray_2x2__pch.h"
#include "Vtb_systolicarray_2x2___024root.h"

VlCoroutine Vtb_systolicarray_2x2___024root___eval_initial__TOP__Vtiming__0(Vtb_systolicarray_2x2___024root* vlSelf);
VlCoroutine Vtb_systolicarray_2x2___024root___eval_initial__TOP__Vtiming__1(Vtb_systolicarray_2x2___024root* vlSelf);

void Vtb_systolicarray_2x2___024root___eval_initial(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_initial\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_systolicarray_2x2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_systolicarray_2x2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_systolicarray_2x2___024root___act_comb__TOP__0(Vtb_systolicarray_2x2___024root* vlSelf);

void Vtb_systolicarray_2x2___024root___eval_act(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_act\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xcULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_systolicarray_2x2___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_systolicarray_2x2___024root___act_comb__TOP__0(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___act_comb__TOP__0\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [2U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [3U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [0U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [1U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [2U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [3U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [2U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [3U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [0U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [1U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [2U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [3U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[2U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[2U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[2U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[2U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[3U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[3U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[3U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[3U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][0U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [0U][0U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][1U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [0U][1U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][2U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [0U][2U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][3U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [0U][3U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][0U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [1U][0U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][1U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [1U][1U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][2U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [1U][2U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][3U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [1U][3U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][0U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [2U][0U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][1U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [2U][1U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][2U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [2U][2U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][3U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [2U][3U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][0U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [3U][0U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][1U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [3U][1U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][2U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [3U][2U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][3U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [3U][3U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire
            : 0U);
}

void Vtb_systolicarray_2x2___024root___nba_sequent__TOP__0(Vtb_systolicarray_2x2___024root* vlSelf);
void Vtb_systolicarray_2x2___024root___nba_comb__TOP__0(Vtb_systolicarray_2x2___024root* vlSelf);
void Vtb_systolicarray_2x2___024root___nba_sequent__TOP__1(Vtb_systolicarray_2x2___024root* vlSelf);
void Vtb_systolicarray_2x2___024root___nba_sequent__TOP__2(Vtb_systolicarray_2x2___024root* vlSelf);
void Vtb_systolicarray_2x2___024root___nba_comb__TOP__1(Vtb_systolicarray_2x2___024root* vlSelf);
void Vtb_systolicarray_2x2___024root___nba_comb__TOP__2(Vtb_systolicarray_2x2___024root* vlSelf);

void Vtb_systolicarray_2x2___024root___eval_nba(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_nba\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_systolicarray_2x2___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_systolicarray_2x2___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_systolicarray_2x2___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_systolicarray_2x2___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_systolicarray_2x2___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_systolicarray_2x2___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_systolicarray_2x2___024root___nba_sequent__TOP__0(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___nba_sequent__TOP__0\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount;
    __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount = 0;
    CData/*0:0*/ __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running;
    __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v0;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v0;
    __VdlySet__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v1;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v2;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v3;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v4;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v5;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v6;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v7;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v8;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v9;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v10;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v11;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v12;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v13;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v14;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v15;
    __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v15 = 0;
    // Body
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0 = 0U;
    __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount;
    __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v20 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v21 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v22 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v23 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v25 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v26 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v27 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v28 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v30 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v31 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v32 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v33 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v35 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v36 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v37 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v38 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__C_bus__v0 = 0U;
    vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v16 = 0U;
    __VdlySet__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v0 = 0U;
    if (vlSelfRef.tb_systolicarray_2x2__DOT__reset) {
        vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0 = 1U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__j = 4U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__i = 4U;
        __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount = 0U;
        __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__done = 0U;
        vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__C_bus__v0 = 1U;
    } else {
        vlSelfRef.tb_systolicarray_2x2__DOT__done = 0U;
        if (((IData)(vlSelfRef.tb_systolicarray_2x2__DOT__start) 
             & (~ (IData)(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running)))) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__j = 4U;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__i = 4U;
            __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running = 1U;
            __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount = 0U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v16 
                = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in
                [0U];
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v16 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v16 
                = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in
                [0U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v17 
                = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in
                [1U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v17 
                = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in
                [1U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v18 
                = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in
                [2U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v18 
                = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in
                [2U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v19 
                = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in
                [3U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v19 
                = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in
                [3U];
        } else if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running) {
            __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount)));
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [0U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__j = 4U;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__i = 4U;
            if ((8U <= (IData)(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount))) {
                vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__j = 4U;
                vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__i = 4U;
                __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running = 0U;
                vlSelfRef.tb_systolicarray_2x2__DOT__done = 1U;
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v0 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [0U][0U];
                __VdlySet__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v0 = 1U;
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v1 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [0U][1U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v2 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [0U][2U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v3 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [0U][3U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v4 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [1U][0U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v5 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [1U][1U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v6 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [1U][2U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v7 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [1U][3U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v8 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [2U][0U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v9 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [2U][1U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v10 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [2U][2U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v11 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [2U][3U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v12 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [3U][0U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v13 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [3U][1U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v14 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [3U][2U];
                __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v15 
                    = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                    [3U][3U];
            }
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v20 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v20 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v20 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [0U][1U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v21 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v21 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v21 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [0U][2U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v22 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v22 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v22 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [0U][3U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v23 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v23 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v23 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [1U][0U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v25 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v25 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v25 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [1U][1U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v26 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v26 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v26 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [1U][2U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v27 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v27 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v27 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [1U][3U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v28 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v28 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v28 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [2U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [2U][0U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v30 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v30 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v30 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [2U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [2U][1U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v31 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v31 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v31 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [2U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [2U][2U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v32 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v32 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v32 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [2U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [2U][3U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v33 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v33 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v33 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [3U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [3U][0U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v35 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v35 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v35 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [3U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [3U][1U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v36 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v36 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v36 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [3U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [3U][2U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v37 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v37 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v37 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [3U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [3U][3U];
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v38 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
            vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v38 = 1U;
            vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v38 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
        }
    }
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount 
        = __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running 
        = __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running;
    if (__VdlySet__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v0) {
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[0U][0U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v0;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[0U][1U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v1;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[0U][2U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v2;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[0U][3U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v3;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[1U][0U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v4;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[1U][1U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v5;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[1U][2U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v6;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[1U][3U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v7;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[2U][0U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v8;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[2U][1U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v9;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[2U][2U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v10;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[2U][3U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v11;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[3U][0U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v12;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[3U][1U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v13;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[3U][2U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v14;
        vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[3U][3U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT____Vcellout__dut__C_out__v15;
    }
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[0U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [0U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [0U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[0U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [0U][2U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[0U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [0U][3U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [1U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [1U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[1U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [1U][2U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[1U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [1U][3U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[2U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [2U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[2U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [2U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[2U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [2U][2U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[2U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [2U][3U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[3U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [3U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[3U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [3U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[3U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [3U][2U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[3U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [3U][3U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[0U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [0U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [0U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[0U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [0U][2U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[0U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [0U][3U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [1U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [1U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[1U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [1U][2U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[1U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [1U][3U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[2U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [2U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[2U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [2U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[2U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [2U][2U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[2U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [2U][3U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[3U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [3U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[3U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [3U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[3U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [3U][2U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[3U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [3U][3U];
}

VL_INLINE_OPT void Vtb_systolicarray_2x2___024root___nba_comb__TOP__0(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___nba_comb__TOP__0\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [2U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [3U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [2U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [3U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [0U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [1U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [2U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [3U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [0U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [1U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [2U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [3U];
}

VL_INLINE_OPT void Vtb_systolicarray_2x2___024root___nba_sequent__TOP__1(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___nba_sequent__TOP__1\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_systolicarray_2x2__DOT__reset) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire = 0U;
    } else {
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [0U][0U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [0U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [0U][0U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [0U]
                                                            [0U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [0U]
                                                        [0U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [0U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [0U][0U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [0U][1U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [0U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [0U][1U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [0U]
                                                            [1U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [0U]
                                                        [1U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [0U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [0U][1U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [0U][2U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [0U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [0U][2U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [0U]
                                                            [2U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [0U]
                                                        [2U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [0U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [0U][2U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [0U][3U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [0U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [0U][3U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [0U]
                                                            [3U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [0U]
                                                        [3U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [0U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [0U][3U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [1U][0U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [1U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [1U][0U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [1U]
                                                            [0U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [1U]
                                                        [0U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [1U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [1U][0U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [1U][1U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [1U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [1U][1U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [1U]
                                                            [1U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [1U]
                                                        [1U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [1U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [1U][1U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [1U][2U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [1U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [1U][2U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [1U]
                                                            [2U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [1U]
                                                        [2U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [1U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [1U][2U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [1U][3U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [1U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [1U][3U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [1U]
                                                            [3U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [1U]
                                                        [3U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [1U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [1U][3U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [2U][0U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [2U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [2U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [2U][0U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [2U]
                                                            [0U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [2U]
                                                        [0U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [2U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [2U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [2U][0U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [2U][1U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [2U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [2U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [2U][1U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [2U]
                                                            [1U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [2U]
                                                        [1U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [2U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [2U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [2U][1U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [2U][2U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [2U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [2U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [2U][2U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [2U]
                                                            [2U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [2U]
                                                        [2U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [2U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [2U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [2U][2U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [2U][3U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [2U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [2U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [2U][3U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [2U]
                                                            [3U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [2U]
                                                        [3U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [2U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [2U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [2U][3U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [3U][0U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [3U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [3U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [3U][0U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [3U]
                                                            [0U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [3U]
                                                        [0U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [3U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [3U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [3U][0U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [3U][1U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [3U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [3U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [3U][1U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [3U]
                                                            [1U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [3U]
                                                        [1U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [3U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [3U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [3U][1U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [3U][2U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [3U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [3U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [3U][2U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [3U]
                                                            [2U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [3U]
                                                        [2U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [3U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [3U][2U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [3U][2U];
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [3U][3U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [3U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [3U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [3U][3U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [3U]
                                                            [3U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [3U]
                                                        [3U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [3U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                [3U][3U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                [3U][3U];
        }
    }
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][4U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[2U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[2U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[2U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][4U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[2U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[3U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[3U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[3U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][4U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[3U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[4U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[4U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[4U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][4U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[4U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire;
}

VL_INLINE_OPT void Vtb_systolicarray_2x2___024root___nba_sequent__TOP__2(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___nba_sequent__TOP__2\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__C_bus__v0) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[2U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[2U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[2U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[2U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[3U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[3U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[3U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[3U][3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v16) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v16;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v17;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][0U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v18;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][0U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v19;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v16;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][1U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v17;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][2U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v18;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][3U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v19;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v20) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][1U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v20;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v20;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v21) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][2U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v21;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][1U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v21;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v22) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][3U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v22;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][2U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v22;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v23) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][4U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v23;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][3U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v23;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v25) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][1U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v25;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[2U][0U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v25;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v26) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][2U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v26;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[2U][1U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v26;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v27) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][3U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v27;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[2U][2U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v27;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v28) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][4U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v28;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[2U][3U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v28;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v30) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][1U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v30;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[3U][0U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v30;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v31) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][2U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v31;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[3U][1U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v31;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v32) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][3U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v32;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[3U][2U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v32;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v33) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][4U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v33;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[2U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[3U][3U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v33;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v35) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][1U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v35;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[4U][0U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v35;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v36) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][2U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v36;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[4U][1U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v36;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v37) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][3U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v37;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[4U][2U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v37;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v38) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][4U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v38;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[3U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[4U][3U] 
            = vlSelfRef.__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v38;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[2U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[2U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[2U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[2U][3U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[3U][0U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[3U][1U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[3U][2U] = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[3U][3U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_systolicarray_2x2___024root___nba_comb__TOP__1(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___nba_comb__TOP__1\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[2U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[2U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[2U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[2U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[3U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[3U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[3U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[3U][3U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
}

VL_INLINE_OPT void Vtb_systolicarray_2x2___024root___nba_comb__TOP__2(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___nba_comb__TOP__2\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][0U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [0U][0U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][1U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [0U][1U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][2U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [0U][2U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][3U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [0U][3U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][0U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [1U][0U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][1U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [1U][1U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][2U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [1U][2U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][3U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [1U][3U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][0U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [2U][0U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][1U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [2U][1U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][2U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [2U][2U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][3U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [2U][3U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][0U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [3U][0U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][1U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [3U][1U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][2U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [3U][2U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire
            : 0U);
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[3U][3U] 
        = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
           [3U][3U] ? vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire
            : 0U);
}

void Vtb_systolicarray_2x2___024root___timing_resume(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___timing_resume\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h8c4e8a52__0.resume(
                                                   "@( tb_systolicarray_2x2.done)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_systolicarray_2x2___024root___timing_commit(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___timing_commit\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h8c4e8a52__0.commit(
                                                   "@( tb_systolicarray_2x2.done)");
    }
}

void Vtb_systolicarray_2x2___024root___eval_triggers__act(Vtb_systolicarray_2x2___024root* vlSelf);

bool Vtb_systolicarray_2x2___024root___eval_phase__act(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_phase__act\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_systolicarray_2x2___024root___eval_triggers__act(vlSelf);
    Vtb_systolicarray_2x2___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_systolicarray_2x2___024root___timing_resume(vlSelf);
        Vtb_systolicarray_2x2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_systolicarray_2x2___024root___eval_phase__nba(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_phase__nba\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_systolicarray_2x2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___dump_triggers__nba(Vtb_systolicarray_2x2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___dump_triggers__act(Vtb_systolicarray_2x2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_systolicarray_2x2___024root___eval(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_systolicarray_2x2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_systolicarray_2x2.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_systolicarray_2x2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_systolicarray_2x2.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_systolicarray_2x2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_systolicarray_2x2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_systolicarray_2x2___024root___eval_debug_assertions(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_debug_assertions\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
