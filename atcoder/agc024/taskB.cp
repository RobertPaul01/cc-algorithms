#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> p(n);
    forn(i, 0, n) {
        scanf(" %d", &p[i]);
    }
    int mx = 0;
    map<int, int> dp;
    forn(i, 0, n + 1) dp[i] = 0;
    forn(i, 0, n) {
        dp[p[i]] = dp[p[i] - 1] + 1;
        mx = max(mx, dp[p[i]]);
    }
    printf("%d\n", n - mx);
    return 0;
}
