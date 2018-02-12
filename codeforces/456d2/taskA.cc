#include "bits/stdc++.h"
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
#define fin(ds) for (auto &v : ds) cin >> v;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define nl '\n'

typedef long long ll;

signed main() {
    ll a, b;
    cin >> a >> b;
    ll x, y, z;
    cin >> x >> y >> z;
    // x = 2a
    // y = a + b
    // z = 3b
    a -= 2*x;
    a -= y; b -= y;
    b -= 3*z;
    ll extra = 0;
    if (a < 0) extra += abs(a);
    if (b < 0) extra += abs(b);
    cout << extra << nl;
}
