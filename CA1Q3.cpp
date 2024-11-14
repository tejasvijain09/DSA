// Sums of ith row and ith 
#include <iostream>
#include <vector>
using namespace std;
int sumOfRowCol(int N, int M, vector<vector<int> > A) {

    int validRange = min(N, M);
    
    // Check row sums and column sums for validity
    for (int i = 0; i < validRange; ++i) {
        int rowSum = 0, colSum = 0;
        
        // Calculate the sum of the i-th row
        for (int j = 0; j < M; ++j) {
            rowSum += A[i][j];
        }
        
        // Calculate the sum of the i-th column
        for (int j = 0; j < N; ++j) {
            colSum += A[j][i];
        }
        
        // Compare row sum and column sum
        if (rowSum != colSum) {
            return 0;  // If any row sum is not equal to the corresponding column sum
        }
    }
    
    return 1;  // All valid row sums are equal to the corresponding column sums
}
    int main() {
    int N, M;
    
    // Get the number of rows and columns from the user
    cout << "Enter the number of rows (N): ";
    cin >> N;
    cout << "Enter the number of columns (M): ";
    cin >> M;
    
    // Initialize an empty matrix
    vector<vector<int> > A;
    
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < N; ++i) {
        // Create a row vector
        vector<int> row;
        for (int j = 0; j < M; ++j) {
            int value;
            cin >> value;
            row.push_back(value);  // Add each element to the row
        }
        A.push_back(row);  // Add the row to the matrix
    }
    
    // Call the function and output the result
    int result = sumOfRowCol(N, M, A);
    
    if (result == 1) {
        cout << "All valid row sums are equal to the corresponding column sums.\n";
    } else {
        cout << "Not all valid row sums are equal to the corresponding column sums.\n";
    }
    
    return 0;
}
