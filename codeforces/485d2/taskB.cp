#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
    #endif
    int x, y;
    scanf("%d %d", &x, &y);
    if (x == 1 || y == 1) {
        if (x == y) {
            printf("=\n");
        } else if (x > y) {
            printf(">\n");
        } else {
            printf("<\n");
        }
        exit(0);
    }
    if ((x == 2 && y == 3) || (x == 3 && y == 2)) {
        if (x > y) {
            printf(">\n");
        } else {
            printf("<\n");
        }
        exit(0);
    }
    if ((x == 2 && y == 4) || (x == 4 && y == 2)) {
        printf("=\n");
        exit(0);
    }
    int dif = y - x;
    if (dif == 0) {
        printf("=\n");
    } else if (dif < 0) {
        printf("<\n");
    } else {
        printf(">\n");
    }
    return 0;
}
