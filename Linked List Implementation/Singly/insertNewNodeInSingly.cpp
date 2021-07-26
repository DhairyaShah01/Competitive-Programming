#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node {
    public:
        int data;
        Node* next;
};

void printList(Node* n) {
    while(n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

//Insert at the beginning of the linked list
void push(Node** head_ref, int new_data) {
    
    //make  a node
    Node* new_node = new Node();

    //put the data
    new_node->data = new_data;

    //make next of new_node assigned as head
    new_node->next = *head_ref;

    //move the head to point to new node
    *head_ref = new_node;
}

//Insert a node after a given prev_node
void insertAfter(Node* prev_node, int new_data) {

    if(prev_node == NULL) {
        cout << "The previous node cannot be null" << endl;
    }
    //make  a node
    Node* new_node = new Node();

    //put the data
    new_node->data = new_data;

    //Make next of new node as next of previous node
    new_node->next = prev_node->next;

    //Move the next of previous node as new node
    prev_node->next = new_node;

    //We can't do the reverse because we will lose the
    //pointer to next of previous node in that case.
}

//Insert at the end of the linked list
void append(Node** head_ref, int new_data) {
    
    //make  a node
    Node* new_node = new Node();

    //put the data
    new_node->data = new_data;

    //The new node is going to be the last node so
    // it's next will be null
    new_node->next = NULL;

    //Use this to find the last node
    Node* last = *head_ref;

    //If the linked list is empty
    //make new node as head
    if(*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    //else traverse till the last node
    while(last->next != NULL) {
        last = last->next;
    }

    //Change the next of last node to new node
    last->next = new_node;
    return;
}

int main() 
{
    Node *head = NULL;
    append(&head,4);
    push(&head,2);
    push(&head,1);
    append(&head,5);
    insertAfter(head->next,3);
    printList(head);
    return 0;
}