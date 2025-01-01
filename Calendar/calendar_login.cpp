/*
* project   : https://github.com/Robin005cr/Calendar-and-Clock
* file name : calendar_login.cpp
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
#include <string>
#include <unordered_map>
#include <functional>  // For std::hash
#include <fstream>     // For file I/O
#include "calendar_login.hpp"
using namespace std;

class CalendarApp 
{
private:
    unordered_map<string, size_t> users; // Stores usernames and hashed passwords
    const string filename = "user_data.txt"; // File to store user data

    size_t hashPassword(const string& password) 
    {
        // Hashing function for passwords
        return hash<string>{}(password);
    }

    void saveUserData() 
    {
        ofstream file(filename);
        if (file.is_open()) 
        {
            for (const auto& user : users) 
            {
                file << user.first << " " << user.second << endl;
            }
            file.close();
        }
        else 
        {
            cout << "Error: Unable to save user data." << endl;
        }
    }

    void loadUserData() 
    {
        ifstream file(filename);
        if (file.is_open()) 
        {
            string username;
            size_t hashedPassword;
            while (file >> username >> hashedPassword) 
            {
                users[username] = hashedPassword;
            }
            file.close();
        }
        else 
        {
            cout << "No previous user data found. Starting fresh." << endl;
        }
    }

public:
    CalendarApp() 
    {
        loadUserData(); // Load user data when the app starts
    }

    ~CalendarApp() 
    {
        saveUserData(); // Save user data when the app closes
    }

    bool registerUser(const string& newUsername, const string& newPassword) 
    {
        if (users.find(newUsername) != users.end()) 
        {
            cout << "Username already exists. Please choose another one." << endl;
            return false;
        }
        users[newUsername] = hashPassword(newPassword);
        cout << "User registered successfully!" << endl;
        saveUserData(); // Save after registration
        return true;
    }

    bool login(const string& inputUsername, const string& inputPassword) 
    {
        auto it = users.find(inputUsername);
        if (it != users.end() && it->second == hashPassword(inputPassword)) 
        {
            return true; // Successful login
        }
        return false; // Invalid username or password
    }

    void displayCalendar() 
    {
        cout << "Welcome to your calendar!" << endl;
        // More calendar features could be added here
    }
};
void calendar_login_init(char option)
{
   
    switch (option)
    {
    case 'A':
    case 'a':
        //signUpLogIN();
        break;
    case 'B':
    case 'b':
        //railwayTime();
        break;
    case 'C':
    case 'c':
        // railwayTimeConverter();
        break;
    default:
        cout << "Invalid Option\n";
        break;

    }
}

void signUpLogIN() 
{
    CalendarApp app;
    string inputUsername, inputPassword;
    int choice;

    cout << "Welcome to the Calendar Application!" << endl;

    while (true) 
    {
        cout << "1. Register\n2. Login\n3. Exit\n ";
        cout << "Select option Register if you are a new user or Login if you are an existing user" << endl;
        cout << "Choose an option:";
        cin >> choice;

        if (choice == 1) 
        {
            // Registration process
            cout << "Enter new username: ";
            cin >> inputUsername;

            cout << "Enter new password: ";
            cin >> inputPassword;

            app.registerUser(inputUsername, inputPassword);
        }
        else if (choice == 2) 
        {
            // Login process
            cout << "Enter username: ";
            cin >> inputUsername;

            cout << "Enter password: ";
            cin >> inputPassword;

            if (app.login(inputUsername, inputPassword)) 
            {
                app.displayCalendar();
            }
            else 
            {
                cout << "Invalid username or password. Please try again." << endl;
            }
        }
        else if (choice == 3) 
        {
            cout << "Exiting the application. Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}


