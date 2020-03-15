#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//Write includes
#include "clock.h"
/*
Write test case test clock class

with values 

1570846218
get hours returns 2
get minutes returns 10
get seconds returns 18


*/

TEST_CASE("Test Clock class")
{
	Clock time(1570846218);

	REQUIRE(time.get_hours(1570846218) == 2);
	REQUIRE(time.get_minutes(1570846218) == 10);
	REQUIRE(time.get_seconds(1570846218) == 18);
}