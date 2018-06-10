#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int ans = INT_MAX;
int d[33][33];
int co[500][500];

int calc(vector<int>& v, int i) {
    int cur = 0;
    for (int x = 0; x < v.size(); x++) {
        cur += d[v[x] - 1][i];
    }
    return cur;
}

void gen() {exit(0);}
int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    
    int n, c;
    scanf("%d %d", &n, &c);
    vector<int> x, y, z;
    forn(i, 1, c + 1) {
        forn(j, 1, c + 1) {
            scanf(" %d", &d[i - 1][j - 1]);
        }
    }
    forn(i, 1, n + 1) {
        forn(j, 1, n + 1) {
            scanf(" %d", &co[i - 1][j - 1]);
            if (((i + j) % 3) == 0) {
                x.push_back(co[i - 1][j - 1]);
            } else if (((i + j) % 3) == 1) {
                y.push_back(co[i - 1][j - 1]);
            } else {
                z.push_back(co[i - 1][j - 1]);
            }
        }
    }
    int dp[3][33];
    fill(dp[0], dp[0] + (3 * 33), 1e9);
    for (int i = 0; i < c; i++) {
        dp[0][i] = min(dp[0][i], calc(x, i));
        dp[1][i] = min(dp[1][i], calc(y, i));
        dp[2][i] = min(dp[2][i], calc(z, i));
    }
    int ans = INT_MAX;
    forn(i, 0, c) {
        forn(j, 0, c) {
            forn(k, 0, c) {
                if (i != j && j != k && i != k) {
                    int cur = dp[0][i] + dp[1][j] + dp[2][k];
                    ans = min(ans, cur);
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
