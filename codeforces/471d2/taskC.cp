#include "bits/stdc++.h"
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define nl '\n'
typedef long double ld;
typedef long long ll;

ll count(ll l, ll r) {
    
    return 0;
}

int main() { _
    int q; cin >> q;
    forn(i, 0, q) {
        ll l, r; cin >> l >> r;
        cout << count(l, r) << nl;
    }
}
