#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int n;
set<ll> s;
ll v[200005];

int main() {
    scanf("%d", &n);
    forn(i, 0, n) {
        scanf(" %lld", &v[i]);
        s.insert(v[i]);
    }
    vector<ll> ans;
    for (int i = 0; i < n; i++) {
        for (ll x = 1; x <= (1LL<<30); x <<= 1) {
            vector<ll> c = {v[i]};
            if (s.count(v[i] + x)) {
                c.push_back(v[i] + x);
            }
            if (s.count(v[i] - x)) {
                c.push_back(v[i] - x);
            }
            if (c.size() > ans.size()) {
                ans = c;
            }
        }
    }
    printf("%d\n", (int)ans.size());
    for (ll x : ans) {
        printf("%lld ", x);
    }
    return 0;
}
