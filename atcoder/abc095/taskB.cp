#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int count = 0;
    int mn = 1e5 + 7;
    forn(c, 0, n) {
        int m;
        scanf("%d", &m);
        mn = min(mn, m);
        x -= m;
        count++;
    }
    printf("%d\n", count + (x / mn));
    return 0;
}
