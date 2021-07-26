#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        int k, m, n;
        cin >> k >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        bool flag = false;
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        for(int i=0;i<m;i++) {
            cin >> b[i];
        }
        int i=0, j=0;
        vector<int> ans;
        while(i < n || j < m) {
            if(i < n && a[i] <= k) {
                ans.push_back(a[i]);
                if(a[i] == 0) k++;
                i++;
            }
            else if(j < m && b[j] <= k) {
                ans.push_back(b[j]);
                if(b[j] == 0) k++;
                j++;
            }
            else {
                flag = true;
                cout << "-1" << endl;
                break;
            }
        }
        if(flag == false) {
            for(int i=0;i<ans.size();i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}