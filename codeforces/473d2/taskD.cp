#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define nl '\n'
#define precision(n) setprecision(n)
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int MAXN = 2000005;
bool erased[MAXN];
vector<int> fac[MAXN];
set<int> ok;

int main() {
    forn(i, 2, MAXN) {
        ok.insert(i);
        if (!fac[i].size()) {
            for (int x = i; x < MAXN; x += i) {
                fac[x].push_back(i);
            }
        }
    }
    
    int n;
    scanf("%d", &n);
    bool larger = false;
    
    forn(i, 0, n) {
        int a;
        scanf("%d", &a);
        int val = *ok.begin();
        if (!larger) {
            val = *ok.lower_bound(a);
            larger = a != val;
        }
        printf("%d ", val);
        for (int x : fac[val]) {
            // Remove coprime in ok
            for (int j = x; j < MAXN; j += x) {
                if (!erased[j]) {
                    ok.erase(j);
                    erased[j] = true;
                }
            }
        }
    }

    return 0;
}
