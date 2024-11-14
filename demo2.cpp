#include<iostream>
using namespace std;
int main()
{   int r1,c1;
    cout<<"Enter the number of rows for Matrix 1: ";
    cin>>r1;
    cout<<"Enter the number of columns for Matrix 1: ";
    cin>>c1;
    
    int r2,c2;
    cout<<"Enter the number of rows for Matrix 2: ";
    cin>>r2;
    cout<<"Enter the number of columns for Matrix 2: ";
    cin>>c2;

    if(c1!=r2){
        cout<<"Matrix multiplication not possible.";
    }else{
    int arr1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"Enter element "<<"["<<i<<"]"<<"["<<j<<"]"<<"for Matrix 1: ";
            cin>>arr1[i][j];
        }
    }

    int arr2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<"Enter element "<<"["<<i<<"]"<<"["<<j<<"]"<<"for Matrix 2: ";
            cin>>arr2[i][j];
        }
    }
    int arr3[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value = 0;
            for(int k=0;k<r2;k++){
                value+=arr1[i][k]*arr2[k][j];
            }
            arr3[i][j]=value;
        }
    }

    cout<<"Printing the resultant Matrix.../"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    }
 return 0;
}
