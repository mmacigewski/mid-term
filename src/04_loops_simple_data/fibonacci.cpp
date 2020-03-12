/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.
DO NOT USE A RECURSIVE FUNCTION
*/
#include "fibonacci.h"


std::string get_fibonacci(int num)
{

	int first{ 0 }, second{ 1 }, fib{ 0 };
	std::string finished;

	for (std::size_t i = 0; i <= num; ++i)
	{
		if (i < 1)
		{
			finished.append(std::to_string(i));
			finished.append(", ");
		}
		else
		{
			fib = first + second;
			second = first;
			first = fib;

			finished.append(std::to_string(fib));
			finished.append(", ");
		}
	}

	finished.pop_back(); //for formatting
	finished.pop_back();

	return finished;

}