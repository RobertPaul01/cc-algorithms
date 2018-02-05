#include "bits/stdc++.h"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

map<int,int> in;
map<int,vector<int>> adj;

int main() { _
    int n, m;
    string s;
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        adj[x].push_back(y);
        if (in.count(y)) {
            in[y]++;
        } else {
            in[y] = 1;
        }
    }
    int dp[n][26];
    memset(dp,0,sizeof(dp));
    queue<int> queue;
    for (int i = 0; i < n; i++) {
        if (!in.count(i)) {
            queue.push(i);
            dp[i][s[i]-'a'] = 1;
        }
    }
    int rem = n;
    while (!queue.empty()) {
        int i = queue.front();
        queue.pop();
        rem--;
        for (int k : adj[i]) {
            for (int c = 0; c < 26; c++) {
                dp[k][c] = max(dp[k][c], dp[i][c] + (s[k]-'a' == c));
            }
            if (--in[k] == 0) queue.push(k);
        }
    }
    if (rem) {
        cout << -1 << endl;
        return 0;
    }
    int maxc = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 26; j++) {
            maxc = max(maxc, dp[i][j]);
        }
    }
    cout << maxc << endl;
    return 0;
}
