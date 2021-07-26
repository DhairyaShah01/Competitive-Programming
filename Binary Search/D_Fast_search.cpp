#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n, k;
    ll l, r;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cin >> k;
    for(int i = 0; i < k; i++) {
        cin >> l >> r;
        auto lower = lower_bound(a.begin(), a.end(), l);

        // if(lower == a.end()) {
        //     cout << "0 ";
        // }
        auto upper = upper_bound(lower, a.end(), r);
        cout << upper - lower << " ";
    }
    return 0;
}