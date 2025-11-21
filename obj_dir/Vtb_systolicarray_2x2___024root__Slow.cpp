// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_systolicarray_2x2.h for the primary calling header

#include "Vtb_systolicarray_2x2__pch.h"
#include "Vtb_systolicarray_2x2__Syms.h"
#include "Vtb_systolicarray_2x2___024root.h"

void Vtb_systolicarray_2x2___024root___ctor_var_reset(Vtb_systolicarray_2x2___024root* vlSelf);

Vtb_systolicarray_2x2___024root::Vtb_systolicarray_2x2___024root(Vtb_systolicarray_2x2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_systolicarray_2x2___024root___ctor_var_reset(this);
}

void Vtb_systolicarray_2x2___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_systolicarray_2x2___024root::~Vtb_systolicarray_2x2___024root() {
}
