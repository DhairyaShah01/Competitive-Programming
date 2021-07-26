#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int n;
    cin >> n;
    string x;
    map<string, int> arr;
    for(int i=0;i<n;i++) {
        cin >> x;
        if(arr.count(x) == 0) {
            cout << "OK" << endl;
            arr[x] = 1;
        }
        else {
            cout << x << arr[x] << endl;
            arr[x] += 1;
        }
    }
    return 0;
}