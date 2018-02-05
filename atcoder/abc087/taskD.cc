#include "bits/stdc++.h"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

const int maxn=100005;
vector<pair<int, int> > graph[maxn];
bool vis[maxn];
int pos[maxn];

bool dfs(int x, int p) {
    if (vis[x]) {
        if (p != pos[x]) return false;
        return true;
    }
    vis[x] = true;
    pos[x] = p;
    for (pair<int, int> pair : graph[x]) {
        if (!dfs(pair.first, pair.second + p))
            return false;
    }
    return true;
}

int main() { _
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int l, r, d;
        cin >> l >> r >> d;
        // vr - vl = d
        graph[l].emplace_back(r, d);
        // vl - vr = -d
        graph[r].emplace_back(l, -d);
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i] && !dfs(i, 0)) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
