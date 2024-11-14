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
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl; 
}

int main()
{
    Node * head = NULL;
    deleteFromBeg(&head);
    printList(head);
 return 0;
}