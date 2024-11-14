#include<iostream>
using namespace std;
void fun(int a){
    cout<<"Value of a is: "<<a<<endl;
}
int main()
{
    // fun_ptr is a pointer to function fun()
    void(*fun_ptr)(int)= fun; // & removed

    // The above line is equivalent of following two
    // void(*fun_ptr)(int);

    //fun_ptr=&fun;
    
    //invoking fun() using fun_ptr
    (*fun_ptr)(10); // same as fun_ptr(10)
 return 0;
}