#include "bits/stdc++.h"
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, n) for (int i = 0; i < n; i++)
#define fin(ds) for (auto &v : ds) cin >> v;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define nl '\n'

typedef long long ll;

map<ll, ll> add;
map<ll, ll> sub;

signed main() { _
    ll n, m;
    cin >> n >> m;
    ll bounty, inc, dmg;
    cin >> bounty >> inc >> dmg;
    ll mh[n], r[n];
    vector<pii> events[n];
    forn(i, n) {
        int sh;
        cin >> mh[i] >> sh >> r[i];
        events[i].push_back({0, sh});
    }
    
    forn(i, m) {
        ll t, e, h;
        cin >> t >> e >> h;
        events[e-1].push_back({t, h});
    }
    
    forn(i, n) sort(all(events[i]));
    
    if (inc > 0) {
        forn(i, n) {
            if (mh[i] <= dmg || (r[i] == 0 && events[i].back().second <= dmg)) {
                cout << -1 << nl;
                return 0;
            }
        }
    }

    forn(i, n) {
        auto &v = events[i];
        forn(j, v.size()) {
            pii e = v[j];
            if (e.second > dmg) continue;
            add[e.first]++;
            pii q;
            if (j < v.size() - 1) {
                q = v[j + 1];
            } else {
                q = {2e9, 0};
            }
            ll time_diff = q.first - e.first - 1;
            ll rh;
            if (r[i] == 0) {
                rh = 2e9;
            } else {
                rh = (min(dmg, mh[i]) - e.second) / r[i];
            }
            ll dt = min(time_diff, rh);
            sub[e.first + dt]++;
        }
    }
    
    int killed = 0;
    set<ll> timeline;
    for (auto t : add) timeline.insert(t.first);
    for (auto t : sub) timeline.insert(t.first);

    ll mx = 0;
    for (auto v : timeline) {
        killed += add[v];
        mx = max(mx, killed * (bounty + v * inc));
        killed -= sub[v];
    }
    cout << mx << nl;
}
