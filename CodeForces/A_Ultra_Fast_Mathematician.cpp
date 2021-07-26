#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    string s,t;
    char x;
    cin >> s >> t;
    for(int i=0;i<s.size();i++) {
        if(t[i] == '1'){
            x = ((s[i] == '0') ? '1' : '0');
            s[i] = x;
        }
    }
    cout << s << endl;
    return 0;
}