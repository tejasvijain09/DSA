#include<iostream>
using namespace std;
int findGCD(int divisor, int dividend){
    if(divisor == 0){
        return dividend;
    }
    return findGCD(dividend % divisor, divisor);
}
int main()
{
    int a = 50;
    int b = 15;
    int result = findGCD(a,b);
    cout<<"GCD = "<<result<<endl;
 return 0;
}