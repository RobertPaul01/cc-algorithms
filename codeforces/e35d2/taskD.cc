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

int A[1500];

int main() { _
    int n;
    cin >> n;
    forn(i, n) cin >> A[i];

    int inv = 0;
    forn(i, n) 
        for (int j = i + 1; j < n; j++)
            if (A[i] > A[j]) inv++;

    int parity = inv % 2;
    int m;
    cin >> m;
    forn(i, m) {
        int l, r;
        cin >> l >> r;
        if (((r - l + 1) / 2) % 2 == 1) {
            parity = parity == 0 ? 1 : 0;
        }
        cout << (parity == 0 ? "even" : "odd") << nl;
    }
}
