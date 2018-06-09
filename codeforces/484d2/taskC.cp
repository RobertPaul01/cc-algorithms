#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 100000;
vector<int> g[N];
int ans = 0;

int dfs(int cur, int prev) {
    int size = 1;
    for(int next : g[cur]) {
        if (next == prev)
            continue;
        size += dfs(next, cur);
    }
    if (size % 2 == 0) {
        ans++;
    }
    return size;
}

int main() {
    int n;
    scanf("%d ", &n);
    forn(i, 0, n - 1) {
        int x, y;
        scanf("%d %d", &x, &y);
        x--; y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    if (n % 2 == 1) {
        printf("-1\n");
        exit(0);
    }
    dfs(0, -1);
    printf("%d\n", ans - 1);
    return 0;
}
