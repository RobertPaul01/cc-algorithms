#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 1e5 + 8;
int a[N];
vector<pii> k;

void gen() {exit(0);}
int main() {
#ifdef DEBUG
    freopen("input", "r", stdin);
    //    freopen("output", "w", stdout);
    //    gen();
#endif
    int n, m;
    scanf("%d %d", &n, &m);
    forn(i, 0, n) {
        pii c;
        scanf(" %d", &c.first);
        a[i] = c.first;
        k.push_back(c);
    }
    forn(i, 0, n) {
        scanf(" %d", &k[i].second);
    }
    sort(all(k));
    priority_queue<int, vector<int>, greater<int>> q;
    ll cur = 0;
    map<int, ll> mp;
    forn(i, 0, n) {
        pii c = k[i];
        mp[c.first] = cur + c.second;
        int top = -1;
        if (q.size() > 0) {
            top = q.top();
        }
        if (m == 0) {
        } else if (q.size() != m) {
            cur += c.second;
            q.push(c.second);
        } else if (c.second > top) {
            cur -= top;
            q.pop();
            
            cur += c.second;
            q.push(c.second);
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%lld ", mp[a[i]]);
    }
    return 0;
}
