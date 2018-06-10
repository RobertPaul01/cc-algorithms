#ifdef DEBUG
#include "bits/stdc++.h"
#include "parser.cp"
using namespace std;
#endif
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

class Solution {
public:
    ll MOD = 1e7;
    int rectangleArea(vector<vector<int>>& r) {
        int n = (int)r.size();
        int total = 0;
        for (int i = 0; i < n; i++) {
            ll h = abs(r[i][0] - r[i][2]);
            ll w = abs(r[i][1] - r[i][3]);
            ll cur = (h * w);
            cout << cur << endl;
            total += cur;
            total %= MOD;
        }
        for (int i = 0; i < n; i++) {
            ll l = r[i][0];
            ll b = r[i][1];
            ll ri = r[i][2];
            ll t = r[i][3];
            for (int j = i + 1; j < n; j++) {
                ll left = max(l, (ll)r[j][0]);
                ll bottom = max(b, (ll)r[j][1]);
                ll right = min(ri, (ll)r[j][2]);
                ll top = min(t, (ll)r[j][3]);
                if (left < right && bottom < top) {
                    ll ar = ((right - left) * (top - bottom));
                    cout << ar << endl;
                    total -= ar;
                }
            }
        }
        return total;
    }
};

#ifdef DEBUG
int main() {
    Solution s;
    Parser p;
    freopen("input", "r", stdin);
    vector<vector<int>> v = p.parseVVI();
    cout << s.rectangleArea(v);
    cout << endl;
}
#endif
