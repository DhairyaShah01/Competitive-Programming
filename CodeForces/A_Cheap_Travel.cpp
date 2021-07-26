#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    if(n%m == 0) {
        cout << min(b*(n/m), a*n) << endl;
    } else {
        cout << min(b*(n/m) + min((n%m)*a, b), a*n) << endl;
    }
    return 0;
}