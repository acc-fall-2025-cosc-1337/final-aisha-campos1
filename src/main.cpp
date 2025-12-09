#include <iostream>
#include "die.h"
#include <cassert>

int main() 
{
	Die d;
	for (int i = 0; i < 10; ++i) {
		int r = d.roll();
		std::cout << "Roll " << (i + 1) << ": " << r << std::endl;
		assert(r >= 1 && r <= 6); 
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
	std::cout << "All rolls are within the valid range." << std::endl;
	return 0;
}
