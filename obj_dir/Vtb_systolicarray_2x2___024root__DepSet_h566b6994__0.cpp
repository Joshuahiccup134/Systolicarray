// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_systolicarray_2x2.h for the primary calling header

#include "Vtb_systolicarray_2x2__pch.h"
#include "Vtb_systolicarray_2x2__Syms.h"
#include "Vtb_systolicarray_2x2___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_systolicarray_2x2___024root___eval_initial__TOP__Vtiming__0(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    VL_WRITEF_NX("---- Systolic Array 2x2 Testbench Start ----\n",0);
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f327832U;
    __Vtemp_1[2U] = 0x72726179U;
    __Vtemp_1[3U] = 0x6c696361U;
    __Vtemp_1[4U] = 0x7973746fU;
    __Vtemp_1[5U] = 0x74625f73U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_systolicarray_2x2__DOT__clk = 0U;
    vlSelfRef.tb_systolicarray_2x2__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb_systolicarray_2x2.sv", 
                                         43);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_systolicarray_2x2__DOT__start = 1U;
    vlSelfRef.tb_systolicarray_2x2__DOT__enable = 1U;
    vlSelfRef.tb_systolicarray_2x2__DOT__A_in[0U] = 1U;
    vlSelfRef.tb_systolicarray_2x2__DOT__A_in[1U] = 2U;
    vlSelfRef.tb_systolicarray_2x2__DOT__A_in[2U] = 3U;
    vlSelfRef.tb_systolicarray_2x2__DOT__A_in[3U] = 4U;
    vlSelfRef.tb_systolicarray_2x2__DOT__B_in[0U] = 5U;
    vlSelfRef.tb_systolicarray_2x2__DOT__B_in[1U] = 6U;
    vlSelfRef.tb_systolicarray_2x2__DOT__B_in[2U] = 7U;
    vlSelfRef.tb_systolicarray_2x2__DOT__B_in[3U] = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "tb_systolicarray_2x2.sv", 
                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "tb_systolicarray_2x2.sv", 
                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("reset= %1#, start= %1#, done= %1#, running= %1#, clkcount= %2#\n",0,
                 1,vlSelfRef.tb_systolicarray_2x2__DOT__reset,
                 1,(IData)(vlSelfRef.tb_systolicarray_2x2__DOT__start),
                 1,vlSelfRef.tb_systolicarray_2x2__DOT__done,
                 1,(IData)(vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__running),
                 4,vlSelfRef.tb_systolicarray_2x2__DOT__dut__DOT__clkcount);
    while ((1U & (~ (IData)(vlSelfRef.tb_systolicarray_2x2__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h8c4e8a52__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_systolicarray_2x2.done)", 
                                                             "tb_systolicarray_2x2.sv", 
                                                             69);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("Computed Matrix C:\n",0);
    vlSelfRef.tb_systolicarray_2x2__DOT__i = 0U;
    vlSelfRef.tb_systolicarray_2x2__DOT__j = 0U;
    VL_WRITEF_NX("C[0][0] = %0#\n",0,32,vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                 [0U][0U]);
    vlSelfRef.tb_systolicarray_2x2__DOT__j = 1U;
    VL_WRITEF_NX("C[0][1] = %0#\n",0,32,vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                 [0U][1U]);
    vlSelfRef.tb_systolicarray_2x2__DOT__j = 2U;
    vlSelfRef.tb_systolicarray_2x2__DOT__i = 1U;
    vlSelfRef.tb_systolicarray_2x2__DOT__j = 0U;
    VL_WRITEF_NX("C[1][0] = %0#\n",0,32,vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                 [1U][0U]);
    vlSelfRef.tb_systolicarray_2x2__DOT__j = 1U;
    VL_WRITEF_NX("C[1][1] = %0#\n",0,32,vlSelfRef.tb_systolicarray_2x2__DOT__C_out
                 [1U][1U]);
    vlSelfRef.tb_systolicarray_2x2__DOT__j = 2U;
    vlSelfRef.tb_systolicarray_2x2__DOT__i = 2U;
    VL_WRITEF_NX("Expected:\nC = [19 22; 43 50]\n---- Test Completed ----\n",0);
    VL_FINISH_MT("tb_systolicarray_2x2.sv", 86, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_systolicarray_2x2___024root___eval_initial__TOP__Vtiming__1(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb_systolicarray_2x2.sv", 
                                             32);
        vlSelfRef.tb_systolicarray_2x2__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.tb_systolicarray_2x2__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolicarray_2x2___024root___dump_triggers__act(Vtb_systolicarray_2x2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_systolicarray_2x2___024root___eval_triggers__act(Vtb_systolicarray_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolicarray_2x2___024root___eval_triggers__act\n"); );
    Vtb_systolicarray_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_systolicarray_2x2__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_systolicarray_2x2__DOT__reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__reset__0))));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.tb_systolicarray_2x2__DOT__done) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__done__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__clk__0 
        = vlSelfRef.tb_systolicarray_2x2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__reset__0 
        = vlSelfRef.tb_systolicarray_2x2__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__done__0 
        = vlSelfRef.tb_systolicarray_2x2__DOT__done;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_systolicarray_2x2___024root___dump_triggers__act(vlSelf);
    }
#endif
}
