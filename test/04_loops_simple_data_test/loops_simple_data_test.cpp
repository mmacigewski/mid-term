#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//Write includes
#include "fibonacci.h"

/*
Write test case for get fibonacci function with values 
10 result "0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55"

and

5 result "0, 1, 1, 2, 3, 5"
*/

TEST_CASE("Test get_fibonacci function")
{
	REQUIRE(get_fibonacci(10) == "0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55");
	REQUIRE(get_fibonacci(5) == "0, 1, 1, 2, 3, 5");
}