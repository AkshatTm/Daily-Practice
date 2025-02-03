#include <iostream>
using namespace std;

int sumEvenOdd(int start, int end, bool isEven) {
    if (start > end) return 0;
    if (isEven && start % 2 == 0) return start + sumEvenOdd(start + 1, end, isEven);
    if (!isEven && start % 2 != 0) return start + sumEvenOdd(start + 1, end, isEven);
    return sumEvenOdd(start + 1, end, isEven);
}

int main() {
    int start, end;
    bool isEven;
    cout << "Enter start and end: ";
    cin >> start >> end;
    cout << "Enter 1 for even, 0 for odd: ";
    cin >> isEven;
    cout << "Sum: " << sumEvenOdd(start, end, isEven);
    return 0;
}