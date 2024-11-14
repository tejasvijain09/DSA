// Rotate square matrix by 90  in anti-clockwise direction
#include <iostream>
#include <vector>
using namespace std;

void rotateby90(vector<vector<int> >& matrix, int n) {
    // Rotate matrix logic here
    
    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]); // Swap elements to transpose
        }
    }
    // Step 2: Reverse each column
    for (int col = 0; col < n; col++) {
        int start = 0;
        int end = n - 1;

        while (start < end) {
            // Swap elements in the current column
            swap(matrix[start][col], matrix[end][col]);

            // Move the pointers
            start++;
            end--;
        }
    }
}

int main() {
    int rows, cols;
    
    // Get the number of rows and columns from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    
    vector<vector<int> > matrix;

    // Input matrix elements
    for (int i = 0; i < rows; i++) {
        vector<int> row; // Create a new row vector
        cout << "Enter " << cols << " elements for row " << i + 1 << ": ";
        
        for (int j = 0; j < cols; j++) {
            int value;
            cin >> value;
            row.push_back(value); // Add element to the current row
        }
        
        matrix.push_back(row); // Add the completed row to the matrix
    }
    int n = matrix.size();
    
    rotateby90(matrix, n);
    
    // Display the rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// void reverseColumn(vector<vector<int>>& matrix, int col, int n) {
//     int start = 0;
//     int end = n - 1;

//     // Use two-pointer approach to reverse the column
//     while (start < end) {
//         // Swap elements at the start and end pointers
//         swap(matrix[start][col], matrix[end][col]);

//         // Move the pointers
//         start++;
//         end--;
//     }
// }

// void reverseAllColumns(vector<vector<int>>& matrix, int n) {
//     // Loop through each column
//     for (int col = 0; col < n; col++) {
//         // Reverse the current column using the two-pointer approach
//         reverseColumn(matrix, col, n);
//     }
// }

// int main() {
//     vector<vector<int>> matrix = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     int n = matrix.size();
    
//     reverseAllColumns(matrix, n);
    
//     // Display the matrix after reversing all columns
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

