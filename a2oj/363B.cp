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
    deque<int> d;
    int s = 0;
    int x = -1;
    int m = INT_MAX;
    forn(i, 0, n) {
        if (d.size() == k) {
            s -= d.front();
            d.pop_front();
        }
        int h;
        scanf(" %d", &h);
        s += h;
        d.push_back(h);
        if (d.size() == k && s < m) {
            m = s;
            x = i - k + 2;
        }
    }
    printf("%d\n", x);
    return 0;
}
