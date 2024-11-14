#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string a,b,c;
    cout << "Enter the aadhar number: ";
    cin>>a;
    cout << "Enter the PAN number: ";
    cin>>b;
    cout << "Enter the phone number: ";
    cin>>c;
    // string aa = a.substr(a.length() - 4); 
     string aa = a.substr(8,4); 
    string bb = b.substr(5,4);
    string cc = c.substr(3,4);
    string pass = aa + "-" + bb + "-" + cc;
    // string hass = aa+bb+cc;
    // cout<<hass;
    cout<<"Your password is"<<pass<<endl;
 return 0;
}