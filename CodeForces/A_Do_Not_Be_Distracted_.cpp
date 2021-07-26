#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        int flag = 1;
        cin >> n;
        vector<char> s(n, 0);
        vector<char> arr;
        for(int i=0;i<n;i++) {
            cin >> s[i];
        }
        for(int i=0;i<n;i++) {
            if(find(arr.begin(), arr.end(), s[i]) != arr.end()) {
                flag = 0;
            }
            arr.push_back(s[i]);
            if(i != n-1) {
                while(s[i] == s[i+1]) {
                    i++;
                }
            }
        }
        cout << (flag==0 ? "NO\n" : "YES\n");
    }
    return 0;
}