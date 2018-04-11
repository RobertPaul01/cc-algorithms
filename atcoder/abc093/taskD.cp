#include "bits/stdc++.h"
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define nl '\n'
#define precision(n) setprecision(n)
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() { _
    int n; cin >> n;
    ll sA = 0;
    ll mB = -1;
    
    forn(i, 0, n) {
        ll a, b;
        cin >> a >> b;
        sA += a;
        if (a > b) {
            if (mB == -1) mB = b;
            else mB = min(mB, b);
        }
    }

    if (mB == -1) cout << 0;
    else cout << (sA - mB);
    cout << nl;
    return 0;
}
