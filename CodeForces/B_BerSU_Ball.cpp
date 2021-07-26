#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n;
    cin >> n;
    int b[n];
    for(int i=0;i<n;i++) cin >> b[i];
    int m;
    cin >> m;
    int g[m];
    for(int j=0;j<m;j++) cin >> g[j];
    sort(b, b+n);
    sort(g, g+m);
    int result = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            if(abs(b[i]-g[j]) <= 1) {
                result++;
                g[j] = 103;
                break;
            }
        }
    }
    cout << result << endl;
    return 0;
}