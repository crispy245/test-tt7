// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject.h for the primary calling header

#include "Vproject__pch.h"
#include "Vproject__Syms.h"
#include "Vproject___024root.h"

void Vproject___024root___ctor_var_reset(Vproject___024root* vlSelf);

Vproject___024root::Vproject___024root(Vproject__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vproject___024root___ctor_var_reset(this);
}

void Vproject___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vproject___024root::~Vproject___024root() {
}
