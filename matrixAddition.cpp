#include<iostream>
using namespace std;
int main()
{
    int r1,c1;
    cout<<"Enter the number of rows in the matrix 1: ";
    cin>>r1;
    cout<<"Enter the number of columns in the matrix 1: ";
    cin>>c1;
    int r2,c2;
    cout<<"Enter the number of rows in the matrix 2: ";
    cin>>r2;
    cout<<"Enter the number of columns in the matrix 2: ";
    cin>>c2;
    int r3 = r2,c3=c2;
    int z [r3][c3];

    if(r1 != r2 && c1!=c2 ){
        cout<<"Number of rows and columns in matrix 1 and matrix 2 should be equal.";
     }else{
   
   int x [r1][c1]; 
   cout<<"Enter the elements of the matrix 1: "<<endl;
   for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cin>>x[i][j];
    }
   }
   
   
   int y [r2][c2]; 
   cout<<"Enter the elements of the matrix 1: "<<endl;
   for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        cin>>y[i][j];
    }
   }
   for(int i=0;i<r3;i++){
    for(int j=0;j<c3;j++){
        
        z[i][j]=x[i][j]+y[i][j];
    
    
    
   }
   }
     }
    cout<<"Printing sum of elements of matrix 1 and matrix 2."<<endl;
   for(int i=0;i<r3;i++){
    for(int j=0;j<c3;j++){
        cout<< z[i][j]<<" ";
    }
    cout<<endl;
   }
 return 0;
}