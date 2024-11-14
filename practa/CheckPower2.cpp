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
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int count = 0;
    while(!checkPowerOfTwo(num)){
        num++; // num--;     for subtraction case
        count++;
    }
    cout<<"Count :"<<count<<endl;
 return 0;
}