#include <iostream>
#include <string>
using namespace std;

string deleteWord(string str, string word) {
    size_t pos;
    while ((pos = str.find(word)) != string::npos) {
        str.erase(pos, word.length());
    }
    return str;
}

int main() {
    string str, word;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the word to delete: ";
    cin >> word;
    cout << "Result: " << deleteWord(str, word);
    return 0;
}