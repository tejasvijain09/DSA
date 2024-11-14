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
    for(int i=1;i<n;i++){
       int current = arr[i];
       int j=i-1;
        while(current<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
 cout<<endl<<"Sorted Array:   ";
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
 return 0;
    }