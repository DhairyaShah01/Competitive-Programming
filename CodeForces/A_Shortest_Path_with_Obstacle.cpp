#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int t;
    cin >> t;
    while(t-- > 0) {
        int xA, xB, xF, yA, yB, yF;
        cin >> xA >> yA;
        cin >> xB >> yB;
        cin >> xF >> yF;
        if(xA == xB) {
            if(yF >= min(yA, yB) && yF <= max(yA, yB) && xF == xA) {
                cout << abs(yA-yB) + 2 << endl;
            }
            else {
                cout << abs(yA-yB) << endl;
            }
        }
        else if(yA == yB) {
            if(xF >= min(xA, xB) && xF <= max(xA, xB) && yF == yA) {
                cout << abs(xA-xB) + 2 << endl;
            }
            else {
                cout << abs(xA-xB) << endl;
            }
        }
        else {
            cout << abs(xA-xB)+abs(yA-yB) << endl;
        }
    }
    return 0;
}