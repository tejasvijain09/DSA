#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    int sum = ((n+1) * (n+2))/2;
    // cout<<"Sum: "<<sum;
    int arr[n];
    for(int i=0; i<n;i++){
        cout<<"Enter "<<i+1<<" Element: ";
        cin>>arr[i];
    }

    // cout<<"Sum: "<<sum<<endl;
    int sum_Array=0;
    for(int i=0;i<n;i++){
        sum_Array+=arr[i];
    }
    // cout<<"Sum of Array: "<<sum_Array;
    int missing = sum - sum_Array;
    cout<<"Missing Element : "<<missing;
 return 0;
}