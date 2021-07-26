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

//Delete the first occurence of a given key in the linked list
void deleteNode(Node** head_ref, int key) {
    Node* temp = *head_ref; //Store head node
    Node* prev = NULL;

    //Check if head node itself contains the key
    if(temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        delete temp;
        return;
    }

    //Else search for the key to be deleted,
    //we also maintain previous as we need
    //to change prev->next
    while(temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    //if key was not present in linked list
    if(temp == NULL) {
        cout << "Element not found" << endl;
        return;
    }

    //Unlink the node from linked list
    prev->next = temp->next;

    //Free the memory
    delete temp; 
}

int main() 
{
    Node* head = NULL;

    push(&head,7);
    push(&head,1);
    push(&head,3);
    push(&head,2);

    printList(head);

    deleteNode(&head, 1);

    cout << "\n";
    printList(head);
    return 0;
}