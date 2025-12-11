//
#ifndef come_out_phase.h
#define come_out_phase.h

#include "phase.h"

class ComeOutPhase : public Phase
{
    public: 
    RollOutcome get_outcome(Roll* roll) override;
};

#endif