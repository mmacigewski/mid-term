//Write include statements
#include "clock.h"
#include <iostream>
//Write using statements
using std::cout;
/*
No loop.  With value constructor argument 1570846218 create an instance of the Clock class.   
Call class function display_time to Display the time.
Sample output:
Time: 15:45:09

Other example:
Time: 09:08:05

*/
int main() 
{
	Clock time(1570846218);

	cout << "The epoch time is: "; 
	time.display_time();

	return 0;
}