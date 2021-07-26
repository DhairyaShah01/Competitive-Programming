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

int lwbnd (string &sub, string &s, vector<int> &p)
{
    int l = 0, r = p.size() - 1, mid, val = -1;
    while(l <= r) {
        mid = (l + r)/2;
        string now = s.substr(p[mid], sub.size());
        if(sub == now) {
            val = mid;
            r = mid - 1;
        }
        else if(sub < now) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return val;
}

int upbnd (string &sub, string &s, vector<int> &p) 
{
    int l = 0, r = p.size() - 1, mid, val = -1;
    while(l <= r) {
        mid = (l + r)/2;
        string now = s.substr(p[mid], sub.size());
        if(sub == now) {
            val = mid + 1;
            l = mid + 1;
        }
        else if(sub < now) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return val;
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

    int num;
    cin >> num;
    while(num-- > 0)
    {
        string sub;
        cin >> sub;
        int sub_size = sub.size();
        int ub = upbnd(sub, s, p);

        int lb = lwbnd(sub, s, p);

        cout << ub - lb << "\n";
    }

    return 0;
}