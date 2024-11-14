#include <iostream>
#include <vector>
using namespace std;

int nthFibonacci(int n) {
    if (n <= 1) return n;

    // Initialize the transformation matrix
    vector<vector<int>> mat1 = {{1, 1}, {1, 0}};
    vector<vector<int>> mat2 = {{1, 1}, {1, 0}};

    // Function to perform matrix multiplication and return result in mat1
    auto multiply = [&](vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        int x = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0];
        int y = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
        int z = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
        int w = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];

        mat1[0][0] = x;
        mat1[0][1] = y;
        mat1[1][0] = z;
        mat1[1][1] = w;
    };

    // Perform matrix exponentiation to raise mat1 to the power of (n - 1)
    int exponent = n - 1;
    while (exponent > 1) {
        if (exponent % 2 != 0) {
            multiply(mat1, mat2);
        }
        multiply(mat2, mat2);
        exponent /= 2;
    }

    // Return the nth Fibonacci number from the top-left cell of the matrix
    return mat1[0][0];
}

int main() {
    int n = 5;
    int result = nthFibonacci(n);
    cout << result << endl;
    return 0;
}
