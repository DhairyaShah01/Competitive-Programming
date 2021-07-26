#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int Maxpieces(int w, int h) {
    int res = 1;

    while(w % 2 == 0) {
        w /= 2;
        res *= 2;
    }

    while(h%2 == 0) {
        h /= 2;
        res *= 2;
    }

    return res;
}

int main() 
{
    int t,w,h,n;
    cin >> t;
    while(t-- > 0) {
        cin >> w >> h >> n;
        int res = Maxpieces(w,h);
        if(res >= n) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}