#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "gpa_letter_grade.h"

/*
Write test case for gpa to letter grade with values:
3.50 returns an "A"
3.25 returns a "B"
2.99 returns a "C"
1.69 returns a "D"
.5 returns an "F"
*/


TEST_CASE("Test gpa_to_letter_grade function")
{
	REQUIRE(gpa_to_letter_grade(3.50) == "A");
	REQUIRE(gpa_to_letter_grade(3.25) == "B");
	REQUIRE(gpa_to_letter_grade(2.99) == "C");
	REQUIRE(gpa_to_letter_grade(2.0) == "D");
	REQUIRE(gpa_to_letter_grade(.5) == "F");
}