//write include statement
#include "clock.h"
#include <iostream>
//Write Class function and constructor code here

//PUBLIC FUNCTIONS

std::string Clock::get_time()
{
	hour = get_hours(timestamp);
	minute = get_minutes(timestamp);
	second = get_seconds(timestamp);

	return  std::to_string(hour) + ":" + std::to_string(minute) + ":" + std::to_string(second);
}

void Clock::display_time()
{
	time = get_time();

	std::cout << time;
}

//PRIVATE FUNCTIONS

int Clock::get_hours(int timestamp)
{
	int hour = timestamp / 3600;
	hour = hour % 24;
	return hour;
}

int Clock::get_minutes(int timestamp)
{
	int remainder = timestamp % 3600;
	int minute = remainder / 60;
	return minute;
}

int Clock::get_seconds(int timestamp)
{
	int second = timestamp % 60;
	return second;
}