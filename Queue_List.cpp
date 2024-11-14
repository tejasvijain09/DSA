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
class Queue{
    public:
    Node* front;
    Node* rear;
    Queue(){
        front = NULL;
        rear = NULL;
    }
    void enqueue(int val){
        Node* nodeobj = new Node(val);
        if(front == NULL){
            front = rear = nodeobj;
            return;
        }
        rear->next = nodeobj;
        rear = nodeobj;
    }
    int dequeue(){
        int result;
        if(front==NULL){
            cout<<"Queue is empty. Cannot dequeue."<<endl;
            return -1;
        }
        if(front == rear){
            Node* temp = front;
            result = temp->data;
            front = rear = NULL;
            delete(temp);
            return result;
        }
        Node* temp = front;
        front = temp->next;
        result = temp->data;
        delete(temp);
        return result;
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";
 return 0;
}