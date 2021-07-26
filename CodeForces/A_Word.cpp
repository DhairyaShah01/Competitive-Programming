#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    string s;
    int upper=0,lower=0;
    cin >> s;
    for(int i=0;i<s.size();i++) {
        if(isupper(s[i])){
            upper++;
        }
        else lower++;
    }
    if(lower >= upper){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s << endl;
    return 0;
}