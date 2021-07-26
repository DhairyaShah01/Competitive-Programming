#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void binarySearch(vector<int> &arr, int q) {
    int l = 0, r = arr.size() - 1, mid;
    while(l <= r) {
        mid = (l + r)/2;
        if(arr[mid] == q) {
            cout << "YES" << "\n";
            return;
        }
        else if(arr[mid] < q) {
            l = mid + 1;
        }
        else r = mid - 1;
    }

    cout << "NO\n";
}

int main() 
{
    int n, k, q;
    cin >> n >> k;
    vector<int> arr(n);
    for( int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    while(k-- > 0) {
        cin >> q;
        binarySearch(arr, q);
    }
    return 0;
}