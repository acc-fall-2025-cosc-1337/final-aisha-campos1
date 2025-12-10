//
#ifndef shooter.h
#define shooter.h

#include <vector>
#include "roll.h"
#include "die.h"

class shooter {
    public: 
    Roll* throw_dice(Die& d1, Die& d2);
    void display_rolled_values();
    ~Shooter();

    private:
    std::vector<Roll*> rolls;
};

#endif