#include<iostream>
using namespace std;
class Node{
    public:
    int data; Node* Next;
    Node(int val){
        data = val;
        Next = NULL;
    }
};
void printList(Node* head){
        while(head!= NULL){
            cout<<head -> data <<"->";
            head = head -> Next;
        }
    }
    void insertAtEnd(Node** head, int value){
        Node* nodeobj = new Node(value);
        if(*head == NULL){
            *head = nodeobj;
        }else{
            Node* temp = *head;
            while(temp->Next!=NULL){
                temp = temp->Next;
            }
        }
    }
    void insertAtBeg(Node** head, int value){
        Node * nodeobj = new Node(value);
        nodeobj -> Next = * head;
        *head = nodeobj;
    }
int main()
{
    Node * head = NULL;
    // head = new Node(10);
    // head -> Next = new Node(20);
    // head -> Next -> Next = new Node(30);
    // printList(head);
    // insertAtEnd(&head,20);
    insertAtBeg(&head, 10);
    insertAtBeg(&head, 20);
    insertAtEnd(&head,30);
    insertAtEnd(&head,40);
    insertAtEnd(&head,50);
    printList(head);
 return 0;
}