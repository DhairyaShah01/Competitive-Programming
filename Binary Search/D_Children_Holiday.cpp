#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool good(int x, int m, int n, vector<int> t, vector<int> z, vector<int> y) {
    int count = 0;
    for ( int i = 0; i < n; i++) {
        int k = t[i] * z[i] + y[i];
        count += x / k * z[i] + min(((x % k) / t[i]), z[i]);
        if(count >= m) return true;
    }
    return false;
}

int main() 
{
    int m, n;
    cin >> m >> n;
    vector<int> t(n), z(n), y(n);
    for( int i = 0; i < n; i++) {
        cin >> t[i] >> z[i] >> y[i];
    }

    int l = -1; // m can be zero so take l as -1
    int r = 200 * m; // maximum time taken for inflating one balloon will be 100 and rest time 100, so max time for one balloon is 200.
    int mid;

    while (r > l + 1) {
        mid = ( l + r) / 2;
        if(good(mid, m, n, t, z, y)) r = mid;
        else l = mid;
    }

    cout << r << "\n";

    int remaining = m;
    for (int i = 0; i < n; i++) {
        int num = 0;
        int k = t[i] * z[i] + y[i];
        num += r / k * z[i] + min(((r % k) / t[i]), z[i]);
        if (num > remaining) {
            num = remaining;
        }
        remaining -= num;
        cout << num << " ";
    }
    cout << endl;
    return 0;
}