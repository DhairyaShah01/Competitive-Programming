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
        int maxi = 0, max_ind = 0;
        int mini = INT_MAX, min_ind = 0; 
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i] > maxi) {
                maxi = arr[i];
                max_ind = i;
            }
            if(arr[i] < mini) {
                mini = arr[i];
                min_ind = i;
            }
        }
        int ans = min(max(max_ind+1,min_ind+1), max(n-max_ind,n-min_ind));
        if(min_ind > max_ind) cout << min(max_ind+1+n-min_ind, ans) << endl;
        else {
            cout << min(min_ind+1+n-max_ind,ans) << endl;
        }
    }
    return 0;
}