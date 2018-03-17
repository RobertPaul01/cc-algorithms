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
    int n;
    cin >> n;
    int arr[n];
    int m = INT_MAX;
    forn(i, n) {
        cin >> arr[i];
        m = min(m, arr[i]);
    }
    int idx = -1;
    int diff = INT_MAX;
    forn(i, n) {
        if (arr[i] == m) {
            if (idx != -1) diff = min(diff, i - idx);
            idx = i;
        }
    }
    cout << diff << nl;
}
