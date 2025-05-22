/*
 * project   : https://github.com/Robin005cr/Calendar-and-Clock
 * file name : calendar.hpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */

#include <string>
using namespace std;

class Calendar
{
public:
	int getYear();
	uint8_t dayNumber(uint8_t day, uint8_t month, int year);
	string getMonthName(uint8_t monthNumber);
	uint8_t numberOfDays(uint8_t monthNumber, int year);
	void printCalendarYear(int year);
	void calendar_init(char option);
};
