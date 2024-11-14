#include<iostream>
using namespace std;
class stMember{
    public:
    int val;
    stMember(int v=10):val(v){
        cout<<"Static Object created"<<endl;
    }
};
class A{
    public:
    static stMember s;
    A(){
        cout<<"A's constructor called"<<endl;
    }
};
stMember A::s=stMember(11);
int main()
{
    cout<<"accessing static member without creating the object."<<endl;
    cout<<A::s.val<<endl;
    cout<<"Creating object now: ";
    A obj1;
    cout<<"creating object now: ";
    A obj2;
    cout<<"Printing values from each object and classname."<<endl;
    cout<<"obj1.s.val: "<<obj1.s.val<<endl;
    cout<<"obj2.s.val: "<<obj2.s.val<<endl;
    cout<<"A::s.val: "<<A::s.val<<endl;
 return 0;
}