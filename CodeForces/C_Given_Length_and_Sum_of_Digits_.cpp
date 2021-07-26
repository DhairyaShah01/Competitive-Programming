#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int m,s;
    cin >> m >> s;
    if(s>m*9 || s<1&&m>1) cout << "-1 -1" << endl;
    else {
        for(int i=m-1,k=s;i>=0;i--) {
            int j = max(0, k-9*i);
            if(j==0 && i==m-1 && k) j=1;
            cout<<j;
            k-=j;
        }
        cout<<" ";
        for(int i=m-1, k=s;i>=0;i--) {
            int j = min(9, k);
            cout << j;
            k-=j;
        }
    }
    return 0;
}