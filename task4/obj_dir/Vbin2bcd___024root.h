// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbin2bcd.h for the primary calling header

#ifndef VERILATED_VBIN2BCD___024ROOT_H_
#define VERILATED_VBIN2BCD___024ROOT_H_  // guard

#include "verilated.h"


class Vbin2bcd__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbin2bcd___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(x,7,0);
    CData/*0:0*/ __VactContinue;
    VL_OUT16(BCD,11,0);
    IData/*19:0*/ bin2bcd__DOT__result;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbin2bcd__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbin2bcd___024root(Vbin2bcd__Syms* symsp, const char* v__name);
    ~Vbin2bcd___024root();
    VL_UNCOPYABLE(Vbin2bcd___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
