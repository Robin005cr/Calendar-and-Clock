/*
 * project   : https://github.com/Robin005cr/Calendar-and-Clock
 * file name : alarm.cpp
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
#include <chrono>
#include <thread>
#include <ctime>
#include"alarm.hpp"
using namespace std;
void Alarm::wait_until(int target_hour, int target_minute)
{
    while (true)
    {
        auto now = chrono::system_clock::now();
        time_t current_time = chrono::system_clock::to_time_t(now);
        tm *local_time = localtime(&current_time);

        if (local_time->tm_hour == target_hour && local_time->tm_min == target_minute)
        {
            cout << "\a⏰ ALARM! It's " << target_hour << ":"
                 << (target_minute < 10 ? "0" : "") << target_minute << "!" << endl;
            break;
        }

        this_thread::sleep_for(chrono::seconds(30)); // Check every 30 seconds
    }
}
void Alarm::alarm_init()
{
    cout << "Set alarm time (HH MM, 24-hour format): ";
    cin >> hour >> minute;

    cout << "Alarm set for " << hour << ":"
         << (minute < 10 ? "0" : "") << minute << endl;

    wait_until(hour, minute);
}