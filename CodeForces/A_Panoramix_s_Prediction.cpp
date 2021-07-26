#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPrime(int x) {
    bool res = true;
    for(int i=2;i<=sqrt(x);i++) {
        if(x%i == 0) {
            res = false;
            break;
        }
    }
    return res;
}

int main()
{
    int n,m,k;
    cin >> n >> m;
    k = n + 1;
    while(true) {
        if(isPrime(k)) {
            break;
        }
        else{
            k++;
        }
    }
    if(k == m) {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}