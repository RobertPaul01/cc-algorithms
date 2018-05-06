#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 1000000;
bool prime[N];

vector<ll> sieve(ll n) {
    vector<ll> v;
    memset(prime, true, sizeof(prime));
    for(ll i = 2; i <= n; i++) {
        if (prime[i]) {
            v.push_back(i);
            for (ll j = i + i; j <= n; j += i) prime[j] = false;
        }
    }
    return v;
}

int main() {
    int n;
    scanf("%d", &n);
    sieve(N);
    prime[1] = false;
    forn(i, 0, n) {
        ll x;
        scanf(" %lld", &x);
        bool res = false;
        ll sqt = sqrt(x);
        if (sqt * sqt == x && prime[sqt])
            res = true;
        printf(res ? "YES\n" : "NO\n");
    }
    return 0;
}
