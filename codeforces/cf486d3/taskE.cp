#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

map<string, ll> dp;

int check(string &s, int x, int y) {
    int count = 0;
    for (int i = x + 1; i <= y; i++) {
        swap(s[i], s[i - 1]);
        if (s[0] == '0') count = -1;
        else if (count != -1) count++;
    }
    return count;
}

int main() {
    string s;
    getline(cin, s);
    int n = s.length();
    map<char, int> c;
    map<char, vector<int>> d;
    for (int i = 0; i < s.length(); i++) {
        c[s[i]]++;
        d[s[i]].push_back(i);
    }
    int m = -1;
    if (c['0'] >= 2) {
        int l = d['0'].size();
        string ss(s);
        int a = check(ss, d['0'][l - 2], n - 2);
        int b = check(ss, d['0'][l - 1], n - 1);
        if (a != -1 && b != -1) {
            int d = a + b;
            if (m == -1) {
                m = d;
            } else if (d != -1) {
                m = min(m, d);
            }
        }
    }
    if (c['2'] >= 1 && c['5'] >= 1) {
        int l1 = d['2'].size();
        int l2 = d['5'].size();
        string ss(s);
        int a = check(ss, d['2'][l1 - 1], n - 2);
        int b = check(ss, d['5'][l2 - 1], n - 1);
        if (a != -1 && b != -1) {
            int d = a + b;
            if (m == -1) {
                m = d;
            } else if (d != -1) {
                m = min(m, d);
            }
        }
    }
    if (c['5'] >= 1 && c['0'] >= 1) {
        int l1 = d['5'].size();
        int l2 = d['0'].size();
        string ss(s);
        int b = check(ss, d['0'][l2 - 1], n - 1);
        int a = check(ss, d['5'][l1 - 1], n - 2);
        if (a != -1 && b != -1) {
            int d = a + b;
            if (m == -1) {
                m = d;
            } else if (d != -1) {
                m = min(m, d);
            }
        }
    }
    if (c['7'] >= 1 && c['5'] >= 1) {
        int l1 = d['7'].size();
        int l2 = d['5'].size();
        string ss(s);
        int a = check(ss, d['7'][l1 - 1], n - 2);
        int b = check(ss, d['5'][l2 - 1], n - 1);
        if (a != -1 && b != -1) {
            int d = a + b;
            if (m == -1) {
                m = d;
            } else if (d != -1) {
                m = min(m, d);
            }
        }
    }
    printf("%d\n", m);
    return 0;
}
