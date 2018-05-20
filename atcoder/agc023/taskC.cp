#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int MOD = 1e9 + 7;

int main() {
    int n;
    scanf("%d", &n);
    ll ans = 0;
    ll fac[n + 7];
    fac[0] = 1;
    fac[1] = 1;
    forn(i, 2, n + 7) {
        fac[i] = (fac[i - 1] * i) % MOD;
    }
    for (int k = n - 1; k >= n - 1 - k; k--) {
        int l = n - 1 - k;
        cout << k << " " << l << endl;
        ll comb = fac[k - 1] / (fac[l] * fac[k - l]);
        cout << comb << " " << fac[k] << " " << fac[l] << endl;
        ans += (((comb * fac[k]) % MOD) * fac[l]) % MOD;
    }
    printf("%lld\n", ans);
    return 0;
}

