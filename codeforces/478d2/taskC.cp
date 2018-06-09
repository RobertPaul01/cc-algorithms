#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    vector<ll> v(n);
    forn(i, 0, n) {
        scanf(" %lld", &v[i]);
        if (i > 0) v[i] += v[i - 1];
    }
    ll curPow = 0;
    auto curPos = v.begin();
    int alive = n;
    forn(i, 0, q) {
        ll qi;
        scanf(" %lld", &qi);
        curPow += qi;
        curPos = lower_bound(curPos, v.end(), curPow);
        if (*curPos == curPow) curPos++;
        if (curPos == v.end()) {
            alive = n;
            curPow = 0;
            curPos = v.begin();
        } else {
            alive = (int)(v.end() - curPos);
        }
        printf("%d\n", alive);
    }
    return 0;
}
