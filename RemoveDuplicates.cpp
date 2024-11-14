#include<iostream>
using namespace std;
int main()
{
    int a[]={1,1,1,1,2,2,2,3,3,3,3,3,4,4,4,8,8,8,9,10,10,10,25};
    int i=0;
    for(int j=1;j<sizeof(a)/sizeof(a[0]);j++){
        if(a[j]!=a[i]){
            a[i+1]=a[j];
            i++;
        }
    }
    i=i+1;
    cout<<"Number of elements= "<<i<<endl;
    for(int j=0;j<i;j++){
        cout<<a[j]<<" ";
    }
 return 0;
}