#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

map<int, int> dp;
int v[200000];

int main() {
    int n;
    scanf("%d", &n);
    forn(i, 0, n)
        scanf(" %d", &v[i]);
    
    int x = v[0];
    int mx = 0;
    for (int i = 0; i < n; i++) {
        dp[v[i]] = max(dp[v[i] - 1] + 1, dp[v[i]]);
        if (dp[v[i]] > mx) {
            x = v[i];
            mx = dp[v[i]];
        }
    }
    
    printf("%d\n", mx);
    int s = x - mx + 1;
    for (int i = 0; i < n; i++) {
        if (v[i] == s) {
            printf("%d ", i + 1);
            s++;
        }
    }
    printf("\n");
    return 0;
}
