#include <iostream>
using namespace std;

#define MAX 5 // Defining maximum size for the stack

class Stack {
public:
    int top;       // Index of the top element
    int arr[MAX];  // Array to store stack elements

    Stack() {
        top = -1;  // Initializing stack as empty
    }

    // Function to push an element into the stack
    void pushInStack(int val) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow!" << endl; // Check if the stack is full
        } else {
            top++;
            arr[top] = val;
            cout << val << " pushed into the stack." << endl;
        }
    }

    // Function to pop an element from the stack
    int popStack() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl; // Check if the stack is empty
            return -1;
        } else {
            int result = arr[top];
            top--;
            cout << result << " popped from the stack." << endl;
            return result;
        }
    }

    // Function to print all elements in the stack
    void printStack() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack Elements (LIFO order): ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Push
                cout << "Enter value to push: ";
                cin >> value;
                s.pushInStack(value);
                break;
            case 2: // Pop
                s.popStack();
                break;
            case 3: // Display
                s.printStack();
                break;
            case 4: // Exit
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4); // Loop until the user chooses to exit

    return 0;
}
