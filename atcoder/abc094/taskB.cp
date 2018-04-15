#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n, m, x;
    scanf("%d %d %d",&n,&m,&x);
    int l = 0;
    int r = 0;
    bool tol[n];
    memset(tol, false, sizeof(tol));
    forn(i, 0, m) {
        int ai;
        scanf("%d",&ai);
        tol[ai-1] = 1;
    }
    x--;
    forn(i, 0, n) {
        if (tol[i]) {
            if (i > x) {
                r++;
            } else if (i < x) {
                l++;
            }
        }
    }
    printf("%d\n",min(l,r));
    return 0;
}
