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

stack<pii> s;
vector<int> arr;

signed main() { _
    int n, k; cin >> n >> k;
    int ki; cin >> ki;
    
    if (ki != n) s.push({ki + 1, n});
    if (ki != 1) s.push({1, ki - 1});
    arr.push_back(ki);
    
    forn(i, k - 1) {
        cin >> ki;
        arr.push_back(ki);
        if (!s.empty()) {
            pii p = s.top();
            s.pop();
            if (ki < p.first || ki > p.second) {
                cout << -1 << nl;
                exit(0);
            }
            if (ki != p.second) s.push({ki + 1, p.second});
            if (ki != p.first) s.push({p.first, ki - 1});
        } else {
            cout << -1 << nl;
            exit(0);
        }
    }
    
    for (int i : arr) cout << i << " ";
    
    while (!s.empty()) {
        pii p = s.top();
        s.pop();
        cout << p.second << " ";
        if (p.first < p.second) s.push({p.first, p.second - 1});
    }
    return 0;
}
