#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const ll MOD = 1e9 + 7;

void gen() {exit(0);}
int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    ll n, k;
    scanf("%lld %lld", &n, &k);
    
    ll ans = 0;
    ll total = 1;
    
    for (ll x = 0; x < k; x++) {
        total *= 2;
        total %= MOD;
    }
    
//    cout << total << endl;
//    for (ll i = 0; i < total; i++) {
//        ll cur = ((n * 1<<(k + 1)) - (min(k, 2LL) * i));
//        cout << cur << endl;
//        ans += cur;
//        ans %= MOD;
//    }
    
    ll sum = (total - 1) * total;
//    cout << sum << endl;
    ll x = total * (n * 1<<(k + 1));
//    cout << x << endl;
    ans =  (x - sum) / total;
    printf("%lld\n", ans);
    return 0;
}
