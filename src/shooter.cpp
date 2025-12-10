//
#include "shooter.h"
#include <iostream>

Roll* shooter::throw_dice(Die& d1, Die& d2)
{ 
    Roll* roll=new Roll(die1, die2);
    roll->roll_dice();
    rolls.push_back(roll);
    return roll;
}

void Shooter::display_rolled_values()
{
    for(auto r : rolls) {
        std::cout << "Rolled value: " << r->roll_value() << std::endl;
    }
}

Shooter::~Shooter()
{
    for(auto r : rolls)
    {
        delete r;
    }
    rolls.clear();
}
