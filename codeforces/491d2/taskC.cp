#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
template <typename... Args>
void dbg(Args... args) {
    ((cout << args << " "), ...);
    cout << endl;
}
void gen() {
    ll n;
    scanf("%lld", &n);
    for (ll i = 1; i < n; i++) {
        ll c = n;
        ll cur = 0;
        ll other = 0;
        while (c > 0) {
            cur += min(c, i);
            c -= i;
            
            if (c > 10) {
                other += (c / 10);
                c -= (c / 10);
            }
        }
        dbg(i, cur, other, cur + other);
        if (cur >= (n / 2)) {
            printf("%lld\n", i);
            break;
        }
    }
    exit(0);
}

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    gen();
    #endif
    ll n;
    scanf("%lld", &n);

    return 0;
}
