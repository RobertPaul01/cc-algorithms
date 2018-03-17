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
    ll k, d, t; cin >> k >> d >> t;
    
    ll period;
    if (k <= d) period = d;
    else period = (k / d + !(k % d == 0)) * d;
    
    ll cooking = period + k;
    ll num = 2 * t / cooking;
    ll carry = 2 * t - num * cooking;

    cout.setf(ios::fixed);
    cout << setprecision(19);
    
    if (carry > 2 * k) {
        cout << num * period + carry - k;
    } else {
        cout << num * period + carry / 2;
        if (carry % 2 == 1) cout << ".5";
    }
    cout << nl;
}
