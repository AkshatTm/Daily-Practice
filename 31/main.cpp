#include <iostream>
#include <string>
using namespace std;

// Function declaration
void countCharacters(const string &input);

int main() {
    string input;

    // Take input from the user
    cout << "Enter a string: ";
    getline(cin, input);

    // Call the function to count characters
    countCharacters(input);

    return 0;
}

// Function definition
void countCharacters(const string &input) {
    int letters = 0, spaces = 0, digits = 0, others = 0;

    // Loop through each character in the string
    for (char c : input) {
        if (isalpha(c)) { // Check if the character is an alphabet
            letters++;
        } else if (isdigit(c)) { // Check if the character is a digit
            digits++;
        } else if (isspace(c)) { // Check if the character is a space
            spaces++;
        } else { // For all other characters
            others++;
        }
    }

    // Output the results
    cout << "The number of characters in the string is: " << input.length() << endl;
    cout << "The number of alphabets are: " << letters << endl;
    cout << "The number of digits are: " << digits << endl;
    cout << "The number of spaces are: " << spaces << endl;
    cout << "The number of other characters are: " << others << endl;
}
