#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q,op,second;
    stack<string> s2;
    string sec,S,sub;
    cin >> q;
    while(q-- > 0){
        cin >> op;
        if(op == 1){
            cin >> sec;
            s2.push(S);
            S.append(sec);
        }
        else if(op == 2) {
            cin >> second;
            s2.push(S);
            S.erase(S.size()-second);
        }
        else if(op == 3){
            cin >> second;
            cout << S[second-1] << endl;
        }
        else if(op == 4) {
            S = s2.top();
            s2.pop();
        }
    }
    return 0;
}