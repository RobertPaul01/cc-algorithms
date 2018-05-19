#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 10000;
vector<int> g[N];

int dfs(int x, set<int> &visited) {
    if (visited.count(x)) return 0;
    visited.insert(x);
    int size = 0;
    for(int y : g[x]) {
        size += dfs(y, visited);
    }
    return size + 1;
}

int main() {
    set<int> visited;
    dfs(0, visited);
    return 0;
}
