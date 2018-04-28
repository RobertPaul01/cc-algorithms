#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int MOD = 1000000007;
int dp[2007][2007];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    forn(i, 1, n + 1)
        dp[i][0] = 1;
    forn(i, 1, n + 1)
        for (int j = i; j < n + 1; j += i)
            for (int x = 1; x < k; x++)
                (dp[j][x] += dp[i][x - 1]) %= MOD;
    
    int sum = 0;
    forn(i, 1, n + 1)
        (sum += dp[i][k - 1]) %= MOD;
    
    printf("%d\n", sum);
    return 0;
}
