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
        if(n==1) cout << "1" << endl;
        else if(n==2) cout << "-1" << endl;
        else {
            int count = 0;
            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    cout << (((i+j)*n - (j-1)) > n*n ? ((i+j)*n - (j-1)) - n*n : ((i+j)*n - (j-1))) << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}