/*
 * project   : https://github.com/Robin005cr/Calendar-and-Clock
 * file name : timer.cpp
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
#include <cstdlib>
#include <chrono>
#include <thread>
#include "timer.hpp"
// #include <unistd.h>
// #include <Windows.h>
using namespace std;
void timer_init(char option)
{
    switch (option)
    {
    case 'A':
    case 'a':
        // normalTime();
        break;
    case 'B':
    case 'b':
        // railwayTime();
        break;
    case 'C':
    case 'c':
        countDownTimer();
        break;
    default:
        cout << "Invalid Option\n";
        break;
    }
}
void countDownTimer()
{
    short minutes, seconds;
    int totalTime;

    // Input validation for seconds
    do
    {
        cout << "Enter seconds (0-59): ";
        cin >> seconds;
    } while (seconds < 0 || seconds > 59);

    // Input validation for minutes
    do
    {
        cout << "Enter minutes (0-59): ";
        cin >> minutes;
    } while (minutes < 0 || minutes > 59);

    // Calculate total time in seconds
    totalTime = minutes * 60 + seconds;

    // Countdown loop
    for (int i = totalTime; i > 0; i--)
    {
        // Clear the console
        system("clear"); // For Linux/Unix
        // system("cls"); // Uncomment for Windows

        // Calculate remaining time
        int remainingMinutes = i / 60;
        int remainingSeconds = i % 60;

        // Display the remaining time
        cout << "The time remaining is "
             << remainingMinutes << ":"
             << (remainingSeconds < 10 ? "0" : "") << remainingSeconds << endl;

        // Sleep for one second
        this_thread::sleep_for(chrono::seconds(1));
    }
}