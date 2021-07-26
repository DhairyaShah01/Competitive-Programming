#include <iostream>

using namespace std;

int main()
{
    int n, max=0, pass=0;
    cin >> n;
    while(n-- > 0) {
        int a,b;
        cin >> a >> b;
        pass = pass - a + b;
        if(pass > max) {
            max = pass;
        }
    }
    cout << max;
    return 0;
}
