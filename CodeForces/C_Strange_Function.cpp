#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define mod 1000000007;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        ll n;
        cin >> n;
        ll ans = 0;
        if(n == 1) cout << 2 << endl;
        ans += (n/2) * 2 % mod;
        ans += (n/12) * 12 % mod;
        ans += (n/12) * 9 % mod;
        ans = ans%mod;
        cout << ans << endl; 
    }
    return 0;
}