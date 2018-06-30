#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
void gen() {exit(0);}

int n, k;
const int N = 1e5 + 6;
int a[N];

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    scanf("%d %d", &n, &k);
    int one = -1;
    forn(i, 0, n) {
        int x;
        scanf(" %d", &x);
        if (x == 1) one = i + 1;
    }
    
    int ans = 100000;
    
    forn(i, 0, k + 1) {
        s = max(1, one - i);
        cur = 1;
        l = s - 1;
        r = max(0, n - (s + k - 1));
        cur += (l / q + (l % q != 0));
        cur += (r / q + (r % q != 0));
        ans = min(ans, cur);
    }

    printf("%d\n", ans);
    return 0;
}
