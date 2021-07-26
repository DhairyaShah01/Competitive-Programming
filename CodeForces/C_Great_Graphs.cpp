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
        vector<ll> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        if(n == 1) cout << 0 << endl;
        if(n == 2) cout << 0 << endl;
        if(n >= 3) {
            cout << a[0]-a[n-1] << endl;
        }
    }
    return 0;
}