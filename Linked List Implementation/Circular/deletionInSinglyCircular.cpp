#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node {
    public:
        int data;
        Node* next;
};

//Traversal
void printList(Node* first) {
    
    Node* temp = first;

    if(first != NULL) {
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != first);
        
    }
}

//Insert at the beginning
void push(Node** head_ref, int data) {
    
    Node* temp = *head_ref;

    Node* new_node = new Node();

    new_node->data = data;
    new_node->next = *head_ref;

    if(*head_ref != NULL) {
        while(temp->next != *head_ref) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    else{
        new_node->next = new_node;
    }

    *head_ref = new_node;

}

void deleteNode(Node** head, int key) {
    
    if(*head == NULL) {
        return;
    }

    if((*head)->data == key && (*head)->next == *head) {
        free(*head);
        *head = NULL;
        return;
    }

    Node *last = *head;
    Node* d;

    if((*head)->data == key) {

        while(last->next != *head) last = last->next;

        last->next = (*head)->next;
        free(*head);
        *head = last->next;
    }

    while(last->next != *head && last->next->data != key) {
        last = last->next;
    }

    if(last->next->data == key) {
        d = last->next;
        last->next = d->next;
        free(d);
    }

    else{
        cout << "Key not found" << endl;
    }
}

int main() 
{
    Node* head = NULL;
    
    push(&head, 2);
    push(&head, 5);
    push(&head, 7);
    push(&head, 8);
    push(&head, 10);

    cout << "Before deletion" << endl;
    printList(head);

    deleteNode(&head, 7);

    cout << "\nAfter deletion" << endl;
    printList(head);
    return 0;
}