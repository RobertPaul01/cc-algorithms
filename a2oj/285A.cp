#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    set<int> used;
    int g = n;
    bool ord = k != n - 1;
    for (int i = 1; i <= n; i++) {
        if (!used.count(i)) {
            if (!ord && k) {
                used.insert(g);
                printf("%d ", g--);
                k--;
                i--;
            } else {
                used.insert(i);
                printf("%d ", i);
                ord = false;
            }
        }
    }
    printf("\n");
    return 0;
}
