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

int dfs(int cur, int prev) {
  int size = 0;
  for (int next : g[cur]) {
    if (next == prev) continue;
    size += dfs(next, cur);
  }
  return size + 1;
}

int main() {
  dfs(0, -1);
  return 0;
}
