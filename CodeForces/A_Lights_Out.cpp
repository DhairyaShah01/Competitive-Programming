#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    int pressed[4][4];
    int toggled[5][5];
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++) {
            cin >> pressed[i][j];
            toggled[i][j] = pressed[i][j];
        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(pressed[i][j] != 0) {
                toggled[i-1][j] += pressed[i][j];
                toggled[i+1][j] += pressed[i][j];
                toggled[i][j+1] += pressed[i][j];
                toggled[i][j-1] += pressed[i][j];
            }
        }
    }

    for(int i=1;i<=3;i++) {
        for(int j=1;j<=3;j++) {
            if(toggled[i][j] % 2) cout << "0";
            else cout << "1";
        }
        cout << "\n";
    }
    return 0;
}