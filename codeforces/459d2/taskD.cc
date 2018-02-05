#include "bits/stdc++.h"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

map<pair<int,int>,char> ch;
map<int,vector<int>> adj;

map<pair<int,int>,map<int,bool>> memo;

bool dp(int v, int u, int c) {
    if (memo.count({v,u}) == 1 && memo[{v,u}].count(c) == 1) {
        return memo[{v,u}][c];
    }
    for (int x : adj[v]) {
        bool less = c <= ch[{v,x}];
        if (less && !dp(u,x,ch[{v,x}])) {
            memo[{v,u}][c] = true;
            return true;
        }
    }
    memo[{v,u}][c] = false;
    return false;
}

int main() { _
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int v, u;
        char c;
        cin >> v >> u >> c;
        v--; u--;
        ch[{v,u}] = c;
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp(i, j, 0)) {
                cout << "A";
            } else {
                cout << "B";
            }
        }
        cout << endl;
    }
    return 0;
}

