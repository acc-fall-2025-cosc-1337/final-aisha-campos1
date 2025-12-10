#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/die.h"
#include "../src/roll.h"

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

TEST_CASE("Two Dice Sum Range", "dice") {
	Die d1;
	Die d2;
	for (int i = 0; i < 12; ++i) {
		int s = d1.roll() + d2.roll();
		REQUIRE(s >= 2);
		REQUIRE(s <= 12);
	}
}

TEST_CASE("Loop Roll Values 2-12", "dice") {
	Die d1;
	Die d2;
	for (int roll = 0; roll < 100; ++roll) {
		int value = d1.roll() + d2.roll();
		REQUIRE(value >= 2);
		REQUIRE(value <= 12);
	}
}

TEST_CASE("Shooter Loop Returns Roll", "shooter") {
	Die d1;
	Die d2;
	roll shooter(d1, d2);
	for (int i = 0; i < 10; ++i) {
		shooter.roll_dice();
		int result = shooter.roll_value();
		REQUIRE(result >= 2);
		REQUIRE(result <= 12);
	}
}

TEST_CASE("Verify Roll Result Range 2-12", "shooter") {
	Die d1;
	Die d2;
	roll shooter(d1, d2);
	for (int i = 0; i < 50; ++i) {
		shooter.roll_dice();
		int rollResult = shooter.roll_value();
		REQUIRE(rollResult >= 2);
		REQUIRE(rollResult <= 12);
	}
}



