//
#ifndef roll.h
#define roll.h
#include "die.h"

class roll {
    public:
    roll(Die& d1, Die& d2);

    void roll_dice();
    int roll_value() const;

    private:
    Die& die1;
    Die& die2;

    int rolled_value;
}
#endif