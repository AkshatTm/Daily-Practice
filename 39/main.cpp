#include <iostream>
#include <cmath>
using namespace std;

// Function for addition
double add(double a, double b) {
    return a + b;
}

// Function for subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function for multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function for division
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

// Function for power calculation
double power(double base, double exp) {
    return pow(base, exp);
}

// Function for square root
double squareRoot(double num) {
    if (num < 0) {
        cout << "Error: Square root of negative number is not possible." << endl;
        return -1;
    }
    return sqrt(num);
}

// Main calculator function
void calculator() {
    int choice; // User's menu choice
    double num1, num2; // Inputs for calculations
    char cont = 'y'; // To continue using the calculator

    while (cont == 'y' || cont == 'Y') {
        // Displaying menu options
        cout << "\n--- Scientific Calculator ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Power" << endl;
        cout << "6. Square Root" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Addition
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                // Subtraction
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                // Multiplication
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                // Division
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                // Power calculation
                cout << "Enter the base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << power(num1, num2) << endl;
                break;
            case 6:
                // Square root calculation
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << squareRoot(num1) << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

        // Asking user if they want to perform another calculation
        cout << "Do you want to perform another operation? (y/n): ";
        cin >> cont;
    }

    cout << "Thank you for using the calculator. Goodbye!" << endl;
}

// Main function
int main() {
    calculator();
    return 0;
}
