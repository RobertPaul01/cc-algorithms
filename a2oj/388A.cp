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
void load() {
#ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
#endif
}

const int N = 107;
int w[N];

void solve() {
    int n;
    scanf("%d ", &n);
    forn(i, 0, n) {
        int x;
        scanf("%d", &x);
        w[i] = x;
    }
    sort(w, w + n);
    
    int h = n;
    int l = 1;
    int k = (h + l) / 2;
    while (h > l) {
        bool good = true;
        for (int i = 0; i < n; i++) {
            if (w[i] < (i / k)) {
                good = false;
                break;
            }
        }
        if (good) {
            h = k;
        } else {
            l = k + 1;
        }
        
        k = (h + l) / 2;
    }
    
    printf("%d\n", (int)k);
}

int main() {
    load();
    solve();
    return 0;
}
