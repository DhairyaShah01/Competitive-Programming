#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        ll x;
        cin >> x;
        bool f = false;
        for(int i=0;i<20;i++) {
            if(x%11 == 0) {
                cout << "YES" << endl;
                f = true;
                break;
            }
            x -= 111;
            if(x<0) break;
        }
        if(!f) cout << "NO" << endl;
    }
    return 0;
}