#include <iostream>
#include <string>

int main() {
    // Prompt the user for their full name
    std::cout << "Please enter your full name:" << std::endl;
    std::string full_name;
    std::getline(std::cin, full_name); // Reading the full name including spaces

    // Prompt the user for their age
    std::cout << "Please enter your age:" << std::endl;
    int age;
    std::cin >> age;

    // Prompt the user for their favorite decimal number
    std::cout << "Please enter your favorite decimal number:" << std::endl;
    int decimal_number;
    std::cin >> decimal_number;

    // Printing the user's details
    std::cout << "\nHello, " << full_name << "! You are " << age << " years old." << std::endl;

    // Convert the decimal number to different formats and print
    std::cout << "Your favorite number in different representations is:" << std::endl;
    std::cout << "Decimal: " << decimal_number << std::endl;
    std::cout << "Binary: 0b";
    for (int i = 31; i >= 0; --i) { // Print binary using bitwise operators
        std::cout << ((decimal_number >> i) & 1);
    }
    std::cout << std::endl;
    std::cout << "Octal: 0" << std::oct << decimal_number << std::endl;
    std::cout << "Hexadecimal: 0x" << std::hex << decimal_number << std::endl;

    return 0;
}
