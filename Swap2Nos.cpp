#include<iostream>
using namespace std;
void swap1(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swap2(int &p, int &q){
    p = p+q;
    q = p-q;
    p = p-q;

}
void swap3(int &x,int &y){
    x = x*y;
    y = x/y;
    x = x/y;
}
void swap4(int &r, int &s){
    r = r^s;
    s = r^s;
    r = r^s;
}
void swap5(int* m , int* n){
    int temp = *m;
    *m = *n;
    *n = temp;
}
int main()
{
    int num1,num2;
    cout<<"Enter number 1: "<<endl;
    cin>>num1;
    cout<<"Enter number 2: "<<endl;
    cin>>num2;
    // swap4(num1,num2);
    swap5(&num1,&num2);
    cout<<"Num 1: "<<num1<<endl;
    cout<<"Num 2: "<<num2<<endl;
 return 0;
}