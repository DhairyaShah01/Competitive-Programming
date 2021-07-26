#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        ll n, a, b;
        cin >> n >> a >> b;
        if(a==1){printf(n%b==1%b?"Yes\n":"No\n");continue;}
        bool flag = false;
	    for(ll i=1;i<=n;i*=a)
		    if((n-i)%b==0){printf("Yes\n");flag=true;break;}
	    if(flag == false) printf("No\n");
    }
    return 0;
}