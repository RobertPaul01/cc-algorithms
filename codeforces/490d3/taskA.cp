#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
void gen() {exit(0);}
template <typename... Args>
void dbg(Args... args) {
    ((cout << args << " "), ...);
    cout << endl;
}

int a[105];

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    int n, k;
    scanf("%d %d", &n, &k);
    forn(i, 0, n) {
        scanf(" %d", &a[i]);
    }
    int i = 0;
    int j = n - 1;
    int count = 0;
    while (i <= j) {
        bool good = false;
        if (i == j) {
            if (a[i] <= k) {
                count++;
            }
        } else {
            if (a[i] <= k) {
                i++;
                count++;
                good = true;
            }
            if (a[j] <= k) {
                j--;
                count++;
                good = true;
            }
        }
        if (!good) break;
    }
    printf("%d\n", count);
    return 0;
}
