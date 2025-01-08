#include <iostream>
using namespace std;

// Recursive function to calculate GCD
int gcdRecursive(int a, int b) {
    if (b == 0)
        return a; // Base case
    return gcdRecursive(b, a % b); // Recursive call
}

// Iterative function to calculate GCD
int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void calculateGCD() {
    int num1, num2, choice;
    
    // Taking input from the user
    cout << "Enter two numbers to find their GCD: ";
    cin >> num1 >> num2;

    cout << "Choose method:\n1. Recursive\n2. Iterative\nYour choice: ";
    cin >> choice;

    if (choice == 1) {
        // Recursive GCD
        cout << "GCD (Recursive) of " << num1 << " and " << num2 << " is: " << gcdRecursive(num1, num2) << endl;
    } else if (choice == 2) {
        // Iterative GCD
        cout << "GCD (Iterative) of " << num1 << " and " << num2 << " is: " << gcdIterative(num1, num2) << endl;
    } else {
        cout << "Invalid choice! Please select 1 or 2." << endl;
    }
}

int main() {
    calculateGCD(); // Call the GCD calculation function
    return 0;
}
