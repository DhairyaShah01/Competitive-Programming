#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n;
    cin >> n;
    int l[n], r[n], left_closed=0, right_closed=0,res=0;
    for(int i=0;i<n;i++) {
        cin >> l[i] >> r[i];
        if(l[i] == 0) left_closed++;
        if(r[i] == 0) right_closed++;
    }
    if(left_closed <= n/2) {
        res += left_closed;
    }
    else{
        res += (n - left_closed);
    }
    if(right_closed <= n/2) {
        res += right_closed;
    }
    else{
        res += (n - right_closed);
    }
    cout << res << endl;
    return 0;
}