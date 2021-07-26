#include <iostream>

using namespace std;

int main()
{

    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int a[n];
        long double sum=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum += a[i];
        }
        long double arr[2];
        arr[0] = 0;
        arr[1] = 0;
        for(int i=0;i<n;i++){
            arr[i%2] += a[i]-1;
        }
        for(int j=0;j<2;j++){
            if(2 * arr[j] > sum) {
                continue;
            }
            for(int i=0;i<n;i++){
                if(i%2 == j) {
                    a[i] = 1;
                }
            }
            break;
        }
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}