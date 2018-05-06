#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

char g[53][53];

int main() {
    int H, W;
    scanf("%d %d ", &H, &W);
    forn(i, 0, H) {
        forn(j, 0, W) {
            scanf(" %c", &g[i][j]);
        }
    }
    
    bool good = true;
    forn(i, 0, H) {
        forn(j, 0, W) {
            if (g[i][j] == '#' &&
                g[i - 1][j] != '#' &&
                g[i + 1][j] != '#' &&
                g[i][j - 1] != '#' &&
                g[i][j + 1] != '#') {
                good = false;
            }
        }
    }
    printf(good ? "Yes\n" : "No\n");
    return 0;
}
