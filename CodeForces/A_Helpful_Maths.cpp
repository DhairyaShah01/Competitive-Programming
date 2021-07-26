#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    string s;
    cin >> s;
    int x = s.size()/2 + 1;
    int arr[x],j=0;
    for(int i=0;i<s.size();i++) {
        if(s[i] != '+') {
            arr[j] = s[i] - '0';
            j++;
        }
    }
    sort(arr, arr+x);
    cout << arr[0];
    for(int i=1;i<x;i++) {
        cout << "+";
        cout << arr[i];
    }
    return 0;
}