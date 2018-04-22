#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    ll n, c;
    scanf("%lld %lld", &n, &c);
    vector<pll> vec;
    forn(i, 0, n) {
        ll x, v;
        scanf("%lld %lld", &x, &v);
        vec.emplace_back(x, v);
    }
    ll ans = 0;
    forn(i, 0, n) {
        
    }
    printf("%lld\n", ans);
    return 0;
}
