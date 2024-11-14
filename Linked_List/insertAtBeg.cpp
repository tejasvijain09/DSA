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
void insertAtBeg(Node** head , int value){
    Node * nodeobj = new Node(value);
    nodeobj->next = *head;
    *head = nodeobj;
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
    insertAtBeg(&head, 10);
    insertAtBeg(&head, 20);
    insertAtBeg(&head, 30);
    printList(head);
 return 0;
}