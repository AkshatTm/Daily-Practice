#include <iostream>
#include <sys/stat.h>
using namespace std;

int main() {
    struct stat fileStat;
    if (stat("example.txt", &fileStat) == 0) {
        cout << "File Size: " << fileStat.st_size << " bytes" << endl;
        cout << "Permissions: " << fileStat.st_mode << endl;
        cout << "Last Modified: " << fileStat.st_mtime << endl;
    } else {
        cout << "Unable to get file properties." << endl;
    }
    return 0;
}

