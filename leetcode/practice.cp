#include "bits/stdc++.h"
using namespace std;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

class Solution {
public:
    map<pair<int, set<int>>, int> mins;
    
    int search(int cur, vector<vector<int>>& g, map<int, int> c, set<int> s) {
        c[cur]++;
        s.insert(cur);
        if (mins.count({cur, s})) {
            return mins[{cur, s}];
        }
        if (s.size() == g.size()) return 0;
        int mn = 1000;
        if (c[cur] > 4) return mn;
        for (int x : g[cur]) {
            mn = min(mn, search(x, g, c, s));
        }
        if (mn < 1000) {
            mins[{cur, s}] = mn + 1;
            return mn + 1;
        }
        return mn;
    }

    int shortestPathLength(vector<vector<int>>& graph) {
        int ans = 1000;
        for (int i = 0; i < graph.size(); i++) {
            map<int, int> c;
            set<int> s;
//            cout << search(i, graph, c, s) << endl;
            ans = min(ans, search(i, graph, c, s));
        }
        return ans;
    }
};

int main() {
    Solution s;
//    vector<vector<int>> g = {{1,2,3},{0},{0},{0}};
//    vector<vector<int>> g = {{1},{0,2,4},{1,3,4},{2},{1,2}};
//    vector<vector<int>> g = {{3},{3},{3,5},{0,1,2,6},{6},{2},{3,4}};
//    vector<vector<int>> g = {{1,2,3,5},{0,5},{0,4},{0},{5,2},{0,4,1}};
//    vector<vector<int>> g = {{2,5},{3,6},{0,3,6},{1,2,4},{6,7,3},{7,0},{4,1,2},{4,5}};
//    vector<vector<int>> g = {{1,2},{0,3,4},{0},{1,5},{1},{3}};
//    vector<vector<int>> g = {{1,2,3,5},{0,4},{0,6},{0},{1},{0},{2}};
//    vector<vector<int>> g = {{6,7},{6},{6},{5,6},{6},{3},{2,0,3,4,1},{0}};
    vector<vector<int>> g = {{1,4},{0,3,4,7,9},{6,10},{1,10},{1,0},{6},{7,2,5},{6,1,8},{7},{1},{2,3}};
    cout << s.shortestPathLength(g) << endl;
}

