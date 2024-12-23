#include <iostream>

int main(){
    int number1 = 15; // Decimal Numbers
    int number2 = 017; // Octal Number :: denoted by a 0 before
    int number3 = 0x0f; // Hexadecimal Number :: denoted by a 0x before
    int number4 = 0b00001111; // Binary Number :: denoted by a 0b before

    std::cout << "Number 1:" << number1 << std::endl;
    std::cout << "Number 2:" << number2 << std::endl;
    std::cout << "Number 3:" << number3 << std::endl;
    std::cout << "Number 4:" << number4 << std::endl;
}