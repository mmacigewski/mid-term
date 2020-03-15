/*
Write function code for gpa_to_letter_grade that returns a string and accepts a double gpa parameter
YOU MUST USE A SWITCH STATEMENT

Given a double 3.5 returns the string A
TIP: You'll have to convert the double to an int using multiplication

Table
3.5 to 4 returns an A
3.0 to 3.49 returns a B
1.7 to 2.99 returns a C
1 to 1.69 returns a D
less than 1 returns an F

*/

#include "gpa_letter_grade.h"

using std::string;

std::string gpa_to_letter_grade(double gpa)
{
	int convGPA = gpa * 10;
	std::string gpaToLetter{ "" };

	switch (convGPA)
	{
	case 40:

	case 39:

	case 38:

	case 37:

	case 36:

	case 35:
		gpaToLetter = "A";
		break;
	case 34:
		gpaToLetter = "B";
		break;
	case 33:

	case 32:

	case 31:

	case 30:
		gpaToLetter = "B";
		break;
	case 29:
		gpaToLetter = "C";
		break;
	case 28:
		gpaToLetter = "C";
		break;
	case 27:
		gpaToLetter = "C";
		break;
	case 26:
		gpaToLetter = "C";
		break;
	case 25:
		gpaToLetter = "C";
		break;
	case 24:
		gpaToLetter = "C";
		break;
	case 23:
		gpaToLetter = "C";
		break;
	case 22:
		gpaToLetter = "C";
		break;
	case 21:
		gpaToLetter = "C";
		break;
	case 20:
		gpaToLetter = "D";
		break;
	case 19:
		gpaToLetter = "D";
		break;
	case 18:
		gpaToLetter = "D";
		break;
	case 17:
		gpaToLetter = "D";
		break;
	case 16:
		gpaToLetter = "D";
		break;
	case 15:
		gpaToLetter = "D";
		break;
	case 14:
		gpaToLetter = "D";
		break;
	case 13:
		gpaToLetter = "D";
		break;
	case 12:
		gpaToLetter = "D";
		break;
	case 11:
		gpaToLetter = "D";
		break;
	case 10:
		gpaToLetter = "D";
		break;
	default:
		gpaToLetter = "F";
		break;
	}

	return gpaToLetter;
}
