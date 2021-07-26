#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{

    int t,n,sum,no1,no2;
    cin >> t;
    while(t-- > 0) {
        sum=0,no1=0,no2=0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i] == 1) no1++;
            else no2++;
        }
        if(no1 % 2 == 1) {
            cout << "NO" << endl;
        }
        else{
            if(no2 % 2 == 0) {
                cout << "YES" << endl;
            }
            else if(no2 % 2 == 1 && no1 == 0) {
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}