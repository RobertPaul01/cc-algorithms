#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int vals[1007];
vector<pii> v;
vector<int> g[1007];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    forn(i, 0, n) {
        scanf("%d", &vals[i]);
        v.emplace_back(vals[i], i);
    }
    
    forn(i, 0, m) {
        int a, b;
        scanf("%d %d", &a, &b);
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    sort(all(v));
    set<int> rem;
    
    int ans = 0;
    for (int i = n - 1; i > -1; i--) {
        pii p = v[i];
        for (int x : g[p.second]) {
            if (!rem.count(x))
                ans += vals[x];
        }
        rem.insert(p.second);
    }

    printf("%d\n", ans);
    return 0;
}
