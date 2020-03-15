//Write include statements
#include "ref_params.h"
#include <iostream>
//Write using statements
using std::cout;


/*
No loop.  Use the vector of int values as function argument for ref_params function,
call function and display the vector of int to show that the vector changed or didn’t change.

vector of int values {2, 3, 5 }
*/
int main()
{
	std::vector<int> values{2, 3, 5};

	cout << "Valuse vector before function: ";

	for (auto x : values)
	{
		cout << x << ", ";
	}

	get_ref_params(values);

	cout << "\nValues vector after function: ";

	for (auto x : values)
	{
		cout << x << ", ";
	}

	return 0;
}