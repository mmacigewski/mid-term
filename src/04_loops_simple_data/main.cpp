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
	std::string fib{ "" }, sContinue{""};
	bool isRunning{ true };

	while (isRunning)
	{

		cout << "Enter a number: ";
		cin >> option;

		fib = get_fibonacci(option);

		cout << "Fibonacci number:" << fib;

		cout << "\n\nDo you want to continue(y/n): ";
		cin >> sContinue;
		cout << "\n";

		isRunning = sContinue == "n" ? false : true;

	}

	return 0;
}