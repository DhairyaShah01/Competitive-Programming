#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int res = 0;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        for(int i=0;i<n-1;i++) {
            int maxi = max(arr[i],arr[i+1]);
            int mini = min(arr[i],arr[i+1]);
            if(mini*2 < maxi) {
                while(mini*2 < maxi) {
                    mini *= 2;
                    res++;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}