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
void insertAtBeg(Node* &head, int value){
    Node* nodeobj = new Node(value);
    nodeobj->next = head;
    head = nodeobj;
}
void insertAtEnd(Node** head, int valu){
    Node* nodeobj = new Node(valu);
    if(*head == NULL){
        *head = nodeobj;
    }else{
        Node* temp = *head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = nodeobj;
    }
}
void insertAtLoc(Node* &head,int val, int pos){
    if(pos==0){
        insertAtBeg(head,val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;
    while(current_pos!=pos-1){
        temp = temp -> next;
        current_pos++;
    }
}
void deleteFromBeg(Node** head){
            // if(head == NULL){
               if(*head == NULL){
            cout<<"No element is to be deleted.";
            }else{
            // Node* temp = *head;
            // *head = temp -> next;
            *head = (*head) -> next;
            }
}
void deleteFromLast(Node** head){
    if(*head==NULL){
        cout<<"No element in the list.";
        return;
    }
    Node* temp = *head;
    if(temp->next==NULL){
        delete(temp);
        *head = NULL;
        return;
    }
    while(temp->next->next!=NULL){
        temp = temp -> next;
    }
    delete(temp->next);
    temp->next = NULL;
}
void deletefromLoc(Node** head, int k){
    if(k<1){
        cout<<"The position cannot be less than 1.";
        return;
    }
    Node* temp = *head;
    for(int i=1;i<k-1 && temp!= NULL;i++){
        temp = temp -> next;
    }
    if(temp == NULL){
        cout<<"The element at given position doesn't exist";
        return;
    }
    Node* x = temp -> next;
    temp -> next = x -> next;
    delete(x);
    if(*head == NULL){
        cout<<"No element to be deleted.";
        return;
    }
}

Node* reverseLL(Node* &head){
    Node* prevptr = NULL;
    Node* currptr = head;
    while(currptr!=NULL){
        Node* nextptr = currptr ->next;
        currptr -> next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    Node* new_head = prevptr;
    return new_head;
}
Node* reverseLLRecursion(Node* &head){
    if(head==NULL || head -> next == NULL){
        return head;
    }
    Node* new_head = reverseLLRecursion(head->next);
    head->next->next = head;
    head -> next = NULL;
    return new_head;
}

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        // cout<<endl;
        head = head->next;
    }
}
int main()
{
    Node * head = NULL;
    int choice, n,m;
    while(true){
        cout << "Menu:\n";
        cout << "1. Insert an element at the beginning\n";
        cout << "2. Insert an element at the end\n";
        cout << "3. Delete an element from the beginning\n";
        cout << "4. Delete an element from the End\n";
        cout << "5. Display linked list\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
            int value;
            cout << "Enter the number of element to be inserted: ";
            cin >> n;
            cout << "Enter value to insert at beginning: ";
            for(int i = 0; i < n; i++){
            cin >> value;
            insertAtBeg(head, value);
            }
            break;

            case 2:
            int valu;
            cout<<"Enter the number of elements to be inserted: ";
            cin>>n;
            cout << "Enter value to insert at end: ";
            for(int i=0;i<n;i++){
            cin >> valu;
            insertAtEnd(&head, valu);
            }
            break;

            case 4:
            int vl;
            cout<<"Enter the number of elements to be deleted: ";
            cin>>n;
            // cout<<"Enter the value to be deleted: ";
            for(int i=0;i<n;i++){
                // cin>>vl;
                deleteFromBeg(&head);
            }
            break;

            case 5:
            int vall;
            cout<<"Enter the number of elements to be deleted: ";
            cin>>n;
            for(int i=0;i<n;i++){
                deleteFromLast(&head);
            }
            case 8:
            cout << "Linked List: ";
            printList(head);
            break;

            case 9:
            cout << "Exiting the program.\n";
            return 0; // Exit the program 
            default:
            cout << "Invalid choice! Please try again.\n";

            case 6:
            int valu;
            cout<<"Enter the number of elements to be deleted: ";
            cin>>n;
            cout << "Enter value to insert at end: ";
            for(int i=0;i<n;i++){
            cin >> valu;
            deletefromLoc(&head,valu);
            break;
            }
            case 3:
            int value,posi;
            cout << "Enter the number of element to be inserted: ";
            cin >> n;
            cout << "Enter value to insert at beginning: ";
            for(int i = 0; i < n; i++){
            cin >> value;
            cin>>posi;
            insertAtLoc(head, value,posi);
            }
            break;

            case 7:
            Node * newHead =reverseLL(head);
            printList(newHead);
    }
 return 0;
}