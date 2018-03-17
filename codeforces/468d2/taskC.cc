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
    int n; cin >> n;
    int mn = INT_MAX;
    int mx = INT_MIN;
    int dif = 0;
    
    map<int, int> counts;
    forn(i, n) {
        int ai; cin >> ai;
        mn = min(mn, ai);
        mx = max(mx, ai);
        dif = max(dif, mx - mn);
        counts[ai]++;
    }

    int same = n;
    if (dif == 2) {
        if (min(counts[mn], counts[mx]) * 2 < counts[mn + 1]) {
            while (counts[mn + 1] >= 2) {
                counts[mn + 1] -= 2;
                counts[mn]++;
                counts[mx]++;
                same -= 2;
            }
        } else {
            while (counts[mn] > 0 && counts[mx] > 0) {
                counts[mn]--;
                counts[mx]--;
                counts[mn + 1] += 2;
                same -= 2;
            }
        }
    }

    cout << same << nl;
    for (int i = mn; i <= mx; i++) {
        forn(x, counts[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}
