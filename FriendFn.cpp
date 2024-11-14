#include <iostream>
using namespace std;
class Student
{ 
    int roll; 
    string name;
    static string course;
public: 
Student(int r, string n){
roll = r; name = n;
}
void display() {
cout<<"Student Info"<<endl;
cout<<"Name = "<<name<<" roll = "<<roll<<" Course = "<<course<<endl;
}
static void modifycourse(string mn){
course = mn;
}
friend void fun(Student &s3);
};
string Student::course="CSF102";
void fun(Student &s3)
{
cout<<"Student Info by Fun"<<endl;
cout<<"Name = "<<s3.name<<" roll = "<<s3.roll<<" Course = "<<s3.course<<endl;
}
int main()
{
Student s1(101, "ABC");
s1.display();
Student s2(102, "CDE");
s2.display();

fun(s2);


return 0;
}