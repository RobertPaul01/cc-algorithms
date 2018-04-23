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
    int height = 2 * n + 1;
    int right = 2 * n;
    int left = right;
    int d = 1;
    for (int x = 0; x < height; x++) {
        int cur = 0;
        int mx = x > n ? n - (x - n) : x;
        d = 1;
        for (int y = 0; y <= right; y++) {
            if (y%2 == 0 && y >= left) {
                printf("%d", cur);
                cur += d;
                if (cur == mx) d = -1;
            } else {
                printf(" ");
            }
        }
        if (x < n) {
            right += 2;
            left -= 2;
        } else {
            right -= 2;
            left += 2;
        }
        printf("\n");
    }
    return 0;
}
