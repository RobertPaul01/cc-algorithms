#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n, m;
    scanf("%d%d",&n,&m);
    int pl[n];
    memset(pl, 0, sizeof(pl));
    int z = n;
    int score = 0;
    forn(i, 0, m) {
        int x;
        scanf("%d",&x);
        x--;
        if (pl[x] == 0) z--;
        pl[x]++;
        if (z == 0) {
            score++;
            forn(j, 0, n) {
                pl[j]--;
                if (pl[j] == 0) z++;
            }
        }
    }
    printf("%d\n",score);
    return 0;
}
