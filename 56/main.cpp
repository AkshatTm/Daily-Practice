#include <iostream>
using namespace std;

void getValues(int *x, int *y);  // Function declaration

int main() {
    int a = 0, b = 0;

    cout << "Initial values: a = " << a << ", b = " << b << endl;

    getValues(&a, &b);  // Pass variables by reference using pointers

    cout << "Updated values: a = " << a << ", b = " << b << endl;

    return 0;
}

// Function definition
void getValues(int *x, int *y) {
    *x = 10;
    *y = 20;
}

