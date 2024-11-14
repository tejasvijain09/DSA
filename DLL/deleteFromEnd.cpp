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
}

int main()
{
    Node * head = NULL;
    deleteFromEnd(&head);
    printList(head);
 return 0;
}