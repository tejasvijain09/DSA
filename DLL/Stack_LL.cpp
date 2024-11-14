#include<iostream>
using namespace std;
#define MAX 100
class Node{
    public:
    int data;
    Node * next;
    Node(int val): data(val), next(NULL){}
};
void push(Node* &top,int value){
    // Node* temp = top;
    Node* Nodeobj = new Node(value);
    if(top==NULL){
        top = Nodeobj;
        return;
    }
    Nodeobj->next = top;
    top = Nodeobj;
}
void pop(Node* &top){
    if(top==NULL){
        cout<<"No element is to be deleted."<<endl;
        return;
    }
    Node* temp = top;
    top = top -> next;
    delete(temp);
}
void printNode(Node* top){
     if (top == NULL) {
        cout << "Stack is empty." << endl;
        return;
    }
    while (top != NULL) {
        cout << top->data << " -> ";
        top = top->next;
    }
    cout << "NULL" << endl;
}

void deleteStack(Node*& top) {
    while (top != NULL) {
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    cout << "Stack memory released." << endl;
}

int main()
{
    Node* top = NULL;
    int choice, value;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display Stack\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(top, value);
                break;
            case 2:
                pop(top);
                break;
            case 3:
                cout << "Stack elements: ";
                printNode(top);
                break;
            case 4:
                deleteStack(top); // Free stack memory
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while(choice != 4);
    
    return 0;
}