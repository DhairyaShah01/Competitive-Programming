#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        ll n,k;
        cin >> n >> k;
        ll x = floor(k/(n-1));
        ll rem = k - x*(n-1);
        if(rem == 0) cout << x*n-1 << endl;
        else cout << x*n + rem << endl;
    }
    return 0;
}