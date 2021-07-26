#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node {
    public:
        int data;
        Node* next;
};

//Traversal of Singly Linked list
void printList(Node* n) {
    while(n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

//This is an example with 3 nodes
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

    second->data = y;
    second->next = third;

    third->data = z;
    third->next = NULL;

    //Printing the Singly linked list
    printList(head);

    return 0;
}