#include <iostream>
#include <string>
using namespace std;


// All functions declared above
void registerUser(string &storedUsername, string &storedPassword);
bool loginUser(const string &storedUsername, const string &storedPassword);


int main() {
    string storedUsername, storedPassword;
    int choice;
    bool isLoggedIn = false;

    do {
        // Display menu options
        cout << "\n===== Login and Registration System =====\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Menu functionality
        switch (choice) {
            case 1:
                registerUser(storedUsername, storedPassword);
                break;
            case 2:
                if (!storedUsername.empty() && !storedPassword.empty()) {
                    isLoggedIn = loginUser(storedUsername, storedPassword);
                } else {
                    cout << "No user registered. Please register first.\n";
                }
                break;
            case 3:
                cout << "Exiting the system. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please select 1, 2, or 3.\n";
        }
    } while (choice != 3);

    return 0;
}

// Function to register a user
void registerUser(string &storedUsername, string &storedPassword) {
    cout << "Enter a username: ";
    cin >> storedUsername;
    cout << "Enter a password: ";
    cin >> storedPassword;
    cout << "Registration successful!\n";
}


// Function to log in a user
bool loginUser(const string &storedUsername, const string &storedPassword) {
    string username, password;
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    if (username == storedUsername && password == storedPassword) {
        cout << "Login successful! Welcome back.\n";
        return true;
    } else {
        cout << "Invalid username or password. Please try again.\n";
        return false;
    }
}