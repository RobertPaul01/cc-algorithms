#include "bits/stdc++.h"
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define forn(i, n) for (int i = 0; i < n; i++)
#define fin(ds) for (auto &v : ds) cin >> v;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define nl '\n'

typedef long long ll;

signed main() { _
    int n, m;
    cin >> n >> m;
    int bounty, inc, dmg;
    cin >> bounty >> inc >> dmg;
    vector<tuple<int,int,int>> npc;
    vector<tuple<int,int,int>> event;
    forn(i, n) {
        int mh, sh, r;
        cin >> mh >> sh >> r;
        if (dmg >= mh && inc > 0) {
            cout << -1 << nl;
            exit(0);
        }
        npc.push_back({mh,sh,r});
    }
    forn(i, m) {
        int t, e, h;
        cin >> t >> e >> h;
        event.push_back({t,e,h});
    }
}
