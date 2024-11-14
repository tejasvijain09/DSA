#include<iostream>
using namespace std;
int factorial(int num){
    if(num==0){
        return 1;
    }
    return num*factorial(num-1);
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int r;
    cout<<"Enter the value of r: ";
    cin>>r;
    cout<<"Value of ncr is: "<<(factorial(n))/(factorial(r)*factorial(n-r));
 return 0;
}