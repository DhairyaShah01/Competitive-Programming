#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        vector<int> a(n);
        bool f = true;
        for ( int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] < 0) f = false;
        }
        if(f) {
            cout<<"YES\n";
            cout<<101<<endl;
            for(int i=0;i<101;i++) {
                cout << i << " ";
            }
            cout << endl;
        }
        else {
            cout  << "NO\n";
        }
    }
    return 0;
}