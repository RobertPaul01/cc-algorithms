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

map<int, pii> grid;

int main() { _
    int H, W; cin >> H >> W;
    int D; cin >> D;
    forn(x, H) {
        forn(y, W) {
            int axy; cin >> axy;
            grid[axy] = {x, y};
        }
    }
    
    int end = H * W;
    int memo[end + 7];
    memset(memo, 0, sizeof(memo));
    forn(i, end + 1) {
        if (i - D > 0) {
            pii s = grid[i - D];
            pii e = grid[i];
            memo[i] = abs(e.first - s.first) + abs(e.second - s.second) + memo[i - D];
        }
    }

    int Q; cin >> Q;
    forn(i, Q) {
        int L, R; cin >> L >> R;
        int st = memo[L];
        int en = memo[R];
        cout << (en - st) << endl;
    }
}
