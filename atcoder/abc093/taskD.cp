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
        if (a == b) {
            cout << (2*a-2) << nl;
        } else if (abs(a-b) == 1) {
            cout << (2*min(a,b)-2) << nl;
        } else {
            ll n = a*b;
            ll c = sqrt(n);
            if (c*c == n) c--;
            if (c*(c+1) >= n) {
                cout << (2*c-2) << nl;
            } else {
                cout << (2*c-1) << nl;
            }
        }
    }
    return 0;
}
