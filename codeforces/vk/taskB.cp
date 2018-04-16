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
    vector<int> vec(n);
    forn(q, 0, n) scanf("%d", &vec[q]);
    vector<int> diffs;
    sort(all(vec));
    forn(i, 1, n) {
        int diff = abs(vec[i] - vec[i - 1]);
        diffs.push_back(diff);
    }
    int gd = -1;
    forn(i, 0, diffs.size()) {
        if (gd == -1) {
            gd = diffs[i];
        } else {
            gd = gcd(gd, diffs[i]);
        }
    }
    int inc = 0;
    forn(i, 0, diffs.size()) {
        inc += (diffs[i]/gd)-1;
    }
    printf("%d\n", inc);
    return 0;
}

