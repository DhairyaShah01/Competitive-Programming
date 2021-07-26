#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        vector<int> a(4);
        for ( int i = 0; i < 4; i++) cin >> a[i];

        int x = max(a[0], a[1]);
        int y = max(a[2], a[3]);
        int max = INT_MIN;
        int sec_max = INT_MIN;
        for(int i = 0; i < 4 ; i++) {
            if(a[i] > max) {
                max = a[i];
            }
        }
        for(int i = 0; i < 4 ; i++) {
            if(a[i] != max) {
                if(a[i] > sec_max) {
                    sec_max = a[i];
                }
            }
        }
        if((x == max && y == sec_max) || (x == sec_max && y == max)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}