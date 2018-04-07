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
    int n; cin >> n;
    if (n < 6) {
        cout << -1 << nl;
    } else {
        int cur = 2;
        forn(i, 0, n / 2) {
            cout << 1 << " " << cur++ << nl;
        }
        forn(i, cur, n + 1) {
            cout << 2 << " " << cur++ << nl;
        }
    }
    int prev = 1;
    forn(i, 2, n + 1) {
        cout << prev++ << " " << i << nl;
    }
    return 0;
}
