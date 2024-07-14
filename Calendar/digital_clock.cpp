#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

int timeHour, timeMin, timeSec;
string meridieum;

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