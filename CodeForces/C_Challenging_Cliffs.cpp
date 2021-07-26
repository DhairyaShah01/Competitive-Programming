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
        vector<ll> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int diff = INT_MAX;
        int x;
        for(int i=0;i<n-1;i++) {
            if(a[i+1]-a[i] <= diff) {
                x = i;
                diff = a[i+1] -a[i];
            }
        }
        cout << a[x] << " ";
        for(int i=x+2;i<n;i++) {
            cout << a[i] << " ";
        }
        for(int i=0;i<x;i++) {
            cout << a[i] << " ";
        }
        cout << a[x+1] << endl;
    }
    return 0;
}