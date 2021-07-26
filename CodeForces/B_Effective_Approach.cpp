#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n,m,a,b,arr[100001] = {0};
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a;
        arr[a] = i + 1;
    }
    cin >> m;
    ll res_vas=0,res_pet=0;
    while(m-- > 0) {
        cin >> b;
        res_vas += arr[b];
        res_pet += n + 1 - arr[b];
    }
    cout << res_vas << " " << res_pet << endl;
}