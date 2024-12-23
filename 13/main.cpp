#include <iostream>
#include <string>
#include <cmath> // For math operations like rounding
using namespace std;

int main() {
    // Variables to store input temperature and unit
    double inputTemp, convertedTemp;
    string unit;

    // Prompt user for input
    cout << "Enter the temperature: ";
    cin >> inputTemp;
    cout << "Enter the unit (C for Celsius, F for Fahrenheit): ";
    cin >> unit;

    // Check the input unit and perform conversion
    if (unit == "C" || unit == "c") {
        convertedTemp = (inputTemp * 9/5) + 32; // Convert Celsius to Fahrenheit
        cout << "Converted Temperature: " << round(convertedTemp) << " F" << endl;

        // Feedback based on thresholds
        if (inputTemp <= 10) {
            cout << "Feedback: Cold" << endl;
        } else if (inputTemp > 10 && inputTemp <= 25) {
            cout << "Feedback: Moderate" << endl;
        } else {
            cout << "Feedback: Hot" << endl;
        }
    } else if (unit == "F" || unit == "f") {
        convertedTemp = (inputTemp - 32) * 5/9; // Convert Fahrenheit to Celsius
        cout << "Converted Temperature: " << round(convertedTemp) << " C" << endl;

        // Feedback based on thresholds
        if (convertedTemp <= 10) {
            cout << "Feedback: Cold" << endl;
        } else if (convertedTemp > 10 && convertedTemp <= 25) {
            cout << "Feedback: Moderate" << endl;
        } else {
            cout << "Feedback: Hot" << endl;
        }
    } else {
        cout << "Invalid unit entered. Please use 'C' for Celsius or 'F' for Fahrenheit." << endl;
    }

    return 0;
}
