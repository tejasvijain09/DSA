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
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl; // Indicate the end of the list
}
int main()
{
    Node* head = NULL;
    insertAtBeg(&head,10);
    printList(head);
 return 0;
}
