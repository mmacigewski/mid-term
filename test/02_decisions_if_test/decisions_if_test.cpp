#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//Write include statements
#include "dna_p_distance.h"


/*
Write Test case for Test get dna p distance with values:

get_dna_p_distance with strings "GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT" the results should be .4118.
get_dna_p_distance with strings "GAGCCTACTAACGGGAT", "GATCGTAATGACGGCCT" the results should be .3529.

*/

TEST_CASE("Test get dns p didstance with values")
{
	REQUIRE(get_dna_p_distance("GAGCCTACTAACGGGAT","CATCGTAATGACGGCCT") == .4118);
	REQUIRE(get_dna_p_distance("GAGCCTACTAACGGGAT", "GATCGTAATGACGGCCT") == .3529);
}