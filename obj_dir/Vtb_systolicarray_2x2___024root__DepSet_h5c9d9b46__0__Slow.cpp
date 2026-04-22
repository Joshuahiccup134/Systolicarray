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
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__done__0 
        = vlSelfRef.tb_systolicarray_2x2__DOT__done;
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
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bottom[0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_acc
        [2U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bottom[1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_acc
        [2U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[0U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [0U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [0U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [1U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__C_out[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [1U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[0U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [0U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [0U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [1U][0U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_out[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT____Vcellout__dut__C_out
        [1U][1U];
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__enable;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[0U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][0U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__C_bus[2U][1U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out;
    vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__A_bus[1U][2U] 
        = vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out;
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
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( tb_systolicarray_2x2.done)\n");
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
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( tb_systolicarray_2x2.done)\n");
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
    vlSelf->tb_systolicarray_2x2__DOT__preload = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 103590387146085237ull);
    vlSelf->tb_systolicarray_2x2__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5252883056501825847ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__A_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6985273579318310978ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__B_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15286276240486343905ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__C_out[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10276265949295742264ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT____Vcellout__dut__C_out[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4514166900558190344ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7284306419969981792ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10733433244583401107ull);
        }
    }
    vlSelf->tb_systolicarray_2x2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2549402550392086125ull);
    vlSelf->tb_systolicarray_2x2__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17030752750555773814ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__A_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2109825396864060994ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__B_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2712791719530019727ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__C_out[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 481783288605913331ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__A_bus[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1818778657498879597ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__B_bus[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18278475700473630625ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__C_bus[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7024271153301586982ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__C_acc[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13431480398397115406ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__enable_bus[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2278983775228965298ull);
        }
    }
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13530754125149165319ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_i = 0;
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__col_j = 0;
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__clkcount = 0;
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__running = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16085417695255367332ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__C_bottom[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8731710439476826762ull);
    }
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__collection_phase = 0;
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__A_in_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15920550181442205270ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__B_in_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18031420140266970744ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13541231474411350786ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13016626334852341327ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11387008027362204513ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10453485392996336389ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11824529030745570737ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__A_in_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9763384311578039930ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__B_in_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 851675306331481379ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11850522477513899817ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9057005312226824059ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16637698484631609633ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2853810007382378893ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3280806242195332255ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_in_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8090229447883199720ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_in_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1440428825872616140ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12788670959962938869ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3689210132765334740ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12008392911917975675ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__C_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16392418218487182825ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__A_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5276825712784062451ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_in_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9535948339868544826ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_in_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8333758806010774640ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4191843113877127829ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1680718122807652682ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 510157133413288224ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__C_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11720261609829992293ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__A_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8407181830326364277ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h19019461__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16085082004637250408ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Product = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1927271433474643315ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Acc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15096569691316607676ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Product = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15955053230654746535ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Acc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5954695085853360381ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Product = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15262755474585170552ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Acc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11127055048797390004ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Product = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2860166935849286800ull);
    vlSelf->tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Acc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14743340122798301459ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10357802142072620329ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15576946871234133682ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__done__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16103691307841241700ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
