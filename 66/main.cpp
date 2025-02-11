#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("example.txt");
    ofstream outputFile("output.txt");
    char ch;

    if (inputFile && outputFile) {
        while (inputFile.get(ch)) {
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - 'a' + 'A';
            } else if (ch >= 'A' && ch <= 'Z') {
                ch = ch - 'A' + 'a';
            }
            outputFile.put(ch);
        }
        inputFile.close();
        outputFile.close();
        cout << "Text conversion complete. Check output.txt." << endl;
    } else {
        cout << "Error opening files." << endl;
    }
    return 0;
}
