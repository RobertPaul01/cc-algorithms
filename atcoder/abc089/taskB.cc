#include "bits/stdc++.h"
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, n) for (int i = 0; i < n; i++)
#define fin(ds) for (auto &v : ds) cin >> v;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define nl '\n'

typedef long long ll;

int main() { _
    int n; cin >> n;
    set<string> colors;
    forn(i, n) {
        string s; cin >> s;
        colors.insert(s);
    }
    if (colors.count("Y")) {
        cout << "Four" << nl;
    } else {
        cout << "Three" << nl;
    }
}
