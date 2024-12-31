#include <iostream>
#include <cstdlib> // For rand()
#include <string>  // For string class

using namespace std;

// Function to generate a random character
char generateRandomChar(string charset) {
    int index = rand() % charset.size();
    return charset[index];
}

int main() {
    // Define character sets
    string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string numbers = "0123456789";
    string symbols = "!@#$%^&*()_+-=<>?";

    // Password generation
    string password = "";

    // Ensure the first character is always a letter
    password += generateRandomChar(letters);

    // Generate remaining 7 characters
    for (int i = 1; i < 8; i++) {
        int choice = rand() % 3; // Randomly choose between letters, numbers, and symbols
        if (choice == 0) {
            password += generateRandomChar(letters);
        } else if (choice == 1) {
            password += generateRandomChar(numbers);
        } else {
            password += generateRandomChar(symbols);
        }
    }

    // Display the generated password
    cout << "Generated Password: " << password << endl;

    return 0;
}
