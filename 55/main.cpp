#include <iostream>
#include <string>
using namespace std;

string removeExtraSpaces(string s) {
    string result = "";
    bool spaceFound = false;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            result += s[i];
            spaceFound = false;
        } else if (!spaceFound) {
            result += ' ';
            spaceFound = true;
        }
    }

    if (!result.empty() && result.back() == ' ') result.pop_back();
    return result;
}

int main() {
    string s;
    getline(cin, s);
    cout << removeExtraSpaces(s);
    return 0;
}
