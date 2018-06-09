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
    map<int, int> s;
    forn(i, 0, n) {
        int x;
        scanf(" %d", &x);
        s[x] = i + 1;
    }
    printf(s.size() >= k ? "YES\n" : "NO\n");
    if (s.size() >= k) {
        auto it = s.begin();
        for (int i = 0; i < k; i++) {
            printf("%d ", (*it).second);
            it++;
        }
    }
    return 0;
}
