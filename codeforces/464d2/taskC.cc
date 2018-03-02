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

const int N = 3e5;
ll ava[N] = { 0 };

signed main() { _
    int n; cin >> n;
    int arr[n]; fin(arr);
    int s, f; cin >> s >> f;
    s--; f--;

    int time = 0;
    ll mx = LONG_LONG_MIN;
    forn(i, n) {
        int b = (s - i) % n;
        if (b < 0) b += n;
        int e = (f - i) % n;
        if (e < 0) e += n;
        for (int j = b; j != e; j = (j + 1) % n) {
            ava[j] += arr[i];
            if (ava[j] > mx) {
                mx = ava[j];
                time = j + 1;
            } else if (ava[j] == mx) {
                time = min(time, j + 1);
            }
        }
    }
    
    cout << time << endl;
}
