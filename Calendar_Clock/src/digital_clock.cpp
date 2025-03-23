/*
 * project   : https://github.com/Robin005cr/Calendar-and-Clock
 * file name : digital_clock.cpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */

#include <iostream>
#include <Windows.h>
#include <string>

#include "digital_clock.hpp"
using namespace std;

/**
 * @brief digitalClock_init()
 * Initializes the digital clock functionality based on the specified option.
 *
 * @param[in] option A character indicating the desired clock format or function:
 *                   - 'A'/'a': Normal time format
 *                   - 'B'/'b': Railway time format
 *                   - 'C'/'c': Railway time conversion
 *                   - Any other value: Invalid option
 */

void DigitalClock::digitalClock_init(char option)
{
	switch (option)
	{
	case 'A':
	case 'a':
		normalTime();
		break;
	case 'B':
	case 'b':
		railwayTime();
		break;
	case 'C':
	case 'c':
		railwayTimeConverter();
		break;
	default:
		cout << "Invalid Option\n";
		break;
	}
}

/**
 * @brief normalTime()
 * A function which displays 12 hr clock based on meridieum(AM/PM)
 *
 */
void DigitalClock::normalTime()
{
	cout << "Enter the Current time";
	cout << "Enter the hour :" << endl;
	cin >> timeHour;
	cout << "Enter the min :" << endl;
	cin >> timeMin;
	cout << "Enter the sec :" << endl;
	cin >> timeSec;
	cout << "Enter the meridieum(AM or PM):";
	cin >> meridieum;

	if (timeHour > 12 || timeMin > 59 || timeSec > 59)
	{
		cout << "Wrong Input" << endl;
	}
	else
	{
		while (1)
		{
			for (timeHour; timeHour < 13; timeHour++)
			{
				for (timeMin; timeMin < 60; timeMin++)
				{
					for (timeMin; timeSec < 60; timeSec++)
					{
						system("cls");

						cout << "Current time:" << timeHour << "hr:" << timeMin << "min:" << timeSec << "sec" << " " << meridieum;
						Sleep(1000);
					}
					timeSec = 0;
				}
				timeMin = 0;
			}
			timeHour = 0;
		}
	}
}
/**
 * @brief railwayTime()
 * A function which displays 24 hr clock which we usually refer as railway time.
 *
 */
void DigitalClock::railwayTime()
{
	cout << "Enter the Current time";
	cout << "Enter the hour (24 hour format) :" << endl;
	cin >> timeHour;
	cout << "Enter the min :" << endl;
	cin >> timeMin;
	cout << "Enter the sec :" << endl;
	cin >> timeSec;

	if (timeHour > 24 || timeMin > 59 || timeSec > 59)
	{
		cout << "Wrong Input" << endl;
	}
	else
	{
		while (1)
		{
			for (timeHour; timeHour < 25; timeHour++)
			{
				for (timeMin; timeMin < 60; timeMin++)
				{
					for (timeMin; timeSec < 60; timeSec++)
					{
						system("cls");

						cout << "Current time:" << timeHour << "hr:" << timeMin << "min:" << timeSec << "sec";
						Sleep(1000);
					}
					timeSec = 0;
				}
				timeMin = 0;
			}
			timeHour = 0;
		}
	}
}

void DigitalClock::railwayTimeConverter()
{
}