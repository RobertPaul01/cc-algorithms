#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

ll x[1003];
ll y[1003];
ll z[1003];

void gen() {exit(0);}
int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    
    int n, m;
    scanf("%d %d", &n, &m);
    if (m == 0) {
        printf("0\n");
        exit(0);
    }
    forn(i, 0, n) {
        scanf("%lld %lld %lld", &x[i], &y[i], &z[i]);
    }
    ll ans = 0;
    forn(i, 0, n) {
        ll as = abs(x[i]) + abs(y[i]) + abs(z[i]);
        vector<ll> cur;
        forn(j, 0, n) {
            if (i == j) continue;
            ll q = 0;
            if ((x[i] > 0 && x[j] > 0) || (x[i] < 0 && x[j] < 0)) {
                q += abs(x[j]);
            } else {
                q -= abs(x[j]);
            }
            if ((y[i] > 0 && y[j] > 0) || (y[i] < 0 && y[j] < 0)) {
                q += abs(y[j]);
            } else {
                q -= abs(y[j]);
            }
            if ((z[i] > 0 && z[j] > 0) || (z[i] < 0 && z[j] < 0)) {
                q += abs(z[j]);
            } else {
                q -= abs(z[j]);
            }
            cur.push_back(q);
        }
        sort(all(cur));
        ll p = as;
        for (int i = (int)cur.size() - 1, r = 1; i > -1 && r < m; i--, r++) {
            p += cur[i];
        }
        ans = max(ans, p);
    }
    printf("%lld\n", ans);
    return 0;
}
