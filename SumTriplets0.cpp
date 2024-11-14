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
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                }
            }
        }
    }
 return 0;
}