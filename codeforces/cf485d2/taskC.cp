#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 3005;
int s[N];
int dp[N][3];

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    #endif
    
    int n;
    scanf("%d", &n);
    forn(i, 0, n) {
        scanf(" %d", &s[i]);
    }
    forn(i, 0, n) {
        scanf(" %d", &dp[i][0]);
    }
    int ans = -1;
    for (int i = n - 1; i > -1; i--) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] < s[j]) {
                for (int x = 1; x < 3; x++) {
                    if (dp[j][x - 1] != 0) {
                        int cur = dp[i][0] + dp[j][x - 1];
                        
                        if (dp[i][x] == 0) dp[i][x] = cur;
                        else dp[i][x] = min(dp[i][x], cur);
                    }
                }
            }
        }
        
        if (dp[i][2] != 0) {
            if (ans == -1) ans = dp[i][2];
            else ans = min(ans, dp[i][2]);
        }
    }
    printf("%d\n", ans);
    return 0;
}
