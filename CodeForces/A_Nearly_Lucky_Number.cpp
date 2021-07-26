#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    string s;
    cin >> s;
    int count=0;
    for(int i=0;i<s.size();i++) {
        if(s[i] == '4' || s[i] == '7') count++;
    }
    (count == 4 || count == 7) ? (cout << "YES" << endl) : cout << "NO" << endl; 
    return 0;
}