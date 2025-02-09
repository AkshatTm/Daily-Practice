#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_WORDS = 100;

int main() {
    ifstream inputFile("example.txt");
    string words[MAX_WORDS];
    int counts[MAX_WORDS] = {0};
    int wordCount = 0;
    string word;

    if (inputFile.is_open()) {
        while (inputFile >> word) {
            bool found = false;
            for (int i = 0; i < wordCount; i++) {
                if (words[i] == word) {
                    counts[i]++;
                    found = true;
                    break;
                }
            }
            if (!found && wordCount < MAX_WORDS) {
                words[wordCount] = word;
                counts[wordCount] = 1;
                wordCount++;
            }
        }
        inputFile.close();
    }

    for (int i = 0; i < wordCount; i++) {
        cout << words[i] << ": " << counts[i] << endl;
    }

    return 0;
}
