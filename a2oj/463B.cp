#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    int maxh = 0;
    forn(i, 0, n) {
        int h;
        scanf("%d", &h);
        maxh = max(maxh, h);
    }
    printf("%d\n", maxh);
    return 0;
}