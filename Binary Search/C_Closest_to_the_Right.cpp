#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n, k, q;
    cin >> n >> k;
    vector<int> arr(n);
    for( int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    while(k-- > 0) {
        cin >> q;
        
        int l = -1; // a[l] < x
        int r = n; // a[r] >= x

        while (r > l + 1) {
            int m = (l + r) / 2;
            if(arr[m] < q) {
                l = m;
            } else {
                r = m;
            }
        }

        cout << r + 1 << "\n";
    }
    return 0;
}