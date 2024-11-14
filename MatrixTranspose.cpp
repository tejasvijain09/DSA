#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];
    int transpose[cols][rows];

    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i]; // why not transposed[i][j] = matrix[j][i] ??
        }
    }

    cout << "\nTransposed Matrix:" << endl;
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// transpose by swapping the values to save the memory
