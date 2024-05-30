// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject.h for the primary calling header

#include "Vproject__pch.h"
#include "Vproject__Syms.h"
#include "Vproject___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproject___024root___dump_triggers__ico(Vproject___024root* vlSelf);
#endif  // VL_DEBUG

void Vproject___024root___eval_triggers__ico(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vproject___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproject___024root___dump_triggers__act(Vproject___024root* vlSelf);
#endif  // VL_DEBUG

void Vproject___024root___eval_triggers__act(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vproject___024root___dump_triggers__act(vlSelf);
    }
#endif
}
