// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_systolicarray_2x2.h for the primary calling header

#include "Vtb_systolicarray_2x2__pch.h"
#include "Vtb_systolicarray_2x2___024root.h"

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___eval_static(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_static\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__clk__0 
        = vlSelfRef.tb_systolicarray_2x2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__reset__0 
        = vlSelfRef.tb_systolicarray_2x2__DOT__reset;
}

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___eval_final(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_final\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___dump_triggers__stl(Vtb_systolicarray_2x2___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_systolicarray_2x2___024root___eval_phase__stl(Vtb_systolicarray_2x2___024root* vlSelf);

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___eval_settle(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_settle\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_systolicarray_2x2___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_systolicarray_2x2.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_systolicarray_2x2___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___dump_triggers__stl(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___dump_triggers__stl\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___stl_sequent__TOP__0(Vtb_systolicarray_2x2___024root* vlSelf);
VL_ATTR_COLD void Vtb_systolicarray_2x2___024root____Vm_traceActivitySetAll(Vtb_systolicarray_2x2___024root* vlSelf);

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___eval_stl(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_stl\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_systolicarray_2x2___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_systolicarray_2x2___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___stl_sequent__TOP__0(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___stl_sequent__TOP__0\n"); );
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

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___eval_triggers__stl(Vtb_systolicarray_2x2___024root* vlSelf);

VL_ATTR_COLD bool Vtb_systolicarray_2x2___024root___eval_phase__stl(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_phase__stl\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_systolicarray_2x2___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_systolicarray_2x2___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___dump_triggers__act(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___dump_triggers__act\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_systolicarray_2x2.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_systolicarray_2x2.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___dump_triggers__nba(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___dump_triggers__nba\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_systolicarray_2x2.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_systolicarray_2x2.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root____Vm_traceActivitySetAll(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root____Vm_traceActivitySetAll\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
}

VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___ctor_var_reset(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___ctor_var_reset\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_systolicarray_2x2__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7035243199043457058ull);
    vlSelf->tb_systolicarray_2x2__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11760482800363884471ull);
    vlSelf->tb_systolicarray_2x2__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10698388738167729802ull);
    vlSelf->tb_systolicarray_2x2__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12446782433100414821ull);
    vlSelf->tb_systolicarray_2x2__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5252883056501825847ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_systolicarray_2x2__DOT__A_in[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6985273579318310978ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_systolicarray_2x2__DOT__B_in[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15286276240486343905ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__C_out[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10276265949295742264ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4514166900558190344ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7284306419969981792ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10733433244583401107ull);
    }
    vlSelf->tb_systolicarray_2x2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2549402550392086125ull);
    vlSelf->tb_systolicarray_2x2__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17030752750555773814ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__A_in[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2109825396864060994ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__B_in[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2712791719530019727ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__C_out[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 481783288605913331ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__A_bus[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1818778657498879597ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__B_bus[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18278475700473630625ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__C_bus[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7024271153301586982ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2278983775228965298ull);
        }
    }
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13530754125149165319ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7239846342903587059ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__clkcount = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16976241751842576121ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__running = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16085417695255367332ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13541231474411350786ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13016626334852341327ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11387008027362204513ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11850522477513899817ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9057005312226824059ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16637698484631609633ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3442604069567778346ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4243468178226160705ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5944940652422967877ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2011969823486601700ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7096038628572165070ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7582411089151076212ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12788670959962938869ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3689210132765334740ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12008392911917975675ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4191843113877127829ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1680718122807652682ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 510157133413288224ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9345160361743672852ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9758843383271403556ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2101854736937386780ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6727689064402019950ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6002157787077212745ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14324615563400493483ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8017385933924835695ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2576830035331310263ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10487519343306542968ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16630647156344512274ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13861822065133022884ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5650686787565668453ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10296676724802624802ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11611688009206867417ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18225614241864042398ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7423377217025276659ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3638180038341131582ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 78708526191867069ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14649133646924027406ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14338404020166456924ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11772603672068703426ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3336578514147049280ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11107585434612268079ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15016684244079609191ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17420850776919699022ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3187299291815015850ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 153761351867095364ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16399597775421818986ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10446262114001161588ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11931589196262201291ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7206631780669609509ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7889704515844318395ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__C_bus__v0 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v16 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12403103354056755986ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v16 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v16 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9299988609574012819ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v17 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17942099809630431908ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v17 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3174497252979899320ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v18 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15653710286608930752ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v18 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7894388356878488665ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v19 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14821058651508766364ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v19 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2743632137564770771ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v20 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13984166920301026959ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v20 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v20 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13315512922988091990ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v21 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4677094005579834635ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v21 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v21 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17977698252093457048ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v22 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2045868367168096214ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v22 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v22 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3936224613812401808ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v23 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14816818555401259418ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v23 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v23 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11727019240606967980ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v25 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3814000239766425808ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v25 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v25 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2607433948936101692ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v26 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 150789271524823000ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v26 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v26 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10648612767628326042ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v27 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18204222917856112698ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v27 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v27 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8656115717711001393ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v28 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7594715029599674517ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v28 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v28 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1696819594495092669ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v30 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17380646616336891229ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v30 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v30 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14156837995468160720ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v31 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11704852730860320355ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v31 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v31 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8031346638873840325ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v32 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10664507002456594413ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v32 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v32 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16823738150827973663ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v33 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3460207276682336275ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v33 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v33 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9494652666362852890ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v35 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 778507326282601883ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v35 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v35 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8311762183170059116ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v36 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14701734789765177189ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v36 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v36 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15877058916633678925ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v37 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14308424362386950609ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v37 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v37 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17410634948049733407ull);
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v38 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4138257681852486030ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v38 = 0;
    vlSelf->__VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v38 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14584333131510460170ull);
    vlSelf->__VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10357802142072620329ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15576946871234133682ull);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
