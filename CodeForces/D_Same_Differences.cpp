#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin >> arr[i]; 
        }

        ll count = 0;

        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if((arr[j] - arr[i]) == (j-i)) count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}