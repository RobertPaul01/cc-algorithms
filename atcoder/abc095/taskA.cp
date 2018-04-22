#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    string s;
    getline(cin, s);
    int ans = 700;
    forn(i, 0, s.size()) {
        if (s[i] == 'o') ans += 100;
    }
    printf("%d\n", ans);
    return 0;
}
