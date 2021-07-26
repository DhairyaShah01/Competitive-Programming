#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    string s;
    string res;
    cin >> s;
    for(int i=0;i<s.size();i++) {
        if(s[i] == '.'){
            res.push_back('0');
        }
        else {
            if(s[i+1] == '.'){
                res.push_back('1');
                i++;
            }
            else{
                res.push_back('2');
                i++;
            }
        }
    }
    cout << res << endl;
    return 0;
}