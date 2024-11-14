#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cout<<"Enter "<<i+1<<" Element: ";
        cin>>arr[i];
    }
    int even_count=0;
    int odd_count=0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            even_count++;
        }else{
            odd_count++;
        }
    }
    cout<<"Even Count: "<<even_count<<endl;
    cout<<"Odd Count: "<<odd_count;
 return 0;
}