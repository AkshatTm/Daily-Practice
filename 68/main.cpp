#include <iostream>
#include <sys/stat.h>
using namespace std;

int main() {
    char name[100];
    cout << "Enter file or directory name: ";
    cin >> name;

    struct stat info;
    if (stat(name, &info) == 0) {
        cout << "Exists!" << endl;
    } else {
        cout << "Does not exist!" << endl;
    }

    return 0;
}
