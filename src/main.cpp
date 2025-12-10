#include <iostream>
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include <cassert>

int main() 
{
	Die d;
	for (int i = 0; i < 10; ++i) {
		int result = d.roll_die();
		std::cout << "Roll " << (i + 1) << ": " << result << std::endl;
		assert(result >= 1 && result <= 6); 
	}

	Die d1;
	Die d2;

	Roll roller(d1, d2);
	for (int i = 0; i < 10; ++i) {
		roller.roll_dice();
		int value = roller.roll_value();
		std::cout << "Roll " << (i + 1) << ": " << value << std::endl;
		assert(value >= 2 && value <= 12);

	}
	{
		shooter gameShooter;
		for (int i = 0; i < 10; ++i) {
			Roll* r = gameShooter.throw_dice(d1, d2);
			int value = r->roll_value();
			std::cout << "Shooter Roll " << (i + 1) << ": " << value << std::endl;
			assert(value >= 2 && value <= 12);
		}
		gameShooter.display_rolled_values();
	}
	std::cout << "All rolls are within the valid range." << std::endl;
	return 0;
}
