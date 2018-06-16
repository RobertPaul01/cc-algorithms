#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int a[20];
set<int> b;

void gen() {exit(0);}
int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    int n, m;
    scanf("%d %d", &n, &m);
    forn(i, 0, n) {
        int x;
        scanf(" %d", &x);
        a[i] = x;
    }
    forn(i, 0, m) {
        int x;
        scanf(" %d", &x);
        b.insert(x);
    }
    forn(i, 0, n) {
        if (b.count(a[i])) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
