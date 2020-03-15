//Write include statements
#include "dive.h"
#include <iostream>
//Write using statements
using std::cout; using std::cin;


/*
Loop continues until user opts out.  Prompt the user for starting pressure, ending pressure,
depth (make sure the allowable values are between 30 and 80 only), and time in minutes.  
Create a Dive class instance with user-data, call the get_sacr function and display 
the value to screen:

Sample output:
SACR: 10.59

*/
int main() 
{
	bool isRunning{ true }, badDepth{ false };
	int depth{ 0 }, startPres{ 0 }, finalPres{ 0 }, time{ 0 }, sacr{ 0 };
	char option{ ' ' };

	while (isRunning)
	{
		cout << "Input starting pressure: ";
		cin >> startPres;
		cout << "Input ending pressure: ";
		cin >> finalPres;
		cout << "Input depth: ";
		cin >> depth;
		if (depth < 30 || depth > 80) { badDepth = true; }
		while (badDepth)
		{
			cout << "Depth must be between 30 and 80: ";
			cin >> depth;
			if (depth >= 30 && depth <= 80)
			{
				badDepth = false;
			}
		}
		cout << "Input time in minutes: ";
		cin >> time;

		Dive diver(depth, startPres, finalPres, time);

		sacr = diver.get_sacr();

		cout << "\nSacr rating: " << sacr << "\n";

		cout << "\nDo you want to continue(y/n): ";
		cin >> option;

		isRunning = option == 'n' ? false : true;
		std::cout << "\n";
	}

	return 0;
}