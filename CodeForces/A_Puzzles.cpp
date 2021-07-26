#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n,m;
    cin >> n >> m;
    int arr[m];
    for(int i=0;i<m;i++) {
        cin >> arr[i];
    }
    sort(arr, arr+m);
    int res = INT_MAX;
    for(int i=0;i<=m-n;i++) {
        int x = arr[i+n-1] -arr[i];
        if(x < res) {
            res = x;
        }
    }
    cout << res << endl;
    return 0;
}