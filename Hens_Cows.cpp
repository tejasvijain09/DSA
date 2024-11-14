#include<iostream>
using namespace std;
int main()
{
    int heads,legs,cows,hens;
    cout<<"Enter the number of legs: ";
    cin>>legs;
    cout<<"Enter the number of heads: ";
    cin>>heads;
    // heads = cows + hens;
    // legs = (4*cows) + (2*hens);
    cows = (legs-(2*heads))/2;
    hens = heads - cows;
    
    if(cows<0 || hens<0){
        cout<<"Incorrect details entered.";
    }else{
    cout<<"Cows : "<<cows<<endl;
    cout<<"Hens: "<<hens;
    }
 return 0;
}