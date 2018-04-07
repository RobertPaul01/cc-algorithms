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
    int a, b, c; cin >> a >> b >> c;
    vector<int> d = {a, b, c};
    sort(all(d));
    int ans = 0;
    while (d[2] != d[1]) {
        d[2]--;
        ans++;
    }
    while (d[1] != d[0]) {
        if (d[1] - 2 >= d[0]) {
            d[1] -= 2;
            d[2] -= 2;
        } else {
            d[1]--;
            d[2]--;
            ans++;
        }
        ans++;
    }
    cout << ans << nl;
    return 0;
}
