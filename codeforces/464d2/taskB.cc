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
    ll n, k;
    cin >> n >> k;
    ll box = 1;
    ll amount = 0;
    ll max = 0;
    forn(i, k) {
        ll ai;
        cin >> ai;
        if ((n / ai) * ai > max) {
            max = (n / ai) * ai;
            amount = n / ai;
            box = i + 1;
        }
    }
    cout << box << " " << amount << endl;
}
