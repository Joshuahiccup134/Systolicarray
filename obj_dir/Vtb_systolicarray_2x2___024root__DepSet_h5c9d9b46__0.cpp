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
    if ((0xdULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_systolicarray_2x2___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_systolicarray_2x2___024root___act_comb__TOP__0(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___act_comb__TOP__0\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[0U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [0U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [0U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [1U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__B_in
        [1U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[0U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [0U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [0U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [1U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__A_in
        [1U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[0U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in
        [0U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in
        [0U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in
        [1U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_in[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in
        [1U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[0U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in
        [0U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in
        [0U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in
        [1U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_in[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in
        [1U][1U];
}

void Vtb_systolicarray_2x2___024root___nba_sequent__TOP__0(Vtb_systolicarray_2x2___024root* vlSelf);
void Vtb_systolicarray_2x2___024root___nba_sequent__TOP__1(Vtb_systolicarray_2x2___024root* vlSelf);

void Vtb_systolicarray_2x2___024root___eval_nba(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_nba\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_systolicarray_2x2___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_systolicarray_2x2___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0xdULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_systolicarray_2x2___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_systolicarray_2x2___024root___nba_sequent__TOP__0(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___nba_sequent__TOP__0\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_systolicarray_2x2__DOT__reset) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out = 0U;
    } else {
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [0U][0U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                [0U]
                                                [0U]), 
                              VL_EXTENDS_II(32,16, 
                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                            [0U][0U]));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out;
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [0U][1U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [0U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                [0U]
                                                [1U]), 
                              VL_EXTENDS_II(32,16, 
                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                            [0U][1U]));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out;
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [1U][0U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][0U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [0U][0U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [1U]
                                                            [0U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [1U]
                                                        [0U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out;
        }
        if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus
            [1U][1U]) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                [1U][1U];
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out 
                = (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus
                   [0U][1U] + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus
                                                            [1U]
                                                            [1U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus
                                                        [1U]
                                                        [1U])));
        } else {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out 
                = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out;
        }
    }
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out;
}

VL_INLINE_OPT void Vtb_systolicarray_2x2___024root___nba_sequent__TOP__1(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___nba_sequent__TOP__1\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount;
    __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount = 0;
    CData/*0:0*/ __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running;
    __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running = 0;
    SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v0;
    __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v0;
    __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v1;
    __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v2;
    __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v3;
    __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v3 = 0;
    CData/*0:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0;
    __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0;
    __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v1;
    __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v0;
    __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v2;
    __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v2 = 0;
    CData/*0:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v3;
    __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v3 = 0;
    SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v1;
    __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v1 = 0;
    // Body
    __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount;
    __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running;
    __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v0 = 0U;
    __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0 = 0U;
    if (vlSelfRef.tb_systolicarray_2x2__DOT__reset) {
        __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount = 0U;
        __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running = 0U;
        vlSelfRef.tb_systolicarray_2x2__DOT__done = 0U;
    } else {
        vlSelfRef.tb_systolicarray_2x2__DOT__done = 0U;
        if (((IData)(vlSelfRef.tb_systolicarray_2x2__DOT__preload) 
             & (~ (IData)(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running)))) {
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__col_j = 2U;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_i = 2U;
            __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v0 
                = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in
                [0U][0U];
            __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v0 = 1U;
            __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v1 
                = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in
                [0U][1U];
            __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v2 
                = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in
                [1U][0U];
            __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v3 
                = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in
                [1U][1U];
        }
        if (((IData)(vlSelfRef.tb_systolicarray_2x2__DOT__start) 
             & (~ (IData)(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running)))) {
            __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running = 1U;
            __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount = 0U;
        } else if (vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running) {
            __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount 
                = ((IData)(1U) + vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount);
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__col_j = 2U;
            vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__row_i = 2U;
            if (VL_LTES_III(32, 4U, vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount)) {
                __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running = 0U;
                vlSelfRef.tb_systolicarray_2x2__DOT__done = 1U;
            }
            __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0 
                = (VL_LTES_III(32, 0U, vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount) 
                   & VL_GTS_III(32, 2U, vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount));
            __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0 = 1U;
            __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v1 
                = (VL_LTES_III(32, 1U, vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount) 
                   & VL_GTS_III(32, 3U, vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount));
            if (VL_GTS_III(32, 2U, vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount)) {
                __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v0 
                    = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in
                    [0U][(1U & vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount)];
                __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v1 
                    = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in
                    [1U][(1U & vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount)];
                __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v2 
                    = (1U & VL_LTES_III(32, 0U, vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount));
            } else {
                __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v0 = 0U;
                __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v1 = 0U;
                __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v2 = 0U;
            }
            __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v3 
                = (VL_LTES_III(32, 1U, vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount) 
                   & VL_GTS_III(32, 3U, vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount));
        }
    }
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount 
        = __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running 
        = __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running;
    if (__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v0) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][0U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v0;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[0U][1U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v1;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][0U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v2;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__B_bus[1U][1U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v3;
    }
    if (__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0) {
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][0U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v0;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][0U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v1;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][0U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][1U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v1;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][0U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v2;
        vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][1U] 
            = __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v3;
    }
}

void Vtb_systolicarray_2x2___024root___timing_resume(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___timing_resume\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hda165b09__0.resume(
                                                   "@(posedge tb_systolicarray_2x2.clk)");
    }
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
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hda165b09__0.commit(
                                                   "@(posedge tb_systolicarray_2x2.clk)");
    }
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
