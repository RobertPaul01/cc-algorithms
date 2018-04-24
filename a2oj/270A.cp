#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int t;
    scanf("%d", &t);
    forn(i, 0, t) {
        int a;
        scanf("%d", &a);
        printf(360 % (180 - a) ? "NO\n" : "YES\n");
    }
    return 0;
}
