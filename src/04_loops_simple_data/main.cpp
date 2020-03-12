//Write include statements
#include "fibonacci.h"
#include <iostream>
//Write using statements
using std::cout; using std::cin;

/*
Program runs until user opts out.
For each loop prompt user for a number, use number as function argument, 
call get_fibonacci function and display the output.
*/
int main() 
{
	int option{ 0 };
	std::string fib{ "" };
	bool isRunning{ true };

	cout << "Enter a number: ";
	cin >> option;

	fib = get_fibonacci(option);

	cout << "Fibonacci number:" << fib;

	return 0;
}