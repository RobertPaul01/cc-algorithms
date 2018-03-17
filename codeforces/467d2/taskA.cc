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
    int n; cin >> n;
    vector<int> score(n);
    fin(score);
    sort(all(score));
    
    int diff = 0;
    forn(i, n) {
        if (score[i] != 0 && (i == 0 || score[i - 1] < score[i])) diff++;
    }
    
    cout << diff << nl;
}
