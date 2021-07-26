#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n,high,low,res=0,a;
    cin >> n;
    cin >> high;
    low = high;
    for(int i=1;i<n;i++) {
        cin >> a;
        if(a > high) {
            res++;
            high = a;
        }
        else if(a < low) {
            res++;
            low = a;
        }
        else{
            continue;
        }
    }
    cout << res << endl;
    return 0;
}