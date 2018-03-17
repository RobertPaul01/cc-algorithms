#include "bits/stdc++.h"
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
#define fin(ds) for (auto &v : ds) cin >> v;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define nl '\n'

typedef long long ll;

const int M = 10005, N = 1005;
ll dp[N][M], cost[N];
int c[N];

int main() {
    int n;
    ll W, B, X;
    cin >> n >> W >> B >> X;
    forn(i, n) cin >> c[i];
    forn(i, n) cin >> cost[i];
    memset(dp, -1, sizeof(dp));
    dp[0][0] = W;
    forn(i, n) {
        for (int j = 0; j < M && dp[i][j] != -1; j++) {
            for (int k = 0; k <= c[i] && dp[i][j] - k * cost[i] >= 0; k++) {
                dp[i + 1][k + j] = max(dp[i + 1][k + j], min(W + (k + j) * B, dp[i][j] - k * cost[i] + X));
            }
        }
    }
    int maxc = 0;
    forn (i, M) {
        if (dp[n][i] != -1) {
            maxc = max(maxc, i);
        }
    }
    cout << maxc << nl;
}
