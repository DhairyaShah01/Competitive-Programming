#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int ans = 0;
    for(int x=0;x*a<=n;x++) {
        for(int y=0;x*a+y*b<=n;y++) {
            int zc = n - x*a - y*b;
            if(zc % c == 0) {
                int z = zc/c;
                ans = max(ans,x+y+z);
            }
        }
    }
    cout << ans << endl;
    return 0;
}