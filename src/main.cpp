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
	std::cout << "All rolls are within the valid range." << std::endl;
	return 0;
}
