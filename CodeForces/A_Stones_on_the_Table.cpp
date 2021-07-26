#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    string s;
    int n,j=0;
    cin >> n;
    cin >> s;
    string res;
    res.push_back(s[0]);
    for(int i=0;i<s.size();i++) {
        if(s[i] != res[j]) {
            res.push_back(s[i]);
            j++;
        }
    }
    cout << n - res.size() << endl;
    return 0;
}