#include <iostream>
#include <string>
// Fn written for the sum
int addNumbers(int e, int f){
    int result = e + f;
    return result;
}
int main(){
    // Taking Inputs Full Name i.e. Name with spaces that takes whole line
    std::cout << "Please Type Ur Full Name" << std::endl;
    std::string full_name;
    std::getline(std::cin,full_name);
    // Taking Inputs Integers for sum
    int a;
    int b;
    std::cout << "Please Enter 1st Number:" << std::endl;
    std::cin >> a;
    std::cout << "Please Enter 2nd Number:" << std::endl;
    std::cin >> b;
    // Printing the outputs
    std::cout << "Ur Full Name:" << full_name << std::endl;
    std::cout << "1st Number:" << a << std::endl;
    std::cout << "2nd Number:" << b << std::endl;
    std::cout << "Sum just by a+b:" << a+b << std::endl;
    std::cout << "Sum using fn:" << addNumbers(a,b) << std::endl;
    std::cerr << "Error Message" << std::endl;
    std::clog << "Log Message" << std::endl;
}


