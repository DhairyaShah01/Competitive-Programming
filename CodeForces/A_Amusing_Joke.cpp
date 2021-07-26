#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    string s1,s2,s,in;
    cin >> s1;
    cin >> s2;
    s = s1 + s2;
    sort(s.begin(), s.end());
    cin >> in;
    sort(in.begin(), in.end());
    if(s == in) {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}