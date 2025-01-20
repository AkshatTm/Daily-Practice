#include <iostream>
using namespace std;

// Function declarations
void inputMatrix(int rows, int cols, int matrix[10][10]);
void displayMatrix(int rows, int cols, int matrix[10][10]);
void multiplyMatrices(int r1, int c1, int matrix1[10][10], int r2, int c2, int matrix2[10][10], int result[10][10]);

int main() {
    int r1, c1, r2, c2;
    int matrix1[10][10], matrix2[10][10], result[10][10];

    // Input matrix dimensions
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;

    // Check if multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    // Input matrices
    inputMatrix(r1, c1, matrix1);
    inputMatrix(r2, c2, matrix2);

    // Multiply matrices
    multiplyMatrices(r1, c1, matrix1, r2, c2, matrix2, result);

    // Display result
    displayMatrix(r1, c2, result);

    return 0;
}

// Function definitions
void inputMatrix(int rows, int cols, int matrix[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplyMatrices(int r1, int c1, int matrix1[10][10], int r2, int c2, int matrix2[10][10], int result[10][10]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
