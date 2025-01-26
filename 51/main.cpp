#include <iostream>
#include <cstring>
using namespace std;

void reverseString(const char* str) {
    const char* ptr = str; // Pointer to traverse the string
    int length = strlen(str); // Get string length
    const char* endPtr = str + length - 1; // Pointer to the last character

    // Print the reversed string using pointer arithmetic
    while (endPtr >= ptr) {
        cout << *endPtr; // Dereference to get the character
        endPtr--; // Move the pointer backward
    }
    cout << endl;
}

int main() {
    char input[100]; // Array to store the input string
    cout << "Enter a string: ";
    cin.getline(input, 100); // Get user input

    cout << "Reversed string: ";
    reverseString(input); // Call the reverse function
    return 0;
}
