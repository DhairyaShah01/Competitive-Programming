#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void count_sort (vector<int> &p, vector<int> &c) {
    int n = p.size();
    //Sorts array p by the keys stored in array c
    vector<int> cnt(n);
    for (auto x : c) {
        cnt[x]++;
    }
    vector<int> p_new(n);
    vector<int> pos(n);

    pos[0] = 0;
    for(int i = 1; i < n; i++) {
        pos[i] = pos[i - 1] + cnt[i - 1];
    }
    for (auto x : p) {
        int i = c[x];
        p_new[pos[i]] = x;
        pos[i]++;
    }
    p = p_new;
}

int main() 
{
    string x, y;
    cin >> x;
    cin >> y;
    string s = x + '*' + y;
    s += '$';
    int n = s.size();
    vector<int> p(n), c(n);
    {
        // k = 0
        vector<pair<char, int>> a(n);
        for (int i = 0; i < n; i++) a[i] = {s[i], i};
        
        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) p[i] = a[i].second;
        c[p[0]] = 0;
        for (int i = 1; i < n; i++) {
            if(a[i].first == a[i - 1].first) {
                c[p[i]] = c[p[i-1]];
            }
            else {
                c[p[i]] = c[p[i-1]] + 1;
            }
        }
    }

    int k = 0;
    while((1 << k) < n) {
        //k -> k + 1

        for (int i = 0; i < n; i++) {
            p[i] = (p[i] - (1 << k) + n) % n;
        }

        count_sort(p, c);

        vector<int> c_new(n);
        c_new[p[0]] = 0;

        for (int i = 1; i < n; i++) {
            pair<int, int> prev = {c[p[i - 1]], c[(p[i - 1] + (1 << k)) % n]};
            pair<int, int> now = {c[p[i]], c[(p[i] + (1 << k)) % n]};
            if(now == prev) {
                c_new[p[i]] = c_new[p[i-1]];
            }
            else {
                c_new[p[i]] = c_new[p[i-1]] + 1;
            }
        }
        c = c_new;
        k++;
    }

    // for(int i = 0; i < n; i++) {
    //     cout << p[i] << " " << s.substr(p[i], n - p[i]) << "\n";
    // }

    // cout << "\n";

    vector<int> lcp(n);
    k = 0;
    for(int i = 0; i < n - 1; i++) {
        int pi = c[i]; // position of suffix i in the suffix array
        int j = p[pi-1]; // previous suffix in the suffix array

        //lcp[i] = lcp(s[i..], s[j...])
        while (s[i + k] == s[j + k]) k++; // k is the number of equal characters of suffix i and j
        lcp[pi] = k;

        k = max(k - 1, 0);
    }

    // for (int i = 0; i < n; i++) {
    //     cout << lcp[i] << " ";
    // }

    // cout << "\n";

    int n1 = x.size();
    int n2 = y.size();
    int length = 0;
    string res;
    for( int i = 0; i < lcp.size() - 1; i++) {

        bool currentInFirst = (0 <= p[i] && p[i] <= n1 - 1);
        bool nextInFirst = (0 <= p[i + 1] && p[i + 1] <= n1 - 1);

        if(currentInFirst != nextInFirst) {
            if(length < lcp[i + 1]) {
                length = lcp[i + 1];
                res = s.substr(p[i], length);
            }
        }
    }

    cout << res;

    return 0;
}