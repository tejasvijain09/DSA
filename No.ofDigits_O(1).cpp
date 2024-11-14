#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    int d =  log10(num) + 1 ;
    cout<<"Number of digits: "<<d;
 return 0;
}
// int d = log10(num) + 1;