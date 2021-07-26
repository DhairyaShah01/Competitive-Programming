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

int main() 
{
    Node *head = NULL;
    push(&head, 12);
    push(&head, 56);
    push(&head, 2);
    push(&head, 11);

    cout << "Linked list is" << endl;
    printList(head);
    return 0;
}