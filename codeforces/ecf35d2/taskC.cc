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

signed main() { _
    int k1, k2, k3;
    cin >> k1 >> k2 >> k3;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    if (k1 == 2) count2++;
    else if (k1 == 3) count3++;
    else if (k1 == 4) count4++;
    
    if (k2 == 2) count2++;
    else if (k2 == 3) count3++;
    else if (k2 == 4) count4++;
    
    if (k3 == 2) count2++;
    else if (k3 == 3) count3++;
    else if (k3 == 4) count4++;
    
    cout << ((count2 >= 2 || count3 == 3 || (count2 == 1 && count4 == 2) || k1 == 1 || k2 == 1 || k3 == 1 ) ? "YES" : "NO") << nl;
}
