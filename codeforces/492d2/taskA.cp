#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

vector<int> cur = {1, 5, 10, 20, 100};

void gen() {exit(0);}
int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
    //    freopen("output", "w", stdout);
    //    gen();
    #endif
    int n;
    scanf("%d", &n);
    
    ll ans = 0;
    int x = (int)cur.size() - 1;
    while (n > 0) {
        if (n >= cur[x]) {
            n -= cur[x];
            ans++;
        } else {
            x--;
        }
    }

    printf("%lld\n", ans);
    return 0;
}

