#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    ll t,a,b,k,res,n;
    cin >> t;
    while(t-- > 0) {
        unordered_map<int,int> arr,brr;
        res = 0;
        cin >> a >> b >> k;
        res = k * (k-1) / 2;
        for(int i=0;i<k;i++) {
            cin >> n;
            arr[n]++;
        }
        for(int i=0;i<k;i++) {
            cin >> n;
            brr[n]++;
        }
        for(auto i = arr.begin(); i != arr.end(); i++) {
            res -= (i->second - 1);
        }
        for(auto i = brr.begin(); i != brr.end(); i++) {
            res -= (i->second - 1);
        }
        cout << res << endl;
        }
    return 0;
}