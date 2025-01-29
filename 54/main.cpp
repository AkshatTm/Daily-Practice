#include <iostream>
using namespace std;

// Function declarations
int determinant2x2(int matrix[2][2]);
int determinant3x3(int matrix[3][3]);

int main() {
    int size;
    cout << "Enter the size of the matrix (2 or 3): ";
    cin >> size;

    if (size == 2) {
        int matrix[2][2];
        cout << "Enter the elements of the 2x2 matrix row by row:\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> matrix[i][j];
            }
        }
        cout << "Determinant of the 2x2 matrix: " << determinant2x2(matrix) << endl;
    } else if (size == 3) {
        int matrix[3][3];
        cout << "Enter the elements of the 3x3 matrix row by row:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> matrix[i][j];
            }
        }
        cout << "Determinant of the 3x3 matrix: " << determinant3x3(matrix) << endl;
    } else {
        cout << "Invalid size. Only 2x2 or 3x3 matrices are supported.\n";
    }

    return 0;
}

// Function to calculate the determinant of a 2x2 matrix
int determinant2x2(int matrix[2][2]) {
    return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
}

// Function to calculate the determinant of a 3x3 matrix
int determinant3x3(int matrix[3][3]) {
    int det = 0;
    det = matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1])) 
        - matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0])) 
        + matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0]));
    return det;
}
