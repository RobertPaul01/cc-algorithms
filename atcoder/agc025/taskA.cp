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
    int m = INT_MAX;
    for (int i = 1; i < n; i++) {
        int a = i;
        int b = n - a;
        int sa = 0;
        while (a) {
            sa += a % 10;
            a /= 10;
        }
        int sb = 0;
        while (b) {
            sb += b % 10;
            b /= 10;
        }
        m = min(m, sa + sb);
    }
    printf("%d\n", m);
    return 0;
}
