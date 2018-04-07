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
    int q; cin >> q;
    vector<ll> v;
    forn(i, 0, q) {
        ll a, b; cin >> a >> b;
        if (a == b && a == 1) {
            v.push_back(0);
            continue;
        }
        ll n = a * b;
        ll x = sqrt(n - 1);
        ll y = (n - 1) / x;
        ll ans = ((x - 1) + (y - 1));
        if (x == 1 || y == 1) {
            ans = 1;
        }
        v.push_back(ans);
    }
    for (ll x : v) cout << x << nl;
    return 0;
}
