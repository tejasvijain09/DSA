#include<iostream>
using namespace std;
class Solution{
public:
    // Constants
    const int MOD = 1000000007;
    
    // Function to calculate (N^R) % MOD
    long long power(int N, int R) {
        if (R == 0)
            return 1; // Base case: N^0 = 1
        long long half = power(N, R / 2) % MOD; // Recursive call to calculate half power
        long long result = (half * half) % MOD;  // Square the half result and take modulo
        if (R % 2 != 0) // If R is odd, multiply by N one more time
            result = (result * N) % MOD;
        return result;
    }
};
int main() {
    Solution sol;
    int N = 12;
    int R = 21; // Reverse of 12
    cout << sol.power(N, R) << endl; // Output will be (12^21) % 1000000007
    return 0;
}
