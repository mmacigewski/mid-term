//Write include statement
#include "dive.h"
//Constructor code


//Write class function code for get_sacr

double Dive::get_sacr()
{
	double sacr = ((33*(s - f)) / (t*(d + 33)));

	return sacr;
}
