#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int t[10][10];

void gen() {exit(0);}
int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    int h, w;
    scanf("%d %d", &h, &w);
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf(" %d", &t[i][j]);
        }
    }
    for (int k = 0; k < 10; k++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                t[i][j] = min(t[i][j], t[i][k]+t[k][j]);
            }
        }
    }
    int ans = 0;
    forn(i, 0, h) {
        forn(j, 0, w) {
            int x;
            scanf(" %d", &x);
            if (x != -1) {
                ans += t[x][1];
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
