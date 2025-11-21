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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_systolicarray_2x2__DOT__clk;
        CData/*0:0*/ tb_systolicarray_2x2__DOT__reset;
        CData/*0:0*/ tb_systolicarray_2x2__DOT__enable;
        CData/*0:0*/ tb_systolicarray_2x2__DOT__start;
        CData/*0:0*/ tb_systolicarray_2x2__DOT__done;
        CData/*3:0*/ tb_systolicarray_2x2__DOT__dut__DOT__clkcount;
        CData/*0:0*/ tb_systolicarray_2x2__DOT__dut__DOT__running;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__C_bus__v0;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v16;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v20;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v21;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v22;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v23;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v25;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v26;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v27;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v28;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v30;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v31;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v32;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v33;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v35;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v36;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v37;
        CData/*0:0*/ __VdlySet__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v38;
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
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__B_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__B_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__B_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__A_out_wire;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__B_out_wire;
    };
    struct {
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_haf76047d__0;
        SData/*15:0*/ tb_systolicarray_2x2__DOT__dut__DOT____Vlvbound_h84401ecf__0;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v16;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v16;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v17;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v17;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v18;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v18;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v19;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v19;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v20;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v20;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v21;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v21;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v22;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v22;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v23;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v23;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v25;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v25;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v26;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v26;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v27;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v27;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v28;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v28;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v30;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v30;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v31;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v31;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v32;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v32;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v33;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v33;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v35;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v35;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v36;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v36;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v37;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v37;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__A_bus__v38;
        SData/*15:0*/ __VdlyVal__tb_systolicarray_2x2__DOT__dut__DOT__B_bus__v38;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__i;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__j;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__i;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__j;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__C_out_wire;
        IData/*31:0*/ tb_systolicarray_2x2__DOT__dut__DOT__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__C_out_wire;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*15:0*/, 4> tb_systolicarray_2x2__DOT__A_in;
    };
    struct {
        VlUnpacked<SData/*15:0*/, 4> tb_systolicarray_2x2__DOT__B_in;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> tb_systolicarray_2x2__DOT__C_out;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> tb_systolicarray_2x2__DOT____Vcellout__dut__C_out;
        VlUnpacked<SData/*15:0*/, 4> tb_systolicarray_2x2__DOT____Vcellinp__dut__B_in;
        VlUnpacked<SData/*15:0*/, 4> tb_systolicarray_2x2__DOT____Vcellinp__dut__A_in;
        VlUnpacked<SData/*15:0*/, 4> tb_systolicarray_2x2__DOT__dut__DOT__A_in;
        VlUnpacked<SData/*15:0*/, 4> tb_systolicarray_2x2__DOT__dut__DOT__B_in;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> tb_systolicarray_2x2__DOT__dut__DOT__C_out;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 5>, 4> tb_systolicarray_2x2__DOT__dut__DOT__A_bus;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 5> tb_systolicarray_2x2__DOT__dut__DOT__B_bus;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> tb_systolicarray_2x2__DOT__dut__DOT__C_bus;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 4> tb_systolicarray_2x2__DOT__dut__DOT__enable_bus;
        VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
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
