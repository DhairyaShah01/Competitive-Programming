#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool sign(int num) {
    return num>0;
}

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        ll arr[n];
        for(int i=0;i<n;i++) {
            cin >> arr[i];
        }
        ll res = 0;

        for(int i=0;i<n;i++) {
            int j = i;
            ll mx = arr[i];
            while(j < n && sign(arr[j]) == sign(arr[i])) {
                mx = max(arr[j], mx);
                j++;
            }
            i = j-1;
            res += mx;
        }

        cout << res << endl;
    }
    return 0;
}