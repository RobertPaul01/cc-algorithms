#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 10000;
int a[N];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    k--;
    map<int, int> m;
    forn(i, 0, n) {
        int x;
        scanf(" %d", &x);
        a[i] = x;
        int red = -1;
        for (int s = max(0, x - k); s <= x; s++) {
            if (m.count(s)) {
                red = m[s] + 1;
                break;
            }
        }
        if (red == -1) red = max(0, x - k);
        for (int s = red; s <= red + k; s++) {
            m[s] = x;
        }
        printf("%d ", red);
    }
    return 0;
}
