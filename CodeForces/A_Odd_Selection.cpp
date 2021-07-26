#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{   
    int t;
    cin >> t;
    while(t-- > 0) {
        int n, x, num_even=0, num_odd=0;
        cin >> n >> x;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i]%2 == 0) num_even++;
            else num_odd++;
        }
        int mini = min(x-1, num_even);
        int d = x - mini;
        
        if(d%2 == 0) d++;

        if(num_odd >= d && d <= x) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}