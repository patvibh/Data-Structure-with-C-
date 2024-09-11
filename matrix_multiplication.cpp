#include <iostream>
using namespace std;

int main() {
    // Define the dimensions of the matrices
    int row1, col1, row2, col2;

    // Input dimensions for the first matrix
    cout << "Enter rows and columns for the first matrix: ";
    cin >> row1 >> col1;

    // Input dimensions for the second matrix
    cout << "Enter rows and columns for the second matrix: ";
    cin >> row2 >> col2;

    // Check if multiplication is possible (columns of first matrix == rows of second matrix)
    if (col1 != row2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 1;
    }

    // Declare the matrices
    int matrix1[row1][col1], matrix2[row2][col2], result[row1][col2];

    // Input elements of the first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input elements of the second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Initialize the result matrix with zeros
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

