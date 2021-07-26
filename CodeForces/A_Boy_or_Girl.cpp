#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    string s;
    cin >> s;
    set<char> s1;
    for(int i=0;i<s.size();i++) {
        s1.insert(s[i]);
    }
    if(s1.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}