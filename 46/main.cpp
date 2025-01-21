#include <iostream>
using namespace std;

struct Complex {
    double real;
    double imaginary;
};

// Function to add two complex numbers
Complex addComplexNumbers(Complex num1, Complex num2);

int main() {
    Complex num1, num2, result;

    cout << "Enter the real and imaginary part of the first complex number: ";
    cin >> num1.real >> num1.imaginary;

    cout << "Enter the real and imaginary part of the second complex number: ";
    cin >> num2.real >> num2.imaginary;

    result = addComplexNumbers(num1, num2);

    cout << "The sum of the two complex numbers is: " 
         << result.real << " + " << result.imaginary << "i" << endl;

    return 0;
}

Complex addComplexNumbers(Complex num1, Complex num2) {
    Complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    return sum;
}
