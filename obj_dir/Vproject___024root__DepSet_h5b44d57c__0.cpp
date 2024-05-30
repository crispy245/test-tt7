// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject.h for the primary calling header

#include "Vproject__pch.h"
#include "Vproject___024root.h"

VL_INLINE_OPT void Vproject___024root___ico_sequent__TOP__0(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->uo_out = (0xffU & ((IData)(vlSelf->ui_in) 
                               + (IData)(vlSelf->uio_in)));
    vlSelf->tt_um_example__DOT__rst = ((IData)(vlSelf->ena) 
                                       & (IData)(vlSelf->rst_n));
}

void Vproject___024root___eval_ico(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vproject___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vproject___024root___eval_triggers__ico(Vproject___024root* vlSelf);

bool Vproject___024root___eval_phase__ico(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vproject___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vproject___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vproject___024root___eval_act(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vproject___024root___nba_sequent__TOP__0(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__running;
    __Vdly__tt_um_example__DOT__DUT__DOT__running = 0;
    CData/*0:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__last_phase;
    __Vdly__tt_um_example__DOT__DUT__DOT__last_phase = 0;
    CData/*0:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__start_phase;
    __Vdly__tt_um_example__DOT__DUT__DOT__start_phase = 0;
    CData/*0:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running = 0;
    CData/*0:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA = 0;
    CData/*5:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows = 0;
    CData/*0:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running = 0;
    CData/*5:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L = 0;
    CData/*5:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter = 0;
    CData/*5:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end = 0;
    CData/*5:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start = 0;
    CData/*5:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end = 0;
    CData/*5:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end = 0;
    CData/*4:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op = 0;
    CData/*5:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data = 0;
    CData/*0:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data = 0;
    CData/*4:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end = 0;
    CData/*4:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op = 0;
    CData/*0:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op = 0;
    CData/*5:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data = 0;
    CData/*4:0*/ __Vdlyvdim0__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0;
    __Vdlyvdim0__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0;
    __Vdlyvval__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0;
    __Vdlyvset__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem__v0;
    __Vdlyvdim0__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem__v0 = 0;
    SData/*15:0*/ __Vdlyvval__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem__v0;
    __Vdlyvval__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem__v0;
    __Vdlyvset__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem__v0 = 0;
    CData/*2:0*/ __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_tmp;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_tmp = 0;
    // Body
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA;
    __Vdly__tt_um_example__DOT__DUT__DOT__running = vlSelf->tt_um_example__DOT__DUT__DOT__running;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running;
    __Vdly__tt_um_example__DOT__DUT__DOT__last_phase 
        = vlSelf->tt_um_example__DOT__DUT__DOT__last_phase;
    __Vdly__tt_um_example__DOT__DUT__DOT__start_phase 
        = vlSelf->tt_um_example__DOT__DUT__DOT__start_phase;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_tmp 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_tmp;
    __Vdlyvset__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem__v0 = 0U;
    __Vdlyvset__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0 = 0U;
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA 
        = ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__start_phase) 
           | ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA) 
              & (~ (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_reg))));
    __Vdly__tt_um_example__DOT__DUT__DOT__running = 
        (1U & (((IData)(vlSelf->uio_in) >> 6U) | (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__running) 
                                                   & (~ 
                                                      ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__last_phase) 
                                                       & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__done_reg)))) 
                                                  & (~ (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__fail_reg)))));
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running 
        = ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_data) 
           | ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running) 
              & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
                 != (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_counter))));
    vlSelf->tt_um_example__DOT__DUT__DOT__fail_reg 
        = ((~ ((IData)(vlSelf->uio_in) >> 6U)) & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__fail_reg));
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running 
        = ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__start_phase) 
           | (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running) 
               & (~ ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__last_step) 
                     & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_reg)))) 
              & (~ (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__fail_reg))));
    if (vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op) {
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op)));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT____Vlvbound_hb64fd797__0 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_op;
        if ((0x10U >= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op))) {
            __Vdlyvval__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem__v0 
                = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT____Vlvbound_hb64fd797__0;
            __Vdlyvset__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem__v0 
                = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op;
        }
    } else {
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op = 0U;
    }
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data 
        = (0x3fU & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data)
                     ? ((IData)(1U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data))
                     : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row 
        = ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row)) 
           | ((8U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                     << 1U)) | ((4U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                       << 1U)) | ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_del) 
                                                  << 1U))));
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_tmp 
        = ((4U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row) 
                  << 1U)) | ((2U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row) 
                                    << 1U)) | (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_del)));
    if ((1U & ((2U & (IData)(vlSelf->ui_in)) ? ((IData)(vlSelf->ui_in) 
                                                >> 1U)
                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data)))) {
        if ((2U & (IData)(vlSelf->ui_in))) {
            __Vdlyvval__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0 = 0U;
            __Vdlyvdim0__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0 = 0U;
        } else {
            __Vdlyvval__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0 
                = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_data;
            __Vdlyvdim0__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0 
                = (0x1fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data));
        }
        __Vdlyvset__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0 = 1U;
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp 
        = ((2U >= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_1_2))
            ? vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__mem
           [vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_1_2]
            : 0U);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp 
        = ((2U >= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_0_1))
            ? vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__mem
           [vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_0_1]
            : 0U);
    __Vdly__tt_um_example__DOT__DUT__DOT__last_phase 
        = (1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_counter));
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows 
        = (0x3fU & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__start_phase)
                     ? (((IData)(8U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_counter), 3U)) 
                        - VL_SHIFTL_III(32,32,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_counter), 2U))
                     : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_counter 
        = ((0x40U & (IData)(vlSelf->uio_in)) ? 0U : 
           ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__running)
             ? (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__done_reg)
                       ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__last_phase)
                           ? 0U : ((IData)(1U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_counter)))
                       : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_counter)))
             : 0U));
    __Vdly__tt_um_example__DOT__DUT__DOT__start_phase 
        = (1U & (((IData)(vlSelf->uio_in) >> 6U) | 
                 ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__running) 
                  & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__done_reg) 
                     & (~ (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__last_phase))))));
    vlSelf->tt_um_example__DOT__DUT__DOT__done_reg 
        = (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__last_phase) 
            & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__done_reg)) 
           | (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__fail_reg));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp 
        = ((2U >= (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_din)))
            ? vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__mem
           [(3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_din))]
            : 0U);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3 
        = (3U & ((0U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3)
                  : ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg)
                      : ((2U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out_reduced)
                          : ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg)
                              : 0U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data;
    vlSelf->tt_um_example__DOT__DUT__DOT__running = __Vdly__tt_um_example__DOT__DUT__DOT__running;
    vlSelf->tt_um_example__DOT__DUT__DOT__last_phase 
        = __Vdly__tt_um_example__DOT__DUT__DOT__last_phase;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_del 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__first_pass;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_op 
        = ((0xc000U & (((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                         ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg))
                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                             : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp))
                         : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                            >> 0xeU)) << 0xeU)) | (
                                                   (((8U 
                                                      & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                                                      ? 0U
                                                      : 
                                                     (3U 
                                                      & ((8U 
                                                          & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                                          ? 
                                                         ((4U 
                                                           & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp))
                                                            ? 3U
                                                            : 1U)
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))
                                                            ? 1U
                                                            : 
                                                           ((4U 
                                                             & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg))
                                                              ? 2U
                                                              : 3U)
                                                             : 0U)))
                                                          : 
                                                         ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                          >> 0xcU)))) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_2_2) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2) 
                                                          << 8U) 
                                                         | (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_1_1) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1) 
                                                                << 4U) 
                                                               | (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_0_0) 
                                                                   << 2U) 
                                                                  | (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))))))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_data 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_reg;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__fail_reg 
        = ((~ (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__start_step)) 
           & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA) 
              & ((~ (IData)((0xfU == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass)))) 
                 & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_tmp))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp 
        = ((2U >= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_2_3))
            ? vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__mem
           [vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_2_3]
            : 0U);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_reg 
        = ((0xc0U & (((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                       : ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))
                           ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg)
                           : ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))
                               ? 0U : ((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                        ? 0U : ((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                     >> 0xcU)))
                                                 ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 0xcU)))
                                                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                       >> 0xcU)))
                                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out_reduced)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                        >> 0xcU)))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg)
                                                    : 0U)))))))) 
                     << 6U)) | ((0x30U & (((0U == (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 0xcU)))
                                            ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2)
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 0xcU)))
                                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                        >> 0xcU)))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out_reduced)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                         >> 0xcU)))
                                                     ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg)
                                                     : 0U)))) 
                                          << 4U)) | 
                                ((0xcU & (((0U == (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 0xcU)))
                                            ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1)
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 0xcU)))
                                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                        >> 0xcU)))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out_reduced)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                         >> 0xcU)))
                                                     ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg)
                                                     : 0U)))) 
                                          << 2U)) | 
                                 (3U & ((0U == (3U 
                                                & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                   >> 0xcU)))
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0)
                                         : ((1U == 
                                             (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 0xcU)))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg)
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                     >> 0xcU)))
                                                 ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out_reduced)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 0xcU)))
                                                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg)
                                                  : 0U))))))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_out_0__DOT__level[0U] 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_reg;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_2_3;
    if ((0U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                      >> 8U)))) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0));
    } else if ((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                             >> 8U)))) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg));
    } else if ((2U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                             >> 8U)))) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out_reduced));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out_reduced));
    } else if ((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                             >> 8U)))) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0 
            = (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg));
    } else {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1 
            = (3U & 0U);
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0 
            = (3U & 0U);
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2 
        = (3U & ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2)
                  : ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))
                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg)
                      : ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))
                          ? 0U : ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                   ? 0U : ((0U == (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 8U)))
                                            ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2)
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 8U)))
                                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                        >> 8U)))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out_reduced)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                         >> 8U)))
                                                     ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg)
                                                     : 0U)))))))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_1_2;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0 
        = (3U & ((0U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                               >> 4U))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0)
                  : ((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                   >> 4U))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg)
                      : ((2U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                       >> 4U))) ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out_reduced)
                          : ((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                           >> 4U)))
                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg)
                              : 0U)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1 
        = (3U & ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1)
                  : ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))
                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg)
                      : ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))
                          ? 0U : ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                   ? 0U : ((0U == (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 4U)))
                                            ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1)
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out_reduced)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg)
                                                     : 0U)))))))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_0_1;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_tmp;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_tmp;
    if (vlSelf->tt_um_example__DOT__rst) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg = 0U;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg = 0U;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg = 0U;
    } else {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_tmp;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_tmp;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_tmp;
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2 
        = (3U & ((0U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                  ? (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                           >> 4U)) : ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg)
                                       : ((2U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                           ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out_reduced)
                                           : ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                               ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg)
                                               : 0U)))));
    if (vlSelf->tt_um_example__DOT__rst) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg = 0U;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg = 0U;
    } else {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_tmp;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_tmp;
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3 
        = (3U & ((0U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                  ? (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                           >> 6U)) : ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg)
                                       : ((2U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                           ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out_reduced)
                                           : ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                               ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg)
                                               : 0U)))));
    if (vlSelf->tt_um_example__DOT__rst) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg = 0U;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg = 0U;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg = 0U;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg = 0U;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg = 0U;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg = 0U;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg = 0U;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg = 0U;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg = 0U;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg = 0U;
    } else {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_tmp;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_tmp;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_tmp;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_tmp;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_tmp;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_tmp;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_tmp;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_tmp;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_tmp;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_tmp;
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0 
        = (3U & ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                  ? (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del))
                  : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_del)
                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)
                      : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_del)
                          ? 0U : ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                   ? 0U : ((0U == (3U 
                                                   & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                            ? (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out_reduced)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                                     ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)
                                                     : 0U)))))))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg 
        = ((IData)(vlSelf->tt_um_example__DOT__rst)
            ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_tmp));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_tmp 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_tmp;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_tmp 
        = (7U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_out));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass = 0U;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup 
        = (0xfU & (- (IData)((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_in;
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
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_del 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_start;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_del 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish;
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
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_din;
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
    if (vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_in = 0U;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op 
            = (1U & (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
                      > ((IData)(1U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row))) 
                     & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
                        <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end))));
    } else {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_in 
            = ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_en)
                ? (0xffffU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__dout_op))
                : 0U);
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op = 0U;
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_out 
        = (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in) 
            << 1U) | (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_del));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_in_0__DOT__level[0U] 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out 
        = (7U & (((3U & ((3U == (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del)
                          : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg))) 
                  * (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                           >> 2U))) + ((3U == (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                        ? 0U : (3U 
                                                & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del)))));
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter 
        = (0x3fU & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_comp)
                     ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row)
                     : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running)
                         ? ((IData)(1U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter))
                         : 0U)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_din 
        = ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_data_en)
            ? (0xffU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__dout_data))
            : 0U);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__first_pass 
        = ((~ (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__start_step)) 
           & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA) 
              & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
                 < (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows))));
    if (vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_data) {
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end 
            = (0x3fU & ((IData)(0xcU) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_row)));
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start 
            = (0x3fU & ((IData)(0xaU) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row)));
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end 
            = (0x3fU & ((IData)(0xbU) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_row)));
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_row)));
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data = 1U;
    } else {
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end 
            = (0x3fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end));
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start 
            = (0x3fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start));
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end 
            = (0x3fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end));
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end 
            = (0x3fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end));
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data 
            = ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running)
                ? (1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data) 
                         < (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_row)))
                : 0U);
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data 
        = (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
            >= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start)) 
           & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
              < (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end)));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_start 
        = (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
            == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row)) 
           & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_data_en));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish 
        = ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA) 
           & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
              == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end)));
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
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__gfe_barret_mad_inst__DOT__result 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out) 
                 - ((IData)(3U) * (7U & VL_SHIFTR_III(3,3,32, 
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          * 
                                                          (7U 
                                                           & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out), 2U)))), 2U)))));
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
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter;
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
    if (vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__dout_op 
            = ((0x10U >= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op))
                ? vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem
               [vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op]
                : 0U);
    }
    if (vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__start_step) {
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end = 0x10U;
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op = 0U;
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data = 0U;
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L 
            = (0x3fU & VL_SHIFTL_III(32,32,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__col_block), 3U));
    } else {
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end 
            = (0x1fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end));
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op 
            = (0x1fU & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op)
                         ? ((IData)(1U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op))
                         : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op)));
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data 
            = (0x3fU & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_data)
                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row)
                         : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data)
                             ? ((IData)(1U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data))
                             : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_row))));
        __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L 
            = (0x3fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L));
    }
    __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op 
        = (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running) 
            | (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_data))
            ? (1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op) 
                     < (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end)))
            : 0U);
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_en 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op;
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
    if ((1U & ((1U & (IData)(vlSelf->ui_in)) ? (IData)(vlSelf->ui_in)
                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data)))) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__dout_data 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem
            [((1U & (IData)(vlSelf->ui_in)) ? 0U : 
              (0x1fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data)))];
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_comp 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_data;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_data_en 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data;
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
    if (__Vdlyvset__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem__v0) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[__Vdlyvdim0__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem__v0] 
            = __Vdlyvval__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem__v0;
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op;
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
    if (__Vdlyvset__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[__Vdlyvdim0__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0] 
            = __Vdlyvval__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem__v0;
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running;
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
    if (vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__have_col_block_L) {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_row 
            = (0x3fU & ((IData)(7U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L)));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_counter 
            = (0x3fU & ((IData)(0x11U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L)));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_data = 1U;
    } else {
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row 
            = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row;
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_row 
            = (0x3fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_row));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_counter 
            = (0x3fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_counter));
        vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_data = 0U;
    }
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__col_block 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter_comp;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__have_col_block_L 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__start_step;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__start_step 
        = ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__start_phase) 
           | ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running) 
              & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_reg) 
                 & (~ (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__last_step)))));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__done_reg 
        = ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__last_step) 
           & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_reg));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running 
        = __Vdly__tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running;
    vlSelf->tt_um_example__DOT__DUT__DOT__start_phase 
        = __Vdly__tt_um_example__DOT__DUT__DOT__start_phase;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_reg 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_tmp;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__last_step 
        = (3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_tmp 
        = (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_counter) 
            == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter)) 
           & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running));
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter 
        = vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter_comp;
    vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter_comp 
        = (7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__start_phase)
                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_counter)
                  : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running)
                      ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_reg)
                          ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__last_step)
                              ? 0U : ((IData)(1U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter)))
                          : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter))
                      : 0U)));
}

void Vproject___024root___eval_nba(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vproject___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vproject___024root___eval_triggers__act(Vproject___024root* vlSelf);

bool Vproject___024root___eval_phase__act(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vproject___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vproject___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vproject___024root___eval_phase__nba(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vproject___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproject___024root___dump_triggers__ico(Vproject___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vproject___024root___dump_triggers__nba(Vproject___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vproject___024root___dump_triggers__act(Vproject___024root* vlSelf);
#endif  // VL_DEBUG

void Vproject___024root___eval(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vproject___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("src/project.v", 9, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vproject___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vproject___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/project.v", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vproject___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/project.v", 9, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vproject___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vproject___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vproject___024root___eval_debug_assertions(Vproject___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ena & 0xfeU))) {
        Verilated::overWidthError("ena");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
