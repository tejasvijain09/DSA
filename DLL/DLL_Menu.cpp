#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertAtBeg(Node** head, int val){
    Node* nodeobj = new Node(val);
    if(*head == NULL){
        *head = nodeobj;
        return;
    }
    nodeobj->next = *head;
    (*head) -> prev = nodeobj;
    *head = nodeobj;
}
void insertAtEnd(Node** head, int val){
    Node* nodeobj = new Node(val);
    if(*head == NULL){
        *head = nodeobj;
    }else{
        Node* temp = *head;
        while(temp->next != NULL){
            temp = temp -> next;
        }
        temp -> next = nodeobj;
        nodeobj -> prev = temp;
    }
}
void deleteFromBeg(Node** head){
    if(*head == NULL){
        cout<<"No element to be deleted"<<endl;
        return;
    }
    Node* temp = *head;
    if(temp->next == NULL){
        *head = NULL;
        delete(temp);
        return;
    }
    *head = temp -> next;
    temp->next->prev = NULL;
    delete(temp);
}
void deleteFromEnd(Node** head){
    if(*head == NULL){
        cout<<"No element to be deleted"<<endl;
        return;
    }
    Node* temp = *head;
    if(temp->next == NULL){
        *head = NULL;
        delete(temp);
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete(temp);
}
void printList(Node* head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl; 
}
void printRevList(Node* head){
    if(head == NULL){
        cout<<"No element in the list";
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> prev;
    }
    cout<<endl;
}
int main(){
    Node * head = NULL;
    int choice;
    while(true){
        cout << "Menu:\n";
        cout << "1. Insert an element at the beginning\n";
        cout << "2. Insert an element at the end\n";
        cout << "3. Delete an element from the beginning\n";
        cout << "4. Delete an element from the End\n";
        cout << "5. Display linked list\n";
        cout << "6. Display Reverse linked list\n";
        cout << "7. Exit from program\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){

            case 1:
            int value;
            int x;
            cout<<"Enter the number of elements to be inserted: "<<endl;
            cin>>x;
            for(int i=0;i<x;i++){
                cout<<"Enter the value to insert: "<<endl;
                cin>>value;
                insertAtBeg(&head,value);
            }
            break;

            case 2:
            int valu;
            int y;
            cout<<"Enter the number of elements to be inserted: "<<endl;
            cin>>y;
            for(int i=0;i<y;i++){
                cout<<"Enter the value to insert: "<<endl;
                cin>>valu;
                insertAtEnd(&head,valu);
            }
            break;

            case 3:
            int z;
            cout<<"Enter the number of elements to be deleted: "<<endl;
            cin>>z;
            for(int i=0;i<z;i++){
                deleteFromBeg(&head);
            }
            break;

            case 4:
            int a;
            cout<<"Enter the number of elements to be deleted: "<<endl;
            cin>>a;
            for(int i=0;i<a;i++){
                deleteFromEnd(&head);
            }
            break;

            case 5:
            printList(head);
            break;

            case 6:
            printRevList(head);
            break;

            case 7:
            cout<<"Exiting the program."<<endl;
            return 0;
}
    }
}

Node* reverseLLRecursion(Node* &head){
    if((*head) == NULL || (*head)->next == NULL)
}