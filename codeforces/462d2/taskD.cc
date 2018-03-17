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

ll p;
int k;
int cnt = 0;
int nums[105];

int main() { _
    cin >> p >> k;
    while (p != 0) {
        int x = p % k;
        if (x < 0) x += k;
        x %= k;
        nums[cnt] = x;
        cnt++;
        p -= x; p /= (-k);
    }
    cout << cnt << nl;
    forn(i, cnt) cout << nums[i] << " ";
}
