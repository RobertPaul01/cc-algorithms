#include "bits/stdc++.h"
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, n) for (int i = 0; i < n; i++)
#define fin(ds) for (auto &v : ds) cin >> v;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define nl '\n'

typedef long long ll;

signed main() { _
    int n; cin >> n;
    int ways = 0;
    for (int i = 1; i < n; i++) {
        int employees = n - i;
        if (employees % i == 0) ways++;
    }
    cout << ways << nl;
}
