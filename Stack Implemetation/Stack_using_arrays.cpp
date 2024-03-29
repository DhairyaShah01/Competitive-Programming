#include <iostream>

using namespace std;

#define MAX 1000

class Stack {
    int top;

public:
    int a[MAX];

    Stack() {
        top = -1;
    }

    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x){
    if(top >= (MAX-1)){
        cout << "Stack Overflow";
        return false;
    }
    else{
        a[++top] = x;
        return true;
    }
}

int Stack::pop(){
    if(top < 0){
        cout << "Stack Underflow";
        return 0;
    }
    else{
        return a[top--];
    }
}

int Stack::peek(){
    if(top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        return a[top];
    }
}

bool Stack::isEmpty(){
    return (top < 0);
}

int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " popped from stack" << endl;
    cout << "Is Stack empty? " << s.isEmpty() << endl;
    cout << s.peek() << " is the topmost element" << endl;
    return 0;
}
