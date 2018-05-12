#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int x; cin >> x;
    int maxn = 1;
    for (int y = 2; y < x; y++) {
        for (int p = 2; (int)pow(y, p) <= x; p++) {
            maxn = max(maxn, (int)pow(y, p));
        }
    }
    cout << maxn << endl;
    return 0;
}
