#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

//Write includes
#include "dna_p_distance_vector.h"
#include <vector>
#include <string>

/*
Write test case for get p distance vector with vector string value
{"TTTCCATTTA", "GATTCATTTC", "TTTCCATTTT", "GTTCCATTTA"};



returns a vector of double
{
0.00000, 0.40000, 0.10000, 0.10000,   
0.40000, 0.00000, 0.40000, 0.30000,
0.10000, 0.40000, 0.00000, 0.20000,
0.10000, 0.30000, 0.20000, 0.00000
}

*/

TEST_CASE("Test get_dna_p_distance_vector function")
{
	std::vector<std::string> test { "TTTCCATTTA", "GATTCATTTC", "TTTCCATTTT", "GTTCCATTTA" };
	std::vector<double> check{ 0.00000, 0.40000, 0.10000, 0.10000, 0.40000, 0.00000, 0.40000, 0.30000, 0.10000, 0.40000, 0.00000, 0.20000, 0.10000, 0.30000, 0.20000, 0.00000 };
	REQUIRE(get_dna_p_distance_vector(test) == check);
}