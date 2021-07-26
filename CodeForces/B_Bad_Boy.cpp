#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        int n,m,i,j;
        cin >> n >> m >> i >> j;
        if(i <= n/2 && j <= m/2) {
            cout << n << " " << m << " ";
            cout << 1 << " " << 1 << endl;
        }
        else if(i <= n/2 && j > m/2) {
            cout << n << " " << 1 << " ";
            cout << 1 << " " << m << endl;
        }
        else if(i > n/2 && j <= m/2) {
            cout << 1 << " " << m << " ";
            cout << n << " " << 1 << endl;
        }
        else {
            cout << 1 << " " << 1 << " ";
            cout << n << " " << m << endl;
        }
    }
    return 0;
}