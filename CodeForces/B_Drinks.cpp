#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n;
    double sum=0,a;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a;
        sum += a;
    }
    cout << fixed << setprecision(12) << sum/n;
    return 0;
}