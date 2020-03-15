//write includes
#include "value_params.h"


/*
Write function code for function get_value_params.
In the function use a for ranged loop with auto (value) variable, for(auto n: nums)
change the value in the for loop code to some other number

*/

void get_value_params(std::vector<int> params)
{
	for (auto value : params)
	{
		value = 6;
	}
}
