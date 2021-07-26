#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n, total_sum=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        total_sum += arr[i];
    }
    sort(arr, arr+n);

    int sum=0, count=0;

    for(int i=n-1;i>=0;i--) {
        sum += arr[i];
        count++;
        total_sum -= arr[i];
        if(sum > total_sum){
            break;
        }
    }

    cout << count << endl;

    return 0;
}