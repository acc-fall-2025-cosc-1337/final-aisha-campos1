#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/die.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Roll Die Six Times", "die") {
	Die d;
	for (int i = 0; i < 6; ++i) {
		int r = d.roll();
		REQUIRE(r >= 1);
		REQUIRE(r <= 6);
	}
}

