#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int MOD = 998244353;
map<ll, int> memo;

int dfs(vector<int>& v, int n, ll k) {
    if (memo.count(k)) return memo[k];
    if (k == 0 && n == 0) return 1;
    if (k < 0 || n < 0) return 0;
    int c = 0;
    for (int x : v) {
        c += dfs(v, n - 1, k - x);
        c %= MOD;
    }
    memo[k] = c;
    return c;
}

int main() {
    int n, a, b;
    ll k;
    scanf("%d %d %d %lld", &n, &a, &b, &k);
    int g = a + b;
    vector<int> v = {a, b, g, 0};
    int ans = dfs(v, n, k);
    printf("%d\n", ans);
    return 0;
}
