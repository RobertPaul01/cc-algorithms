#include "bits/stdc++.h"
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define nl '\n'

typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<string> strs(n);
    for (auto &v : strs) cin >> v;
    auto f = [](string str) -> ll {
        ll count = 0;
        int s = 0;
        for (char c : str) {
            if (c == 'h') count += s;
            else s++;
        }
        return count;
    };
    sort(strs.begin(), strs.end(), [&](string s, string t) {
        return f(s+t) > f(t+s);
    });
    string s = "";
    for (string str : strs) s += str;
    cout << f(s) << nl;
}
