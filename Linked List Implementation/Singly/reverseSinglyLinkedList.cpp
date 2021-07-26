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

Node* reverseIter(Node* head_ref){
    Node* prev = NULL;
    Node* curr = head_ref;
    Node* next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* reverseRecur(Node* head_ref) {
    
    if(head_ref == NULL || head_ref->next==NULL) {
        return head_ref;
    }

    Node* rest = reverseRecur(head_ref->next);
    head_ref->next->next = head_ref;
    head_ref->next = NULL;

    return rest;

}

int main() 
{
    Node* head = NULL;
    push(&head,20);
    push(&head,4);
    push(&head,15);
    push(&head,85);

    printList(head);
    cout << "\n";
    head = reverseIter(head);

    printList(head);

    head = reverseRecur(head);
    cout << "\n";

    printList(head);
    return 0;
}