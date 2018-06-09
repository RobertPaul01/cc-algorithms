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
//    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    int n = 0;
    scanf("%d", &n);
    vector<ll> v = {2, 1};
    ll ans = 0;
    if (n == 1) {
        printf("1\n");
        exit(0);
    }
    for (int i = 2; i <= n; i++) {
        ans = (v[i - 1] + v[i - 2]);
        v.push_back(ans);
    }
    printf("%lld\n", ans);
    return 0;
}
