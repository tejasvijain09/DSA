#include<iostream>
using namespace std;
class base;
class anotherClass{
    public:
    void memberFunction(base& obj);
};
class base{
    private:
    int private_variable;
    protected:
    int protected_variable;
    public:
    base() : private_variable(10), protected_variable(20) {}
    friend void anotherClass::memberFunction(base& obj);
};
void anotherClass::memberFunction(base& obj){
        cout<<"Private variable"<<obj.private_variable<<endl;
        cout<<"Protected variable"<<obj.protected_variable<<endl;
    }
int main()
{
    base obj;
    anotherClass anotherObj;
    anotherObj.memberFunction(obj);
 return 0;
}