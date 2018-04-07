#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define nl '\n'
#define precision(n) setprecision(n)
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

class Solution {
public:
    double dp[507][507] = { 0 };
    
    double search(int a, int b) {
        if (a <= 0 && b <= 0) return 0.5;
        if (a <= 0 && b > 0) return 1;
        if (a > 0 && b <= 0) return 0;
        if (dp[a][b]) return dp[a][b];
        double found = 0;
        found += search(a - 1, b - 3);
        found += search(a - 2, b - 2);
        found += search(a - 3, b - 1);
        found += search(a - 4, b);
        dp[a][b] = found * 0.25;
        return dp[a][b];
    }

    double soupServings(int N) {
        int n = (N + 24) / 25;
        if (n > 500) return 1;
        dp[0][0] = 0.5;
        forn(b, 1, n + 1) dp[0][b] = 1;
        forn(a, 1, n + 1) dp[a][0] = 0;
        forn(a, 1, n + 1) {
            forn(b, 1, n + 1) {
                dp[a][b] = 0.25 * (
                    dp[max(0, a - 4)][b] +
                    dp[max(0, a - 1)][max(0, b - 3)] +
                    dp[max(0, a - 2)][max(0, b - 2)] +
                    dp[max(0, a - 3)][max(0, b - 1)]
                );
            }
        }
        return dp[n][n];
    }
};

int main() {
    Solution s;
    Solution si;
    int N = 4000;
    cout << s.search((N + 24) / 25, (N + 24) / 25) << nl;
    cout << si.soupServings(N) << nl;
}

