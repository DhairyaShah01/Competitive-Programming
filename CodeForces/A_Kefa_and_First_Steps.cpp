#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n;
    cin >> n;
    ll arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int count = 0, max = 0;
    if(n > 1) {
        if(arr[1] >= arr[0]) count++;
    }
    
    if(n==1) cout << "1" << "\n";

    else {
        for(int i=1;i<n;i++) {
            if(arr[i] >= arr[i-1]) {
                count++;
            }

            else count = 1;

            if(count > max) {
                max = count;
            }
        }
        cout << max << "\n";
    }
    return 0;
}