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

void deleteNode(Node** head_ref, Node* del) {
    
    if(*head_ref == NULL || del == NULL) {
        return;
    }

    //If node to be deleted is head node
    if(*head_ref == del) {
        *head_ref = del->next;
    }

    //Change previous of the next node only if
    //node to be deleted is not the last node
    if(del->next != NULL) {
        del->next->prev = del->prev;
    }

    //Change next of the previous node only if
    //node to be deleted is not the first node
    if(del->prev != NULL) {
        del->prev->next = del->next;
    }

    free(del);
    return;
}

int main() 
{
    Node* head = NULL;

    push(&head, 2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);

    cout << "Original list" << endl;
    printList(head);

    deleteNode(&head, head);
    deleteNode(&head, head->next);
    deleteNode(&head, head->next);

    cout << "\nModified list" << endl;
    printList(head);

    return 0;
}