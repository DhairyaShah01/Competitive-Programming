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
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        vector<pair<ll, ll>> v(n);
        for(int i=0;i<n;i++) {
            v[i] = make_pair(a[i], i+1);
        }
        sort(v.begin(), v.end());
        int res = 0;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(v[i].first*v[j].first > 2*n-1) {
                    break;
                }
                if(v[i].first*v[j].first == v[i].second+v[j].second) {
                    res++;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}