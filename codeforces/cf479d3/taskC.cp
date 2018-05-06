#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int MX = 1000000000;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> v(n);
    forn(i, 0, n) {
        int x;
        scanf(" %d", &x);
        v[i] = x;
    }
    sort(all(v));
    if (k == 0) {
        printf("%d\n", v[0] == 1 ? -1 : 1);
        return 0;
    }
    int count = 0;
    int i = 0;
    for (; i < n; i++) {
        if (count >= k) break;
        count++;
        while (v[i] == v[i + 1]) {
            count++;
            i++;
        }
    }
    int ans = -1;
    if (count == k) {
        ans = v[i - 1];
    }
    printf("%d\n", ans);
    return 0;
}
