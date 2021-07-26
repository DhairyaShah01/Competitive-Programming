#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    if( n%2 == 0) {
        cout << ((n/2)*m) << endl;
    }
    else {
        cout << ((n/2)*m + m/2) << endl;
    }
    return 0;
}
