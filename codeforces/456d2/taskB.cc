#include "bits/stdc++.h"
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
#define fin(ds) for (auto &v : ds) cin >> v;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define nl '\n'

typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;
    if (k == 1) {
        cout << n << nl;
        exit(0);
    }
    ll accum = 1;
    while (accum <= n) accum <<= 1;
    cout << accum-1 << nl;
}
