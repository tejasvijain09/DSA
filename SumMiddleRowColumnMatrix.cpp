#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input the dimensions of the matrix
    cout << "Enter the number of rows and columns (rows cols): ";
    cin >> rows >> cols;

    // Check if rows and cols are both positive
    if (rows <= 0 || cols <= 0) {
        cout << "Number of rows and columns must be positive." << endl;
        return 1;
    }

    // Initialize the matrix
    int matrix[rows][cols];

    // Input the matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Determine the index of the middle row and middle column
    int midRow = rows / 2;
    int midCol = cols / 2;

    // Calculate the sum of the middle row
    int sumRow = 0;
    for (int j = 0; j < cols; ++j) {
        sumRow += matrix[midRow][j];
    }

    // Calculate the sum of the middle column
    int sumCol = 0;
    for (int i = 0; i < rows; ++i) {
        sumCol += matrix[i][midCol];
    }

    // Output the results
    cout << "Sum of the middle row: " << sumRow << endl;
    cout << "Sum of the middle column: " << sumCol << endl;

    return 0;
}
