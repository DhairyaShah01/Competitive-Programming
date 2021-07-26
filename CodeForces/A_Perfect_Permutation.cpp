#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n,temp;
    cin >> n;
    int arr[n];
    if(n % 2 == 1) {
        cout << "-1" << endl;
    }
    else{
        for(int i=0;i<n;i++) {
            arr[i] = i+1;
        }
        for(int i=0;i<n;i=i+2) {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        for(int i=0;i<n;i++) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}