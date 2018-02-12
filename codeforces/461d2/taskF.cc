#include "bits/stdc++.h"
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
#define fin(ds) for (auto &v : ds) cin >> v;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define nl '\n'

typedef long long ll;

const int N = 1000005;
int d[N];

signed main() {
    int n, k;
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 2 * i; j <= n; j+= i) {
            d[j]++;
        }
    }

    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += d[i];
    }
    
    if (total < k) {
        cout << "No" << nl;
        exit(0);
    }
    
    for (; n > 1 && total - d[n] >= k; n--) {
        total -= d[n];
    }
    
    map<int, vector<int>, greater<int>> m;
    
    for (int j = 1; j <= n; j++) {
        if (d[j] == 1) m[n / j].push_back(j);
    }
    
    set<int> result;
    for (int i = 1; i <= n; i++) {
        result.insert(i);
    }
    
    total -= k;
    while (total) {
        auto it = m.lower_bound(total);
        int e = it->first;
        result.erase(m[e].back());
        m[e].pop_back();
        total -= e;
    }
    
    cout << "Yes" << nl;
    cout << result.size() << nl;
    for (auto v : result) cout << v << " ";
}
