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

vector<int> getDelta(char c) {
    if (c == 'U') return {0, 1};
    if (c == 'D') return {0, -1};
    if (c == 'L') return {-1, 0};
    if (c == 'R') return {1, 0};
    return {};
}

int main() { _
    int n; cin >> n;
    string S; cin >> S;
    vector<int> cor = getDelta(S[0]);

    int cost = 0;
    int side = cor[0] - cor[1];
    for (int i = 1; i < n; i++) {
        vector<int> delta = getDelta(S[i]);
        int nX = cor[0] + delta[0];
        int nY = cor[1] + delta[1];
        int newSide = nX - nY;
        if ((side < 0 && newSide > 0) || (side > 0 && newSide < 0)) {
            side = newSide;
            cost++;
        }
        cor[0] = nX;
        cor[1] = nY;
    }
    
    cout << cost << nl;
}
