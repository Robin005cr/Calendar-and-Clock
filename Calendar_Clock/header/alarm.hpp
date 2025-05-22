/*
 * project   : https://github.com/Robin005cr/Calendar-and-Clock
 * file name : alarm.hpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */

#include <string>
#include <cstdint>
using namespace std;

class Alarm
{
private:
    uint8_t hour, minute;

public:
    void alarm_init();
    void wait_until(uint8_t target_hour, uint8_t target_minute);
};
