#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    string s;
    cin >> s;

    string s1 = "1111111";
    string s2 = "0000000";

    size_t found1 = s.find(s1);
    size_t found2 = s.find(s2);

    if(found1 != string::npos || found2 != string::npos) {
        cout << "YES" << endl;
    }

    else{
        cout << "NO" << endl;
    }
    
    return 0;
}