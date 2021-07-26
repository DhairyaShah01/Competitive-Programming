#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define MAX 100000;

int main() 
{
    int n;
    cin >> n;
    int maxi = -1;
    vector<ll> count(100005, 0);
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        count[x]++;
        maxi = max(maxi, x);
    }

    vector<ll> res(100005, 0);
    res[0] = 0;
    res[1] = count[1];
    for(ll i=2;i<=100000;i++) {
        res[i] = max(res[i-1], res[i-2] + (i*count[i]));
    }
    cout << res[maxi];
    return 0;
}