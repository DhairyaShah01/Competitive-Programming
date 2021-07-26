#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n,x;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> x;
    for(int i=0;i<n;i++){
        if(arr[i] == x) {
            cout << (i+1) << endl;
            break; 
        }
    }
    return 0;
}