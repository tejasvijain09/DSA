#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtEnd(Node** head , int value){
    Node * nodeobj = new Node(value);
    if(*head == NULL){
        *head = nodeobj;
    }else{
        Node * temp = * head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = nodeobj;
    }
}
void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head -> next;
    }
}
int main()
{
    Node* head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    printList(head);
 return 0;
}