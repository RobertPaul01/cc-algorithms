#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

string rows[12];

int main() {
    int h, w;
    scanf("%d %d\n", &h, &w);
    forn(i, 0, h) {
        string line;
        getline(cin, line);
        rows[i] = line;
    }
    bool ans = true;
    forn(x, 0, h) {
        if (rows[x] == "*") continue;
        reverse(all(rows[x]));
        forn(y, x + 1, h) {
            if (rows[x] == rows[y]) {
                rows[x] = rows[y] = "*";
                break;
            }
        }
        if (rows[x] != "*") {
            reverse(all(rows[x]));
            if (w%2 == 0) {
                ans = false;
                break;
            } else {
                for (int i = 0, j = w - 1; i != j; i++, j--) {
                    if (rows[x][i] != rows[x][j]) ans = false;
                }
                if (!ans) {
                    break;
                }
                if (rows[(w + 1) / 2] != "*") {
                    rows[x] = rows[(w + 1) / 2] = "*";
                } else {
                    ans = false;
                    break;
                }
            }
        }
    }
    printf(ans ? "YES\n" : "NO\n");
    return 0;
}
