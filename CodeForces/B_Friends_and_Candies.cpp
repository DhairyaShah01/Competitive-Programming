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
        vector<int> arr(n);
        ll sum = 0;
        int res = 0;
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if(n == 1) cout << 0 << endl;
        else {
            if(sum%n != 0) cout << -1 << endl;
            else {
                sum = sum/n;
                sort(arr.begin(), arr.end(), greater<int>());
                for(int i=0;i<n;i++) {
                    if(arr[i] > sum) res++;
                }
                cout << res << endl;
            }
        }
    }
    return 0;
}