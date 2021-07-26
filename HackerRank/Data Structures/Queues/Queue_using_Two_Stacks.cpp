#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    stack<int> front,rear;
    int t;
    cin >> t;
    while(t-- > 0) {
        int op,x;
        cin >> op;
        if(op == 1) {
            cin >> x;
            rear.push(x);
        }
        else {
            if(front.empty()) {
                while(!rear.empty()) {
                    front.push(rear.top());
                    rear.pop();
                }
            }
            
            if(!front.empty()){
                if(op == 2) front.pop();
                if(op == 3) cout << front.top() << endl;
            }
        }
    }
    return 0;
}