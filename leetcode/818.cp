#include "bits/stdc++.h"
using namespace std;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

class Solution {
public:
    int racecar(int target) {
        int dp[target + 1];
        memset(dp, 1e4, sizeof(dp));
        dp[0] = 0, dp[1] = 1;
        for (int t = 2; t <= target; t++) {
            int k = log2(t);
            if ((1<<k) <= t) k++;
            if (t == (1<<k) - 1) {
                dp[t] = k;
                continue;
            }
            for (int j = 0; j < k-1; j++) {
                dp[t] = min(dp[t], dp[t - (1<<(k-1)) + (1<<j)] + k-1 + j + 2);
            }
            if ((1<<k) - 1 - t < t) {
                dp[t] = min(dp[t], dp[(1<<k) - 1 - t] + k + 1);
            }
        }
        return dp[target];
    }
};
