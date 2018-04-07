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
    int n, k, m; cin >> n >> k >> m;
    map<string, int> words;
    vector<ll> cost;
    forn(i, 0, n) {
        string s; cin >> s;
        words[s] = i;
    }
    forn(i, 0, n) {
        int x; cin >> x;
        cost.push_back(x);
    }
    forn(i, 0, k) {
        int x; cin >> x;
        ll minCost = INT_MAX;
        vector<int> inds;
        forn(j, 0, x) {
            int indx; cin >> indx;
            indx--;
            minCost = min(minCost, cost[indx]);
            inds.push_back(indx);
        }
        forn(j, 0, x) {
            cost[inds[j]] = minCost;
        }
    }
    ll c = 0;
    forn(i, 0, m) {
        string s; cin >> s;
        c += cost[words[s]];
    }
    cout << c << nl;
    return 0;
}
