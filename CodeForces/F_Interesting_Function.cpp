#include <iostream>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        ll l,r;
        cin >> l >> r;
        ll res = 0;
        int u = 1;
        for(int i=0;i<10;i++) {
            res += r/u - l/u;
            u *= 10;
        }
        cout << res << endl;
    }
    return 0;
}