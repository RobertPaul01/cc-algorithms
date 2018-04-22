#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    ll n, c;
    scanf("%lld %lld", &n, &c);
    vector<pll> vec(n);
    forn(i, 0, n)
        scanf("%lld %lld", &vec[i].first, &vec[i].second);
    
    vector<ll> back(n);
    ll curGain = 0, ans = 0, prevPos = c;
    for (ll i = n - 1; i > -1; i--) {
        if (i < n - 1)
            back[i] = max(back[i + 1], curGain);
        pll cur = vec[i];
        curGain += cur.second - (prevPos - cur.first);
        ans = max(ans, curGain);
        prevPos = cur.first;
    }
    
    vector<ll> forward(n);
    curGain = prevPos = 0;
    for (ll i = 0; i < n; i++) {
        if (i > 0)
            forward[i] = max(forward[i - 1], curGain);
        pll cur = vec[i];
        curGain += cur.second - (cur.first - prevPos);
        ans = max(ans, curGain);
        prevPos = cur.first;
    }
    
    curGain = prevPos = 0;
    forn(i, 0, n) {
        pll cur = vec[i];
        curGain += cur.second - (cur.first - prevPos);
        ans = max(ans, max(curGain, curGain - cur.first + back[i]));
        prevPos = cur.first;
    }
    
    curGain = 0;
    prevPos = c;
    for (ll i = n - 1; i > -1; i--) {
        pll cur = vec[i];
        curGain += cur.second - (prevPos - cur.first);
        ans = max(ans, max(curGain, curGain - (c - cur.first) + forward[i]));
        prevPos = cur.first;
    }

    printf("%lld\n", ans);
    return 0;
}
