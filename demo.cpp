#include<iostream>
using namespace std;
void abc(int x){
    if(x<0){
        return;
    }
    abc(x-1);
    cout<<x<<endl;
}
int main()
{
    abc(5);
 return 0;
}