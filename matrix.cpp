#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows in the matrix : ";
    cin>>r;
    cout<<"Enter the number of columns in the matrix : ";
    cin>>c;
   int x [r][c]; 
   cout<<"Enter the elements of the matrix : "<<endl;
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>x[i][j];
    }
   }
    cout<<"Printing the elements of the Matrix. ";
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<x[i][j]<<" ";
    }
    cout<<endl;
   }
 return 0;
}