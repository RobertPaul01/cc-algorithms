#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n, a, b, c, T;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &T);
    vector<int> vec(n);
    int ans = 0;
    forn(i, 0, n) {
        scanf("%d", &vec[i]);
        int mx = INT_MIN;
        forn(k, 0, T - vec[i] + 1) {
            mx = max(mx, a - b*k + c*k);
        }
        ans += mx;
    }
    printf("%d\n", ans);
    return 0;
}
