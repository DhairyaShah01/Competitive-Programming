#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    string s;
    cin >> s;
    vector<char> res;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0;i<s.size();i++) {
        if(!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')){
            res.push_back('.');
            res.push_back(s[i]);
        }
    }
    for(auto i = res.begin(); i != res.end(); i++) {
        cout << *i;
    }
    return 0;
}