#include <iostream>
using namespace std;

int main() {
    // Input the size of the array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Dynamically allocate memory for the original array
    int* arr = new int[n];

    // Input elements into the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    // Reverse the array using a pointer
    int* reversedArr = new int[n];
    for (int i = 0; i < n; i++) {
        *(reversedArr + i) = *(arr + (n - 1 - i));
    }

    // Find the maximum element using a pointer
    int maxElement = *arr; // Initialize maxElement with the first element
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > maxElement) {
            maxElement = *(arr + i);
        }
    }

    // Output the results
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << *(reversedArr + i) << " ";
    }
    cout << endl;

    cout << "Maximum Element: " << maxElement << endl;

    // Free the dynamically allocated memory
    delete[] arr;
    delete[] reversedArr;

    return 0;
}
