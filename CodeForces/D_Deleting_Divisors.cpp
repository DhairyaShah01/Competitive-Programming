#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        ll n;
        cin >> n;
        if(n%2 == 0) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }
    return 0;
}