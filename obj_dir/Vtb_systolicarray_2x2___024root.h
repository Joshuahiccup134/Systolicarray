// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_systolicarray_2x2.h for the primary calling header

#ifndef VERILATED_VTB_SYSTOLICARRAY_2X2___024ROOT_H_
#define VERILATED_VTB_SYSTOLICARRAY_2X2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_systolicarray_2x2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_systolicarray_2x2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_systolicarray_2x2__DOT__clk;
    CData/*0:0*/ tb_systolicarray_2x2__DOT__reset;
    CData/*0:0*/ tb_systolicarray_2x2__DOT__enable;
    CData/*0:0*/ tb_systolicarray_2x2__DOT__start;
    CData/*0:0*/ tb_systolicarray_2x2__DOT__done;
    CData/*2:0*/ tb_systolicarray_2x2__DOT__dut__DOT__clkcount;
    CData/*0:0*/ tb_systolicarray_2x2__DOT__dut__DOT__running;
    CData/*2:0*/ __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__clkcount;
    CData/*0:0*/ __Vdly__tb_systolicarray_2x2__DOT__dut__DOT__running;
    CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__enable_bus__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_systolicarray_2x2__DOT__done__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire;
    SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire;
    SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire;
    SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire;
    SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire;
    SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire;
    SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire;
    SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire;
    IData/*31:0*/ tb_systolicarray_2x2__DOT__i;
    IData/*31:0*/ tb_systolicarray_2x2__DOT__j;
    IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__i;
    IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__j;
    IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__k;
    IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire;
    IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire;
    IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire;
    IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire;
    IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Acc_reg;
    IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Acc_reg;
    IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__mac_inst__DOT__Acc_reg;
    IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__mac_inst__DOT__Acc_reg;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 2> tb_systolicarray_2x2__DOT__A_in;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 2> tb_systolicarray_2x2__DOT__B_in;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 2> tb_systolicarray_2x2__DOT__C_out;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 2> tb_systolicarray_2x2__DOT____Vcellout__dut__C_out;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 2> tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 2> tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 2> tb_systolicarray_2x2__DOT__dut__DOT__A_in;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 2> tb_systolicarray_2x2__DOT__dut__DOT__B_in;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 2> tb_systolicarray_2x2__DOT__dut__DOT__C_out;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 3>, 2> tb_systolicarray_2x2__DOT__dut__DOT__A_bus;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 3> tb_systolicarray_2x2__DOT__dut__DOT__B_bus;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 2> tb_systolicarray_2x2__DOT__dut__DOT__C_bus;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 2> tb_systolicarray_2x2__DOT__dut__DOT__B_in_staggered;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 2> tb_systolicarray_2x2__DOT__dut__DOT__enable_bus;
    VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hda165b09__0;
    VlTriggerScheduler __VtrigSched_h8c4e8a52__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_systolicarray_2x2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_systolicarray_2x2___024root(Vtb_systolicarray_2x2__Syms* symsp, const char* v__name);
    ~Vtb_systolicarray_2x2___024root();
    VL_UNCOPYABLE(Vtb_systolicarray_2x2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
