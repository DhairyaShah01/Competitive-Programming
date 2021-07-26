#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    int no_ones = 0;
    int max = 0;
    for(int i=0;i<n;i++) cin >> arr[i];
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            no_ones = 0;
            for(int k=0;k<n;k++){
                if(i<=k && k<=j) no_ones += 1-arr[k];
                else no_ones += arr[k];
            }
            if(no_ones > max) max = no_ones;
        }
    }
    cout << max << endl;
    return 0;
}