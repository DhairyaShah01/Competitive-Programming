#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(string s) {
    int n = s.size();
    if(n == 0) {
        cout << "YES" << endl;
        return;
    } 
    if(s.find('a'+n-1) != string::npos) {
        if(s.find('a'+n-1) == 0 || s.find('a'+n-1) == n-1) {
            s.erase(s.begin() + s.find('a'+n-1));
            solve(s);
        }
        else {
            cout << "NO" << endl;
            return;
        }
    }
    else {
        cout << "NO" << endl;
        return;
    }
}

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}