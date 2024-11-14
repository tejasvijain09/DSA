#include<iostream>
using namespace std;
class Distance{
int km;
public:
Distance():km(0){}
Distance(int metres){
    km = metres/1000;
}
operator int(){
    return km*1000;
}
void display(){
    cout<<km;
}
};
int main()
{
    Distance d1,d2;
    int m;
cout<<"Enter distance in metres: ";
cin>>m;
Distance(m);
d1 = m;
int k;
cout<<"Enter distance in kilometres: ";
cin>>k;
k = d2;
d1.display();
d2.display();
 return 0;
}