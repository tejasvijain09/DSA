#include <iostream>
using namespace std;

int largestPowerOfTwo(int num) {
    int power = 1;
    while (power <= num) {
        power <<= 1; // Left shift to get the next power of two
    }
    power >>= 1; // Shift back to get the largest power of two <= num
    return power;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int largestPower = largestPowerOfTwo(num);
    int toSubtract = num - largestPower;

    cout << "You need to subtract " << toSubtract << " from " << num 
         << " to reach the largest power of two (" << largestPower << ")." << endl;

    return 0;
}



#include <iostream>
using namespace std;

// Function to find the next power of 2 greater than or equal to num
int nextPowerOfTwo(int num) {
    int power = 1;
    while (power < num) {
        power <<= 1; // Keep left-shifting until power is greater than or equal to num
    }
    return power;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int nextPower = nextPowerOfTwo(num);
    int toAdd = nextPower - num;

    cout << "You need to add " << toAdd << " to " << num 
         << " to make it the next power of two (" << nextPower << ")." << endl;

    return 0;
}
