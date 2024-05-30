// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vproject.h for the primary calling header

#ifndef VERILATED_VPROJECT___024ROOT_H_
#define VERILATED_VPROJECT___024ROOT_H_  // guard

#include "verilated.h"


class Vproject__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vproject___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(ui_in,7,0);
        VL_OUT8(uo_out,7,0);
        VL_IN8(uio_in,7,0);
        VL_OUT8(uio_out,7,0);
        VL_OUT8(uio_oe,7,0);
        VL_IN8(ena,0,0);
        VL_IN8(rst_n,0,0);
        CData/*0:0*/ tt_um_example__DOT__rst;
        CData/*0:0*/ tt_um_example__DOT__start;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_counter;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__start_phase;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__last_phase;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__done_reg;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__fail_reg;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__running;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter_comp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__col_block;
        CData/*5:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__start_step;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__last_step;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__done_reg;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running;
        CData/*5:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row;
        CData/*5:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_row;
        CData/*5:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_counter;
        CData/*5:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter;
        CData/*5:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_data;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_comp;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__have_col_block_L;
        CData/*3:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass;
        CData/*7:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_data;
        CData/*7:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__dout_data;
        CData/*5:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data;
        CData/*5:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data;
        CData/*4:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op;
        CData/*4:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_start;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish;
        CData/*7:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_din;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__first_pass;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__fail_reg;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_data_en;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_en;
        CData/*4:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end;
        CData/*5:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end;
        CData/*5:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start;
        CData/*5:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end;
        CData/*5:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_reg;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_tmp;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_del;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_del;
        CData/*0:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_del;
        CData/*7:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del;
        CData/*3:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup;
    };
    struct {
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in;
        CData/*3:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_out;
        CData/*3:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_0_0;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_0_1;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_1_1;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_1_2;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_2_2;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_2_3;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3;
        CData/*7:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out_reduced;
    };
    struct {
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_tmp;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out;
        CData/*1:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out_reduced;
        CData/*2:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__gfe_barret_mad_inst__DOT__result;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_op;
        SData/*15:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__dout_op;
        SData/*15:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_in;
        SData/*15:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT____Vlvbound_hb64fd797__0;
        SData/*15:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del;
        IData/*31:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__file;
        IData/*31:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__scan;
        IData/*31:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__i;
        IData/*31:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__file;
        IData/*31:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__scan;
        IData/*31:0*/ tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__i;
        IData/*31:0*/ __VactIterCount;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 32> tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem;
        VlUnpacked<SData/*15:0*/, 17> tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem;
        VlUnpacked<CData/*7:0*/, 1> tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_in_0__DOT__level_buf;
        VlUnpacked<CData/*7:0*/, 1> tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_in_0__DOT__level;
        VlUnpacked<CData/*2:0*/, 3> tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__mem;
        VlUnpacked<CData/*2:0*/, 3> tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__mem;
        VlUnpacked<CData/*7:0*/, 1> tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_out_0__DOT__level_buf;
        VlUnpacked<CData/*7:0*/, 1> tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_out_0__DOT__level;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vproject__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vproject___024root(Vproject__Syms* symsp, const char* v__name);
    ~Vproject___024root();
    VL_UNCOPYABLE(Vproject___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
