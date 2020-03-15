//Write include statements
#include "dna_p_distance_vector.h"
#include <iostream>
//Write using statements
using std::cout;
/*
No loop.  Use the given vector of string data as function argument, 
call get_dna_p_distance_vector function and display the output.

vector of string data
{"TTTCCATTTA",
 "GATTCATTTC",
 "TTTCCATTTT",
 "GTTCCATTTA"};
*/
int main() 
{
    std::vector<std::string> strVec{ "TTTCCATTTA", "GATTCATTTC", "TTTCCATTTT", "GTTCCATTTA" };
    std::vector<double> result;

    result = get_dna_p_distance_vector(strVec);

    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << ", ";
    }

	return 0;
}