#include<iostream>
using namespace std;

void toh(int n, char src, char dest, char aux) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << src << " to rod " << dest << endl;
        return;
    }

    toh(n - 1, src, aux, dest);  // Move n-1 disks from src to aux
    cout << "Move disk " << n << " from rod " << src << " to rod " << dest << endl;
    toh(n - 1, aux, dest, src);  // Move n-1 disks from aux to dest
}

int main() {
    int N = 3;  // Number of disks
    toh(N, 'A', 'C', 'B');  // Initial call with correct rods: A (source), C (destination), B (auxiliary)
    return 0;
}
