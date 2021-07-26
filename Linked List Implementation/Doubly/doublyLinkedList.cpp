#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;
};

//Traversal of Doubly Linked list
void printList(Node* n) {

    Node* last;

    //Forward Traversal
    cout << "Forward traversal" << endl;
    while(n != NULL) {
        cout << n->data << " ";
        last = n;
        n = n->next;
    }

    cout << "\n";
    //Backward Traversal
    cout << "Backward Traversal" << endl;
    while(last != NULL) {
        cout << last->data << " ";
        last = last->prev;
    } 
}

int main() 
{
    int x=1,y=2,z=3;
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = x;
    head->next = second;
    head->prev = NULL;

    second->data = y;
    second->next = third;
    second->prev = head;

    third->data = z;
    third->next = NULL;
    third->prev = second;

    printList(head);

    return 0;
}