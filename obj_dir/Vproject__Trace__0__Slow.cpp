// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vproject__Syms.h"


VL_ATTR_COLD void Vproject___024root__trace_init_sub__TOP__0(Vproject___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+397,0,"ui_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+398,0,"uo_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+399,0,"uio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+400,0,"uio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+401,0,"uio_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+402,0,"ena",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tt_um_example", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+397,0,"ui_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+398,0,"uo_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+399,0,"uio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+400,0,"uio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+401,0,"uio_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+402,0,"ena",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+415,0,"gen_left_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+415,0,"gen_right_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+7,0,"fail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"success",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+407,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+419,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+420,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+422,0,"L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+415,0,"gen_left_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+415,0,"gen_right_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+408,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"fail",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"success",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"start_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+407,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+419,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"phase_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+11,0,"start_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"phase_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"last_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"done_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"phase_fail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"fail_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"running",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("phase_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+420,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+422,0,"L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"last_phase",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"start_block",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+12,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"fail",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+407,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+419,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"step_counter_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"step_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"col_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,0,"first_pass_rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+20,0,"start_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"step_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"last_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"functionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"done_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"running",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("step_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+420,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+422,0,"L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+420,0,"BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"last_phase",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"first_pass_rows",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+18,0,"col_block",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+23,0,"functionA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"fail",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+407,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+419,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+424,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"start_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+26,0,"end_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+27,0,"end_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+28,0,"row_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+29,0,"col_block_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+30,0,"start_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"start_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"have_col_block_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"din_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"dout_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"rd_addr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+36,0,"wr_addr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+37,0,"rd_en_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"wr_en_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"din_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+40,0,"dout_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+41,0,"rd_addr_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"wr_addr_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"rd_en_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"wr_en_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"SA_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"SA_finish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"SA_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"SA_op_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"SA_op_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+50,0,"SA_r_A_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"SA_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+52,0,"first_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"fail_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"SA_data_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"SA_op_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"rd_en_op_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"wr_en_op_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+57,0,"wr_en_data_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+58,0,"wr_en_data_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+59,0,"SA_finish_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+21,0,"done_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"done_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"running",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"test",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"tester",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("comb_SA_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+23,0,"functionA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"first_pass",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"pass",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"finish",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+51,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+50,0,"r_A_and",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"first_pass_del",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"start_del",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"finish_del",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"data_del",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+68,0,"op_in_del",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,0,"functionA_dup",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+70,0,"start_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,1);
    tracep->declBus(c+71,0,"start_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,1);
    tracep->declBus(c+72,0,"finish_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,1);
    tracep->declBus(c+425,0,"finish_tmp_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,1);
    tracep->declBus(c+73,0,"finish_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,1);
    tracep->declBus(c+74,0,"finish_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+426,0,"first_pass_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"first_pass_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+64,0,"first_pass_row_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"first_pass_row_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"first_pass_row_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"first_pass_row_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"data_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+65,0,"start_in_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"op_in_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"fac_in_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"start_out_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"op_out_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_out_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+83,0,"r_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"data_in_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"data_out_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+86,0,"inv_out_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+87,0,"inv_en_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"start_in_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"op_in_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_in_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"start_out_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"op_out_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_out_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+88,0,"data_in_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+89,0,"data_out_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"start_in_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"op_in_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_in_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"start_out_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"op_out_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_out_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"data_in_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+91,0,"data_out_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"start_in_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"op_in_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_in_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"start_out_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"op_out_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_out_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+92,0,"data_in_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"data_out_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_in_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"op_in_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"fac_in_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_out_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"op_out_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"fac_out_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+97,0,"data_in_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+98,0,"data_out_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_in_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"op_in_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"fac_in_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_out_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"op_out_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"fac_out_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+101,0,"r_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"data_in_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+103,0,"data_out_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+104,0,"inv_out_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+105,0,"inv_en_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"start_in_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"op_in_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"fac_in_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_out_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"op_out_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"fac_out_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+106,0,"data_in_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+107,0,"data_out_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_in_1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"op_in_1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"fac_in_1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_out_1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"op_out_1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"fac_out_1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+108,0,"data_in_1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+109,0,"data_out_1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_in_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"op_in_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"fac_in_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_out_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"op_out_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"fac_out_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+113,0,"data_in_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"data_out_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_in_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"op_in_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"fac_in_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_out_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"op_out_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"fac_out_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+115,0,"data_in_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+116,0,"data_out_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_in_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"op_in_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"fac_in_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_out_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"op_out_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+118,0,"fac_out_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+119,0,"r_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"data_in_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+121,0,"data_out_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+122,0,"inv_out_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+123,0,"inv_en_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"start_in_2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"op_in_2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+118,0,"fac_in_2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_out_2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"op_out_2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+118,0,"fac_out_2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+124,0,"data_in_2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+125,0,"data_out_2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_in_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"op_in_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_in_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_out_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"op_out_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_out_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+129,0,"data_in_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"data_out_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_in_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"op_in_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_in_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_out_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"op_out_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_out_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+131,0,"data_in_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+132,0,"data_out_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_in_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"op_in_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_in_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_out_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"op_out_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_out_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+133,0,"data_in_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+134,0,"data_out_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_in_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"op_in_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_in_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_out_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"op_out_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,0,"fac_out_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+137,0,"r_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"data_in_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+139,0,"data_out_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+140,0,"inv_out_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+141,0,"inv_en_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"data_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("P_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,0,"functionA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"first_pass",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"pass",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+86,0,"inv_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+87,0,"inv_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"finish_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"finish_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+83,0,"r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+144,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+145,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+146,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+86,0,"inv_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+145,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+146,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+147,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+148,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+149,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+150,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+152,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+154,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+145,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+155,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+156,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+157,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+158,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+157,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+158,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+159,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+160,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+161,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+162,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+163,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+164,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+166,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+157,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_0_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+167,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+168,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+169,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+170,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+169,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+170,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+171,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+172,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+173,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+174,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+175,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+176,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+178,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+169,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_0_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+179,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+180,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+181,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+182,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+181,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+182,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+183,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+184,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+185,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+186,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+187,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+188,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+190,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+181,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+95,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+191,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+192,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+193,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+194,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+193,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+194,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+195,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+196,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+197,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+198,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+199,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+200,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+202,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+193,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+203,0,"functionA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"first_pass",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"pass",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+104,0,"inv_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+105,0,"inv_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"finish_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"finish_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+101,0,"r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+206,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+207,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+208,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+104,0,"inv_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+207,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+208,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+209,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+210,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+211,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+212,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+213,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+214,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+216,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+207,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_1_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+217,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+218,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+219,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+220,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+220,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+221,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+222,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+223,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+224,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+225,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+226,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+228,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+219,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_1_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+229,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+230,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+231,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+232,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+231,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+232,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+233,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+234,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+235,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+236,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+237,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+238,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+239,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+240,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+231,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+111,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+241,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+242,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+243,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+244,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+243,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+244,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+245,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+246,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+247,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+248,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+249,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+250,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+252,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+243,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+111,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+253,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+254,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+255,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+256,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+255,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+256,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+257,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+258,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+259,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+260,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+261,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+262,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+264,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+255,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+265,0,"functionA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"first_pass",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"pass",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+122,0,"inv_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+123,0,"inv_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"finish_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"finish_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+117,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+118,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+119,0,"r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+267,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+268,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+269,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+270,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+122,0,"inv_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+269,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+270,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+271,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+272,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+273,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+274,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+275,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+276,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+278,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+269,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_2_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+117,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+118,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+118,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+279,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+280,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+281,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+282,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+281,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+282,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+283,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+284,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+285,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+286,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+287,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+288,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+289,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+118,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+290,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+281,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_3_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+127,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+291,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+292,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+293,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+294,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+293,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+294,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+295,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+296,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+297,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+298,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+299,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+300,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+302,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+293,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_3_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+127,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+305,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+306,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+305,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+306,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+307,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+308,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+309,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+310,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+311,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+312,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+314,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+305,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_3_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+127,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+315,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+316,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+317,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+318,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+317,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+318,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+319,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+320,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+321,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+322,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+323,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+324,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+326,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+317,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("P_3_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+327,0,"functionA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"first_pass",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"pass",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+140,0,"inv_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+141,0,"inv_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"start_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"finish_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"finish_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+135,0,"op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"fac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,0,"fac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"start_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+137,0,"r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+329,0,"r_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+330,0,"r_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+331,0,"mad_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+332,0,"mad_out_reduced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+140,0,"inv_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gfe_barret_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+331,0,"din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+332,0,"dout_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"mu_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+333,0,"q_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+334,0,"q_hat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+335,0,"t_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+336,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+337,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+338,0,"pre_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_mad_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+339,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+340,0,"dinC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+331,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("del_inst_in_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+422,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("level_buf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+430+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+1), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("level", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+341+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+424,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("del_inst_out_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+422,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("level_buf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+431+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+1), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("level", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+342+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+424,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_inv_inst_1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"din_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+104,0,"dout_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+105,0,"dout_en_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"din_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+86,0,"dout_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+87,0,"dout_en_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+344,0,"dout_A_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+345,0,"dout_B_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gfe_inv_inst_3_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"din_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+140,0,"dout_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+141,0,"dout_en_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"din_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+122,0,"dout_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+123,0,"dout_en_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+346,0,"dout_A_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+347,0,"dout_B_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mem_data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+422,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+432,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"FILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+429,0,"INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+411,0,"rdaddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+412,0,"rden",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+413,0,"wraddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+414,0,"wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+348+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+433,0,"file",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+434,0,"scan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+435,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_op", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+423,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"FILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+429,0,"INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+403,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+41,0,"rdaddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"rden",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"wraddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+44,0,"wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+380+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+437,0,"file",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+438,0,"scan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+439,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vproject___024root__trace_init_top(Vproject___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root__trace_init_top\n"); );
    // Body
    Vproject___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vproject___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vproject___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vproject___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vproject___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vproject___024root__trace_register(Vproject___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vproject___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vproject___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vproject___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vproject___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vproject___024root__trace_const_0_sub_0(Vproject___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vproject___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root__trace_const_0\n"); );
    // Init
    Vproject___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproject___024root*>(voidSelf);
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vproject___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vproject___024root__trace_const_0_sub_0(Vproject___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+415,(0U),2);
    bufp->fullBit(oldp+416,(vlSelf->tt_um_example__DOT__start));
    bufp->fullBit(oldp+417,(0U));
    bufp->fullCData(oldp+418,(0U),5);
    bufp->fullCData(oldp+419,(0U),8);
    bufp->fullIData(oldp+420,(4U),32);
    bufp->fullIData(oldp+421,(3U),32);
    bufp->fullIData(oldp+422,(8U),32);
    bufp->fullIData(oldp+423,(0x10U),32);
    bufp->fullIData(oldp+424,(1U),32);
    bufp->fullCData(oldp+425,(0U),3);
    bufp->fullCData(oldp+426,(0U),4);
    bufp->fullIData(oldp+427,(2U),32);
    bufp->fullCData(oldp+428,(5U),3);
    bufp->fullIData(oldp+429,(0U),32);
    bufp->fullCData(oldp+430,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_in_0__DOT__level_buf[0]),8);
    bufp->fullCData(oldp+431,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_out_0__DOT__level_buf[0]),8);
    bufp->fullIData(oldp+432,(0x20U),32);
    bufp->fullIData(oldp+433,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__file),32);
    bufp->fullIData(oldp+434,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__scan),32);
    bufp->fullIData(oldp+435,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__i),32);
    bufp->fullIData(oldp+436,(0x11U),32);
    bufp->fullIData(oldp+437,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__file),32);
    bufp->fullIData(oldp+438,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__scan),32);
    bufp->fullIData(oldp+439,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__i),32);
}

VL_ATTR_COLD void Vproject___024root__trace_full_0_sub_0(Vproject___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vproject___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root__trace_full_0\n"); );
    // Init
    Vproject___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproject___024root*>(voidSelf);
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vproject___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vproject___024root__trace_full_0_sub_0(Vproject___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__mem[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__mem[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__mem[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__mem[0]),3);
    bufp->fullCData(oldp+5,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__mem[1]),3);
    bufp->fullCData(oldp+6,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__mem[2]),3);
    bufp->fullBit(oldp+7,(vlSelf->tt_um_example__DOT__DUT__DOT__fail_reg));
    bufp->fullBit(oldp+8,(vlSelf->tt_um_example__DOT__DUT__DOT__done_reg));
    bufp->fullCData(oldp+9,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__dout_data),8);
    bufp->fullCData(oldp+10,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_counter),3);
    bufp->fullBit(oldp+11,(vlSelf->tt_um_example__DOT__DUT__DOT__start_phase));
    bufp->fullBit(oldp+12,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__done_reg));
    bufp->fullBit(oldp+13,(vlSelf->tt_um_example__DOT__DUT__DOT__last_phase));
    bufp->fullBit(oldp+14,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__fail_reg));
    bufp->fullBit(oldp+15,(vlSelf->tt_um_example__DOT__DUT__DOT__running));
    bufp->fullCData(oldp+16,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter_comp),3);
    bufp->fullCData(oldp+17,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_counter),3);
    bufp->fullCData(oldp+18,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__col_block),3);
    bufp->fullCData(oldp+19,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__first_pass_rows),6);
    bufp->fullBit(oldp+20,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__start_step));
    bufp->fullBit(oldp+21,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_reg));
    bufp->fullBit(oldp+22,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__last_step));
    bufp->fullBit(oldp+23,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__functionA));
    bufp->fullBit(oldp+24,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__running));
    bufp->fullCData(oldp+25,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row),6);
    bufp->fullCData(oldp+26,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_row),6);
    bufp->fullCData(oldp+27,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__end_counter),6);
    bufp->fullCData(oldp+28,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter),6);
    bufp->fullCData(oldp+29,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__col_block_L),6);
    bufp->fullBit(oldp+30,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_data));
    bufp->fullBit(oldp+31,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_comp));
    bufp->fullBit(oldp+32,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__have_col_block_L));
    bufp->fullCData(oldp+33,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass),4);
    bufp->fullCData(oldp+34,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_data),8);
    bufp->fullCData(oldp+35,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data),6);
    bufp->fullCData(oldp+36,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data),6);
    bufp->fullBit(oldp+37,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data));
    bufp->fullBit(oldp+38,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data));
    bufp->fullSData(oldp+39,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_op),16);
    bufp->fullSData(oldp+40,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__dout_op),16);
    bufp->fullCData(oldp+41,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_op),5);
    bufp->fullCData(oldp+42,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_op),5);
    bufp->fullBit(oldp+43,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op));
    bufp->fullBit(oldp+44,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op));
    bufp->fullBit(oldp+45,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_start));
    bufp->fullBit(oldp+46,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish));
    bufp->fullCData(oldp+47,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_reg),8);
    bufp->fullSData(oldp+48,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_in),16);
    bufp->fullSData(oldp+49,(((0xc000U & (((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                            ? ((1U 
                                                & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg))
                                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                                                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp))
                                            : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 0xeU)) 
                                          << 0xeU)) 
                              | ((((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
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
    bufp->fullBit(oldp+50,((IData)((0xfU == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass)))));
    bufp->fullCData(oldp+51,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_din),8);
    bufp->fullBit(oldp+52,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__first_pass));
    bufp->fullBit(oldp+53,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_data_en));
    bufp->fullBit(oldp+54,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_op_en));
    bufp->fullCData(oldp+55,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_op_end),5);
    bufp->fullCData(oldp+56,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end),6);
    bufp->fullCData(oldp+57,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_start),6);
    bufp->fullCData(oldp+58,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data_end),6);
    bufp->fullCData(oldp+59,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_finish_end),6);
    bufp->fullBit(oldp+60,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__done_tmp));
    bufp->fullBit(oldp+61,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__running));
    bufp->fullBit(oldp+62,(((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
                            == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row))));
    bufp->fullBit(oldp+63,((((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
                             > ((IData)(1U) + (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__start_row))) 
                            & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__row_counter) 
                               <= (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_op_end)))));
    bufp->fullBit(oldp+64,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_del));
    bufp->fullBit(oldp+65,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_del));
    bufp->fullBit(oldp+66,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_del));
    bufp->fullCData(oldp+67,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del),8);
    bufp->fullSData(oldp+68,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del),16);
    bufp->fullCData(oldp+69,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup),4);
    bufp->fullCData(oldp+70,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_tmp),3);
    bufp->fullCData(oldp+71,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row),3);
    bufp->fullCData(oldp+72,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_tmp),3);
    bufp->fullCData(oldp+73,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in),3);
    bufp->fullCData(oldp+74,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_out),4);
    bufp->fullCData(oldp+75,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row),4);
    bufp->fullBit(oldp+76,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                  >> 1U))));
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                  >> 2U))));
    bufp->fullBit(oldp+78,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                  >> 3U))));
    bufp->fullCData(oldp+79,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del))),2);
    bufp->fullCData(oldp+80,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                    >> 2U))),2);
    bufp->fullCData(oldp+81,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0),2);
    bufp->fullCData(oldp+82,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_0_0),2);
    bufp->fullBit(oldp+83,((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))));
    bufp->fullCData(oldp+84,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del))),2);
    bufp->fullCData(oldp+85,((3U & ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                                     ? (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del))
                                     : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_del)
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)
                                         : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_del)
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                              ? 0U : 
                                             ((0U == 
                                               (3U 
                                                & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                               ? (3U 
                                                  & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del))
                                               : ((1U 
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
    bufp->fullCData(oldp+86,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp))),2);
    bufp->fullBit(oldp+87,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp) 
                                  >> 2U))));
    bufp->fullCData(oldp+88,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                    >> 2U))),2);
    bufp->fullCData(oldp+89,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_0_1),2);
    bufp->fullCData(oldp+90,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                    >> 4U))),2);
    bufp->fullCData(oldp+91,((3U & ((0U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                     ? (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                              >> 4U))
                                     : ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg)
                                         : ((2U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out_reduced)
                                             : ((3U 
                                                 == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                                 ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg)
                                                 : 0U)))))),2);
    bufp->fullCData(oldp+92,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                    >> 6U))),2);
    bufp->fullCData(oldp+93,((3U & ((0U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                     ? (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                              >> 6U))
                                     : ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg)
                                         : ((2U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out_reduced)
                                             : ((3U 
                                                 == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                                 ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg)
                                                 : 0U)))))),2);
    bufp->fullBit(oldp+94,((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))));
    bufp->fullCData(oldp+95,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                    >> 4U))),2);
    bufp->fullCData(oldp+96,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                    >> 6U))),2);
    bufp->fullCData(oldp+97,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0),2);
    bufp->fullCData(oldp+98,((3U & ((0U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                  >> 4U)))
                                     ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0)
                                     : ((1U == (3U 
                                                & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                   >> 4U)))
                                         ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg)
                                         : ((2U == 
                                             (3U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                               >> 4U)))
                                             ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out_reduced)
                                             : ((3U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                     >> 4U)))
                                                 ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg)
                                                 : 0U)))))),2);
    bufp->fullCData(oldp+99,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1),2);
    bufp->fullCData(oldp+100,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_1_1),2);
    bufp->fullBit(oldp+101,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass) 
                                   >> 1U))));
    bufp->fullCData(oldp+102,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1),2);
    bufp->fullCData(oldp+103,((3U & ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1)
                                      : ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg)
                                          : ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                               ? 0U
                                               : ((0U 
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
    bufp->fullCData(oldp+104,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp))),2);
    bufp->fullBit(oldp+105,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp) 
                                   >> 2U))));
    bufp->fullCData(oldp+106,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2),2);
    bufp->fullCData(oldp+107,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_1_2),2);
    bufp->fullCData(oldp+108,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3),2);
    bufp->fullCData(oldp+109,((3U & ((0U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3)
                                      : ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg)
                                          : ((2U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out_reduced)
                                              : ((3U 
                                                  == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg)
                                                  : 0U)))))),2);
    bufp->fullBit(oldp+110,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row) 
                                   >> 1U))));
    bufp->fullCData(oldp+111,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                     >> 8U))),2);
    bufp->fullCData(oldp+112,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+113,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0),2);
    bufp->fullCData(oldp+114,((3U & ((0U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                   >> 8U)))
                                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 8U)))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 8U)))
                                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out_reduced)
                                              : ((3U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 8U)))
                                                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg)
                                                  : 0U)))))),2);
    bufp->fullCData(oldp+115,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1),2);
    bufp->fullCData(oldp+116,((3U & ((0U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                   >> 8U)))
                                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 8U)))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 8U)))
                                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out_reduced)
                                              : ((3U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 8U)))
                                                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg)
                                                  : 0U)))))),2);
    bufp->fullCData(oldp+117,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2),2);
    bufp->fullCData(oldp+118,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__fac_out_2_2),2);
    bufp->fullBit(oldp+119,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass) 
                                   >> 2U))));
    bufp->fullCData(oldp+120,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2),2);
    bufp->fullCData(oldp+121,((3U & ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2)
                                      : ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg)
                                          : ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))
                                              ? 0U : 
                                             ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                               ? 0U
                                               : ((0U 
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
    bufp->fullCData(oldp+122,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp))),2);
    bufp->fullBit(oldp+123,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp) 
                                   >> 2U))));
    bufp->fullCData(oldp+124,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3),2);
    bufp->fullCData(oldp+125,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_out_2_3),2);
    bufp->fullBit(oldp+126,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row) 
                                   >> 2U))));
    bufp->fullCData(oldp+127,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                     >> 0xcU))),2);
    bufp->fullCData(oldp+128,((3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                     >> 0xeU))),2);
    bufp->fullCData(oldp+129,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0),2);
    bufp->fullCData(oldp+130,((3U & ((0U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                   >> 0xcU)))
                                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 0xcU)))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out_reduced)
                                              : ((3U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 0xcU)))
                                                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg)
                                                  : 0U)))))),2);
    bufp->fullCData(oldp+131,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1),2);
    bufp->fullCData(oldp+132,((3U & ((0U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                   >> 0xcU)))
                                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 0xcU)))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out_reduced)
                                              : ((3U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 0xcU)))
                                                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg)
                                                  : 0U)))))),2);
    bufp->fullCData(oldp+133,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2),2);
    bufp->fullCData(oldp+134,((3U & ((0U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                   >> 0xcU)))
                                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 0xcU)))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out_reduced)
                                              : ((3U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                      >> 0xcU)))
                                                  ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg)
                                                  : 0U)))))),2);
    bufp->fullCData(oldp+135,(((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                                ? 0U : (3U & ((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                               ? ((4U 
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
                                               : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                  >> 0xcU))))),2);
    bufp->fullCData(oldp+136,((3U & ((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                      ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                                          : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp))
                                      : ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                         >> 0xeU)))),2);
    bufp->fullBit(oldp+137,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass) 
                                   >> 3U))));
    bufp->fullCData(oldp+138,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3),2);
    bufp->fullCData(oldp+139,((3U & ((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__pass))
                                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                                      : ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg)
                                          : ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__start_row))
                                              ? 0U : 
                                             ((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                               ? 0U
                                               : ((0U 
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
    bufp->fullCData(oldp+140,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp))),2);
    bufp->fullBit(oldp+141,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp) 
                                   >> 2U))));
    bufp->fullBit(oldp+142,((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))));
    bufp->fullCData(oldp+143,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg),2);
    bufp->fullCData(oldp+144,((3U & ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                      ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)
                                          : (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_del) 
                                              & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp) 
                                                 >> 2U))
                                              ? 1U : 0U))
                                      : ((1U == (3U 
                                                 & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                          ? (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del))
                                          : ((3U == 
                                              (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out_reduced)
                                              : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)))))),2);
    bufp->fullCData(oldp+145,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out),3);
    bufp->fullCData(oldp+146,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+147,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+148,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+149,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+150,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+151,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+152,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+153,((3U & ((3U == (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                      ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del)
                                      : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_0__DOT__r_reg)))),2);
    bufp->fullCData(oldp+154,(((3U == (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del)))
                                ? 0U : (3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del)))),2);
    bufp->fullCData(oldp+155,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg),2);
    bufp->fullCData(oldp+156,((3U & ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                      ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                         >> 2U) : (
                                                   (3U 
                                                    == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out_reduced)
                                                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg))))),2);
    bufp->fullCData(oldp+157,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out),3);
    bufp->fullCData(oldp+158,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+159,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+160,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+161,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+162,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+163,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+164,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+165,((3U & ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                      ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                         >> 2U) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_1__DOT__r_reg)))),2);
    bufp->fullCData(oldp+166,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                ? 0U : (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                              >> 2U)))),2);
    bufp->fullCData(oldp+167,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg),2);
    bufp->fullCData(oldp+168,((3U & ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                      ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                         >> 4U) : (
                                                   (3U 
                                                    == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out_reduced)
                                                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg))))),2);
    bufp->fullCData(oldp+169,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out),3);
    bufp->fullCData(oldp+170,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+171,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+172,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+173,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+174,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+175,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+176,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+177,((3U & ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                      ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                         >> 4U) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_2__DOT__r_reg)))),2);
    bufp->fullCData(oldp+178,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                ? 0U : (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                              >> 4U)))),2);
    bufp->fullCData(oldp+179,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg),2);
    bufp->fullCData(oldp+180,((3U & ((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                      ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                         >> 6U) : (
                                                   (3U 
                                                    == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out_reduced)
                                                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg))))),2);
    bufp->fullCData(oldp+181,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out),3);
    bufp->fullCData(oldp+182,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+183,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+184,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+185,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+186,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+187,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+188,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+189,((3U & ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                      ? ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                         >> 6U) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_0_3__DOT__r_reg)))),2);
    bufp->fullCData(oldp+190,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_0_0))
                                ? 0U : (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_del) 
                                              >> 6U)))),2);
    bufp->fullCData(oldp+191,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg),2);
    bufp->fullCData(oldp+192,(((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 4U)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0)
                                : ((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                 >> 4U)))
                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out_reduced)
                                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg)))),2);
    bufp->fullCData(oldp+193,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out),3);
    bufp->fullCData(oldp+194,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+195,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+196,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+197,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+198,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+199,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+200,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+201,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 4U)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0)
                                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_0__DOT__r_reg))),2);
    bufp->fullCData(oldp+202,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 4U)))
                                ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_0))),2);
    bufp->fullBit(oldp+203,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup) 
                                   >> 1U))));
    bufp->fullBit(oldp+204,((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in))));
    bufp->fullCData(oldp+205,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg),2);
    bufp->fullCData(oldp+206,((3U & ((2U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                      ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg)
                                          : ((IData)(
                                                     (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                                       >> 1U) 
                                                      & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp) 
                                                         >> 2U)))
                                              ? 1U : 0U))
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 4U)))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1)
                                          : ((3U == 
                                              (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 4U)))
                                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out_reduced)
                                              : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg)))))),2);
    bufp->fullCData(oldp+207,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out),3);
    bufp->fullCData(oldp+208,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+209,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+210,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+211,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+212,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+213,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+214,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+215,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 4U)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1)
                                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_1__DOT__r_reg))),2);
    bufp->fullCData(oldp+216,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 4U)))
                                ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_1))),2);
    bufp->fullCData(oldp+217,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg),2);
    bufp->fullCData(oldp+218,(((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2)
                                : ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out_reduced)
                                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg)))),2);
    bufp->fullCData(oldp+219,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out),3);
    bufp->fullCData(oldp+220,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+221,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+222,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+223,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+224,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+225,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+226,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+227,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2)
                                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_2__DOT__r_reg))),2);
    bufp->fullCData(oldp+228,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_2))),2);
    bufp->fullCData(oldp+229,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg),2);
    bufp->fullCData(oldp+230,(((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3)
                                : ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out_reduced)
                                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg)))),2);
    bufp->fullCData(oldp+231,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out),3);
    bufp->fullCData(oldp+232,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+233,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+234,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+235,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+236,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+237,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+238,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+239,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3)
                                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_1_3__DOT__r_reg))),2);
    bufp->fullCData(oldp+240,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_1_1))
                                ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_1_3))),2);
    bufp->fullCData(oldp+241,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg),2);
    bufp->fullCData(oldp+242,(((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 8U)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0)
                                : ((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                 >> 8U)))
                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out_reduced)
                                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg)))),2);
    bufp->fullCData(oldp+243,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out),3);
    bufp->fullCData(oldp+244,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+245,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+246,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+247,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+248,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+249,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+250,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+251,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 8U)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0)
                                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_0__DOT__r_reg))),2);
    bufp->fullCData(oldp+252,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 8U)))
                                ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_0))),2);
    bufp->fullCData(oldp+253,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg),2);
    bufp->fullCData(oldp+254,(((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 8U)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1)
                                : ((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                 >> 8U)))
                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out_reduced)
                                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg)))),2);
    bufp->fullCData(oldp+255,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out),3);
    bufp->fullCData(oldp+256,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+257,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+258,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+259,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+260,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+261,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+262,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+263,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 8U)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1)
                                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_1__DOT__r_reg))),2);
    bufp->fullCData(oldp+264,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 8U)))
                                ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_1))),2);
    bufp->fullBit(oldp+265,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup) 
                                   >> 2U))));
    bufp->fullBit(oldp+266,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in) 
                                   >> 1U))));
    bufp->fullCData(oldp+267,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg),2);
    bufp->fullCData(oldp+268,((3U & ((4U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                      ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg)
                                          : ((4U & 
                                              ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                               & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp)))
                                              ? 1U : 0U))
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 8U)))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2)
                                          : ((3U == 
                                              (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 8U)))
                                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out_reduced)
                                              : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg)))))),2);
    bufp->fullCData(oldp+269,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out),3);
    bufp->fullCData(oldp+270,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+271,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+272,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+273,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+274,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+275,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+276,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+277,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 8U)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2)
                                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_2__DOT__r_reg))),2);
    bufp->fullCData(oldp+278,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 8U)))
                                ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_2))),2);
    bufp->fullCData(oldp+279,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg),2);
    bufp->fullCData(oldp+280,(((1U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3)
                                : ((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out_reduced)
                                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg)))),2);
    bufp->fullCData(oldp+281,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out),3);
    bufp->fullCData(oldp+282,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+283,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+284,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+285,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+286,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+287,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+288,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+289,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3)
                                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_2_3__DOT__r_reg))),2);
    bufp->fullCData(oldp+290,(((3U == (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_out_2_2))
                                ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_2_3))),2);
    bufp->fullCData(oldp+291,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg),2);
    bufp->fullCData(oldp+292,(((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 0xcU)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0)
                                : ((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                 >> 0xcU)))
                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out_reduced)
                                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg)))),2);
    bufp->fullCData(oldp+293,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out),3);
    bufp->fullCData(oldp+294,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+295,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+296,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+297,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+298,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+299,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+300,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+301,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 0xcU)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0)
                                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_0__DOT__r_reg))),2);
    bufp->fullCData(oldp+302,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 0xcU)))
                                ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_0))),2);
    bufp->fullCData(oldp+303,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg),2);
    bufp->fullCData(oldp+304,(((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 0xcU)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1)
                                : ((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                 >> 0xcU)))
                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out_reduced)
                                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg)))),2);
    bufp->fullCData(oldp+305,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out),3);
    bufp->fullCData(oldp+306,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+307,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+308,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+309,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+310,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+311,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+312,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+313,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 0xcU)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1)
                                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_1__DOT__r_reg))),2);
    bufp->fullCData(oldp+314,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 0xcU)))
                                ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_1))),2);
    bufp->fullCData(oldp+315,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg),2);
    bufp->fullCData(oldp+316,(((1U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 0xcU)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2)
                                : ((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                 >> 0xcU)))
                                    ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out_reduced)
                                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg)))),2);
    bufp->fullCData(oldp+317,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out),3);
    bufp->fullCData(oldp+318,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+319,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+320,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+321,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+322,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+323,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+324,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+325,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 0xcU)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2)
                                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_2__DOT__r_reg))),2);
    bufp->fullCData(oldp+326,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 0xcU)))
                                ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_2))),2);
    bufp->fullBit(oldp+327,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup) 
                                   >> 3U))));
    bufp->fullBit(oldp+328,((1U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__finish_in) 
                                   >> 2U))));
    bufp->fullCData(oldp+329,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg),2);
    bufp->fullCData(oldp+330,((3U & ((8U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__functionA_dup))
                                      ? ((1U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg)
                                          : ((IData)(
                                                     (((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__first_pass_row) 
                                                       >> 3U) 
                                                      & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp) 
                                                         >> 2U)))
                                              ? 1U : 0U))
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                    >> 0xcU)))
                                          ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                                          : ((3U == 
                                              (3U & 
                                               ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                                >> 0xcU)))
                                              ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out_reduced)
                                              : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg)))))),2);
    bufp->fullCData(oldp+331,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out),3);
    bufp->fullCData(oldp+332,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out_reduced),2);
    bufp->fullCData(oldp+333,((7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out), 2U))),3);
    bufp->fullCData(oldp+334,((7U & ((IData)(5U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out), 2U))))),3);
    bufp->fullCData(oldp+335,((7U & VL_SHIFTR_III(3,3,32, 
                                                  (7U 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out), 2U)))), 2U))),3);
    bufp->fullCData(oldp+336,((7U & ((IData)(3U) * 
                                     (7U & VL_SHIFTR_III(3,3,32, 
                                                         (7U 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & VL_SHIFTR_III(3,3,32, (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__mad_out), 2U)))), 2U))))),3);
    bufp->fullCData(oldp+337,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__gfe_barret_mad_inst__DOT__result),3);
    bufp->fullCData(oldp+338,((7U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__gfe_barret_mad_inst__DOT__result) 
                                     - (IData)(3U)))),3);
    bufp->fullCData(oldp+339,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 0xcU)))
                                ? (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3)
                                : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__P_3_3__DOT__r_reg))),2);
    bufp->fullCData(oldp+340,(((3U == (3U & ((IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__op_in_del) 
                                             >> 0xcU)))
                                ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__data_in_3_3))),2);
    bufp->fullCData(oldp+341,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_in_0__DOT__level[0]),8);
    bufp->fullCData(oldp+342,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__del_inst_out_0__DOT__level[0]),8);
    bufp->fullCData(oldp+343,((3U & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__SA_din))),2);
    bufp->fullCData(oldp+344,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_A_tmp),3);
    bufp->fullCData(oldp+345,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_1_1__DOT__dout_B_tmp),3);
    bufp->fullCData(oldp+346,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_A_tmp),3);
    bufp->fullCData(oldp+347,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__comb_SA_inst__DOT__gfe_inv_inst_3_3__DOT__dout_B_tmp),3);
    bufp->fullCData(oldp+348,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[0]),8);
    bufp->fullCData(oldp+349,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[1]),8);
    bufp->fullCData(oldp+350,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[2]),8);
    bufp->fullCData(oldp+351,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[3]),8);
    bufp->fullCData(oldp+352,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[4]),8);
    bufp->fullCData(oldp+353,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[5]),8);
    bufp->fullCData(oldp+354,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[6]),8);
    bufp->fullCData(oldp+355,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[7]),8);
    bufp->fullCData(oldp+356,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[8]),8);
    bufp->fullCData(oldp+357,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[9]),8);
    bufp->fullCData(oldp+358,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[10]),8);
    bufp->fullCData(oldp+359,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[11]),8);
    bufp->fullCData(oldp+360,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[12]),8);
    bufp->fullCData(oldp+361,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[13]),8);
    bufp->fullCData(oldp+362,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[14]),8);
    bufp->fullCData(oldp+363,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[15]),8);
    bufp->fullCData(oldp+364,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[16]),8);
    bufp->fullCData(oldp+365,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[17]),8);
    bufp->fullCData(oldp+366,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[18]),8);
    bufp->fullCData(oldp+367,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[19]),8);
    bufp->fullCData(oldp+368,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[20]),8);
    bufp->fullCData(oldp+369,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[21]),8);
    bufp->fullCData(oldp+370,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[22]),8);
    bufp->fullCData(oldp+371,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[23]),8);
    bufp->fullCData(oldp+372,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[24]),8);
    bufp->fullCData(oldp+373,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[25]),8);
    bufp->fullCData(oldp+374,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[26]),8);
    bufp->fullCData(oldp+375,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[27]),8);
    bufp->fullCData(oldp+376,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[28]),8);
    bufp->fullCData(oldp+377,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[29]),8);
    bufp->fullCData(oldp+378,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[30]),8);
    bufp->fullCData(oldp+379,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_data__DOT__mem[31]),8);
    bufp->fullSData(oldp+380,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[0]),16);
    bufp->fullSData(oldp+381,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[1]),16);
    bufp->fullSData(oldp+382,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[2]),16);
    bufp->fullSData(oldp+383,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[3]),16);
    bufp->fullSData(oldp+384,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[4]),16);
    bufp->fullSData(oldp+385,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[5]),16);
    bufp->fullSData(oldp+386,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[6]),16);
    bufp->fullSData(oldp+387,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[7]),16);
    bufp->fullSData(oldp+388,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[8]),16);
    bufp->fullSData(oldp+389,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[9]),16);
    bufp->fullSData(oldp+390,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[10]),16);
    bufp->fullSData(oldp+391,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[11]),16);
    bufp->fullSData(oldp+392,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[12]),16);
    bufp->fullSData(oldp+393,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[13]),16);
    bufp->fullSData(oldp+394,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[14]),16);
    bufp->fullSData(oldp+395,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[15]),16);
    bufp->fullSData(oldp+396,(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__mem_op__DOT__mem[16]),16);
    bufp->fullCData(oldp+397,(vlSelf->ui_in),8);
    bufp->fullCData(oldp+398,(vlSelf->uo_out),8);
    bufp->fullCData(oldp+399,(vlSelf->uio_in),8);
    bufp->fullCData(oldp+400,(vlSelf->uio_out),8);
    bufp->fullCData(oldp+401,(vlSelf->uio_oe),8);
    bufp->fullBit(oldp+402,(vlSelf->ena));
    bufp->fullBit(oldp+403,(vlSelf->clk));
    bufp->fullBit(oldp+404,(vlSelf->rst_n));
    bufp->fullBit(oldp+405,(vlSelf->tt_um_example__DOT__rst));
    bufp->fullBit(oldp+406,((1U & (IData)(vlSelf->ui_in))));
    bufp->fullBit(oldp+407,((1U & ((IData)(vlSelf->ui_in) 
                                   >> 1U))));
    bufp->fullBit(oldp+408,((1U & ((IData)(vlSelf->uio_in) 
                                   >> 6U))));
    bufp->fullBit(oldp+409,((1U & ((IData)(vlSelf->ui_in) 
                                   >> 3U))));
    bufp->fullCData(oldp+410,(((2U & (IData)(vlSelf->ui_in))
                                ? 0U : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__din_data))),8);
    bufp->fullCData(oldp+411,(((1U & (IData)(vlSelf->ui_in))
                                ? 0U : (0x1fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_addr_data)))),5);
    bufp->fullBit(oldp+412,((1U & ((1U & (IData)(vlSelf->ui_in))
                                    ? (IData)(vlSelf->ui_in)
                                    : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__rd_en_data)))));
    bufp->fullCData(oldp+413,(((2U & (IData)(vlSelf->ui_in))
                                ? 0U : (0x1fU & (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_addr_data)))),5);
    bufp->fullBit(oldp+414,((1U & ((2U & (IData)(vlSelf->ui_in))
                                    ? ((IData)(vlSelf->ui_in) 
                                       >> 1U) : (IData)(vlSelf->tt_um_example__DOT__DUT__DOT__phase_inst__DOT__step_inst__DOT__wr_en_data)))));
}
