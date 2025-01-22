#include <iostream>
using namespace std;

// Function declaration
int findDuplicate(int arr[], int size);

int main() {
    int size;

    // Get the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    // Create a fixed-size array
    int arr[size];

    // Input the array elements
    cout << "Enter the elements separated by spaces: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Find the duplicate
    int duplicate = findDuplicate(arr, size);

    // Output the result
    if (duplicate != -1) {
        cout << "The duplicate number is: " << duplicate << endl;
    } else {
        cout << "No duplicate found in the array." << endl;
    }

    return 0;
}

// Function definition to find the duplicate number
int findDuplicate(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1; // Indicates no duplicates found
}
