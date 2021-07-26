#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        ll l,r;
        cin >> n >> l >> r;
        vector<ll> a(n);
        int res=0;
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(a[i] + a[j] >= l && a[i] + a[j] <= r) {
                    res++;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}