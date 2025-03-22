/*
 * project   : https://github.com/Robin005cr/Calendar-and-Clock
 * file name : state.hpp
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
enum class operationState
{
	DIGITAL_CLOCK = 1,
	TIMER,
	ALARM,
	GENERAL_CALENDAR,
	CALENDAR_LOGIN,
	EXIT
};