// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vproject__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vproject::Vproject(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vproject__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , ui_in{vlSymsp->TOP.ui_in}
    , uo_out{vlSymsp->TOP.uo_out}
    , uio_in{vlSymsp->TOP.uio_in}
    , uio_out{vlSymsp->TOP.uio_out}
    , uio_oe{vlSymsp->TOP.uio_oe}
    , ena{vlSymsp->TOP.ena}
    , rst_n{vlSymsp->TOP.rst_n}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vproject::Vproject(const char* _vcname__)
    : Vproject(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vproject::~Vproject() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vproject___024root___eval_debug_assertions(Vproject___024root* vlSelf);
#endif  // VL_DEBUG
void Vproject___024root___eval_static(Vproject___024root* vlSelf);
void Vproject___024root___eval_initial(Vproject___024root* vlSelf);
void Vproject___024root___eval_settle(Vproject___024root* vlSelf);
void Vproject___024root___eval(Vproject___024root* vlSelf);

void Vproject::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vproject::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vproject___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vproject___024root___eval_static(&(vlSymsp->TOP));
        Vproject___024root___eval_initial(&(vlSymsp->TOP));
        Vproject___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vproject___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vproject::eventsPending() { return false; }

uint64_t Vproject::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vproject::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vproject___024root___eval_final(Vproject___024root* vlSelf);

VL_ATTR_COLD void Vproject::final() {
    Vproject___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vproject::hierName() const { return vlSymsp->name(); }
const char* Vproject::modelName() const { return "Vproject"; }
unsigned Vproject::threads() const { return 1; }
void Vproject::prepareClone() const { contextp()->prepareClone(); }
void Vproject::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vproject::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vproject___024root__trace_decl_types(VerilatedVcd* tracep);

void Vproject___024root__trace_init_top(Vproject___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vproject___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproject___024root*>(voidSelf);
    Vproject__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vproject___024root__trace_decl_types(tracep);
    Vproject___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vproject___024root__trace_register(Vproject___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vproject::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vproject::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vproject___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
