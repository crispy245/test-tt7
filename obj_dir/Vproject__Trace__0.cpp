// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vproject__Syms.h"


void Vproject___024root__trace_chg_0_sub_0(Vproject___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vproject___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root__trace_chg_0\n"); );
    // Init
    Vproject___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproject___024root*>(voidSelf);
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vproject___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vproject___024root__trace_chg_0_sub_0(Vproject___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__mem[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__mem[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__mem[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__mem[0]),3);
        bufp->chgCData(oldp+4,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__mem[1]),3);
        bufp->chgCData(oldp+5,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__mem[2]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+6,(vlSelf->tt_um_example__DOT__DUT__DOT__fail_reg));
        bufp->chgBit(oldp+7,(vlSelf->tt_um_example__DOT__DUT__DOT__done_reg));
        bufp->chgCData(oldp+8,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__dout_data),8);
        bufp->chgCData(oldp+9,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_counter),3);
        bufp->chgBit(oldp+10,(vlSelf->tt_um_example__DOT__DUT__DOT__start_phase));
        bufp->chgBit(oldp+11,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__done_reg));
        bufp->chgBit(oldp+12,(vlSelf->tt_um_example__DOT__DUT__DOT__last_phase));
        bufp->chgBit(oldp+13,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__fail_reg));
        bufp->chgBit(oldp+14,(vlSelf->tt_um_example__DOT__DUT__DOT__running));
        bufp->chgCData(oldp+15,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter_comp),3);
        bufp->chgCData(oldp+16,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter),3);
        bufp->chgCData(oldp+17,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__col_block),3);
        bufp->chgCData(oldp+18,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows),6);
        bufp->chgBit(oldp+19,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__start_step));
        bufp->chgBit(oldp+20,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_reg));
        bufp->chgBit(oldp+21,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__last_step));
        bufp->chgBit(oldp+22,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA));
        bufp->chgBit(oldp+23,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running));
        bufp->chgCData(oldp+24,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row),6);
        bufp->chgCData(oldp+25,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_row),6);
        bufp->chgCData(oldp+26,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_counter),6);
        bufp->chgCData(oldp+27,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter),6);
        bufp->chgCData(oldp+28,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L),6);
        bufp->chgBit(oldp+29,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_data));
        bufp->chgBit(oldp+30,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_comp));
        bufp->chgBit(oldp+31,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__have_col_block_L));
        bufp->chgCData(oldp+32,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass),4);
        bufp->chgCData(oldp+33,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_data),8);
        bufp->chgCData(oldp+34,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data),6);
        bufp->chgCData(oldp+35,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data),6);
        bufp->chgBit(oldp+36,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data));
        bufp->chgBit(oldp+37,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data));
        bufp->chgSData(oldp+38,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_op),16);
        bufp->chgSData(oldp+39,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__dout_op),16);
        bufp->chgCData(oldp+40,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op),5);
        bufp->chgCData(oldp+41,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op),5);
        bufp->chgBit(oldp+42,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op));
        bufp->chgBit(oldp+43,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op));
        bufp->chgBit(oldp+44,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_start));
        bufp->chgBit(oldp+45,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish));
        bufp->chgCData(oldp+46,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_reg),8);
        bufp->chgSData(oldp+47,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_in),16);
        bufp->chgSData(oldp+48,(((0xc000U & (((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                               ? ((1U 
                                                   & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg))
                                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp))
                                               : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                  >> 0xeU)) 
                                             << 0xeU)) 
                                 | ((((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                                       ? 0U : (3U & 
                                               ((8U 
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
                                     << 0xcU) | (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_2_2) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2) 
                                                     << 8U) 
                                                    | (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_1_1) 
                                                        << 6U) 
                                                       | (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_0_0) 
                                                              << 2U) 
                                                             | (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))))))))),16);
        bufp->chgBit(oldp+49,((IData)((0xfU == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass)))));
        bufp->chgCData(oldp+50,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_din),8);
        bufp->chgBit(oldp+51,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__first_pass));
        bufp->chgBit(oldp+52,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_data_en));
        bufp->chgBit(oldp+53,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_en));
        bufp->chgCData(oldp+54,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end),5);
        bufp->chgCData(oldp+55,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end),6);
        bufp->chgCData(oldp+56,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start),6);
        bufp->chgCData(oldp+57,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end),6);
        bufp->chgCData(oldp+58,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end),6);
        bufp->chgBit(oldp+59,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_tmp));
        bufp->chgBit(oldp+60,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running));
        bufp->chgBit(oldp+61,(((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
                               == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row))));
        bufp->chgBit(oldp+62,((((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
                                > ((IData)(1U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row))) 
                               & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
                                  <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end)))));
        bufp->chgBit(oldp+63,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_del));
        bufp->chgBit(oldp+64,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_del));
        bufp->chgBit(oldp+65,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_del));
        bufp->chgCData(oldp+66,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del),8);
        bufp->chgSData(oldp+67,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del),16);
        bufp->chgCData(oldp+68,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup),4);
        bufp->chgCData(oldp+69,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_tmp),3);
        bufp->chgCData(oldp+70,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row),3);
        bufp->chgCData(oldp+71,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_tmp),3);
        bufp->chgCData(oldp+72,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in),3);
        bufp->chgCData(oldp+73,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_out),4);
        bufp->chgCData(oldp+74,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row),4);
        bufp->chgBit(oldp+75,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                     >> 1U))));
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                     >> 2U))));
        bufp->chgBit(oldp+77,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                     >> 3U))));
        bufp->chgCData(oldp+78,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del))),2);
        bufp->chgCData(oldp+79,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                       >> 2U))),2);
        bufp->chgCData(oldp+80,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0),2);
        bufp->chgCData(oldp+81,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_0_0),2);
        bufp->chgBit(oldp+82,((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))));
        bufp->chgCData(oldp+83,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del))),2);
        bufp->chgCData(oldp+84,((3U & ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                                        ? (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del))
                                        : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_del)
                                            ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)
                                            : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_del)
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                                    ? 0U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                                     ? 
                                                    (3U 
                                                     & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)
                                                      : 
                                                     ((2U 
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
                                                        : 0U)))))))))),2);
        bufp->chgCData(oldp+85,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp))),2);
        bufp->chgBit(oldp+86,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp) 
                                     >> 2U))));
        bufp->chgCData(oldp+87,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                       >> 2U))),2);
        bufp->chgCData(oldp+88,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_0_1),2);
        bufp->chgCData(oldp+89,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                       >> 4U))),2);
        bufp->chgCData(oldp+90,((3U & ((0U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                        ? (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                                 >> 4U))
                                        : ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                            ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg)
                                            : ((2U 
                                                == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out_reduced)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg)
                                                    : 0U)))))),2);
        bufp->chgCData(oldp+91,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                       >> 6U))),2);
        bufp->chgCData(oldp+92,((3U & ((0U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                        ? (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                                 >> 6U))
                                        : ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                            ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg)
                                            : ((2U 
                                                == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out_reduced)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg)
                                                    : 0U)))))),2);
        bufp->chgBit(oldp+93,((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))));
        bufp->chgCData(oldp+94,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                       >> 4U))),2);
        bufp->chgCData(oldp+95,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                       >> 6U))),2);
        bufp->chgCData(oldp+96,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0),2);
        bufp->chgCData(oldp+97,((3U & ((0U == (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 4U)))
                                        ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0)
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 4U)))
                                            ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg)
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out_reduced)
                                                : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg)
                                                    : 0U)))))),2);
        bufp->chgCData(oldp+98,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1),2);
        bufp->chgCData(oldp+99,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_1_1),2);
        bufp->chgBit(oldp+100,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass) 
                                      >> 1U))));
        bufp->chgCData(oldp+101,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1),2);
        bufp->chgCData(oldp+102,((3U & ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1)
                                         : ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg)
                                             : ((1U 
                                                 & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                                  ? 0U
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                       >> 4U)))
                                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg)
                                                    : 
                                                   ((2U 
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
                                                      : 0U)))))))))),2);
        bufp->chgCData(oldp+103,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp))),2);
        bufp->chgBit(oldp+104,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp) 
                                      >> 2U))));
        bufp->chgCData(oldp+105,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2),2);
        bufp->chgCData(oldp+106,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_1_2),2);
        bufp->chgCData(oldp+107,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3),2);
        bufp->chgCData(oldp+108,((3U & ((0U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3)
                                         : ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg)
                                             : ((2U 
                                                 == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                                 ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out_reduced)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg)
                                                  : 0U)))))),2);
        bufp->chgBit(oldp+109,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row) 
                                      >> 1U))));
        bufp->chgCData(oldp+110,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                        >> 8U))),2);
        bufp->chgCData(oldp+111,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                        >> 0xaU))),2);
        bufp->chgCData(oldp+112,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0),2);
        bufp->chgCData(oldp+113,((3U & ((0U == (3U 
                                                & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                   >> 8U)))
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0)
                                         : ((1U == 
                                             (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 8U)))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg)
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                     >> 8U)))
                                                 ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out_reduced)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 8U)))
                                                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg)
                                                  : 0U)))))),2);
        bufp->chgCData(oldp+114,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1),2);
        bufp->chgCData(oldp+115,((3U & ((0U == (3U 
                                                & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                   >> 8U)))
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1)
                                         : ((1U == 
                                             (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 8U)))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg)
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                     >> 8U)))
                                                 ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out_reduced)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 8U)))
                                                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg)
                                                  : 0U)))))),2);
        bufp->chgCData(oldp+116,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2),2);
        bufp->chgCData(oldp+117,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_2_2),2);
        bufp->chgBit(oldp+118,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass) 
                                      >> 2U))));
        bufp->chgCData(oldp+119,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2),2);
        bufp->chgCData(oldp+120,((3U & ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2)
                                         : ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg)
                                             : ((2U 
                                                 & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                                  ? 0U
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                       >> 8U)))
                                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                        >> 8U)))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg)
                                                    : 
                                                   ((2U 
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
                                                      : 0U)))))))))),2);
        bufp->chgCData(oldp+121,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp))),2);
        bufp->chgBit(oldp+122,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp) 
                                      >> 2U))));
        bufp->chgCData(oldp+123,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3),2);
        bufp->chgCData(oldp+124,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_2_3),2);
        bufp->chgBit(oldp+125,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row) 
                                      >> 2U))));
        bufp->chgCData(oldp+126,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                        >> 0xcU))),2);
        bufp->chgCData(oldp+127,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                        >> 0xeU))),2);
        bufp->chgCData(oldp+128,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0),2);
        bufp->chgCData(oldp+129,((3U & ((0U == (3U 
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
                                                  : 0U)))))),2);
        bufp->chgCData(oldp+130,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1),2);
        bufp->chgCData(oldp+131,((3U & ((0U == (3U 
                                                & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                   >> 0xcU)))
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1)
                                         : ((1U == 
                                             (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 0xcU)))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg)
                                             : ((2U 
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
                                                  : 0U)))))),2);
        bufp->chgCData(oldp+132,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2),2);
        bufp->chgCData(oldp+133,((3U & ((0U == (3U 
                                                & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                   >> 0xcU)))
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2)
                                         : ((1U == 
                                             (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 0xcU)))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg)
                                             : ((2U 
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
                                                  : 0U)))))),2);
        bufp->chgCData(oldp+134,(((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                                   ? 0U : (3U & ((8U 
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
                                                  >> 0xcU))))),2);
        bufp->chgCData(oldp+135,((3U & ((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                         ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                                             : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp))
                                         : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                            >> 0xeU)))),2);
        bufp->chgBit(oldp+136,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass) 
                                      >> 3U))));
        bufp->chgCData(oldp+137,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3),2);
        bufp->chgCData(oldp+138,((3U & ((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                                         : ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg)
                                             : ((4U 
                                                 & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                                  ? 0U
                                                  : 
                                                 ((0U 
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
                                                      : 0U)))))))))),2);
        bufp->chgCData(oldp+139,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp))),2);
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp) 
                                      >> 2U))));
        bufp->chgBit(oldp+141,((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))));
        bufp->chgCData(oldp+142,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg),2);
        bufp->chgCData(oldp+143,((3U & ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                         ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)
                                             : (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_del) 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp) 
                                                    >> 2U))
                                                 ? 1U
                                                 : 0U))
                                         : ((1U == 
                                             (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                             ? (3U 
                                                & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del))
                                             : ((3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                                 ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out_reduced)
                                                 : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)))))),2);
        bufp->chgCData(oldp+144,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out),3);
        bufp->chgCData(oldp+145,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+146,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+147,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+148,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+149,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+150,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+151,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+152,((3U & ((3U == (3U 
                                                & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del)
                                         : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)))),2);
        bufp->chgCData(oldp+153,(((3U == (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                   ? 0U : (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del)))),2);
        bufp->chgCData(oldp+154,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg),2);
        bufp->chgCData(oldp+155,((3U & ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                         ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                            >> 2U) : 
                                        ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out_reduced)
                                          : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg))))),2);
        bufp->chgCData(oldp+156,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out),3);
        bufp->chgCData(oldp+157,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+158,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+159,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+160,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+161,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+162,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+163,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+164,((3U & ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                         ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                            >> 2U) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg)))),2);
        bufp->chgCData(oldp+165,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                   ? 0U : (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                                 >> 2U)))),2);
        bufp->chgCData(oldp+166,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg),2);
        bufp->chgCData(oldp+167,((3U & ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                         ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                            >> 4U) : 
                                        ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out_reduced)
                                          : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg))))),2);
        bufp->chgCData(oldp+168,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out),3);
        bufp->chgCData(oldp+169,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+170,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+171,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+172,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+173,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+174,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+175,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+176,((3U & ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                         ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                            >> 4U) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg)))),2);
        bufp->chgCData(oldp+177,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                   ? 0U : (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                                 >> 4U)))),2);
        bufp->chgCData(oldp+178,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg),2);
        bufp->chgCData(oldp+179,((3U & ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                         ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                            >> 6U) : 
                                        ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out_reduced)
                                          : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg))))),2);
        bufp->chgCData(oldp+180,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out),3);
        bufp->chgCData(oldp+181,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+182,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+183,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+184,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+185,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+186,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+187,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+188,((3U & ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                         ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                            >> 6U) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg)))),2);
        bufp->chgCData(oldp+189,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                   ? 0U : (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                                 >> 6U)))),2);
        bufp->chgCData(oldp+190,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg),2);
        bufp->chgCData(oldp+191,(((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 4U)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0)
                                   : ((3U == (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 4U)))
                                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out_reduced)
                                       : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg)))),2);
        bufp->chgCData(oldp+192,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out),3);
        bufp->chgCData(oldp+193,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+194,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+195,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+196,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+197,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+198,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+199,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+200,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 4U)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0)
                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg))),2);
        bufp->chgCData(oldp+201,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 4U)))
                                   ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0))),2);
        bufp->chgBit(oldp+202,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup) 
                                      >> 1U))));
        bufp->chgBit(oldp+203,((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))));
        bufp->chgCData(oldp+204,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg),2);
        bufp->chgCData(oldp+205,((3U & ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                         ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg)
                                             : ((IData)(
                                                        (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                                          >> 1U) 
                                                         & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp) 
                                                            >> 2U)))
                                                 ? 1U
                                                 : 0U))
                                         : ((1U == 
                                             (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 4U)))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1)
                                             : ((3U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                     >> 4U)))
                                                 ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out_reduced)
                                                 : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg)))))),2);
        bufp->chgCData(oldp+206,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out),3);
        bufp->chgCData(oldp+207,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+208,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+209,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+210,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+211,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+212,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+213,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+214,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 4U)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1)
                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg))),2);
        bufp->chgCData(oldp+215,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 4U)))
                                   ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1))),2);
        bufp->chgCData(oldp+216,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg),2);
        bufp->chgCData(oldp+217,(((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2)
                                   : ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out_reduced)
                                       : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg)))),2);
        bufp->chgCData(oldp+218,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out),3);
        bufp->chgCData(oldp+219,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+220,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+221,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+222,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+223,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+224,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+225,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+226,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2)
                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg))),2);
        bufp->chgCData(oldp+227,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                   ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2))),2);
        bufp->chgCData(oldp+228,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg),2);
        bufp->chgCData(oldp+229,(((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3)
                                   : ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out_reduced)
                                       : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg)))),2);
        bufp->chgCData(oldp+230,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out),3);
        bufp->chgCData(oldp+231,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+232,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+233,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+234,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+235,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+236,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+237,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+238,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3)
                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg))),2);
        bufp->chgCData(oldp+239,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                   ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3))),2);
        bufp->chgCData(oldp+240,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg),2);
        bufp->chgCData(oldp+241,(((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 8U)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0)
                                   : ((3U == (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 8U)))
                                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out_reduced)
                                       : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg)))),2);
        bufp->chgCData(oldp+242,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out),3);
        bufp->chgCData(oldp+243,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+244,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+245,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+246,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+247,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+248,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+249,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+250,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 8U)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0)
                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg))),2);
        bufp->chgCData(oldp+251,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 8U)))
                                   ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0))),2);
        bufp->chgCData(oldp+252,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg),2);
        bufp->chgCData(oldp+253,(((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 8U)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1)
                                   : ((3U == (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 8U)))
                                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out_reduced)
                                       : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg)))),2);
        bufp->chgCData(oldp+254,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out),3);
        bufp->chgCData(oldp+255,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+256,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+257,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+258,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+259,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+260,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+261,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+262,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 8U)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1)
                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg))),2);
        bufp->chgCData(oldp+263,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 8U)))
                                   ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1))),2);
        bufp->chgBit(oldp+264,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup) 
                                      >> 2U))));
        bufp->chgBit(oldp+265,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in) 
                                      >> 1U))));
        bufp->chgCData(oldp+266,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg),2);
        bufp->chgCData(oldp+267,((3U & ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                         ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg)
                                             : ((4U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                                    & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp)))
                                                 ? 1U
                                                 : 0U))
                                         : ((1U == 
                                             (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 8U)))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2)
                                             : ((3U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                     >> 8U)))
                                                 ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out_reduced)
                                                 : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg)))))),2);
        bufp->chgCData(oldp+268,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out),3);
        bufp->chgCData(oldp+269,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+270,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+271,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+272,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+273,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+274,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+275,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+276,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 8U)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2)
                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg))),2);
        bufp->chgCData(oldp+277,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 8U)))
                                   ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2))),2);
        bufp->chgCData(oldp+278,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg),2);
        bufp->chgCData(oldp+279,(((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3)
                                   : ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out_reduced)
                                       : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg)))),2);
        bufp->chgCData(oldp+280,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out),3);
        bufp->chgCData(oldp+281,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+282,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+283,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+284,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+285,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+286,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+287,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+288,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3)
                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg))),2);
        bufp->chgCData(oldp+289,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                                   ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3))),2);
        bufp->chgCData(oldp+290,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg),2);
        bufp->chgCData(oldp+291,(((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0)
                                   : ((3U == (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 0xcU)))
                                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out_reduced)
                                       : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg)))),2);
        bufp->chgCData(oldp+292,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out),3);
        bufp->chgCData(oldp+293,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+294,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+295,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+296,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+297,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+298,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+299,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+300,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0)
                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg))),2);
        bufp->chgCData(oldp+301,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                   ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0))),2);
        bufp->chgCData(oldp+302,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg),2);
        bufp->chgCData(oldp+303,(((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1)
                                   : ((3U == (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 0xcU)))
                                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out_reduced)
                                       : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg)))),2);
        bufp->chgCData(oldp+304,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out),3);
        bufp->chgCData(oldp+305,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+306,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+307,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+308,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+309,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+310,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+311,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+312,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1)
                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg))),2);
        bufp->chgCData(oldp+313,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                   ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1))),2);
        bufp->chgCData(oldp+314,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg),2);
        bufp->chgCData(oldp+315,(((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2)
                                   : ((3U == (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 0xcU)))
                                       ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out_reduced)
                                       : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg)))),2);
        bufp->chgCData(oldp+316,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out),3);
        bufp->chgCData(oldp+317,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+318,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+319,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+320,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+321,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+322,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+323,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+324,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2)
                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg))),2);
        bufp->chgCData(oldp+325,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                   ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2))),2);
        bufp->chgBit(oldp+326,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup) 
                                      >> 3U))));
        bufp->chgBit(oldp+327,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in) 
                                      >> 2U))));
        bufp->chgCData(oldp+328,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg),2);
        bufp->chgCData(oldp+329,((3U & ((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                         ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg)
                                             : ((IData)(
                                                        (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                                          >> 3U) 
                                                         & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp) 
                                                            >> 2U)))
                                                 ? 1U
                                                 : 0U))
                                         : ((1U == 
                                             (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 0xcU)))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                                             : ((3U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                     >> 0xcU)))
                                                 ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out_reduced)
                                                 : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg)))))),2);
        bufp->chgCData(oldp+330,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out),3);
        bufp->chgCData(oldp+331,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out_reduced),2);
        bufp->chgCData(oldp+332,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out), 2U))),3);
        bufp->chgCData(oldp+333,((7U & ((IData)(5U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out), 2U))))),3);
        bufp->chgCData(oldp+334,((7U & VL_SHIFTR_III(3,3,32, 
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         * 
                                                         (7U 
                                                          & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out), 2U)))), 2U))),3);
        bufp->chgCData(oldp+335,((7U & ((IData)(3U) 
                                        * (7U & VL_SHIFTR_III(3,3,32, 
                                                              (7U 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out), 2U)))), 2U))))),3);
        bufp->chgCData(oldp+336,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__gfe_barret_mad_inst__DOT__result),3);
        bufp->chgCData(oldp+337,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__gfe_barret_mad_inst__DOT__result) 
                                        - (IData)(3U)))),3);
        bufp->chgCData(oldp+338,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                   ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg))),2);
        bufp->chgCData(oldp+339,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                   ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3))),2);
        bufp->chgCData(oldp+340,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_in_0__DOT__level[0]),8);
        bufp->chgCData(oldp+341,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_out_0__DOT__level[0]),8);
        bufp->chgCData(oldp+342,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_din))),2);
        bufp->chgCData(oldp+343,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp),3);
        bufp->chgCData(oldp+344,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp),3);
        bufp->chgCData(oldp+345,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp),3);
        bufp->chgCData(oldp+346,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp),3);
        bufp->chgCData(oldp+347,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[0]),8);
        bufp->chgCData(oldp+348,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[1]),8);
        bufp->chgCData(oldp+349,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[2]),8);
        bufp->chgCData(oldp+350,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[3]),8);
        bufp->chgCData(oldp+351,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[4]),8);
        bufp->chgCData(oldp+352,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[5]),8);
        bufp->chgCData(oldp+353,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[6]),8);
        bufp->chgCData(oldp+354,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[7]),8);
        bufp->chgCData(oldp+355,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[8]),8);
        bufp->chgCData(oldp+356,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[9]),8);
        bufp->chgCData(oldp+357,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[10]),8);
        bufp->chgCData(oldp+358,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[11]),8);
        bufp->chgCData(oldp+359,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[12]),8);
        bufp->chgCData(oldp+360,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[13]),8);
        bufp->chgCData(oldp+361,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[14]),8);
        bufp->chgCData(oldp+362,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[15]),8);
        bufp->chgCData(oldp+363,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[16]),8);
        bufp->chgCData(oldp+364,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[17]),8);
        bufp->chgCData(oldp+365,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[18]),8);
        bufp->chgCData(oldp+366,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[19]),8);
        bufp->chgCData(oldp+367,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[20]),8);
        bufp->chgCData(oldp+368,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[21]),8);
        bufp->chgCData(oldp+369,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[22]),8);
        bufp->chgCData(oldp+370,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[23]),8);
        bufp->chgCData(oldp+371,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[24]),8);
        bufp->chgCData(oldp+372,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[25]),8);
        bufp->chgCData(oldp+373,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[26]),8);
        bufp->chgCData(oldp+374,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[27]),8);
        bufp->chgCData(oldp+375,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[28]),8);
        bufp->chgCData(oldp+376,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[29]),8);
        bufp->chgCData(oldp+377,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[30]),8);
        bufp->chgCData(oldp+378,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[31]),8);
        bufp->chgSData(oldp+379,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[0]),16);
        bufp->chgSData(oldp+380,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[1]),16);
        bufp->chgSData(oldp+381,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[2]),16);
        bufp->chgSData(oldp+382,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[3]),16);
        bufp->chgSData(oldp+383,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[4]),16);
        bufp->chgSData(oldp+384,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[5]),16);
        bufp->chgSData(oldp+385,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[6]),16);
        bufp->chgSData(oldp+386,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[7]),16);
        bufp->chgSData(oldp+387,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[8]),16);
        bufp->chgSData(oldp+388,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[9]),16);
        bufp->chgSData(oldp+389,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[10]),16);
        bufp->chgSData(oldp+390,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[11]),16);
        bufp->chgSData(oldp+391,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[12]),16);
        bufp->chgSData(oldp+392,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[13]),16);
        bufp->chgSData(oldp+393,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[14]),16);
        bufp->chgSData(oldp+394,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[15]),16);
        bufp->chgSData(oldp+395,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[16]),16);
    }
    bufp->chgCData(oldp+396,(vlSelf->ui_in),8);
    bufp->chgCData(oldp+397,(vlSelf->uo_out),8);
    bufp->chgCData(oldp+398,(vlSelf->uio_in),8);
    bufp->chgCData(oldp+399,(vlSelf->uio_out),8);
    bufp->chgCData(oldp+400,(vlSelf->uio_oe),8);
    bufp->chgBit(oldp+401,(vlSelf->ena));
    bufp->chgBit(oldp+402,(vlSelf->clk));
    bufp->chgBit(oldp+403,(vlSelf->rst_n));
    bufp->chgBit(oldp+404,(vlSelf->tt_um_example__DOT__rst));
    bufp->chgBit(oldp+405,((1U & (IData)(vlSelf->ui_in))));
    bufp->chgBit(oldp+406,((1U & ((IData)(vlSelf->ui_in) 
                                  >> 1U))));
    bufp->chgBit(oldp+407,((1U & ((IData)(vlSelf->uio_in) 
                                  >> 6U))));
    bufp->chgBit(oldp+408,((1U & ((IData)(vlSelf->ui_in) 
                                  >> 3U))));
    bufp->chgCData(oldp+409,(((2U & (IData)(vlSelf->ui_in))
                               ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_data))),8);
    bufp->chgCData(oldp+410,(((1U & (IData)(vlSelf->ui_in))
                               ? 0U : (0x1fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data)))),5);
    bufp->chgBit(oldp+411,((1U & ((1U & (IData)(vlSelf->ui_in))
                                   ? (IData)(vlSelf->ui_in)
                                   : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data)))));
    bufp->chgCData(oldp+412,(((2U & (IData)(vlSelf->ui_in))
                               ? 0U : (0x1fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data)))),5);
    bufp->chgBit(oldp+413,((1U & ((2U & (IData)(vlSelf->ui_in))
                                   ? ((IData)(vlSelf->ui_in) 
                                      >> 1U) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data)))));
}

void Vproject___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root__trace_cleanup\n"); );
    // Init
    Vproject___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproject___024root*>(voidSelf);
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
