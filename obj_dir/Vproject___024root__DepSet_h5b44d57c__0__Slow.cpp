// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject.h for the primary calling header

#include "Vproject__pch.h"
#include "Vproject___024root.h"

VL_ATTR_COLD void Vproject___024root___eval_static__TOP(Vproject___024root* vlSelf);

VL_ATTR_COLD void Vproject___024root___eval_static(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_static\n"); );
    // Body
    Vproject___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vproject___024root___eval_static__TOP(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_counter = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__start_phase = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__last_phase = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__done_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__fail_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__running = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__col_block = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__start_step = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__last_step = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__done_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_row = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_counter = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_data = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_comp = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__have_col_block_L = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_data = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_op = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_start = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_in = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_din = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__first_pass = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__fail_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_data_en = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_en = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end = 1U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_del = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_del = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_del = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_tmp = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_tmp = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0 = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1 = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2 = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3 = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0 = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1 = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2 = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3 = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0 = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1 = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2 = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3 = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg = 0U;
}

VL_ATTR_COLD void Vproject___024root___eval_initial__TOP(Vproject___024root* vlSelf);

VL_ATTR_COLD void Vproject___024root___eval_initial(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_initial\n"); );
    // Body
    Vproject___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vproject___024root___eval_initial__TOP(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->uio_out = 0U;
    vlSelf->uio_oe = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__mem[0U] = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__mem[1U] = 5U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__mem[2U] = 6U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__mem[0U] = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__mem[1U] = 5U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__mem[2U] = 6U;
}

VL_ATTR_COLD void Vproject___024root___eval_final(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproject___024root___dump_triggers__stl(Vproject___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vproject___024root___eval_phase__stl(Vproject___024root* vlSelf);

VL_ATTR_COLD void Vproject___024root___eval_settle(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vproject___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/project.v", 9, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vproject___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproject___024root___dump_triggers__stl(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vproject___024root___stl_sequent__TOP__0(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_in_0__DOT__level[0U] 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_out_0__DOT__level[0U] 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_reg;
    vlSelf->uo_out = (0xffU & ((IData)(vlSelf->ui_in) 
                               + (IData)(vlSelf->uio_in)));
    vlSelf->tt_um_example__DOT__rst = ((IData)(vlSelf->ena) 
                                       & (IData)(vlSelf->rst_n));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_out 
        = (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in) 
            << 1U) | (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_del));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_tmp 
        = (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_counter) 
            == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter)) 
           & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter_comp 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__start_phase)
                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_counter)
                  : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running)
                      ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_reg)
                          ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__last_step)
                              ? 0U : ((IData)(1U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter)))
                          : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter))
                      : 0U)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out 
        = (7U & ((((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                 >> 4U))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0)
                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg)) 
                  * (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                           >> 6U))) + ((3U == (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 4U)))
                                        ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out 
        = (7U & ((((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                 >> 8U))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0)
                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg)) 
                  * (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                           >> 0xaU))) + ((3U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 8U)))
                                          ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out 
        = (7U & ((((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                 >> 8U))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1)
                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg)) 
                  * (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                           >> 0xaU))) + ((3U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 8U)))
                                          ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out 
        = (7U & ((((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                 >> 0xcU))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0)
                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg)) 
                  * (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                           >> 0xeU))) + ((3U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 0xcU)))
                                          ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out 
        = (7U & ((((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                 >> 0xcU))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1)
                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg)) 
                  * (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                           >> 0xeU))) + ((3U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 0xcU)))
                                          ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out 
        = (7U & ((((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                 >> 0xcU))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2)
                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg)) 
                  * (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                           >> 0xeU))) + ((3U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 0xcU)))
                                          ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out 
        = (7U & (((3U & ((3U == (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del)
                          : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg))) 
                  * (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                           >> 2U))) + ((3U == (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                        ? 0U : (3U 
                                                & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out 
        = (7U & ((((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                 >> 4U))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1)
                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg)) 
                  * (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                           >> 6U))) + ((3U == (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 4U)))
                                        ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out 
        = (7U & ((((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                 >> 8U))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2)
                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg)) 
                  * (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                           >> 0xaU))) + ((3U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 8U)))
                                          ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out 
        = (7U & ((((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                 >> 0xcU))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg)) 
                  * (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                           >> 0xeU))) + ((3U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 0xcU)))
                                          ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2 
        = ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
            ? 0U : (3U & ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                           ? ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))
                               ? ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp))
                                   ? 3U : 1U) : ((2U 
                                                  & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))
                                                  ? 1U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg))
                                                    ? 2U
                                                    : 3U)
                                                   : 0U)))
                           : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                              >> 8U))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1 
        = ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
            ? 0U : (3U & ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                           ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))
                               ? ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp))
                                   ? 3U : 1U) : ((1U 
                                                  & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))
                                                  ? 1U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg))
                                                    ? 2U
                                                    : 3U)
                                                   : 0U)))
                           : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                              >> 4U))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0 
        = ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
            ? 0U : (3U & ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                           ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_del)
                               ? ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp))
                                   ? 3U : 1U) : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_del)
                                                  ? 1U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg))
                                                    ? 2U
                                                    : 3U)
                                                   : 0U)))
                           : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_2_2 
        = (3U & ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                  ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg))
                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2)
                      : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp))
                  : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                     >> 0xaU)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out 
        = (7U & ((((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3)
                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg)) 
                  * (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_2_2)) 
                 + ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                     ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_1_1 
        = (3U & ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                  ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg))
                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1)
                      : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp))
                  : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                     >> 6U)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out 
        = (7U & ((((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3)
                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg)) 
                  * (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_1_1)) 
                 + ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                     ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out 
        = (7U & ((((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2)
                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg)) 
                  * (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_1_1)) 
                 + ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                     ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_0_0 
        = (3U & ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                  ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg))
                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del)
                      : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp))
                  : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                     >> 2U)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out 
        = (7U & (((3U & ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                          ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                             >> 4U) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg))) 
                  * (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_0_0)) 
                 + ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                     ? 0U : (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                   >> 4U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out 
        = (7U & (((3U & ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                          ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                             >> 6U) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg))) 
                  * (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_0_0)) 
                 + ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                     ? 0U : (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                   >> 6U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out 
        = (7U & (((3U & ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                          ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                             >> 2U) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg))) 
                  * (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_0_0)) 
                 + ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                     ? 0U : (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                   >> 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_tmp 
        = (3U & ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                  ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg))
                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)
                      : (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_del) 
                          & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp) 
                             >> 2U)) ? 1U : 0U)) : 
                 ((1U == (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                   ? (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del))
                   : ((3U == (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out_reduced)
                       : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_tmp 
        = (3U & ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                  ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg))
                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg)
                      : ((IData)((((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                   >> 1U) & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp) 
                                             >> 2U)))
                          ? 1U : 0U)) : ((1U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 4U)))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1)
                                          : ((3U == 
                                              (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 4U)))
                                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out_reduced)
                                              : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_tmp 
        = (3U & ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                  ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg))
                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg)
                      : ((4U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp)))
                          ? 1U : 0U)) : ((1U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 8U)))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2)
                                          : ((3U == 
                                              (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 8U)))
                                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out_reduced)
                                              : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out), 2U)))), 2U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_tmp 
        = ((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                         >> 4U))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0)
            : ((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                             >> 4U))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out_reduced)
                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg)));
    if ((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                      >> 8U)))) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1;
    } else if ((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                             >> 8U)))) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out_reduced;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out_reduced;
    } else {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg;
    }
    if ((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                      >> 0xcU)))) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2;
    } else if ((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                             >> 0xcU)))) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out_reduced;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out_reduced;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out_reduced;
    } else {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg;
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_tmp 
        = (3U & ((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                  ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg))
                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg)
                      : ((IData)((((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                   >> 3U) & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp) 
                                             >> 2U)))
                          ? 1U : 0U)) : ((1U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 0xcU)))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                                          : ((3U == 
                                              (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out_reduced)
                                              : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out_reduced 
        = (3U & ((3U <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__gfe_barret_mad_inst__DOT__result))
                  ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__gfe_barret_mad_inst__DOT__result) 
                     - (IData)(3U)) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__gfe_barret_mad_inst__DOT__result)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_2_3 
        = (3U & ((0U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3)
                  : ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg)
                      : ((2U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out_reduced)
                          : ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg)
                              : 0U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_tmp 
        = ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
            ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3)
            : ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out_reduced)
                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg)));
    if ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2;
    } else if ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out_reduced;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out_reduced;
    } else {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_tmp 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg;
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_1_2 
        = (3U & ((0U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2)
                  : ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg)
                      : ((2U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out_reduced)
                          : ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg)
                              : 0U)))));
    if ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_tmp 
            = (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                     >> 4U));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_tmp 
            = (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                     >> 6U));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_tmp 
            = (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                     >> 2U));
    } else if ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_tmp 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out_reduced));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_tmp 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out_reduced));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_tmp 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out_reduced));
    } else {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_tmp 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_tmp 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_tmp 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg));
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_0_1 
        = (3U & ((0U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                  ? (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                           >> 2U)) : ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg)
                                       : ((2U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                           ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out_reduced)
                                           : ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                               ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg)
                                               : 0U)))));
}

