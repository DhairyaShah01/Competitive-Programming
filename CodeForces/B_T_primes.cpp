#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
typedef long long int ll;

int main() 
{
    ll n;
    cin >> n;
    ll x, a;
    int flag;
    while(n-- > 0) {
        scanf("%lld", &x);
        flag = 0;
        a = sqrt(x);
        for(ll i=2;i*i<=a;i++) {
            if(a % i == 0) {
                flag = 1;
                break;
            }
        }
        printf(flag==0&&x>1&&a*a==x ? "YES\n" : "NO\n");
    }

    return 0;
}