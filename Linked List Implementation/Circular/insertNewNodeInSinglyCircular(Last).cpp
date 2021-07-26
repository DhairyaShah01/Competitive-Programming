#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node {
    public:
        int data;
        Node* next;
};

//Insert a node in an empty list
Node* addToEmpty(Node* last, int data) {
    
    //function is only for empty list
    if(last != NULL) {
        return last;
    }

    //create a node
    Node* new_node = new Node();

    //assign data
    new_node->data = data;
    last = new_node;

    //As the list was empty,
    //we will link the node to itself
    new_node->next = last;

    return last;
}

Node* addBegin(Node* last, int data) {
    if(last == NULL) {
        return addToEmpty(last, data);
    }

    Node* new_node = new Node();

    new_node->data = data;

    new_node->next = last->next;
    last->next = new_node;

    return last;
}

Node* addEnd(Node* last, int data) {
    if(last == NULL) {
        return addToEmpty(last, data);
    }

    Node* new_node = new Node();

    new_node->data = data;

    new_node->next = last->next;
    last->next = new_node;
    last = new_node;

    return last;
}

Node* addAfter(Node* last, int data, int item) {
    
    if(last == NULL) {
        return NULL;
    }

    Node* new_node;
    Node* p;
    p = last->next;

    do
    {
        if(p->data == item) {
            new_node = new Node();

            new_node->data = data;

            new_node->next = p->next;

            p->next = new_node;

            if(p == last) {
                last = new_node;
            }
            return last;
        }
        p = p->next;
    } while(p != last->next);

    cout << "Given item not found" << endl;
    return last;
}

void traverse(Node* last) {
    Node* p;

    if(last == NULL) {
        cout << "Empty list" << endl;
        return;
    }

    p = last->next;

    do
    {
        cout << p->data << " ";
        p = p->next;
    }
    while(p != last->next);
}

int main() 
{

    Node* last = NULL;

    last = addToEmpty(last, 6);
    last = addBegin(last, 4);
    last = addBegin(last, 2);
    last = addEnd(last, 8);
    last = addEnd(last, 12);
    last = addAfter(last, 10, 8);

    traverse(last);

    return 0;
}