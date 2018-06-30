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

int m[4][51];

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    int n, k;
    scanf("%d %d", &n, &k);
    forn(i, 0, 4) {
        forn(j, 0, n) {
            scanf(" %d", &m[i][j]);
        }
    }
   
    return 0;
}
