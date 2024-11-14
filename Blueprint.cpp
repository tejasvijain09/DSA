#include<iostream>
#include <string>
using namespace std;
class Student{
public:                   // private is default // another one (protected) 
    string name;
    int rollNo;
    string course;
    float marks;
    Student(string n, int r, string c, float m){
        name = n;
        rollNo = r;
        course = c;
        marks = m;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
    }
    void updateMarks(float newMarks){
        marks = newMarks;
    }
};
int main()
{
    Student student1("Alice", 101, "Computer Science", 85.5);
    Student student2("Bob", 102, "Electrical engineering", 90.0);
    cout << "Student 1 Details:" << endl;
    student1.display();
    cout << "\nStudent 2 Details:" << endl;
    student2.display();
    student1.updateMarks(88.0);
    cout << "\nUpdated Student 1 Details:" << endl;
    student1.display();
 return 0;
}