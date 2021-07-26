#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n,f,total=0,res=0;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> f;
        total += f;
    }
    for(int i=1;i<=5;i++) {
        if((total+i)%(n+1) != 1) {
            res++;
        }
    }
    cout << res << endl; 
    return 0;
}