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
        
        return 0;
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
