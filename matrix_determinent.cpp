#include <iostream>
using namespace std;

// Function to get the cofactor matrix by removing row p and column q from a matrix of size n
void getCofactor(int matrix[10][10], int temp[10][10], int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            // Copying only those elements which are not in the given row and column
            if (row != p && col != q) {
                temp[i][j++] = matrix[row][col];

                // Row is filled, so move to the next row
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

// Recursive function to calculate determinant of matrix of size n
int determinant(int matrix[10][10], int n) {
    if (n == 1) {
        return matrix[0][0]; // Base case: if matrix contains a single element
    }

    int temp[10][10]; // To store cofactors
    int det = 0;      // Initialize determinant value
    int sign = 1;     // Store sign multiplier

    // Iterate for each element of the first row
    for (int f = 0; f < n; f++) {
        getCofactor(matrix, temp, 0, f, n); // Get the cofactor matrix
        det += sign * matrix[0][f] * determinant(temp, n - 1); // Recursive call
        sign = -sign; // Alternate sign for cofactor expansion
    }

    return det;
}

int main() {
    int n;
    int matrix[10][10];

    // Input size of the matrix
    cout << "Enter the size of the matrix (n): ";
    cin >> n;

    // Input matrix elements
    cout << "Enter elements of the " << n << "x" << n << " matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate the determinant
    int det = determinant(matrix, n);

    // Output the result
    cout << "Determinant of the matrix is: " << det << endl;

    return 0;
}
