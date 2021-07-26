#include <iostream>

using namespace std;

int main()
{
    int t,a,b,c,sum=0;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b >> c;
        sum = a + b + c;
        if((sum % 9) != 0){
            cout << "NO" << endl;
        }
        else {
            int minimum = min(a, min(b,c));
            if(minimum >= sum/9){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
