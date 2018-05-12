#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    vector<pii> v;
    forn(i, 0, n) {
        int s, p;
        scanf(" %d %d", &s, &p);
        v.emplace_back(s, -p);
    }
    sort(all(v));
    int cur = 0;
    int count = 1;
    for (int i = n - 1; i > -1; i--) {
        count = 1;
        while (i > 0 && v[i - 1].first == v[i].first && v[i - 1].second == v[i].second) {
            cur++;
            count++;
            i--;
        }
        cur++;
        if (cur >= k) break;
    }
    printf("%d\n", count);
    return 0;
}
