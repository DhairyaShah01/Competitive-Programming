#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    set<int> s1;
    int s;
    for(int i=0;i<4;i++) {
        cin >> s;
        s1.insert(s);
    }
    cout << 4 - s1.size() << endl;
    return 0;
}