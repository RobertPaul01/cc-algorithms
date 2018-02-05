#include "bits/stdc++.h"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int find(vector<vector<int>> &m, vector<vector<int>> &d, int x, int y, int n) {
    if (x >= 2 || y >= n) return 0;
    if (d[x][y]) return d[x][y];
    int max = std::max(find(m, d, x+1, y, n), find(m, d, x, y+1, n)) + m[x][y];
    d[x][y] = max;
    return max;
}

int main() { _
    int n;
    cin >> n;
    vector<vector<int>>  m(2, vector<int>(n, 0));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            m[i][j] = x;
        }
    }
    vector<vector<int>>  d(2, vector<int>(n, 0));
    cout << find(m, d, 0, 0, n) << endl;
    return 0;
}

