/*
 * project   : https://github.com/Robin005cr/Calendar-and-Clock
 * file name : main.cpp
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
#include <limits>
#include "state.hpp"
#include "digital_clock.hpp"
#include "calendar.hpp"
#include "calendar_login.hpp"
#include "timer.hpp"
#include "alarm.hpp"
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
	case 3:
		cout<<"A. Alarm"<<endl;
		cin>>ch;
	case 4:
		cout << "A. Calendar of year" << endl;
		cout << "B. Calendar of a particlar month" << endl;
		cout << "C. Day finder from date" << endl;
		cin >> ch;
		break;
	case 5:
		// cout << "A. Sign up for calendar" << endl;
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

	operationState operationInput = static_cast<operationState>(0);
	while ((operationInput != operationState::EXIT))
	{
		int input;
		cout << "Calendar Application" << endl;
		cout << "1. Digital Clock" << endl;
		cout << "2. Timer" << endl;
		cout << "3. Alarm" << endl;
		cout << "4. General Calendar" << endl;
		cout << "5. Calendar login" << endl;
		cout << "6. Exit" << endl;
		cout << "Enter the operation to be executed :";
		cin >> input;
		operationInput = static_cast<operationState>(input);
		if (input > 6 || input < 1)
		{
			cout << "Invalid Operation" << endl;
			cin.clear(); // Clear the error flag
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			operationInput = operationState::INVALID_CHOICE;
			// continue;
		}
		else
		{
			char option;
			DigitalClock D;
			CalendarApp obj;
			Alarm A;
			switch (operationInput)
			{
			case (operationState::DIGITAL_CLOCK):
				cout << "Digital clock" << endl;
				option = subOptions(input);

				D.digitalClock_init(option);
				break;
			case (operationState::TIMER):
				cout << "Timer" << endl;
				Timer T;
				option = subOptions(input);
				T.timer_init(option);
				break;
			case (operationState::ALARM):
				cout << "Alarm" << endl;
				A.alarm_init();
				break;
			case (operationState::GENERAL_CALENDAR):
				cout << "General Calendar" << endl;
				Calendar C;
				option = subOptions(input);
				C.calendar_init(option);
				break;
			case (operationState::CALENDAR_LOGIN):

				cout << "Calendar login" << endl;
				obj.signUpLogIN();
				option = subOptions(input);
				obj.calendar_login_init(option);
				break;
			case (operationState::EXIT):
				cout << "Exiting the application" << endl;
				break;
			}
		}
	}
}