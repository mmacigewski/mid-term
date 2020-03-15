#include "clock.h"
#include <iostream>
/*
Write get_hours code to return hours given seconds since 1970 int
*/

int get_hours(int seconds_since_1970)
{
	int hour = seconds_since_1970 / 3600;
	hour = hour % 24;
	return hour;
}

/*
Write get_minutes code to return minutes given seconds since 1970 int
*/

int get_minutes(int seconds_since_1970)
{
	int hour = seconds_since_1970 % 3600;
	int minute = hour % 45;
	minute = hour / 60;
	return minute;
}

/*
Write get_seconds code to return seconds given seconds since 1970 int
*/

int get_seconds(int seconds_since_1970)
{
	int second = seconds_since_1970 % 60;
	return second;
}