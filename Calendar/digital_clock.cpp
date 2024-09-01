#include<iostream>
#include<Windows.h>
#include<string>

#include "digital_clock.hpp"
using namespace std;

int timeHour, timeMin, timeSec;
string meridieum;
void digitalClock_init(char option)
{
	switch (option)
	{
	case 'A' :
	case 'a' :
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
void normalTime()
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

						cout << "Current time:" << timeHour << "hr:" << timeMin << "min:" << timeSec << "sec"<<" "<<meridieum;
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
void railwayTime()
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


void railwayTimeConverter()
{

}