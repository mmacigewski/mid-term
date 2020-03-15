#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//Write includes
#include "value_params.h"
/*
Write test case for get_value_params with vector of int {2,3, 5, 7} function argument.

Show that the vector of int changed or didn't change in the assertion, REQUIRE
*/

TEST_CASE("Test get_value_params functions")
{
	std::vector<int> test{ 2,3, 5, 7 };
	std::vector<int> check{ 2,3, 5, 7 };

	get_value_params(test);

	REQUIRE(test == check);
}