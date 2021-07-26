#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    int n;
    string x;
    while(t-- > 0) {
        cin >> n >> x;
        string a(n, '0'),b(n, '0');
        for(int i=0;i<n;i++) {
            if(x[i] == '1') {
                a[i] = '1';
                b[i] = '0';
                for(int j=i+1;j<n;j++) {
                    b[j] = x[j];
                    a[j] = '0';
                }
                break;
            }
            else {
                a[i] = b[i] = (x[i] + '0')/2;
            }
        }

        cout << a << "\n" << b << '\n';
    } 
    return 0;
}