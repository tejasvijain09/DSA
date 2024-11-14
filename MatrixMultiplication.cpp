#include<iostream>
using namespace std;
int main()
{
    int r1,c1;
    cout<<"Enter the number of rows in the matrix 1: ";
    cin>>r1;
    cout<<"Enter the number of columns in the matrix 1: ";
    cin>>c1;
   int A [r1][c1]; 
   cout<<"Enter the elements of the matrix 1: "<<endl;
   for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cin>>A[i][j];
    }
   }
   
   int r2,c2;
    cout<<"Enter the number of rows in the matrix 2: ";
    cin>>r2;
    cout<<"Enter the number of columns in the matrix 2: ";
    cin>>c2;
   int B [r2][c2]; 
   cout<<"Enter the elements of the matrix 1: "<<endl;
   for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        cin>>B[i][j];
    }
   }
   if(c1!=r2){
    cout<<"Matrix multiplication not possible for this input.";
   }
   int C[r1][c2];
   for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        int value =0;
        for(int k=0;k<c1;k++){
            value+=A[i][k]*B[k][j];
        } // k<r2 is also correct
        C[i][j]=value;
    }
   }
   for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        cout<<C[i][j]<<" ";
    }cout<<endl;
   }
 return 0;
}