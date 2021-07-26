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
        if(n % 2 == 0) {
            for(int i=1;i<n;i=i+2) {
                if(i != 1) cout << " ";
                cout << i+1 << " " << i;
            }
            cout << endl;
        }
        else {
            if(n == 3) cout << "3 1 2" << endl;
            else {
                cout << "3 1 2";
                for(int i=4;i<n;i=i+2) {
                    cout << " " << i+1 << " " << i;
                }
                cout << endl;
            } 
        }
    }
    return 0;
}