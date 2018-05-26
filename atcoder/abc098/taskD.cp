#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 1e5 + 7;
int a[N];

int main() {
    int n; cin >> n;
    int x[n];
    x[0] = 0;
    forn (i, 0, n) {
        cin >> a[i];
        if (i > 0) {
        }
    }
    int c = 0;
    int l = 0;
    int r = 1;
    int s = a[0];
    for (; r < n; r++) {
        x[r] = a[r] ^ s;
        s += a[r];
        if (x[r] == s) {
        } else {
            int d = r - l;
            c += ((d + 1) * d) / 2;
            l = r;
            s = a[r];
        }
    }
    
    int d = r - l;
    c += ((d + 1) * d) / 2;

    cout << endl << c << endl;
    return 0;
}
