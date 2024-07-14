#include<iostream>
#include "state.hpp"
#include "digital_clock.hpp"
using namespace std;

char subOptions(int operationNumber)
{
	char ch;
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
		cout << "A.  Calendar of year" << endl;
		cout << "B. Day finder from date" << endl;
		break;
	case 5:
		cout << "A. Sign up for calendar" << endl;
		cout << "B. Meeting scheduler" << endl;
		cout << "C. Blocking for leaves and events" << endl;
		cout << "D. Task reminder" << endl;
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
				normalTime();
				break;
			case (TIMER):
				cout << "Timer" << endl;
				option = subOptions(operationInput);
				break;
			case (ALARM):
				cout << "Alarm" << endl;
				break;
			case (GENERAL_CALENDAR):
				cout << "General Calendar" << endl;
				break;
			case(CALENDAR_LOGIN):
				cout << "Calendar login" << endl;
				break;
			case(EXIT):
				cout << "Exiting the application" << endl;
				break;

			}
		}

	}

}