#include <iostream>
using namespace std;

int main() {
    int num = 10;  // Declare an integer variable
    int *ptr = &num;  // Create a pointer to store the address of num

    // Print values and addresses
    cout << "Value of num (using variable): " << num << endl;
    cout << "Value of num (using pointer): " << *ptr << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of pointer (address stored in ptr): " << ptr << endl;

    *ptr = 20;  // Modify num using the pointer
    cout << "\nAfter modifying num through the pointer:" << endl;
    cout << "Value of num (using variable): " << num << endl;
    cout << "Value of num (using pointer): " << *ptr << endl;

    return 0;
}
