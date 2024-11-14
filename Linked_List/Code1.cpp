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
void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head -> next;
    }
}
int main()
{
    Node* head = NULL;
    head = new Node(10);
    head->next = new Node(20);
    head -> next -> next = new Node(30);
    printList(head);
 return 0;
}