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

int strCompare(string st1, string st2, int n) {
    int i = 0;
    while(n--) {
        if(st1[i] != st2[i])
            return st1[i] - st2[i];
        i++;
    }
    return 0;
}

int query(vector<int> &p, string s, int n) {
    string t;
    cin >> t;
    
    /// suffix_array[0] = empty_string()
    /// n = s.size()
    /// so we check range [l, r] = [1, n - 1]
    for (int l = 1, r = n - 1; l <= r; )
    {
        int m = (l + r) / 2;
        /// middle pointer
        /// because (l + r) <= (2 * n) <= (2 * 300.000)
        /// it wont cause overflow so we dont need to use (m = l + (r - l) / 2)

        int len1 = t.size();
        int len2 = min(len1, n - p[m] - 1);
        /// limited by len1 charactors
        /// why (n - p[m] - 1) and not (n - p[m]) ? -> p[m] start from 0

        int ok = (len1 != len2) ? (len1 > len2) ? +1 : -1 : 0;
        /// currently (ok) is compare by length
        /// (len1 > len2) -> ok = +1
        /// (len1 = len2) -> ok =  0
        /// (len1 < len2) -> ok = -1

        /// Now we check for each charactor
        for (int i = 0; i < len2; ++i) 
        {
            char c = s[p[m] + i];
            /// the (m_th) suffix array of (s) start at (p[m])
            /// the (i_th) letter of (m_th) = s[p[m] + i]
 
            if (t[i] != c)
            {
                ok = (t[i] > c) ? +1 : -1;
                /// (t[i] > c) <=> key(t) is  bigger then current string
                /// (t[i] < c) <=> key(t) is smaller then current string
                break;
            }
        }
 
        if (ok == 0) /// 2 strings are equal both in length and each letter
        {
            cout << "Yes\n";
            return 0; /// Caution ! Do not break ! Must stop the function
        }
 
        if (ok > 0) /// if current string is  bigger then key(t)
            l = m + 1;
        else        /// if current string is smaller then key(t)
            r = m - 1;
    }
 
    /// If we cant find any substring that equal key(t)
    cout << "No\n";
    return 0;
}

int main() 
{
    string s;
    cin >> s;
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
    //     cout << p[i] << " " << (s.substr(p[i], n-p[i])).substr(0, 2) << "\n";
    // }

    
    int num;
    string sub;
    scanf("%d", &num);
    int flag;
    
    while(num--) {
        query(p, s, n);
    }

    return 0;
}