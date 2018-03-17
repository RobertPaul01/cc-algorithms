#include "bits/stdc++.h"
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, x, n) for (ll i = x; i < n; i++)
#define fin(ds) for (auto &v : ds) cin >> v;
#define all(a) (a).begin(), (a).end()
#define nl '\n'
typedef long double ld;
typedef long long ll;
typedef pair<double, double> pdd;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll, ll> pii;
typedef vector<pii> vii;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;

int main() { _
    ll l, r; cin >> l >> r;

    vector<ll> s23;
    set<ll> cont;
    s23.push_back(1);
    ll size = (ll)s23.size();
    for (ll i = 0; i < size; i++) {
        ll x = s23[i];
        if (x * 2 <= r && !cont.count(x * 2)) {
            s23.push_back(x * 2);
            cont.insert(x * 2);
        }
        if (x * 3 <= r && !cont.count(x * 3)) {
            s23.push_back(x * 3);
            cont.insert(x * 3);
        }
        size = (ll) s23.size();
    }
    
    sort(all(s23));
    auto rp = s23.end();
    auto lp = lower_bound(all(s23), l);
    cout << (rp - lp) << nl;
}
