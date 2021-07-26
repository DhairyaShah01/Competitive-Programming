#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        vector<ll> v(n);
        ll prev;
        vector<ll> ans(n, 0);
        for(int i=0;i<n;i++) {
            cin >> v[i];
        }
        prev = v[0];
        for(int i=1;i<n;i++) {
            ans[i] = prev;
            prev = v[i]^prev;
        }
        for(int i=0;i<n;i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}