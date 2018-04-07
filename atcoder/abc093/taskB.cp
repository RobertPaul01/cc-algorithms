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
    int a, b, k; cin >> a >> b >> k;
    set<int> s;
    forn(i, 0, k) {
        if (a + i > b) break;
        s.insert(a + i);
    }
    forn(i, 0, k) {
        if (b - i < a) break;
        s.insert(b - i);
    }
    for (int x : s) {
        cout << x << nl;
    }
    return 0;
}
