#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        long long T[n],X[n];
        for(int i=0;i<n;i++){
            cin >> T[i] >> X[i];
        }
        long long dest =0, goal = -1e10;
        long long pos=0, ct =0;
        int ans =0;
        for(int i=0;i<n;i++){
            if((pos <= goal && goal<=dest) && (goal-pos <= T[i] - ct)){
                ans++;
            } else if((pos >= goal && goal >=dest) && (pos-goal <= T[i] -ct)){
                ans++;
            }
            if(abs(dest-pos) <= T[i] -ct) {
                pos = dest;
            } else if(dest > pos) {
                pos += T[i] -ct;
            } else if(dest < pos) {
                pos -= T[i] - ct;
            }
            ct = T[i];
            if(pos == dest) dest = X[i];
            goal = X[i];
        }
        if((pos <= goal && goal <= dest) || (pos >= goal && goal >= dest)) ans++;
        cout << ans << endl;
    }
    return 0;
}
