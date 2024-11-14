#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findGcd(int divisor, int dividend, int *x, int *y) {
        if (divisor == 0) {
            *x = 0;
            *y = 1;
            return dividend;
        }
        int x1, y1;
        int ans = findGcd(dividend % divisor, divisor, &x1, &y1);
        *x = y1 - (dividend / divisor) * x1;
        *y = x1;
        return ans;
    }

    vector<int> gcd(int divisor, int dividend) {
        int x, y;
        int gcd = findGcd(divisor, dividend, &x, &y);
        std::vector<int> result;
    result.push_back(gcd);
    result.push_back(x);
    result.push_back(y);
    return result;
    }
};

int main() {
    Solution sol;
    int divisor = 30, dividend = 50;
    vector<int> result = sol.gcd(divisor, dividend);
    
    cout << "GCD: " << result[0] << ", x: " << result[1] << ", y: " << result[2] << endl;

    // Verification
    cout << "Verification: " << divisor * result[1] + dividend * result[2] << " == " << result[0] << endl;
    
    return 0;
}
