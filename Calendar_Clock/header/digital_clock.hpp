/*
 * project   : https://github.com/Robin005cr/Calendar-and-Clock
 * file name : digital_clock.hpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
#include<string>
using namespace std;
class DigitalClock
{

private:
	uint8_t timeHour, timeMin, timeSec;
	string meridieum;
public:
	void normalTime();
	void railwayTime();
	void railwayTimeConverter();
	void digitalClock_init(char option);
};
