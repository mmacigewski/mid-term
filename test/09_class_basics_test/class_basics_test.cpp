#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//Write include
#include "dive.h"
/*
Test case for Dive class

Create an instance of Dive class.
The Dive class data member are:
d = depth in feet = 55
s = starting pressure = 3000
f = final pressure = 1000
t = time in minutes = 30

result should return 25
*/

TEST_CASE("Test case for Dive Class")
{
	Dive diver(55, 3000, 1000, 30);

	REQUIRE(diver.get_sacr() == 25.0);
}