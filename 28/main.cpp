#include <iostream>
using namespace std;

// Yo! This function calculates factorial using recursion.
int calculateFactorial(int n) {
    // Alright, base case to stop recursion. If n is 0 or 1, return 1.
    if (n == 0 || n == 1) {
        return 1;
    }
    // Otherwise, call the function again but with n-1. Recursive magic happening here!
    return n * calculateFactorial(n - 1);
}

int main() {
    int num;
    
    // Asking the user for a number to find its factorial.
    cout << "Enter a positive integer: ";
    cin >> num;

    // Quick check to make sure the number isn’t negative. Can’t deal with that here!
    if (num < 0) {
        cout << "Factorial of a negative number doesn't exist. Try again with a positive one!" << endl;
    } else {
        // Boom! Calling the recursion function and showing off the result.
        cout << "Factorial of " << num << " is " << calculateFactorial(num) << endl;
    }

    return 0;
}
