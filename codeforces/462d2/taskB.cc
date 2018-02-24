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
    int k;
    cin >> k;
    string n = "";
    
    while (k > 0) {
        if (k >= 2) {
            n += "8";
            k -= 2;
        } else if (k == 1) {
            n += "4";
            k --;
        }
        if (stoll(n) > 1e18) {
            cout << -1 << endl;
            exit(0);
        }
    }
    
    cout << n << endl;
}
