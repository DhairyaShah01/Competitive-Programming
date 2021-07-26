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
        int no_even = 0;
        int no_odd = 0;
        vector<int> arr(2*n);
        for(int i=0;i<2*n;i++) {
            cin >> arr[i];
            if(arr[i]%2 == 0) no_even++;
            else no_odd++;
        }
        if(no_even == no_odd) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}