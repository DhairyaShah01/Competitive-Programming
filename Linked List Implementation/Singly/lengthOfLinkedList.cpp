#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node {
    public:
        int data;
        Node* next;
};

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

//Iterative approach
int getCountIter(Node* head) {
    int count=0;
    Node* temp = head;
    while(temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

int getCountRecur(Node* head) {
    if(head == NULL) {
        return 0;
    }

    else return 1 + getCountRecur(head->next);
}

int main() 
{
    Node* head = NULL;
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 1); 
    push(&head, 2); 
    push(&head, 1);

    cout << "Iterative: " << getCountIter(head) << endl;
    cout << "Recursive: " << getCountRecur(head) << endl;
    return 0;
}