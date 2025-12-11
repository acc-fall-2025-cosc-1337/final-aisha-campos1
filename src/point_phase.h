//
#ifndef point_phase.h
#define point_phase.h

#include "phase.h"

class PointPhase : public Phase{
    private:
    int point;

    public:
    PointPhase(int p) : point(p) {}

    RollOutcome get_outcome(Roll* roll) override;
};
#endif