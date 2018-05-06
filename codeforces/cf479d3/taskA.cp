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
    forn(i, 0, k) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n -= 1;
        }
    }
    printf("%d\n", n);
    return 0;
}
