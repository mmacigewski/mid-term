/*
The Dive Class. You will want to create a Dive class that contains class data which include
start pressure, finish pressure, time and depth. Typical values are a starting pressure of
3000, ending pressure of 700, depth of 30 to 80 feet and times of 30 minutes (at 80 feet) to
60 minutes (at 30 feet). SACR’s are typically between 10 and 20. 

What's the constructor for the class?  Class list initializer?

Your Dive class should have
a class function named get_sacr() which returns the SACR for that dive.

What are the class data members?

Formula for normalized air consumption (Surface Air Consumption Rate---sacr):
sacr = 33(s - f) / t(d + 33)

Assume users will always give you good data, there's no need for data validation.

TIP: Use int and /or double data types where appropriate.
FOCUS ON CREATING THE CLASS STRUCTURE.
*/

class Dive
{
public:

	Dive(int depth, int startPres, int FinalPres, int time) : d(depth), s(startPres), f(FinalPres), t(time) {}

	double get_sacr();

private:

	int d{ 0 }, s{ 0 }, f{ 0 }, t{ 0 };

};