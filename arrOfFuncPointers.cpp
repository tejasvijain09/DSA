#include<iostream>
using namespace std;
void add(int a, int b){
    cout<<"Addition is: "<<a+b<<endl;
}
void subtract(int a , int b){
    cout<<"Subtraction is: "<<a-b<<endl;
}
void multiply(int a, int b){
    cout<<"Multiplication is: "<<a*b<<endl;
}
int main()
{
    // fun_ptr_arr is an array of function pointers
    void(*fun_ptr_arr[])(int,int)={add,subtract,multiply};
    unsigned int ch, a=15 , b=10;
    cout<<"Enter choice: 0 for add, 1 for subtract and 2 for multiply"<<endl;
    cin>>ch;
    if(ch>2){
        return 0;
    }
    (*fun_ptr_arr[ch])(a,b);
 return 0;
}