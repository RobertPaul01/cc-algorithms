#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
template <typename... Args>
void dbg(Args&&... args) {
  using expander = int[];
  (void)expander {0,(static_cast<void>(void(cout << std::forward<Args>(args) << " ")), 0)...};
  cout << endl;
}
void gen() {exit(0);}

int n, k;
const int N = 2e5 + 5;
vector<int> g[N];

void input() {
  scanf("%d %d", &n, &k);
  forn(i, 1, n) {
    int x;
    scanf(" %d", &x);
    g[x].push_back(i + 1);
  }
}

int order[N][2];
map<int, int> m;

int dfs(int cur, int index) {
  m[cur] = index;
  if (g[cur].size() == 0) {
    order[index][0] = cur;
    order[index][1] = 1;
    return 1;
  }
  int size = 0;
  int i = index + 1;
  for (int x : g[cur]) {
    int lsize = dfs(x, i);
    i += lsize;
    size += lsize;
  }
  order[index][0] = cur;
  order[index][1] = size + 1;
  return size + 1;
}

void solve() {
  dfs(1, 1);
  forn(i, 0, k) {
    int u, s;
    scanf("%d %d", &u, &s);
    if (order[m[u]][1] >= s) {
      printf("%d\n", order[m[u] + s - 1][0]);
    } else {
      printf("-1\n");
    }
  }
}

int main() {
#ifdef DEBUG
  freopen("input", "r", stdin);
  //  freopen("output", "w", stdout);
  //  gen();
#endif
  input();
  solve();
  return 0;
}
