#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 100; // Maximum size of the array
    int numbers[MAX_SIZE];    // Array to store numbers
    int count = 0;            // Counter for valid numbers
    int input;                // User input
    int stopValue = -999;     // Value to terminate the input loop
    int sum = 0;              // Sum of valid numbers

    cout << "Enter numbers to calculate the average (enter -999 to stop):" << endl;

    // Loop to take input from the user
    while (count < MAX_SIZE) {
        cin >> input;

        // Break the loop if the stop value is entered
        if (input == stopValue) {
            break;
        }

        // Skip negative numbers
        if (input < 0) {
            cout << "Negative numbers are skipped." << endl;
            continue;
        }

        // Store the valid input in the array and update the sum
        numbers[count] = input;
        sum += input;
        count++;
    }

    // Check if valid numbers were entered
    if (count == 0) {
        cout << "No valid numbers were entered." << endl;
    } else {
        // Calculate and display the average
        double average = static_cast<double>(sum) / count;
        cout << "The average of the entered numbers is: " << average << endl;
    }

    return 0;
}
