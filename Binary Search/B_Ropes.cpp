#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool good( vector<int> &a, double x, int n, int k) {
    int s = 0;
    for ( int i= 0; i < n; i++) {
        s += floor(a[i] / x);
    }

    return s >= k;
}

int main() 
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    double l = 0; // l is good
    double r = 1e8; // r is bad. Since, max length is 1e7, we can take 1e8 as bad

    for ( int i = 0; i < 100; i++) {
        double m = ( l + r) / 2;
        if(good(a, m, n, k)) l = m;
        else r = m;
    }

    cout << setprecision(20) << l << "\n";
    return 0;
}