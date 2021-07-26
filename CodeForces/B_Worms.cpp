#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int search(int x, int arr[],int i, int f) {

    if(f >= i) {
        int mid = (f+i)/2;
        if(arr[mid] == x) return mid+1;
        
        else if(x < arr[0]) return 1;

        else if(arr[mid] < x && arr[mid+1] > x) return mid+2;

        else if(x < arr[mid]) return search(x, arr, i, mid-1);

        else return search(x, arr, mid+1, f);
    }

    return 0;
}

int main() 
{
    int n,m;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    cin >> m;
    int x;
    for(int i=1;i<n;i++) a[i] = a[i] + a[i-1];
    while(m-- > 0) {
        cin >> x;
        int res = search(x, a, 0, n);
        cout << res << endl;
    }

    return 0;
}