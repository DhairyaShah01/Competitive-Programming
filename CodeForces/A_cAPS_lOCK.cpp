#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    string s;
    cin >> s;
    bool res = true;
    for(int i=1;i<s.size();i++) {
        if(islower(s[i])) {
            res = false;
            break;
        }
    }
    if(res) {
        for(int i=1;i<s.size();i++) {
            s[i] = tolower(s[i]);
        }
        if(isupper(s[0])) s[0] = tolower(s[0]);
        else s[0] = toupper(s[0]);
    }
    cout << s;
    return 0;
}