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
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = (int)graph.size();
        if (n <= 1) return 0;
        int ans = 1000;
        int states[1 << n][n];
        fill(states[0], states[0] + (1 << n) * n, 1000);
        for (int i = 0; i < n; i++) states[1 << i][i] = 0;
        
        for (int cover = 0; cover < (1 << n); cover++) {
            bool repeat = true;
            while (repeat) {
                repeat = false;
                for (int head = 0; head < n; head++) {
                    int curD = states[cover][head];
                    for (int next : graph[head]) {
                        int cover2 = cover | (1 << next);
                        int nextD = states[cover2][next];
                        if (curD + 1 < nextD) {
                            states[cover2][next] = curD + 1;
                            if (cover == cover2)
                                repeat = true;
                            if (cover2 == (1 << n) - 1)
                                ans = min(ans, curD + 1);
                        }
                    }
                }
            }
        }
        return ans;
    }
};

#ifdef DEBUG
int main() {
    Solution s;
    Parser p;
    freopen("input", "r", stdin);
    vector<vector<int>> g = p.parseVVI();
    cout << s.shortestPathLength(g) << endl;
}
#endif
