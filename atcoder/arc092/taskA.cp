#include "bits/stdc++.h"
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define nl '\n'
typedef long double ld;
typedef long long ll;

const int N = 1007;
bool bpGraph[N][N];

bool findBPM(int u, bool seen[], int matchR[], int n) {
    for (int v = 0; v < n; v++) {
        if (bpGraph[u][v] && !seen[v]) {
            seen[v] = true;
            if (matchR[v] < 0 || findBPM(matchR[v], seen, matchR, n)) {
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}

int main() { _
    int n; cin >> n;
    vector<pair<int, int>> red;
    vector<pair<int, int>> black;
    forn(i, 0, n) {
        int x, y; cin >> x >> y;
        red.push_back({x, y});
    }
    forn(i, 0, n) {
        int x, y; cin >> x >> y;
        black.push_back({x, y});
    }
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (red[i].first < black[j].first && red[i].second < black[j].second)
                bpGraph[i][j] = true;

    int match[n];
    memset(match, -1, sizeof(match));
    int result = 0;
    for (int u = 0; u < n; u++) {
        bool seen[n];
        memset(seen, 0, sizeof(seen));
        
        if (findBPM(u, seen, match, n))
            result++;
    }
    
    cout << result << nl;
}
