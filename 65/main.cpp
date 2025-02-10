#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream sourceFile(__FILE__);

    if (sourceFile.is_open()) {
        string line;
        while (getline(sourceFile, line)) {
            cout << line << endl;
        }
        sourceFile.close();
    } else {
        cout << "Error opening the source file." << endl;
    }

    return 0;
}
