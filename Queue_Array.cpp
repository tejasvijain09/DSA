#include<iostream>
using namespace std;

#define SIZE 5  // Define the maximum size of the queue
int a[SIZE];
int front = -1;
int rear = -1;

// Function to add an element to the queue
void enqueue(int val) {
    if (front == 0 && rear == SIZE - 1) {
        cout << "Overflow!" << endl;
        return;
    }
    if (front != 0 && rear == SIZE - 1) {
        for (int i = front; i <= rear; i++) {
            a[i - front] = a[i];
        }
        rear = rear - front;
        front = 0;
    }
    if (front == -1) {
        front++;
    }
    rear++;
    a[rear] = val;
    cout << "Enqueued: " << val << endl;
}

// Function to remove an element from the queue
void dequeue() {
    if (front == -1) {
        cout << "Underflow!" << endl;
        return;
    }
    int result;
    if (front == rear) {
        result = a[front];
        front = rear = -1;
        cout << "Element deleted: " << result << endl;
        return;
    }
    result = a[front];
    front++;
    cout << "Element deleted: " << result << endl;
}

// Function to display the queue elements
void display() {
    if (front == -1) {
        cout << "Queue is empty!" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, value;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
