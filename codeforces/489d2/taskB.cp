#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

void gen() {exit(0);}
int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    ll l, r, x, y;
    scanf("%lld %lld %lld %lld", &l, &r, &x, &y);
    
    ll count = 0;
    for (ll i = l; i <= r; i++) {
        if (x * y % i != 0) continue;
        ll p = (x * y) / i;
        if (p >= l && p <= r && gcd(i, p) == x) {
//            cout << i << " " << p << " " << gcd(i, p) << endl;
            count ++;
        }
    }
    
    printf("%lld\n", count);
    return 0;
}
