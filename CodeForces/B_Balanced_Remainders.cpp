#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t,n;
    cin >> t;
    while(t-- > 0) {
        int c0=0,c1=0,c2=0;
        int i = 0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin >> a[i];
            if(a[i]%3 == 0) c0++;
            else if(a[i]%3 == 1) c1++;
            else c2++;
        }
        while(true) {
            if(c0 == c1  && c1 == c2) break;
            else if(c0 >= c1 && c0 >= c2){
                c0--;
                c1++;
                i++;
            }
            else if(c1 >= c0 && c1 >= c2) {
                c1--;
                c2++;
                i++;
            }
            else{
                c2--;
                c0++;
                i++;
            }
        }
        cout << i << endl;
    }
    return 0;
}