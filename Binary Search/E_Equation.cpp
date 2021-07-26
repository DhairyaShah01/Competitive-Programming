#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool good (double x, double c) {
    return x * x * x * x + x >= c;
}

int main() 
{
    cout << setprecision(20);
    double c;
    cin >> c;
    double l = 0;
    double r = c;
    double mid;
    for (int i = 0; i < 100; i++) {
        mid = (l + r) / 2.0;
        if(good(mid, c)) r = mid;
        else l = mid;
    }

    cout << l * l << endl;
    return 0;
}