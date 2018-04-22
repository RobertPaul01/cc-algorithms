#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int mod = 1e9 + 7;
int dp[5000][5000] = {0};

int main() {
    int n;
    scanf("%d", &n);
    vector<char> v(n);
    
    forn(s, 0, n)
        scanf(" %c", &v[s]);
    
    dp[0][0] = 1;
    forn(s, 0, n - 1) {
        char c = v[s];
        if (c == 's') {
            vector<int> presum(n);
            presum[0] = dp[s][0];
            forn(k, 1, n) {
                presum[k] = (presum[k - 1] + dp[s][k]) % mod;
            }
            forn(j, 0, n) {
                int sum = presum[n - 1] - (j == 0 ? 0 : presum[j - 1]);
                if (sum < 0) sum += mod;
                dp[s + 1][j] = (dp[s + 1][j] + sum) % mod;
            }
        } else {
            dp[s + 1][0] = 0;
            forn(j, 1, n) {
                dp[s + 1][j] = dp[s][j - 1];
            }
        }
    }
    
    int ans = 0;
    forn(j, 0, n)
        ans = (ans + dp[n - 1][j]) % mod;
    
    printf("%d\n", ans);
    return 0;
}
