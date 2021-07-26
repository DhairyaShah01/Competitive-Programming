#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    ll t,n;
    cin >> t;
    bool res;
    while(t-- > 0) {
        cin >> n;
        res = false;
        if(n % 2 == 1){
            res = true;
        }
        else{
            while(n%2 == 0) {
                n /= 2;
            }
            if(n != 1) res = true;
        }
        if(res == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}