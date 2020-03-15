#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//ADD PROPER INCLUDE
#include "fun_clock.h"

/*
Create Test Case - Test functions with argument(s)
1570846218 
get hours returns 2
get minutes returns 10
get seconds returns 18

1570875018
get hours returns 10
get minutes returns 10
get seconds returns 18

*/

TEST_CASE("Test fun_clock.cpp")
{
	REQUIRE(get_hours(1570846218) == 2);
	REQUIRE(get_minutes(1570846218) == 10);
	REQUIRE(get_seconds(1570846218) == 18);

	REQUIRE(get_hours(1570875018) == 10);
	REQUIRE(get_minutes(1570875018) == 10);
	REQUIRE(get_seconds(1570875018) == 18);
}