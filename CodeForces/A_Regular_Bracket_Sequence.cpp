#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while(t-- > 0) {
        cin >> s;
        if(s.size()%2==0 && s[0] != ')' && s[s.size() -1] != '('){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}