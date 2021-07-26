#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n,m,res;
    cin >> n >> m;
    double t, max=0;
    for(int i=0;i<n;i++) {
        cin >> t;
        if(ceil(t/m) >= max) {
            max = ceil(t/m);
            res = i + 1;
        }
    }
    cout << res << endl;
    return 0;
}