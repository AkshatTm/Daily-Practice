#include <iostream>
using namespace std;

int fibonacci(int n);

int main() {
    int n;

    // Ask the user which Fibonacci number they want
    cout << "Enter the position of the Fibonacci number you want: ";
    cin >> n;

    // Calculate and display the Fibonacci number
    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;

    return 0;
}

// Function to calculate nth Fibonacci number using recursion
int fibonacci(int n) {
    // Base cases: Fibonacci of 0 is 0, Fibonacci of 1 is 1
    if (n == 0) return 0;
    if (n == 1) return 1;

    // Recursively calculate the Fibonacci number
    return fibonacci(n - 1) + fibonacci(n - 2);
}
