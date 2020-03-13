//Write include statements
#include "dna_p_distance.h"

#include <iostream>

//Write using statements
using std::cout; using std::string;

/*
No loop.  Use the provided strings as function arguments and display the p-distance of the strings.

Use these strings "GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT".

*/
int main() 
{
	string str1{ "GAGCCTACTAACGGGAT" }, str2{ "CATCGTAATGACGGCCT" };

	cout << "P-Distance: " << get_dna_p_distance(str1, str2);

	return 0;
}