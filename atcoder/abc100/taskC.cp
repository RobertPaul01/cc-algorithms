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
    int n;
    scanf("%d", &n);
    int ans = 0;
    forn(i, 0, n) {
        int x;
        scanf(" %d", &x);
        while (!(x & 1)) {
            x = x >> 1;
            ans ++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
