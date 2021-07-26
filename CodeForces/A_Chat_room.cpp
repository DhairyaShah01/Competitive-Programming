#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    string s;
    cin >> s;
    string st = "hello";
    int j = 4;
    for(int i=s.size()-1;i>=0;i--) {
        if(s[i] == st[j]) {
            st.pop_back();
            j--;
            if(j == -1) break;
        }
    }
    if(st.size() > 0) cout << "NO";
    else cout << "YES";
    return 0;
}