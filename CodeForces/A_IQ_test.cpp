#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    int num_even=0, num_odd=0;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) num_even++;
        else num_odd++;
    }
    if(num_odd == 1) {
        for(int i=0;i<n;i++) {
            if(arr[i] % 2 == 1) {
                cout << i+1 << endl;
                break;
            }
        }
    }
    if(num_even == 1) {
        for(int i=0;i<n;i++) {
            if(arr[i] % 2 == 0) {
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}