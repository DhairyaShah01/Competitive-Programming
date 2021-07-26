#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool good (ll x, ll w, ll h, ll n) {
    return (x / w) * (x / h) >= n;
}

int main() 
{
    ll w, h, n;
    cin >> w >> h >> n;

    ll l = 0; // l is bad
    ll r = 1; // r is good

    while (!good(r, w, h ,n)) r *= 2;

    while (r > l + 1) {
        ll m = (l + r) / 2;
        if(good(m, w, h, n)) {
            r = m;
        } else {
            l = m;
        }
    }

    cout << r << "\n";
    return 0;
}