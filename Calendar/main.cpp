#include<iostream>
#include "state.hpp"
#include "digital_clock.hpp"
#include "calendar.hpp"
#include "calendar_login.hpp"
#include "timer.hpp"
using namespace std;

char subOptions(int operationNumber)
{
	char ch = '0';
	switch (operationNumber)
	{
	case 1:
		cout << "A. Normal time" << endl;
		cout << "B. Railway time" << endl;
		cout << "C. Railway time converter" << endl;
		cin >> ch;
		break;
	case 2:
		cout << "A. Infinite timer" << endl;
		cout << "B. Stop watch" << endl;
		cout << "C. Count down timer" << endl;
		cin >> ch;
		break;
	case 4:
		cout << "A. Calendar of year" << endl;
		cout << "B. Calendar of a particlar month" << endl;
		cout << "C. Day finder from date" << endl;
		cin >> ch;
		break;
	case 5:
		//cout << "A. Sign up for calendar" << endl;
		cout << "A. Meeting scheduler" << endl;
		cout << "B. Blocking for leaves and events" << endl;
		cout << "C. Task reminder" << endl;
		cin >> ch;
		break;
	default:
		cout << "Invalid Option";
		break;
	}
	return ch;
}

int main()
{

	int operationInput = 0;
	while (operationInput != 6)
	{
		cout << "Calendar Application" << endl;
		cout << "1. Digital Clock" << endl;
		cout << "2. Timer" << endl;
		cout << "3. Alarm" << endl;
		cout << "4. General Calendar" << endl;
		cout << "5. Calendar login" << endl;
		cout << "6. Exit" << endl;
		cout << "Enter the operation to be executed :";
		cin >> operationInput;

		if (operationInput > 6 || operationInput < 1)
		{
			cout << "Invalid Operation" << endl;
		}
		else
		{
			char option;
			switch (operationInput)
			{
			case (DIGITAL_CLOCK):
				cout << "Digital clock" << endl;
				option = subOptions(operationInput);
				digitalClock_init(option);
				break;
			case (TIMER):
				cout << "Timer" << endl;
				option = subOptions(operationInput);
				timer_init(option);
				break;
			case (ALARM):
				cout << "Alarm" << endl;
				break;
			case (GENERAL_CALENDAR):
				cout << "General Calendar" << endl;
				option = subOptions(operationInput);
				calendar_init(option);
				break;
			case(CALENDAR_LOGIN):
				cout << "Calendar login" << endl;
				option = subOptions(operationInput);
				calendar_login_init(option);
				break;
			case(EXIT):
				cout << "Exiting the application" << endl;
				break;

			}
		}

	}

}