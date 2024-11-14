#include <iostream>
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

void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void printList(Node* head) {
    if (head == NULL ) {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int countElements(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

int linearSearch(Node* head, int key) {
    int pos = 0;
    Node* temp = head;
    while (temp != NULL) {
        pos++;
        if (temp->data == key) {
            return pos;  
        }
        temp = temp->next;
    }
    return -1;  
}

// Node* linearSearch(Node* head, int key) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         if (temp->data == key) {
//             return temp;  // Return the address of the node
//         }
//         temp = temp->next;
//     }
//     return nullptr;  // Element not found
// }


int main() {
    Node* head = nullptr;
    int choice, value, key;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Insert at beginning" << endl;
        cout << "2. Print the list" << endl;
        cout << "3. Count number of elements" << endl;
        cout << "4. Perform linear search" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insertAtBeginning(head, value);
                break;
            case 2:
                printList(head);
                break;
            case 3:
                cout << "Number of elements: " << countElements(head) << endl;
                break;
            case 4:
                cout << "Enter value to search: ";
                cin >> key;
                int result = linearSearch(head,key);
                if(result==-1){
                    cout<<"Element not found."<<endl;
                }else{
                    cout<<"Element found at "<<result<<" position"<<endl;
                }
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
