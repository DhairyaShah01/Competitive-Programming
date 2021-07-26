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
        ll sum = 0;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            sum += a[i];
        }
        if(sum == n) cout << 0 << endl;
        else if(sum > n) cout << sum-n << endl;
        else cout << 1 << endl;
    }
    return 0;
}