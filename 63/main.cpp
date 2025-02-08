#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt", ios::app);
    if (file) {
        file << "Appended content to the file.\n";
        file.close();
    } else {
        cout << "Failed to open the file." << endl;
    }
    return 0;
}
