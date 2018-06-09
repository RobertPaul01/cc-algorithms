#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

vector<int> g[200003];
set<int> visited;

bool check(int s, int e, int prev) {
    if (g[s].size() != 2) return false;
    if (visited.count(s)) return false;
    if (s == e) return true;
    visited.insert(s);
    if (g[s][0] == prev) return check(g[s][1], e, s);
    return check(g[s][0], e, s) ;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    forn(i, 0, m) {
        int a, b;
        scanf(" %d %d", &a, &b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int count = 0;
    forn(i, 1, n + 1) {
        if (g[i].size() == 2 && check(g[i][0], i, i)) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
