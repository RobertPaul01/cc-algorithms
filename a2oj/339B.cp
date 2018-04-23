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
    scanf("%d %d", &n, &m);
    int prev = -1;
    ll dis = 0;
    forn(i, 0, m) {
        int a;
        scanf("%d", &a);
        if (prev != -1 && prev > a) {
            dis += (n - (prev - a));
        } else {
            dis += a - max(1, prev);
        }
        prev = a;
    }
    printf("%lld\n", dis);
    return 0;
}
