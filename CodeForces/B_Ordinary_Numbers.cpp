#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    ll count;
    while(t-- > 0) {
        ll n;
        cin >> n;
        string s = to_string(n);
        if(s.length() == 1) cout << n << endl;
        if(s.length() == 2) {
            cout << (9 + n/11) << endl;
        }
        if(s.length() == 3) {
            cout << 18 + n/111 << endl;
        }
        if(s.length() == 4) {
            cout << 27 + n/1111 << endl;
        }
        if(s.length() == 5) {
            cout << 36 + n/11111 << endl;
        }
        if(s.length() == 6) {
            cout << 45 + n/111111 << endl;
        }
        if(s.length() == 7) {
            cout << 54 + n/1111111 << endl;
        }
        if(s.length() == 8) {
            cout << 63 + n/11111111 << endl;
        }
        if(s.length() == 9) {
            cout << 72 + n/111111111 << endl;
        }
        if(s.length() == 10) {
            cout << 81 + n/1111111111 << endl;
        }
    }
    return 0;
}