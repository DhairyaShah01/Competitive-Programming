#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    ll n;
    cin >> n;
    ll count = 0;
    while(n/100 >= 1) {
        count++;
        n -= 100;
    }
    while(n/20 >= 1) {
        count++;
        n -= 20;
    }
    while(n/10 >= 1) {
        count++;
        n -= 10;
    }
    while(n/5 >= 1) {
        count++;
        n -= 5;
    }
    count += n;
    cout << count << "\n";
    return 0;
}