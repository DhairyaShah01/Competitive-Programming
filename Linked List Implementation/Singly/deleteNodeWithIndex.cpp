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

void deleteNode(Node** head_ref, int pos) {
    
    //If linked list is empty
    if(*head_ref == NULL) {
        cout << "Linked list is empty" << endl;
        return;
    }

    Node *temp = *head_ref;

    if(pos == 0) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    for(int i=0;temp != NULL && i<pos-1;i++){
        temp = temp->next;
    }

    if(temp == NULL || temp->next== NULL) {
        cout << "\n" << "Invalid index" << endl;
        return;
    }

    Node *next = temp->next->next;

    free(temp->next);

    temp->next = next;
}

int main() 
{
    Node* head = NULL; 
  
    push(&head, 7); 
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 2); 
    push(&head, 8); 
  
    printList(head); 
    deleteNode(&head, 7);
    cout << "\n";
    printList(head);
    return 0;
}