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

//Insert at the beginning of the linked list
void push(Node** head_ref, int new_data) {

    //make a new node
    Node* new_node = new Node();

    //put the data
    new_node->data = new_data;

    //make previous of new node as NULL
    //and next as head
    new_node->prev = NULL;
    new_node->next = *head_ref;

    //change prev of head as new node
    if((*head_ref) != NULL) {
        (*head_ref)->prev = new_node;
    }

    //move the head to point to new node
    (*head_ref) = new_node;
}

//Insert after a given previous node
void insertAfter(Node* prev_node, int new_data) {
    if(prev_node == NULL) {
        cout << "Previous node cannot be null" << endl;
        return;
    }

    //make a new node
    Node* new_node = new Node();

    //put the data
    new_node->data = new_data;

    //set the next of new node as next of previous node
    new_node->next = prev_node->next;

    //set the next of previous node as new node
    prev_node->next = new_node;

    //set the previous of new node as previous node
    new_node->prev = prev_node;

    //change the previous of new node's next node
    if(new_node->next != NULL) {
        new_node->next->prev = new_node;
    }
}

//insert at the end of the list 
void append(Node** head_ref, int new_data) {

    //make a new node
    Node* new_node = new Node();

    //put the data
    new_node->data = new_data;

    //new node will be the last node so
    //we will set it's next as null
    new_node->next = NULL;

    //if linked list is empty, make the new node as head
    if(*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    //make a node to store the last node
    Node* last = *head_ref;
    while(last->next != NULL) {
        last = last->next;
    }

    //set next of last node as new node
    last->next = new_node;

    //set the previous of new node as last node
    new_node->prev = last;

    return;
}

void insertBefore(Node** head_ref, Node* next_node, int new_data) {
    if(next_node == NULL){
        cout << "NExt node cannot be null" << endl;
    }

    //make a mew node
    Node* new_node = new Node();

    //put the data
    new_node->data = new_data;

    //make previous of new node as previous of next node
    new_node->prev = next_node->prev;

    //make previous of next node as new node
    next_node->prev = new_node;

    //make next of new node as next node
    new_node->next = next_node;

    //change next of new node's previous node
    if(new_node->prev != NULL) {
        new_node->prev->next = new_node;
    }

    //if previous of new node is null
    //then it will be the new head node
    else{
        (*head_ref) = new_node;
    }
}

int main() 
{

    /* Start with the empty list */
    Node* head = NULL; 
 
    // Insert 6. So linked list becomes 6->NULL 
    append(&head, 6); 
 
    // Insert 7 at the beginning. So 
    // linked list becomes 7->6->NULL 
    push(&head, 7); 
 
    // Insert 1 at the beginning. So 
    // linked list becomes 1->7->6->NULL 
    push(&head, 1); 
 
    // Insert 4 at the end. So linked 
    // list becomes 1->7->6->4->NULL 
    append(&head, 4); 
 
    // Insert 8, after 7. So linked 
    // list becomes 1->7->8->6->4->NULL 
    insertAfter(head->next, 8); 
 
    printList(head); 
    return 0;
}