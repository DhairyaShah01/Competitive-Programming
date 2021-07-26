#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n;
    ll l;
    cin >> n >> l;
    ll arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    ll max_temp;
    if(n > 1) {
        max_temp = arr[1] - arr[0];
    }
    else max_temp = arr[0];
    for(int i=0;i<n-1;i++) {
        ll x = arr[i+1] - arr[i];
        if(x > max_temp) max_temp = x;
    }
    float res = max(max_temp/2.0f, float(max(l-arr[n-1], arr[0])));
    printf("%.10f", res);
    return 0;
}