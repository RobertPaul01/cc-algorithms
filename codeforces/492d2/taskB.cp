#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
template <typename... Args>
void dbg(Args... args) {
    ((cout << args << " "), ...);
    cout << endl;
}
void gen() {exit(0);}

const int N = 1e5 + 7;
int a[N];

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    int n;
    scanf("%d", &n);
    forn(i, 0, n) {
        scanf(" %d", &a[i]);
    }
    int md = INT_MAX;
    int ans = -1;
    forn(i, 0, n) {
        int c = a[i] - i;
        int d = 0;
        if (c > 0) d = c / n + (c % n != 0);
        if (d < md) {
            md = d;
            ans = i + 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}
