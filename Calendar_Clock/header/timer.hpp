/*
 * project   : https://github.com/Robin005cr/Calendar-and-Clock
 * file name : timer.hpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
class Timer
{
private:
	short minutes, seconds;
	uint8_t totalTime;

public:
	void timer_init(char option);
	void infiniteTimer();
	void stopWatch();
	void countDownTimer();
};
