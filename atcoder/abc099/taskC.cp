#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

void gen() {exit(0);}
int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    
    int N = 100005;
    vector<int> cur = {1};
    for (int x = 6; x < N; x *= 6)
        cur.push_back(x);
    for (int x = 9; x < N; x *= 9)
        cur.push_back(x);
    int dp[N];
    fill(dp, dp + N, -1);
    dp[0] = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= N; i++) {
        if (dp[i] > -1) {
            for (int x : cur) {
                if ((i + x) < N) {
                    if (dp[i + x] == -1) dp[i + x] = dp[i] + 1;
                    else dp[i + x] = min(dp[i + x], dp[i] + 1);
                }
            }
        }
    }
    
//    for (int n = 1; n <= 100000; n++) {
        printf("%d\n", dp[n]);
//    }
    
    return 0;
}
