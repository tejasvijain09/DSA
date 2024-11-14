#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the matrix
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    int matrix[n][n];  // Fixed size for simplicity

    // Input the matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Print the original matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Rotate the matrix by 90 degrees clockwise
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            // Swap elements at (i, j) and (j, i)
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Reverse each row
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            // Swap elements at (i, j) and (i, n-j-1)
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n-j-1];
            matrix[i][n-j-1] = temp;
        }
    }

    // Reverse each row using two indices      // Two pointer approach
for (int row = 0; row < n; ++row) {
    int start = 0;           // Start index
    int end = n - 1;         // End index
    while (start < end) {
        // Swap elements at start and end
        int temp = matrix[row][start];
        matrix[row][start] = matrix[row][end];
        matrix[row][end] = temp;
        ++start;  // Move start index to the right
        --end;    // Move end index to the left
    }
}


    // Print the rotated matrix
    cout << "Matrix after 90 degree rotation:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
