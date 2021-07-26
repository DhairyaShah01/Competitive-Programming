#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

//By making enqueue opearation costly
class Queue1 {
public:
    stack<int> s1,s2;

    void enqueue(int x) {

        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int dequeue() {
        
        if(s1.empty()) {
            cout << "Queue is empty" << endl;
            exit(0);
        }

        int x = s1.top();
        s1.pop();
        return x;
    }
};

//By making dequeue operation costly
class Queue2 {
public:
    stack<int> s1,s2;

    void enqueue(int x) {
        s1.push(x);
    }

    int dequeue() {

        if(s1.empty() && s2.empty()) {
            cout << "Queue is empty" << endl;
            exit(0);
        }

        if(s2.empty()) {
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        int x = s2.top();
        s2.pop();
        return x;
    }

};

int main() 
{
    Queue1 q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    cout << "Queue 1: " << endl;
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;

    Queue2 q2;

    q2.enqueue(1);
    q2.enqueue(2);
    q2.enqueue(3);
    cout << "Queue 2: " << endl;
    cout << q2.dequeue() << endl;
    cout << q2.dequeue() << endl;
    cout << q2.dequeue() << endl;
    return 0;
}