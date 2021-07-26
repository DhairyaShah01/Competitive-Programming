#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node {

public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

class Queue {
    
public:
    Node *front, *rear;
    Queue() {
        front = rear = NULL;
    }

    void enqueue(int x) {

        Node* new_node = new Node(x);

        if(rear == NULL) {
            front = rear = new_node;
            return;
        }

        rear->next = new_node;
        rear = new_node;
    }

    void dequeue() {

        if(front == NULL) {
            return;
        }

        Node* temp = front;
        front = front->next;

        if(front == NULL) {
            rear = NULL;
        }

        delete(temp);
    }
};

int main() 
{
    Queue q; 
    q.enqueue(10); 
    q.enqueue(20); 
    q.dequeue(); 
    q.dequeue(); 
    q.enqueue(30); 
    q.enqueue(40); 
    q.enqueue(50); 
    q.dequeue(); 
    cout << "Queue Front : " << (q.front)->data << endl; 
    cout << "Queue Rear : " << (q.rear)->data;
    return 0;
}