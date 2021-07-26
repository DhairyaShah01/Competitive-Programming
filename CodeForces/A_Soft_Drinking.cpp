#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int ans = min((k*l)/nl, min(c*d, p/np));
    cout << ans/n << endl;
    return 0;
}