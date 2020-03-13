//WRITE INCLUDE STATEMENT
#include "dna_p_distance.h"

#include <iostream>

/*
Write code for function get_dna_p_distance 

For two strings s1 and s2 of equal length, the p-distance between them 
is the proportion of corresponding symbols that differ between s1 and s2.

double p_distance = get_dna_p_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT");

distance will be 7 / 17= .4118
TIP: You'll need to round the answer to 4 decimals
*/

double get_dna_p_distance(const std::string& str1, const std::string& str2)
{
	double count{ 0 };
	double diff{ 0 };

	for (auto i = 0; i < str1.length(); ++i)
	{
		if (str1[i] != str2[i])
		{
			count++;
		}
	}

	diff = count / str1.length();

	diff = round(diff * 10000.0) / 10000.0; // rounds diff to the 10th thousandths place

	return diff;
}
