#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    ll n,k;
    cin >> n >> k;
    if(n%2 == 0) {
        if(k <= n/2) {
            cout << (2*k-1) << endl;
        }
        else{
            cout << (2*k - n) << endl; //2*(k-n/2) = 2*k - n
        }        
    }
    else{
        if(k <= (n/2 +1)){
            cout << (2*k-1) << endl;
        }
        else{
            cout << 2*(k-n/2-1) << endl; //2*(k-(n/2+1)) = 2*(k-n/2-1)
        }
    }
    return 0;
}