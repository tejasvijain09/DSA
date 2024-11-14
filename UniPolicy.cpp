#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    float marks;
    bool grace;
    Student* next;
    
    Student(string name,float marks){
        this->name = name;
        this->marks = marks;
        grace = false;
        next = NULL;
    }
};
void insertStudent(Student** head,string name,float marks){
    Student* nodeobj = new Student(name,marks);
    if(*head == NULL){
        *head = nodeobj;
    }else{
        Student* temp = *head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = nodeobj;
    }
}
void printList(Student* head){
    if(head==NULL){
        cout<<"No student in the list"<<endl;
    }else{
        while(head!=NULL){
        cout<<"Name: "<<head->name<<" "<<endl;
        cout<<"Marks: "<<head->marks<<" "<<endl;
        if(head->grace){
            cout<<head->name<<" Passed with grace."<<endl;
        }else{
            if(head->marks<30){
                cout<<"Failed"<<endl;
            }else{
                cout<<"Passed without grace"<<endl;
            }
            // cout<<head->name<<"Did not passed with grace."<<endl;
        }
        head = head->next;
    }
    cout<<"All students are listed above."<<endl;
    }
}
void applyUniPolicy(Student* head){
    while(head!=NULL){
        if(head->marks<30){
            head->marks = 30;
            head->grace = true;
        }
        head=head->next;
    }
        cout << "Grace policy applied to eligible students." << endl;
}
int main()
{
    Student* head = NULL;
    int choice,num;
    string N;
    float M;
    while(true){
        cout<<"\nMenu\n";
        cout<<"1. Insert the name and marks of the student"<<endl;
        cout<<"2. Display Student Information."<<endl;
        cout<<"3. Apply University Policy."<<endl;
        cout<<"4. Exit."<<endl;
        cin>>choice;

        switch(choice){
        case 1:
        cout<<"Enter the name of the student: "<<endl;
        cin>>N;
        cout<<"Enter the marks of the student: "<<endl;
        cin>>M;
        insertStudent(&head,N,M);
        break;
        
        case 2:
        printList(head);
        break;

        case 3:
        applyUniPolicy(head);
        break;

        case 4:
        cout<<"Exiting program...."<<endl;
        return 0;

        default:
        cout<<"Invalid choice! Please try again."<<endl;
    }
    }
 return 0;
}
