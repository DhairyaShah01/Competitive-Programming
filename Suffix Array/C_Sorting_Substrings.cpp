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

void sortSubstrings (vector<pair<int, int>> &subs, vector<vector<int>> &all_c) {
    
    sort (subs.begin(), subs.end(), [&all_c](pair<int, int> &p1, pair<int, int> &p2) {
        int l1 = p1.first, r1 = p1.second, len1 = p1.second - p1.first + 1;
        int l2 = p2.first, r2 = p2.second, len2 = p2.second - p2.first + 1;
        int minLength = min(len1, len2);
        int k = 0;
        while((1 << k) <= minLength) k++;
        k--;

        if(k >= all_c.size()) k = all_c.size() - 1;

        pair<int, int> class1 = {all_c[k][l1 - 1], all_c[k][l1 + minLength - (1 << k) - 1]};
        pair<int, int> class2 = {all_c[k][l2 - 1], all_c[k][l2 + minLength - (1 << k) - 1]};
        bool res = false;

        if(class1 != class2) {
            res = class1 < class2;
        }
        else {
            if(len1 != len2) {
                res = len1 < len2;
            } else {
                res = p1 < p2;
            }
        }
        return res;
    });
}

int main() 
{
    string s;
    cin >> s;
    s += '$';
    int n = s.size();
    vector<int> p(n), c(n);
    vector<vector<int>> all_c;
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

    all_c.push_back(c);

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
        all_c.push_back(c);
    }

    // for(int i = 0; i < n; i++) {
    //     cout << p[i] << " " << s.substr(p[i], n - p[i] - 1) << "c " << c[i] << "\n" ;
    // }

    int num;
    cin >> num;
    vector<pair<int, int>> subs(num);
    for (int i = 0; i < num; i++) {
        int l, r;
        cin >> l >> r;
        subs[i] = {l, r};
    }

    sortSubstrings(subs, all_c);

    for( int i = 0; i < num; i++) {
        cout << subs[i].first << " " << subs[i].second << "\n";
    }

    return 0;
}