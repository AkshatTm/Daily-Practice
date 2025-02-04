#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("example.txt");
    file << "Hello, this is a sample file.\n";
    file << "Writing to files in C++ is easy!\n";
    file.close();
    cout << "File created and written successfully!";
    return 0;
}