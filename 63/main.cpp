#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ifstream inputFile("numbers.txt");
    ofstream evenFile("even.txt");
    ofstream oddFile("odd.txt");
    ofstream primeFile("prime.txt");

    int number;
    while (inputFile >> number) {
        if (number % 2 == 0) evenFile << number << " ";
        else oddFile << number << " ";
        if (isPrime(number)) primeFile << number << " ";
    }

    inputFile.close();
    evenFile.close();
    oddFile.close();
    primeFile.close();

    return 0;
}
