#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        if(n%4 == 2) {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            long long j = 2;
            for(int i=0;i<(n/2);i++) {
                cout << j << " ";
                j+=2;
            }
            long long val = j-2;

            j=1;
            for(int i=0;i<(n/2)-1;i++) {
                cout << j << " ";
                j+=2;
            }
            cout << val + (n/2) -1 << endl;
        }
    }
    return 0;
}
