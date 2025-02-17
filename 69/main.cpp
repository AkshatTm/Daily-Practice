#include <iostream>
#include <filesystem>
using namespace std;
namespace fs = filesystem;

void listFiles(const fs::path& dir) {
    for (const auto& entry : fs::directory_iterator(dir)) {
        cout << entry.path().string() << endl;
        if (fs::is_directory(entry.status())) {
            listFiles(entry.path());
        }
    }
}

int main() {
    string path;
    cin >> path;
    listFiles(path);
    return 0;
}
