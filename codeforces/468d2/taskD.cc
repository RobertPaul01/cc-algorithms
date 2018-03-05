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

    vector<int> out[n + 7];
    forn(i, n - 1) {
        int ai; cin >> ai;
        out[ai - 1].push_back(i + 1);
    }

    int rounds[n + 7];
    memset(rounds, 0, sizeof(rounds));
    
    queue<pii> s;
    s.push({0, 0});
    while (!s.empty()) {
        auto top = s.front(); s.pop();
        rounds[top.second]++;
        for (int x : out[top.first]) {
            s.push({x, top.second + 1});
        }
    }
    
    int count = 0;
    for (int x : rounds) count += (x % 2);
    
    cout << count << endl;
}
