/*
 * project   : https://github.com/Robin005cr/Calendar-and-Clock
 * file name : calendar.cpp
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
#include <iomanip>
using namespace std;
#include "calendar.hpp"

// Driver Program to check above functions
int Calendar::getYear()
{
	int year;
	cout << "Enter the year:";
	cin >> year;
	return year;
}
void Calendar::calendar_init(char option)
{
	int year = getYear();
	switch (option)
	{
	case 'A':
	case 'a':
		printCalendarYear(year);
		break;
	case 'B':
	case 'b':
		break;
	case 'C':
	case 'c':

		break;
	default:
		cout << "Invalid Option\n";
		break;
	}
}

/*A Function that returns the index of the day
of the date- day/month/year
For e.g-

Index	 Day
0		 Sunday
1		 Monday
2		 Tuesday
3		 Wednesday
4		 Thursday
5		 Friday
6		 Saturday*/
int Calendar::dayNumber(int day, int month, int year)
{

	static int t[] = {0, 3, 2, 5, 0, 3, 5, 1,
					  4, 6, 2, 4};
	year -= month < 3;
	return (year + year / 4 - year / 100 +
			year / 400 + t[month - 1] + day) %
		   7;
}

/*
A Function that returns the name of the month
with a given month number

Month Number	 Name
0			 January
1			 February
2			 March
3			 April
4			 May
5			 June
6			 July
7			 August
8			 September
9			 October
10			 November
11			 December */
string Calendar::getMonthName(int monthNumber)
{
	string months[] = {"January", "February", "March",
					   "April", "May", "June",
					   "July", "August", "September",
					   "October", "November", "December"};

	return (months[monthNumber]);
}

/* A Function to return the number of days in
a month

Month Number	 Name	 Number of Days
0			 January	 31
1			 February 28 (non-leap) / 29 (leap)
2			 March	 31
3			 April	 30
4			 May		 31
5			 June	 30
6			 July	 31
7			 August	 31
8			 September 30
9			 October	 31
10			 November 30
11			 December 31

*/
int Calendar::numberOfDays(int monthNumber, int year)
{
	// January
	if (monthNumber == 0)
		return (31);

	// February
	if (monthNumber == 1)
	{
		// If the year is leap then February has
		// 29 days
		if (year % 400 == 0 ||
			(year % 4 == 0 && year % 100 != 0))
			return (29);
		else
			return (28);
	}

	// March
	if (monthNumber == 2)
		return (31);

	// April
	if (monthNumber == 3)
		return (30);

	// May
	if (monthNumber == 4)
		return (31);

	// June
	if (monthNumber == 5)
		return (30);

	// July
	if (monthNumber == 6)
		return (31);

	// August
	if (monthNumber == 7)
		return (31);

	// September
	if (monthNumber == 8)
		return (30);

	// October
	if (monthNumber == 9)
		return (31);

	// November
	if (monthNumber == 10)
		return (30);

	// December
	if (monthNumber == 11)
		return (31);
}

// Function to print the calendar of the given year
void Calendar::printCalendarYear(int year)
{
	cout << "         Calendar - " << year << "\n\n";
	int days;

	// Index of the day from 0 to 6
	int current = dayNumber(1, 1, year);

	// Iterate through all the months
	for (int i = 0; i < 12; i++)
	{
		days = numberOfDays(i, year);

		// Print the current month name
		cout << "\n -------------" << getMonthName(i) << "-------------\n";

		// Print the columns
		cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

		// Print appropriate spaces
		int k;
		for (k = 0; k < current; k++)
			cout << "     ";

		for (int j = 1; j <= days; j++)
		{
			cout << setw(5) << j;

			if (++k > 6)
			{
				k = 0;
				cout << "\n";
			}
		}

		if (k)
			cout << "\n";

		current = k;
	}
}
