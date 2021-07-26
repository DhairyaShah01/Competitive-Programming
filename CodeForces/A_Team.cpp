#include <iostream>

using namespace std;

int main()
{
    int x,y,z,n,res=0;
    cin >> n;
    while(n-- > 0){
        cin >> x >> y >> z;
        if((x + y + z) >= 2){
            res++;
        }
    }
    cout << res;
    return 0;
}
