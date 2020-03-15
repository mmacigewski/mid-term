//write includes
#include "ref_params.h"


/*
Write function code for function get_ref_params.
In the function use a for ranged loop with auto (reference) variable
change the n value in the for loop code to some other number

*/

void get_ref_params(std::vector<int>& vec)
{

	for (auto& x : vec)
	{
		x += 6;
	}

}