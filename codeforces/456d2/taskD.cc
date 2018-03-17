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

ll n, m, r, k;

int main() { _
    cin >> n >> m >> r >> k;
    auto f = [](pll p) {
        return (min(n + 1, p.first + r) - max(p.first, r)) * (min(m + 1, p.second + r) - max(p.second, r));
    };
    auto cmp = [&](pll s, pll t) {
        return f(s) < f(t);
    };
    priority_queue<pll, vector<pll>, decltype(cmp)> pq(cmp);
    set<pll> s;
    
    ll sum = 0;
    pll start = {(n+1)/2, (m+1)/2};
    pq.push(start);
    while (!pq.empty() && k > 0) {
        pll t = pq.top();
        pq.pop();
        if (s.count(t)) {
            continue;
        }
        s.insert(t);
        sum += f(t);
        k--;
        if (!s.count({t.first+1, t.second}))
            pq.push({t.first+1, t.second});
        
        if (!s.count({t.first-1, t.second}))
            pq.push({t.first-1, t.second});
        
        if (!s.count({t.first, t.second+1}))
            pq.push({t.first, t.second+1});
        
        if (!s.count({t.first, t.second-1}))
            pq.push({t.first, t.second-1});
    }

    double area = (n-r+1) * (m-r+1);
    double prob = sum * (1.0f/area);
    
    printf("%.10f\n", prob);
}
