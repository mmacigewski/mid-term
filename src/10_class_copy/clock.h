/*
Convert question 1 clock functions to a class that uses a copy constructor and a public function get_time that
returns the time in a string as "13:10:09"

WRITE CLASS INTERFACE here
*/
#include <string>


class Clock
{
public:

	Clock(int time) : timestamp(time) {}

	std::string get_time();

	void display_time();

	int get_hours(int timestamp);
	int get_minutes(int timestamp);
	int get_seconds(int timestamp);

private:

	int timestamp;
	int hour{ 0 }, minute{ 0 }, second{ 0 };
	std::string time;
};