#include <iostream>
#include <cmath> // For abs function
using namespace std;

// Function to update the values of a and b
void update(int *a, int *b) {
    int sum = *a + *b;          // Calculate the sum
    int diff = abs(*a - *b);    // Calculate the absolute difference

    *a = sum;                   // Update a with the sum
    *b = diff;                  // Update b with the absolute difference
}

int main() {
    int a, b;

    // Input two integers
    cin >> a >> b;

    // Call the update function with pointers to a and b
    update(&a, &b);

    // Output the updated values of a and b
    cout << a << endl << b << endl;

    return 0;
}
