#include <iostream>

using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t-- > 0) {
        for(int i=0;i<s.length();i++) {
            if(s[i] == 'B' && s[i+1] == 'G') {
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }
    cout << s;
    return 0;
}
