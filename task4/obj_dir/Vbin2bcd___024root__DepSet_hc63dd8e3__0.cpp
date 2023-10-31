// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbin2bcd.h for the primary calling header

#include "verilated.h"

#include "Vbin2bcd__Syms.h"
#include "Vbin2bcd__Syms.h"
#include "Vbin2bcd___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbin2bcd___024root___dump_triggers__ico(Vbin2bcd___024root* vlSelf);
#endif  // VL_DEBUG

void Vbin2bcd___024root___eval_triggers__ico(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbin2bcd___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbin2bcd___024root___dump_triggers__act(Vbin2bcd___024root* vlSelf);
#endif  // VL_DEBUG

void Vbin2bcd___024root___eval_triggers__act(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbin2bcd___024root___dump_triggers__act(vlSelf);
    }
#endif
}
