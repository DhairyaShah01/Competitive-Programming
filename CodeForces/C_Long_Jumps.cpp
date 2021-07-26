#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{

    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin >> arr[i];
        }

        vector<int> dp(n);
        for(int i=n-1;i>=0;i--) {
            dp[i] = arr[i];
            int j = i + arr[i];
            if(j < n) {
                dp[i] +=dp[j];
            }
        }

        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
    return 0;
}