#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0){
        ll x;
        bool flag = false;
        cin >> x;
        ll a = floor(cbrt(x));
        ll b = 1;
        while(a >= b) {
            if(a*a*a + b*b*b < x) {
                b++;
            }
            else if(a*a*a + b*b*b > x) {
                a--;
            }
            else{
                flag = true;
                break;
            }
        }
        if(flag == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}