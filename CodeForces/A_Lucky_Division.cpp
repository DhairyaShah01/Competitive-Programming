#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isLucky(int n) {
    bool res = true;
    while(n) {
        if(n%10!=4 && n%10!=7) res = false;
        n /= 10;
    }
    return res;
}

int main() 
{
    int n;
    cin >> n;
    bool res = false;
    for(int i=1;i<=n;i++) {
        if(isLucky(i) && n%i==0) res = true;
    }
    cout << (res ? "YES" : "NO");
    return 0;
}