#include "bits/stdc++.h"
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define nl '\n'
#define precision(n) setprecision(n)
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() { _
    map<char, int> m;
    string s; cin >> s;
    for (char c : s) {
        m[c]++;
        if (m[c] > 1) {
            cout << "No" << nl;
            return 0;
        }
    }
    cout << "Yes" << nl;
    return 0;
}
