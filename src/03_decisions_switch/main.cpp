//Write include statements
#include "gpa_letter_grade.h"
#include <iostream>
//Write using statements
using std::cout;
/*
No loop.
Use GPAs 3.55, 3.01, and 2.3
Three function calls and display the letter grade.

*/
int main() 
{
	cout << "Grade with GPA: " << gpa_to_letter_grade(3.55) << "\n";
	cout << "Grade with GPA: " << gpa_to_letter_grade(3.01) << "\n";
	cout << "Grade with GPA: " << gpa_to_letter_grade(2.3) << "\n";

	return 0;
}