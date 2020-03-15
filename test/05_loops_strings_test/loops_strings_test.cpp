#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "transcribe_dna_to_rna.h"
//Write include statements

/*
Write test case for transcribe dna to rna with string:
"GATGGAACTTGACTACGTAAATT" returns GAUGGAACUUGACUACGUAAAUU
*/

TEST_CASE("Test transcribe_dna_to_rna function")
{
	REQUIRE(transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT") == "GAUGGAACUUGACUACGUAAAUU");
}