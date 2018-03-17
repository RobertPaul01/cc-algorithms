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

int main() { _
    ll n, m; cin >> n >> m;
    
    vector<ll> tom;
    forn(i, n) {
        ll ni;
        cin >> ni;
        tom.push_back(ni);
    }
    
    map<ll, vector<ll>> mul;
    forn(i, m) {
        ll mi;
        cin >> mi;
        for (ll x : tom) {
            mul[x].push_back(mi * x);
        }
    }
    
    vector<ll> mxs;
    for (ll x : tom) {
        sort(mul[x].begin(), mul[x].end());
        mxs.push_back(mul[x].back());
    }
    sort(mxs.begin(), mxs.end());
    
    cout << mxs[mxs.size() - 2] << endl;
}
