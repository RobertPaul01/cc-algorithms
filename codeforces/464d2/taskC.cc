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
ll quit[N] = { 0 };

signed main() { _
    int n; cin >> n;
    int arr[n]; fin(arr);
    int s, f; cin >> s >> f;
    s--; f--;

    int time = 0;
    ll mx = LONG_LONG_MIN;
    forn(i, n) {
        int a = (s - i) % n;
        if (a < 0) a += n;
        int q = (f - i) % n;
        if (q < 0) q += n;
        if (q < a) {
            ava[0] += arr[i];
        }
        
        ava[a] += arr[i];
        quit[q] += arr[i];
    }
    
    ll cur = 0;
    forn(i, N) {
        cur += ava[i];
        cur -= quit[i];
        if (cur > mx) {
            time = i + 1;
            mx = cur;
        }
    }
    cout << time << endl;
}
