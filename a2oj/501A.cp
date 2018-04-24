#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int x = max(3 * a / 10, a - (a / 250) * c);
    int y = max(3 * b / 10, b - (b / 250) * d);
    if (x == y) {
        printf("Tie\n");
    } else if (x > y) {
        printf("Misha\n");
    } else {
        printf("Vasya\n");
    }
    return 0;
}
