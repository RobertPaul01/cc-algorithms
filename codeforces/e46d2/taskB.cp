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

int n, m;
const int N = 100000;
int a[N];

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    scanf("%d %d", &n, &m);
    int o = m;
    int p = m;
    int mx = INT_MIN;
    vector<int> b;
    forn(i, 0, n) {
        scanf(" %d", &a[i]);
        if (i % 2 == 1) {
            o -= (a[i] - a[i - 1]);
        } else {
            int x = a[i] - (i > 0 ? a[i - 1] : 0);
            b.push_back(x);
            p -= x;
            mx = max(mx, x);
        }
    }
    int x = m - a[n - 1];
    b.push_back(x);
    p -= x;
    mx = max(mx, x);
    
    if (n % 2 == 1) o -= (m - a[n - 1]);

    printf("%d\n", max(o, p + mx - 1));
    return 0;
}
