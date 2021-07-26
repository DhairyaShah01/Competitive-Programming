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
        int x;
        int res = 0;
        while(n-- > 0) {
            cin >> x;
            float sr = sqrt(x);
            if(sr * sr != x) {
                res = 1;
            }
        }
        cout << (res ? "YES\n" : "NO\n");
    }
    return 0;
}