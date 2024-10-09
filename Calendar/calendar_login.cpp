#include <iostream>
#include <string>

using namespace std;

class CalendarApp {
private:
    string username = "user"; // Predefined username
    string password = "pass"; // Predefined password

public:
    bool login(const string& inputUsername, const string& inputPassword) {
        return (inputUsername == username && inputPassword == password);
    }

    void displayCalendar() {
        cout << "Welcome to your calendar!" << endl;
        // Here you could implement more features related to the calendar.
    }
};

void calendar_login_init() {
    CalendarApp app;
    string inputUsername, inputPassword;

    cout << "Welcome to the Calendar Application!" << endl;

    // Prompt for username
    cout << "Enter username: ";
    getline(cin, inputUsername);

    // Prompt for password
    cout << "Enter password: ";
    getline(cin, inputPassword);

    // Attempt to login
    if (app.login(inputUsername, inputPassword)) {
        app.displayCalendar();
    }
    else {
        cout << "Invalid username or password. Please try again." << endl;
    }

    
}
