#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,a,b;
    stack<int> s, max;
    cin >> n;
    while(n-- > 0){
        cin >> a;
        if(a == 1){
            cin >> b;
            if(s.empty()){
                s.push(b);
                max.push(b);
            }
            else{
                if(b > max.top()){
                    max.push(b);
                }
                else{
                    max.push(max.top());
                }
                s.push(b);
            }
        }
        else if(a == 2) {
            if(!s.empty()){
                s.pop();
                max.pop();
            }
        }
        else if(a==3){
            cout << max.top() << endl;
        }
    } 
    return 0;
}
