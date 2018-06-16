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
//    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    int d, n;
    scanf("%d %d", &d, &n);
    
    int ans = 0;
    int size = (int)pow(100, d);
    for (int i = 0; i < n; i++) {
        ans += size;
        int count = 0;
        int cur = ans;
        while (cur >= 100) {
            count++;
            cur /= 100;
        }
        if (count > d) ans += size;
    }
    printf("%d\n", ans);
    return 0;
}
