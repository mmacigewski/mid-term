#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//Write include
#include "ref_params.h"
/*
Write test case for get_ref_params with vector of int {2,3, 5, 7} function argument.

Show that the vector of int changed or didn't change in the assertion, REQUIRE
*/

TEST_CASE("Test get_ref_params function")
{
	std::vector<int> test{2, 3, 5, 7 }, check{8, 9, 11, 13 };

	get_ref_params(test);

	REQUIRE(test == check);

}