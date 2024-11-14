#include<iostream>
using namespace std;

bool checkPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }
    // Corrected condition: (n & (n-1)) should be compared with 0
    else if ((n & (n - 1)) == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (checkPowerOfTwo(num)) {
        cout << num << " is a power of two." << endl;
    } else {
        cout << num << " is not a power of two." << endl;
    }

    return 0;
}
// bool checkPowerOfTwo(int n) {
//     if (n <= 0) {
//         return false;  // Only positive numbers can be powers of two
//     }
    
//     while (n % 2 == 0) {  // While n is divisible by 2
//         n = n / 2;        // Keep dividing n by 2
//     }
    
//     return (n == 1);  // If n becomes 1, it's a power of two
// }




#include <iostream>
using namespace std;

int main() {
    int num;
    
    // Input the number
    cout << "Enter a number: ";
    cin >> num;
    
    // If the number is less than or equal to 0, it is not a power of two
    if (num <= 0) {
        cout << "It is not a power of two." << endl;
    } else {
        // Keep dividing the number by 2 while it is divisible by 2
        while (num % 2 == 0) {
            num = num / 2;
        }

        // If after division the number becomes 1, it is a power of two
        if (num == 1) {
            cout << "It is a power of two." << endl;
        } else {
            cout << "It is not a power of two." << endl;
        }
    }

    return 0;
}