VL_ATTR_COLD void Vproject___024root___eval_stl(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vproject___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vproject___024root___eval_triggers__stl(Vproject___024root* vlSelf);

VL_ATTR_COLD bool Vproject___024root___eval_phase__stl(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vproject___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vproject___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproject___024root___dump_triggers__ico(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproject___024root___dump_triggers__act(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproject___024root___dump_triggers__nba(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vproject___024root___ctor_var_reset(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ui_in = VL_RAND_RESET_I(8);
    vlSelf->uo_out = VL_RAND_RESET_I(8);
    vlSelf->uio_in = VL_RAND_RESET_I(8);
    vlSelf->uio_out = VL_RAND_RESET_I(8);
    vlSelf->uio_oe = VL_RAND_RESET_I(8);
    vlSelf->ena = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_counter = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__start_phase = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__last_phase = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__done_reg = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__fail_reg = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter_comp = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__col_block = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows = VL_RAND_RESET_I(6);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__start_step = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__last_step = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__done_reg = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row = VL_RAND_RESET_I(6);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_row = VL_RAND_RESET_I(6);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_counter = VL_RAND_RESET_I(6);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter = VL_RAND_RESET_I(6);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L = VL_RAND_RESET_I(6);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_data = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_comp = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__have_col_block_L = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass = VL_RAND_RESET_I(4);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_data = VL_RAND_RESET_I(8);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__dout_data = VL_RAND_RESET_I(8);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data = VL_RAND_RESET_I(6);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data = VL_RAND_RESET_I(6);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_op = VL_RAND_RESET_I(16);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__dout_op = VL_RAND_RESET_I(16);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op = VL_RAND_RESET_I(5);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op = VL_RAND_RESET_I(5);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_start = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_in = VL_RAND_RESET_I(16);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_din = VL_RAND_RESET_I(8);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__first_pass = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__fail_reg = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_data_en = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_en = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end = VL_RAND_RESET_I(5);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end = VL_RAND_RESET_I(6);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start = VL_RAND_RESET_I(6);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end = VL_RAND_RESET_I(6);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end = VL_RAND_RESET_I(6);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_reg = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_tmp = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__file = VL_RAND_RESET_I(32);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__scan = VL_RAND_RESET_I(32);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__file = VL_RAND_RESET_I(32);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__scan = VL_RAND_RESET_I(32);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT____Vlvbound_hb64fd797__0 = VL_RAND_RESET_I(16);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_del = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_del = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_del = VL_RAND_RESET_I(1);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del = VL_RAND_RESET_I(8);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del = VL_RAND_RESET_I(16);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup = VL_RAND_RESET_I(4);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_tmp = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_tmp = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_out = VL_RAND_RESET_I(4);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row = VL_RAND_RESET_I(4);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_0_0 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_0_1 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_1_1 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_1_2 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_2_2 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_2_3 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3 = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_reg = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_in_0__DOT__level_buf[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_in_0__DOT__level[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__mem[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__mem[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_tmp = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out = VL_RAND_RESET_I(3);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out_reduced = VL_RAND_RESET_I(2);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__gfe_barret_mad_inst__DOT__result = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_out_0__DOT__level_buf[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_out_0__DOT__level[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
