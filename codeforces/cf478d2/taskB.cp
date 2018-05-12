#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    vector<int> v(14);
    forn(i, 0, 14) {
        scanf("%d", &v[i]);
    }
    ll ans = 0;
    forn(i, 0, 14) {
        int rounds = v[i] / 14;
        int rem = v[i] % 14;
        ll cur = 0;
        int look = (rounds % 2 == 1);
        for (int j = 0; j < 14; j++) {
            if (j == i) {
                if (rounds % 2 == 0) {
                    cur += rounds;
                }
            } else if (v[j] % 2 == look) {
                cur += (v[j] + rounds);
            }
        }
        for (int x = (i + 1) % 14; rem > 0; x = (x + 1) % 14, rem--) {
            if (v[x] % 2 == look) {
                cur -= (v[x] + rounds);
            } else {
                cur += (v[x] + rounds + 1);
            }
        }
        ans = max(ans, cur);
    }
    printf("%lld\n", ans);
    return 0;
}
