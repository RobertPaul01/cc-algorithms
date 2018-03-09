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

signed main() { _
    ll k, d, t; cin >> k >> d >> t;
    long double ans = t;
    
    if (d > k) {
        ans += (0.5) * (d - k);
    }
    
    ans += ((t / (k + 1)) * (k % d) * (0.5));
    
    cout << ans << nl;
}
