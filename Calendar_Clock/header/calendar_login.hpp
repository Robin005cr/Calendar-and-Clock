/*
 * project   : https://github.com/Robin005cr/Calendar-and-Clock
 * file name : calendar_login.hpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
#include <unordered_map>
#include<string>
#include <functional> // For std::hash
#include <fstream>
using namespace std;
class CalendarApp
{
private:
    unordered_map<string, size_t> users;     // Stores usernames and hashed passwords
    const string filename = "user_data.txt"; // File to store user data
    
    size_t hashPassword(const string& password);
    void saveUserData();
    void loadUserData();
     

public:
    CalendarApp();
    ~CalendarApp();
    bool registerUser(const string& newUsername, const string& newPassword);
    bool login(const string& inputUsername, const string& inputPassword);
    void displayCalendar();
    void calendar_login_init(char option);
    void signUpLogIN();
    void meetingScheduler();
    void eventLeaveBlocker();
    void taskReminderAlert();
    
};