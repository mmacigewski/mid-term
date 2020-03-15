//Write include statements
#include<iostream>
#include "fun_clock.h"

//write using statements
using std::cout;

/*

Call the functions with argument 1570846218 to display the following time: 02:10:18.
*/
int main() 
{
	cout << get_hours(1570846218);
	cout << ":";
	cout << get_minutes(1570846218);
	cout << ":";
	cout << get_seconds(1570846218);
	return 0;
}