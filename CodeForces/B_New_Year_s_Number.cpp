#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    ll t,n;
    cin >> t;
    bool res;
    while(t-- > 0) {
        res = false;
        cin >> n;
        if(n%2020 == 0 || n%2021 == 0) {
            res = true;
        }
        else{
            while(n >= 2020 && n%2021!=0) {
                n -= 2020;
            }
            while(n >= 2021) {
                n -= 2021;
            }
            if(n == 0) {
                res = true;
            }
        }
        cout << (res ? "YES" : "NO") << endl;
    }
    return 0;
}