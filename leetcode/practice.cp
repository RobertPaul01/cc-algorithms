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
    bool isNStraightHand(vector<int>& hand, int W) {
        multiset<int> ms;
        for (int x : hand) ms.insert(x);
        while (!ms.empty()) {
            int f = *ms.begin();
            ms.erase(ms.begin());
            for (int i = 1; i < W; i++) {
                if (!ms.count(f + i)) return false;
                auto itr = ms.find(f + i);
                if(itr!=ms.end()){
                    ms.erase(itr);
                }
            }
        }
        return true;
    }
};

#ifdef DEBUG
int main() {
    Solution s;
    Parser p;
    freopen("input", "r", stdin);
    vector<int> v = p.parseVI();
    int w; cin >> w;
    cout << s.isNStraightHand(v, w) << endl;
}
#endif

