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
    vector<int> v(n);
    forn(i, 0, n) {
        int x;
        scanf(" %d", &x);
        v[i] = x;
    }
    if (v[0] > 0) {
        printf("-1\n");
        exit(0);
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] > v[i - 1]) {
            ans += 1;
            ans += v[i] - (v[i - 1] + 1);
        } else {
            ans += v[i];
        }
    }
    printf("%d\n", ans);
    return 0;
}
