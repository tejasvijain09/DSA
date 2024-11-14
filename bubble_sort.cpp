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
    cout<<"Unsorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<endl<<"Sorted Array:   ";
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
 return 0;
}